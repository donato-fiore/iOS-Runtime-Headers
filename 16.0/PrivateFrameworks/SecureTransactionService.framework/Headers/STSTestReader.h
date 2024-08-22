// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTESTREADER_H
#define STSTESTREADER_H

@class NSString, NFSecureTransactionServicesHandoverSession, NSData;
@protocol STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STSHardwareManagerWrapper.h"
#import "STSTimer.h"
#import "STSXPCClientNotificationListener.h"

@interface STSTestReader : NSObject <STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate>



@property (nonatomic) BOOL alternativeCarrierConnected; // ivar: _alternativeCarrierConnected
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) id *connectionHandler; // ivar: _connectionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NFSecureTransactionServicesHandoverSession *handoverSession; // ivar: _handoverSession
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) STSHardwareManagerWrapper *nfHwManager; // ivar: _nfHwManager
@property (retain, nonatomic) STSTimer *responseTimeout; // ivar: _responseTimeout
@property (copy, nonatomic) id *sendRequestCompletion; // ivar: _sendRequestCompletion
@property (copy, nonatomic) id *sessionStartCompletion; // ivar: _sessionStartCompletion
@property (retain, nonatomic) NSData *sessionTranscriptBytes; // ivar: _sessionTranscriptBytes
@property (retain, nonatomic) STSXPCClientNotificationListener *stsNotificationListener; // ivar: _stsNotificationListener
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tnepStatusHandler; // ivar: _tnepStatusHandler
@property (nonatomic) NSInteger transmissionState; // ivar: _transmissionState
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)_translateXPCClientNotificationStatus:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 queue:(id)arg1 ;
// -(id)startWithHandoverType:(NSUInteger)arg0 connectionHandler:(id)arg1 invalidationErrorHandler:(unk)arg2 completion:(id)arg3  ;
// -(id)startWithHandoverType:(NSUInteger)arg0 connectionHandler:(id)arg1 invalidationHandler:(unk)arg2 completion:(id)arg3  ;
// -(id)startWithHandoverType:(NSUInteger)arg0 tnepStatusHandler:(id)arg1 connectionHandler:(unk)arg2 invalidationErrorHandler:(id)arg3 completion:(unk)arg4  ;
-(void)_activateInvalidationHandler:(id)arg0 ;
-(void)_activateOnConnectCompletion;
-(void)_activateSendRequestCompletion:(id)arg0 error:(id)arg1 ;
-(void)_activateSessionStartCompletion:(id)arg0 ;
-(void)_activateTnepStatusHandler:(id)arg0 ;
-(void)alternativeCarrierConnectedWithStatus:(NSUInteger)arg0 ;
-(void)alternativeCarrierDisconnectedWithStatus:(NSUInteger)arg0 ;
-(void)alternativeCarrierReceived:(id)arg0 dataPending:(BOOL)arg1 ;
-(void)connectionHandoverCompleted:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithCode:(unsigned int)arg0 ;
-(void)notificationClientConnected;
-(void)receiveISO18013DeviceResponse:(id)arg0 status:(id)arg1 ;
-(void)sendDocumentRequest:(id)arg0 timeoutInterval:(CGFloat)arg1 responseHandler:(id)arg2 ;
-(void)sendDocumentRequest:(id)arg0 timeoutInterval:(CGFloat)arg1 sessionTermination:(BOOL)arg2 responseHandler:(id)arg3 ;
-(void)session:(id)arg0 connectionHandoverProcessFailure:(id)arg1 ;
-(void)session:(id)arg0 fieldNotification:(id)arg1 ;
-(void)session:(id)arg0 tnepService:(id)arg1 ;
-(void)sessionTranscriptGenerated:(id)arg0 ;
-(void)transactionEndedWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)transactionStarted:(NSUInteger)arg0 ;
-(void)xpcInterrupted;
-(void)xpcInvalidated;


@end


#endif