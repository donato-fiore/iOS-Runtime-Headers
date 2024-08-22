// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSBASEXPCCLIENT_H
#define BSBASEXPCCLIENT_H

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "BSAtomicSignal.h"

@interface BSBaseXPCClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BSAtomicSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
    int _clientInvalidated;
    int _notifyToken;
    NSObject<OS_xpc_object> *_connection;
    BOOL _suspended;
}


@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


-(id)_connection;
-(id)_connectionInstanceUUID;
-(id)_errorFromMessageIfAny:(id)arg0 ;
-(id)_getStringFromMessage:(id)arg0 key:(char *)arg1 ;
-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 endpoint:(id)arg1 ;
-(id)queue_connection;
-(void)_sendMessage:(id)arg0 ;
// -(void)_sendMessage:(id)arg0 withReplyHandler:(unk)arg1 waitForReply:(id)arg2 waitDuration:(unk)arg3  ;
-(void)_sendMessageReply:(id)arg0 messagePacker:(id)arg1 ;
-(void)_sendReply:(id)arg0 messagePacker:(id)arg1 ;
-(void)_sendReplyForMessage:(id)arg0 messagePacker:(id)arg1 ;
-(void)_setEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)queue_clientWasInvalidated;
-(void)queue_connectionWasCreated;
-(void)queue_connectionWasDestroyed;
-(void)queue_connectionWasInterrupted;
-(void)queue_connectionWasInvalidated;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasSuspended;
-(void)queue_handleError:(id)arg0 ;
-(void)queue_handleMessage:(id)arg0 ;
-(void)reconnectIfNecessary;
-(void)resumeConnection;
-(void)suspendConnection;


@end


#endif