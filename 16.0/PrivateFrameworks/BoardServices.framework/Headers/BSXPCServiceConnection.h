// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSXPCSERVICECONNECTION_H
#define BSXPCSERVICECONNECTION_H

@class NSString, NSMutableArray, RBSTarget;
@protocol BSXPCServiceConnectionParent, BSInvalidatable, OS_dispatch_queue, BSServiceDispatchingQueue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "BSXPCServiceConnectionPeer.h"
#import "BSXPCServiceConnectionActivationMessage.h"
#import "BSXPCServiceConnectionMessageReply.h"
#import "BSXPCServiceConnectionMessage.h"
#import "BSXPCServiceConnectionEventHandler.h"
#import "BSXPCServiceConnectionContext.h"

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSInvalidatable>

 {
    NSString *_proem;
    os_unfair_lock_s _lock;
    unsigned int _lock_activationGeneration;
    BSXPCServiceConnectionPeer *_lock_peer;
    NSObject<OS_dispatch_queue> *_configured_underlyingTargetQueue;
    id<BSServiceDispatchingQueue> *_configured_connectionQueue;
    NSObject<OS_xpc_object> *_lock_lastKnownConnection;
    NSObject<OS_xpc_object> *_lock_connection;
    NSMutableArray *_lock_childConnections;
    NSMutableArray *_lock_connectionActivatedEvents;
    NSMutableArray *_lock_connectionEstablishedEvents;
    BSXPCServiceConnectionActivationMessage *_lock_activationMessage;
    BSXPCServiceConnectionMessageReply *_lock_activationReply;
    BSXPCServiceConnectionMessage *_lock_invalidationMessage;
    BSXPCServiceConnectionEventHandler *_lock_eventHandler;
    id<BSXPCServiceConnectionParent> *_lock_parent;
    BOOL _lock_configured;
    BOOL _lock_activated;
    BOOL _lock_sendsMustWaitForEstablished;
    BOOL _lock_established;
    BOOL _lock_remotelyInvalidated;
    BOOL _lock_clientInvalidated;
    BOOL _lock_clientInvalidatedExplicitly;
    BOOL _lock_invalidated;
    RBSTarget *_remoteAssertionTarget;
    BSXPCServiceConnectionContext *_context;
}


@property (readonly, nonatomic, getter=_isClientInvalidated) BOOL _clientInvalidated;
@property (readonly, nonatomic, getter=_isInvalidated) BOOL _invalidated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_invalidateChildConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif