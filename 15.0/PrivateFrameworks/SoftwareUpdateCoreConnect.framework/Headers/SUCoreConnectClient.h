// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCORECONNECTCLIENT_H
#define SUCORECONNECTCLIENT_H

@class SUCoreLog, NSXPCConnection;
@protocol SUCoreConnectClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreConnectClientPolicy.h"

@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol>



@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue; // ivar: _clientCompletionQueue
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientConnectionStateAccessQueue; // ivar: _clientConnectionStateAccessQueue
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue; // ivar: _clientDelegateCallbackQueue
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientMessageQueue; // ivar: _clientMessageQueue
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientReplyCompletionQueue; // ivar: _clientReplyCompletionQueue
@property (nonatomic) BOOL connected; // ivar: _connected
@property (retain, nonatomic) SUCoreLog *logger; // ivar: _logger
@property (retain, nonatomic) SUCoreConnectClientPolicy *policy; // ivar: _policy
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


-(id)initWithClientPolicy:(id)arg0 ;
-(void)_connectionDropped;
-(void)_handleConnectionError:(id)arg0 method:(char *)arg1 ;
-(void)_invalidateConnection;
-(void)connectClientSendServerMessage:(id)arg0 ;
-(void)connectClientSendServerMessage:(id)arg0 proxyObject:(id)arg1 withReply:(id)arg2 ;
-(void)connectProtocolFromServerRequestClientID:(id)arg0 ;
-(void)connectProtocolFromServerSendClientMessage:(id)arg0 ;
-(void)connectProtocolFromServerSendClientMessage:(id)arg0 reply:(id)arg1 ;
-(void)connectToServerWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)forceCloseConnection;


@end


#endif