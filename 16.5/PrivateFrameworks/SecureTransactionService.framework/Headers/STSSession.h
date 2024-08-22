// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSSESSION_H
#define STSSESSION_H



#import "STSSessionBase.h"

@interface STSSession : STSSessionBase



+(id)requestAssertionForKeyID:(id)arg0 options:(id)arg1 outError:(*id)arg2 ;
-(BOOL)supportsSecureRanging;
-(id)canStartSession;
-(id)createHandlerForCredential:(id)arg0 ;
-(id)enableExpressModeForActiveCredential:(BOOL)arg0 ;
-(id)enablePlasticCardMode:(BOOL)arg0 ;
-(id)felicaCredentialState:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)releaseCredential:(id)arg0 withAuthorization:(id)arg1 ;
-(id)releaseCredential:(id)arg0 withAuthorization:(id)arg1 iso18013Selection:(id)arg2 ;
-(id)rkeCancelFunction:(id)arg0 ;
-(id)rkeGetVehicleReports:(*id)arg0 ;
-(id)rkePauseRangingForReaderIdentifier:(id)arg0 durationInSec:(id)arg1 ;
-(id)rkeResumeRangingForReaderIdentifier:(id)arg0 ;
-(id)rkeSendPassthroughMessage:(id)arg0 ;
-(id)setAuxiliaryCredentials:(id)arg0 ;
-(id)startHandoff;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)startWithDelegate:(id)arg0 ;
-(id)startWithDelegate:(id)arg0 callback:(id)arg1 ;
-(id)startWithNotificationTesterDelegate:(id)arg0 outNotificationListener:(*id)arg1 ;
-(id)stopTransaction;
-(id)transitCredentialState:(id)arg0 error:(*id)arg1 ;
-(void)fireDidExpireTransaction:(BOOL)arg0 ;
-(void)fireDidFailDeferredAuth:(BOOL)arg0 ;
-(void)fireDidPerformAuxiliaryTransactions:(id)arg0 ;
-(void)fireDidReceive18013Requests:(id)arg0 readerAuthInfo:(id)arg1 ;
-(void)fireDidReceiveActivityTimeout:(id)arg0 ;
-(void)fireDidReceivePassthroughMessage:(id)arg0 ;
-(void)fireDigitalCarKeyEventPayload:(id)arg0 ;
-(void)fireExpressModeStateChangeWithInfo:(id)arg0 ;
-(void)fireFieldDetectEvent:(BOOL)arg0 ;
-(void)fireFieldNotificationEvent:(id)arg0 ;
-(void)fireHasPendingServerRequest:(BOOL)arg0 ;
-(void)fireRequestHandoverConfirmation;
-(void)fireSessionDidConsumeAuthorizationEvent;
-(void)fireSessionEndEvent:(id)arg0 ;
-(void)fireTransactionEndEvent:(id)arg0 ;
-(void)fireTransactionStartEvent:(id)arg0 ;
-(void)rkeSendFunction:(id)arg0 action:(id)arg1 authorization:(id)arg2 completion:(id)arg3 ;
-(void)testSendToAlternativeCarrier:(id)arg0 completion:(id)arg1 ;


@end


#endif