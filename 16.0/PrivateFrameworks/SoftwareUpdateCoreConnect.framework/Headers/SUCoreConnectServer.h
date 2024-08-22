// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCORECONNECTSERVER_H
#define SUCORECONNECTSERVER_H

@class NSMutableDictionary, NSString, SUCoreLog, NSMutableSet;
@protocol NSXPCListenerDelegate, SUCoreConnectServerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreConnectServerPolicy.h"

@interface SUCoreConnectServer : NSObject <NSXPCListenerDelegate, SUCoreConnectServerProtocol>



@property (readonly, retain, nonatomic) SUCoreConnectServerPolicy *connectionPolicy; // ivar: _connectionPolicy
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionSendMessageQueue; // ivar: _connectionSendMessageQueue
@property (readonly, retain, nonatomic) NSMutableDictionary *connections; // ivar: _connections
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionsAccessQueue; // ivar: _connectionsAccessQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) SUCoreLog *logger; // ivar: _logger
@property (readonly, retain, nonatomic) NSMutableSet *observerConnections; // ivar: _observerConnections
@property (readonly) Class superclass;


-(BOOL)isConnectionEntitled:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_clientIDForConnection:(id)arg0 ;
-(id)_connectionsForClientID:(id)arg0 ;
-(id)_getAllObserverConnections;
-(id)initWithServerPolicy:(id)arg0 ;
-(void)_informObserversOfCompletionReplyWithMessage:(id)arg0 error:(id)arg1 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_setConnection:(id)arg0 forClientID:(id)arg1 ;
-(void)connectProtocolFromClientSendServerMessage:(id)arg0 ;
-(void)connectProtocolFromClientSendServerMessage:(id)arg0 proxyObject:(id)arg1 withReply:(id)arg2 ;
-(void)connectServerSendClientMessage:(id)arg0 ;
-(void)setupListenerAndResumeConnection;


@end


#endif