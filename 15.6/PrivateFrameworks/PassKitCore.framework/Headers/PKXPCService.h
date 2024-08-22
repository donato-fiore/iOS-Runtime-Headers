// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKXPCSERVICE_H
#define PKXPCSERVICE_H

@class NSXPCInterface, NSString, NSXPCConnection;
@protocol PKForegroundActiveArbiterObserver, PKForegroundActiveArbiter, NSObject, PKInvalidatable, PKXPCServiceDelegate;

#import <Foundation/Foundation.h>

#import "PKXPCForwarder.h"

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver>

 {
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_templateExportedProxy;
    PKXPCForwarder *_currentExportedProxy;
    BOOL _suspendCallbacks;
    BOOL _forceConnectionOnResume;
    id<PKForegroundActiveArbiter> *_foregroundActiveArbiter;
    id<NSObject> *_foregroundListener;
    id<NSObject> *_backgroundListener;
    id<PKInvalidatable> *_serviceResumedListenerInvalidater;
}


@property (readonly, nonatomic) BOOL connectionEstablished;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKXPCServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceConnectionOnResume;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


+(void)setForegroundActiveArbiter:(id)arg0 ;
-(id)_connection;
-(id)_newErrorHandlerWithSemaphore:(SEL)arg0 ;
-(id)_newWrappedErrorHandlerForHandler:(SEL)arg0 ;
-(id)existingRemoteObjectProxy;
-(id)existingRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)existingSynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObjectInterface:(id)arg2 exportedObject:(id)arg3 ;
-(id)initWithMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObjectInterface:(id)arg2 exportedObject:(id)arg3 serviceResumedNotificationName:(id)arg4 ;
-(id)initWithMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObjectInterface:(id)arg2 exportedObject:(id)arg3 serviceResumedNotificationName:(id)arg4 options:(NSUInteger)arg5 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)remoteObjectProxyWithSemaphore:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_createConnectionIfPossible:(BOOL)arg0 ;
-(void)_establishServiceConnection;
-(void)_invalidateConnectionIfPossible;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_registerForServiceListenerResumedNotifications;
-(void)_sendResumed;
-(void)_sendSuspended;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_unregisterForServiceListenerResumedNotifications;
-(void)dealloc;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;


@end


#endif