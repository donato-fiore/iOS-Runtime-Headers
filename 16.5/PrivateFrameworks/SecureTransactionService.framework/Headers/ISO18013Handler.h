// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISO18013HANDLER_H
#define ISO18013HANDLER_H

@class NFSecureTransactionServicesHandoverSession, NSString;
@protocol STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate, STSSessionNotificationTesterDelegate;


#import "STSTransactionHandler.h"
#import "STSXPCClientNotificationListener.h"
#import "STSCredential.h"

@interface ISO18013Handler : STSTransactionHandler <STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate>

 {
    os_unfair_lock_s _handoverSessionMutex;
    STSXPCClientNotificationListener *_stsNotificationListener;
    id<STSSessionNotificationTesterDelegate> *_notificationTesterDelegate;
    NFSecureTransactionServicesHandoverSession *_handoverSession;
    NSUInteger _transactionState;
    STSCredential *_releasedCredential;
    NSUInteger _startTransactionOption;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activateWithHandoffToken:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)stopTransaction;
-(unsigned char)supportedCredentialType;
-(void)alternativeCarrierConnectedWithStatus:(NSUInteger)arg0 ;
-(void)alternativeCarrierDisconnectedWithStatus:(NSUInteger)arg0 ;
-(void)alternativeCarrierReceived:(id)arg0 dataPending:(BOOL)arg1 ;
-(void)connectionHandoverCompleted:(id)arg0 ;
-(void)notificationClientConnected;
-(void)processISO18013CredentialProposals:(id)arg0 readerAuthInfo:(id)arg1 ;
-(void)session:(id)arg0 connectionHandoverProcessFailure:(id)arg1 ;
-(void)session:(id)arg0 fieldChange:(BOOL)arg1 ;
-(void)session:(id)arg0 fieldNotification:(id)arg1 ;
-(void)session:(id)arg0 tnepService:(id)arg1 ;
-(void)tearDownWithCompletion:(id)arg0 ;
-(void)transactionEndedWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)transactionStarted:(NSUInteger)arg0 ;
-(void)xpcInterrupted;
-(void)xpcInvalidated;


@end


#endif