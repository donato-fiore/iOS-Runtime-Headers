// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSCONNECTION_H
#define RBSCONNECTION_H

@class NSMapTable, NSHashTable, NSMutableDictionary, NSSet, NSMutableSet, NSMutableArray;
@protocol RBSClientProtocol, RBSServiceLocalProtocol, OS_xpc_object, RBSConnectionServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBSProcessHandle.h"

@interface RBSConnection : NSObject <RBSClientProtocol, RBSServiceLocalProtocol>

 {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_handleConnection;
    RBSProcessHandle *_handle;
    id<RBSConnectionServiceDelegate> *_serviceDelegate;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _assertionLock;
    os_unfair_lock_s _processExpirationLock;
    os_unfair_lock_s _savedEndowmentLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_handshakeQueue;
    NSMapTable *_acquiredAssertionsByIdentifier;
    NSHashTable *_processMonitors;
    NSMutableDictionary *_stateByIdentity;
    NSSet *_preventLaunchPredicates;
    NSMutableSet *_inheritances;
    NSHashTable *_expirationWarningClients;
    NSMutableDictionary *_deathHandlers;
    NSMutableArray *_savedEndowments;
    NSUInteger _state;
}




+(id)connectionQueue;
+(id)handshakeQueue;
+(id)sharedInstance;
+(id)testConnectionWithConnection:(id)arg0 ;
+(void)setInDaemon;
-(BOOL)executeLaunchRequest:(id)arg0 process:(*id)arg1 assertion:(*id)arg2 error:(*id)arg3 ;
-(BOOL)executeTerminateRequest:(id)arg0 assertion:(*id)arg1 error:(*id)arg2 ;
-(BOOL)invalidateAssertion:(id)arg0 error:(*id)arg1 ;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isIdentityAnAngel:(id)arg0 withError:(*id)arg1 ;
-(BOOL)saveEndowment:(id)arg0 withError:(*id)arg1 ;
-(BOOL)subscribeProcessStateMonitor:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)acquireAssertion:(id)arg0 error:(*id)arg1 ;
-(id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)arg0 error:(*id)arg1 ;
-(id)busyExtensionInstancesFromSet:(id)arg0 error:(*id)arg1 ;
-(id)captureStateForSubsystem:(id)arg0 error:(*id)arg1 ;
-(id)handleForKey:(id)arg0 ;
-(id)handleForPredicate:(id)arg0 error:(*id)arg1 ;
-(id)hostProcessForInstance:(id)arg0 error:(*id)arg1 ;
-(id)identifiersForStateCaptureSubsystems:(*id)arg0 ;
-(id)infoPlistResultForInstance:(id)arg0 forKeys:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)lastExitContextForInstance:(id)arg0 error:(*id)arg1 ;
-(id)limitationsForInstance:(id)arg0 error:(*id)arg1 ;
-(id)portForIdentifier:(id)arg0 ;
-(id)preventLaunchPredicatesWithError:(*id)arg0 ;
-(id)processName:(id)arg0 ;
-(id)statesForPredicate:(id)arg0 withDescriptor:(id)arg1 error:(*id)arg2 ;
-(void)async_assertionWillInvalidate:(id)arg0 ;
-(void)async_assertionsDidInvalidate:(id)arg0 withError:(id)arg1 ;
-(void)async_didChangeInheritances:(id)arg0 completion:(id)arg1 ;
-(void)async_observedPreventLaunchPredicatesUpdate:(id)arg0 completion:(id)arg1 ;
-(void)async_observedProcessExitEvents:(id)arg0 completion:(id)arg1 ;
-(void)async_observedProcessStatesDidChange:(id)arg0 completion:(id)arg1 ;
-(void)async_processDidExit:(id)arg0 withContext:(id)arg1 ;
-(void)async_willExpireAssertionsSoon;
-(void)dealloc;
-(void)intendToExit:(id)arg0 withStatus:(id)arg1 ;
-(void)reset;
-(void)subscribeToProcessDeath:(id)arg0 handler:(id)arg1 ;
-(void)unsubscribeProcessStateMonitor:(id)arg0 configuration:(id)arg1 ;


@end


#endif