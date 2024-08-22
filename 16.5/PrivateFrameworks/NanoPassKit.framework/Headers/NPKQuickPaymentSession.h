// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKQUICKPAYMENTSESSION_H
#define NPKQUICKPAYMENTSESSION_H

@class NSData, PKContactlessInterfaceSession, PKPaymentSessionHandle, PKPass, NSMutableArray, NSString, PKFieldDetector, NSDictionary;
@protocol PKContactlessInterfaceSessionDelegate, STSSessionDelegate, OS_dispatch_queue, NPKQuickPaymentSessionDelegate;

#import <Foundation/Foundation.h>


@interface NPKQuickPaymentSession : NSObject <PKContactlessInterfaceSessionDelegate, STSSessionDelegate>

 {
    NSData *_credential;
    uint8_t _atomicIsSwitchingSessionTypeCount;
}


@property (nonatomic) NSUInteger authorizationValidity; // ivar: _authorizationValidity
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic, getter=isConfirmed) BOOL confirmed; // ivar: _confirmed
@property (retain, nonatomic) PKContactlessInterfaceSession *contactlessSession; // ivar: _contactlessSession
@property (retain, nonatomic) PKPaymentSessionHandle *contactlessSessionHandle; // ivar: _contactlessSessionHandle
@property (nonatomic) NSUInteger contactlessValidity; // ivar: _contactlessValidity
@property (retain, nonatomic) PKPass *currentPass; // ivar: _currentPass
@property (nonatomic, getter=isDeactivated) BOOL deactivated; // ivar: _deactivated
@property (nonatomic, getter=isDeactivating) BOOL deactivating; // ivar: _deactivating
@property (retain, nonatomic) NSMutableArray *deactivationCompletionBlocks; // ivar: _deactivationCompletionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferAuthorization; // ivar: _deferAuthorization
@property (weak, nonatomic) NSObject<NPKQuickPaymentSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL endSessionWhenAuthorizationIsConsumed; // ivar: _endSessionWhenAuthorizationIsConsumed
@property (retain, nonatomic) PKFieldDetector *fieldDetector; // ivar: _fieldDetector
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inServiceMode; // ivar: _inServiceMode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) BOOL isSwitchingSessionType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *paymentSessionQueue; // ivar: _paymentSessionQueue
@property (nonatomic, getter=hasPerformedFirstActivation) BOOL performedFirstActivation; // ivar: _performedFirstActivation
@property (nonatomic) BOOL requireFirstInQueue; // ivar: _requireFirstInQueue
@property (readonly, nonatomic) BOOL sessionStarted;
@property (readonly, nonatomic) NSUInteger sessionType; // ivar: _sessionType
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *vasPasses; // ivar: _vasPasses


+(BOOL)hasOutstandingSessions;
+(id)_outstandingSessionHashTable;
+(id)sessionWithQueue:(id)arg0 ;
+(void)_handleNewContactlessSession:(id)arg0 ;
-(BOOL)_sessionQueue_authorizeWithUseCredential:(BOOL)arg0 deferAuthorizationIfCredentialUsed:(BOOL)arg1 ;
-(BOOL)_sessionQueue_enablePersistentCardEmulation;
-(BOOL)_sessionQueue_startContactlessSessionWithSuccessfulCompletionOnInternalQueue:(id)arg0 ;
-(BOOL)_sessionQueue_updateContactlessSessionForPass:(id)arg0 paymentApplication:(id)arg1 vasPasses:(id)arg2 sessionConfirmed:(BOOL)arg3 deferAuthorization:(BOOL)arg4 ;
-(BOOL)startSession;
-(BOOL)startSessionWithCompletion:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_callbackQueue_invokeDidCompleteForReason:(NSUInteger)arg0 withTransactionContext:(id)arg1 ;
-(void)_checkContactlessValidity:(NSUInteger)arg0 authorizationValidity:(NSUInteger)arg1 performWork:(id)arg2 ;
-(void)_checkContactlessValidity:(NSUInteger)arg0 performWork:(id)arg1 ;
-(void)_handleConventionalTransactionWithContext:(id)arg0 ;
-(void)_handleTransitTransactionWithContext:(id)arg0 ;
-(void)_internalQueue_deactivateSessionWithCompletion:(id)arg0 ;
-(void)_internalQueue_getContactlessAndAuthorizationValidityAndPerformWork:(id)arg0 ;
-(void)_internalQueue_updateContactlessSessionForPass:(id)arg0 vasPasses:(id)arg1 deferAuthorization:(BOOL)arg2 ;
-(void)_internalQueue_updateContactlessValidityAndPerformWork:(id)arg0 ;
-(void)_loyaltyEngineConfigurationChanged:(id)arg0 ;
-(void)_sessionQueue_invokeAppropriateCallbackForActivationWithSuccess:(BOOL)arg0 invokeOnSuccess:(BOOL)arg1 contactlessValidity:(NSUInteger)arg2 forPass:(id)arg3 ;
-(void)_updateAuthorizationValidity;
-(void)_updateSessionWithCredentialAndActivate;
-(void)authorize18013RequestWithDataToRelease:(id)arg0 credential:(id)arg1 ;
-(void)confirmSessionExpectingCredential:(BOOL)arg0 ;
-(void)contactlessInterfaceSession:(id)arg0 didEndPersistentCardEmulationWithContext:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didFinishTransactionWithContext:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didReceive18013Request:(id)arg1 readerAuthInfo:(id)arg2 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg0 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg0 forPaymentApplication:(id)arg1 paymentPass:(id)arg2 valueAddedServicePasses:(id)arg3 ;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg0 ;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg0 forPaymentApplication:(id)arg1 paymentPass:(id)arg2 ;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg0 ;
-(void)contactlessInterfaceSessionDidReceiveUntrustedTerminal:(id)arg0 ;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg0 ;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg0 ;
-(void)contactlessInterfaceSessionDidStartTransaction:(id)arg0 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg0 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg0 withErrorCode:(NSUInteger)arg1 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg0 forPaymentApplication:(id)arg1 paymentPass:(id)arg2 valueAddedServicePasses:(id)arg3 ;
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg0 ;
-(void)deactivateSessionWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)executeRKEActionForPass:(id)arg0 function:(id)arg1 action:(id)arg2 withCompletion:(id)arg3 ;
-(void)setCredential:(id)arg0 ;


@end


#endif