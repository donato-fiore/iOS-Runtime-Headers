// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSXPCCLIENTNOTIFICATIONLISTENER_H
#define STSXPCCLIENTNOTIFICATIONLISTENER_H

@class NSString, NSXPCListener, NSXPCConnection, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, STSXPCClientNotificationListenerProtocol, OS_dispatch_queue, STSXPCClientNotificationListenerDelegate;

#import <Foundation/Foundation.h>


@interface STSXPCClientNotificationListener : NSObject <NSXPCListenerDelegate, STSXPCClientNotificationListenerProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<STSXPCClientNotificationListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCListener *xpc; // ivar: _xpc
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (readonly, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)_translateFromCarrierConnectionStatus:(NSUInteger)arg0 ;
-(id)_asynchronousRemoteProxyWithErrorHandler:(id)arg0 ;
-(id)_generateFromCredRequest:(id)arg0 ;
-(id)_stsHandoverNotificationListenerCallbackProtocol;
-(id)_stsHandoverNotificationListenerProtocol;
-(id)_synchronousRemoteProxyWithErrorHandler:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)setRequestHandoverConfirmation:(BOOL)arg0 ;
-(id)startHandoff;
-(void)activateISO18013CredentialWithIdentifier:(id)arg0 elementSelection:(id)arg1 authData:(id)arg2 completion:(id)arg3 ;
-(void)alternativeCarrierConnectedWithStatus:(NSUInteger)arg0 ;
-(void)alternativeCarrierDisconnectedWithStatus:(NSUInteger)arg0 ;
-(void)alternativerCarrierSend:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dummyStart;
-(void)invalidateXPCConnection;
-(void)iso18013ReaderReceive:(id)arg0 status:(id)arg1 ;
-(void)processCredentialRequestList:(id)arg0 readerAuthInfo:(id)arg1 ;
-(void)receivedRawDataFromAlternativeCarrier:(id)arg0 dataPending:(BOOL)arg1 ;
-(void)sendConnectionHandoverCompleted;
-(void)sendConnectionHandoverStarted;
-(void)sendISO18013SessionData:(id)arg0 status:(id)arg1 completion:(id)arg2 ;
-(void)sendISO18013SessionEstablishment:(id)arg0 completion:(id)arg1 ;
-(void)sessionTranscriptGenerated:(id)arg0 ;
-(void)testGetRemoteTransceiverProxyXPCEndpointWithType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)transactionEndedWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)transactionStarted:(NSUInteger)arg0 ;


@end


#endif