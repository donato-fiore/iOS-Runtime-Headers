// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSBASEXPCSERVER_H
#define BSBASEXPCSERVER_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BSBaseXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    NSString *_serviceName;
    int _notifyToken;
}


@property (nonatomic, getter=usesAnonymousConnection) BOOL usesAnonymousConnection; // ivar: _usesAnonymousConnection


+(BOOL)_registersWithNotifyd;
-(BOOL)queue_shouldAcceptNewConnection:(id)arg0 ;
-(Class)queue_classForNewClientConnection:(id)arg0 ;
-(id)_clients;
-(id)_connection;
-(id)_copyEndpoint;
-(id)_getStringFromMessage:(id)arg0 key:(char *)arg1 ;
-(id)_queue_clientForConnection:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 onQueue:(id)arg1 ;
-(id)queue;
-(id)queue_newClientForConnection:(id)arg0 ;
-(void)_invalidate;
-(void)_sendMessageReply:(id)arg0 messagePacker:(id)arg1 ;
-(void)_sendReply:(id)arg0 messagePacker:(id)arg1 ;
-(void)_sendReplyForMessage:(id)arg0 messagePacker:(id)arg1 ;
-(void)dealloc;
-(void)queue_clientAdded:(id)arg0 ;
-(void)queue_clientRemoved:(id)arg0 ;
-(void)queue_handleMessage:(id)arg0 client:(id)arg1 ;
-(void)registerServerSuspended;
-(void)resumeServer;
-(void)run;


@end


#endif