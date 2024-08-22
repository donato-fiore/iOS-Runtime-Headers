// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSXPCSERVICECONNECTIONLISTENER_H
#define BSXPCSERVICECONNECTIONLISTENER_H

@class NSString, NSHashTable;
@protocol BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "BSServiceQuality.h"

@interface BSXPCServiceConnectionListener : NSObject <BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable>

 {
    NSString *_serviceName;
    NSUInteger _unique;
    NSString *_proem;
    os_unfair_lock_s _lock;
    NSString *_lock_debugDesc;
    NSString *_config_eDesc;
    BSServiceQuality *_config_qos;
    id *_lock_connectionHandler;
    id *_lock_errorHandler;
    NSObject<OS_dispatch_queue> *_lock_queue;
    NSObject<OS_xpc_object> *_lock_listener;
    NSHashTable *_lock_childConnections;
    NSObject<OS_xpc_object> *_lock_endpoint;
    BOOL _lock_nonLaunching;
    BOOL _lock_sealed;
    BOOL _lock_activated;
    BOOL _lock_resumed;
    BOOL _lock_invalidated;
    BOOL _lock_clientInvalidated;
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
-(void)setConnectionHandler:(id)arg0 ;
-(void)setEndpointDescription:(id)arg0 ;
-(void)setErrorHandler:(id)arg0 ;
-(void)setServiceQuality:(id)arg0 ;


@end


#endif