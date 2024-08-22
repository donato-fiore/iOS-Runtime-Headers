// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKFAKEPAYMENTSESSION_H
#define NPKFAKEPAYMENTSESSION_H

@class NSString, PKFieldDetector, PKPass, NSDictionary;
@protocol PKFieldDetectorObserver, OS_dispatch_queue, OS_dispatch_source;


#import "NPKQuickPaymentSession.h"

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver>



@property (nonatomic) NSUInteger changeCardToken; // ivar: _changeCardToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFieldDetector *fieldDetector; // ivar: _fieldDetector
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourCallbackQueue; // ivar: _ourCallbackQueue
@property (nonatomic) BOOL ourConfirmed; // ivar: _ourConfirmed
@property (retain, nonatomic) PKPass *ourCurrentPass; // ivar: _ourCurrentPass
@property (nonatomic) BOOL ourInServiceMode; // ivar: _ourInServiceMode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourInternalQueue; // ivar: _ourInternalQueue
@property (nonatomic) BOOL ourPerformedFirstActivation; // ivar: _ourPerformedFirstActivation
@property (retain, nonatomic) NSDictionary *ourVasPasses; // ivar: _ourVasPasses
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer


-(BOOL)deferAuthorization;
-(BOOL)inServiceMode;
-(BOOL)sessionStarted;
-(BOOL)startSession;
-(id)currentPass;
-(id)initWithQueue:(id)arg0 ;
-(id)vasPasses;
-(void)_handleSessionHasCredentialIfNecessaryWithCurrentPass:(id)arg0 ;
-(void)_handleTimeoutTimer;
-(void)_handleTransactionCompleteDarwinNotification;
-(void)_scheduleDidActivateEventForPass:(id)arg0 ;
-(void)_sendTransactionCompleteToDelegate;
-(void)confirmSessionExpectingCredential:(BOOL)arg0 ;
-(void)deactivateSessionWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fieldDetectorDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)setCredential:(id)arg0 ;
-(void)setCurrentPass:(id)arg0 ;
-(void)setDeferAuthorization:(BOOL)arg0 ;
-(void)setInServiceMode:(BOOL)arg0 ;
-(void)setVasPasses:(id)arg0 ;


@end


#endif