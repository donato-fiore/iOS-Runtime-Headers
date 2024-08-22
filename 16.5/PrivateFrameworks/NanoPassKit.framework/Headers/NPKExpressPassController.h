// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKEXPRESSPASSCONTROLLER_H
#define NPKEXPRESSPASSCONTROLLER_H

@class PKPaymentService, NSString, PKExpressPassInformation, PKPass, NSDistributedNotificationCenter, NSDictionary, NSSet, PKFieldDetector, PKPassLibrary;
@protocol PKFieldDetectorObserver, OS_dispatch_queue, NPKExpressPassControllerDelegate;

#import <Foundation/Foundation.h>


@interface NPKExpressPassController : NSObject <PKFieldDetectorObserver>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _expressPassChangedNotifyToken;
    NSUInteger _transactionStatus;
    PKPaymentService *_paymentService;
}


@property (retain, nonatomic) NSString *currentApplicationIdentifier; // ivar: _currentApplicationIdentifier
@property (retain, nonatomic) NSString *currentSubCredentialIdentifier; // ivar: _currentSubCredentialIdentifier
@property (retain, nonatomic) PKExpressPassInformation *currentTransactionExpressPassInformation; // ivar: _currentTransactionExpressPassInformation
@property (retain, nonatomic) PKPass *currentTransactionPass; // ivar: _currentTransactionPass
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NPKExpressPassControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter; // ivar: _distributedNotificationCenter
@property (retain) NSDictionary *expressPasses; // ivar: _expressPasses
@property (retain) NSSet *expressPassesInformation; // ivar: _expressPassesInformation
@property (retain, nonatomic) PKFieldDetector *fieldDetector; // ivar: _fieldDetector
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PKPassLibrary *passLibrary; // ivar: _passLibrary
@property (readonly) Class superclass;


-(BOOL)_hasNoTransactionStartOrEndNotificationForTechnologyType:(NSInteger)arg0 ;
-(id)_expressPassInformationWithTechnologyType:(NSInteger)arg0 ;
-(id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
-(id)_expressPassesInformationWithTCIs:(id)arg0 ;
-(id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg0 transactionApplicationKeyIdentifier:(id)arg1 ;
-(id)_queue_siblingExpressPassesForExpressPass:(id)arg0 applicationIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithPaymentService:(id)arg0 passLibrary:(id)arg1 distributedNotificationCenter:(id)arg2 delegate:(id)arg3 ;
-(id)paymentService;
-(void)_handleCarKeyExpressEnteredNotification:(id)arg0 ;
-(void)_handleCarKeyExpressExitedNotification:(id)arg0 ;
-(void)_handleCarKeyRKEActionCompletedNotification:(id)arg0 ;
-(void)_handleCarKeyRangingEndedNotification:(id)arg0 ;
-(void)_handleCarKeyRangingStartedNotification:(id)arg0 ;
-(void)_handleCarKeySessionEndedNotification:(id)arg0 ;
-(void)_handleCarKeySessionEndedWithErrorNotification:(id)arg0 ;
-(void)_handleCarKeyVehicleConnectedNotification:(id)arg0 ;
-(void)_handleCarKeyVehicleDisconnectedNotification:(id)arg0 ;
-(void)_handleCarKeyVehicleLockedNotification:(id)arg0 ;
-(void)_handleCarKeyVehicleUnlockedNotification:(id)arg0 ;
-(void)_handleEnterNearFieldNotification:(id)arg0 ;
-(void)_handleExitNearFieldNotification:(id)arg0 ;
-(void)_handleExpressTransactionEndNotification:(id)arg0 ;
-(void)_handleExpressTransactionFailedNotification:(id)arg0 ;
-(void)_handleExpressTransactionStartNotification:(id)arg0 ;
-(void)_handleExpressTransactionTimeOutNotification:(id)arg0 ;
-(void)_handlePassesLibraryChangedNotification:(id)arg0 ;
-(void)_handleStandaloneTransactionDoneNotification:(id)arg0 ;
-(void)_internalQueue_startFieldDetector;
-(void)_internalQueue_stopFieldDetector;
-(void)_internalQueue_updateExpressPasses;
-(void)_onqueue_transactionCompletedForRKEAction:(id)arg0 function:(id)arg1 withApplicationIdentifier:(id)arg2 applicationKeyIdentifier:(id)arg3 ;
-(void)_onqueue_transactionCompletedForStandaloneTransactionEvent:(NSUInteger)arg0 withApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2 ;
-(void)_onqueue_transactionEndedWithApplicationIdentifier:(id)arg0 applicationKeyIdentifier:(id)arg1 ;
-(void)_onqueue_transactionFailedWithApplicationIdentifier:(id)arg0 applicationKeyIdentifier:(id)arg1 ;
-(void)_onqueue_transactionStartedWithApplicationIdentifier:(id)arg0 applicationKeyIdentifier:(id)arg1 ;
-(void)_parseExpressNotificationObject:(id)arg0 outApplicationIdentifier:(*id)arg1 outApplicationKeyIdentifier:(*id)arg2 ;
-(void)_parseRKEActionNotificationObject:(id)arg0 outApplicationIdentifier:(*id)arg1 outApplicationKeyIdentifier:(*id)arg2 outFunctionNumber:(*id)arg3 outActionNumber:(*id)arg4 outExecutionStatusNumber:(*id)arg5 outErrorMessage:(*id)arg6 ;
-(void)_startListeningForExpressNotifications;
-(void)_stopListeningForExpressNotifications;
-(void)_transitionToCompletedRKEAction:(id)arg0 function:(id)arg1 forExpressPass:(id)arg2 ;
-(void)_transitionToStandaloneTransactionEvent:(NSUInteger)arg0 forExpressPass:(id)arg1 ;
-(void)_transitionToStatus:(NSUInteger)arg0 forExpressPass:(id)arg1 paymentApplicationIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)fieldDetectorDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)reset;
-(void)updateExpressPasses;


@end


#endif