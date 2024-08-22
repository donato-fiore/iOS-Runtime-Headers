// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESSMANAGER_H
#define RBPROCESSMANAGER_H

@class NSMutableDictionary, NSCountedSet, NSString;
@protocol RBProcessManaging, RBStateCapturing, RBLaunchManagerDelegate, RBBundlePropertiesManaging, RBEntitlementManaging, RBJetsamPropertyManaging, RBProcessManagerDelegate;

#import <Foundation/Foundation.h>

#import "RBLaunchdJobManager.h"
#import "RBPrewarmManager.h"
#import "RBLaunchManager.h"
#import "RBProcessIndex.h"
#import "RBSystemState.h"
#import "RBProcessMap.h"

@interface RBProcessManager : NSObject <RBProcessManaging, RBStateCapturing, RBLaunchManagerDelegate>

 {
    RBLaunchdJobManager *_jobManager;
    id<RBBundlePropertiesManaging> *_bundlePropertiesManager;
    id<RBEntitlementManaging> *_entitlementManager;
    id<RBJetsamPropertyManaging> *_jetsamPropertytManager;
    RBPrewarmManager *_prewarmManager;
    RBLaunchManager *_launchManager;
    id<RBProcessManagerDelegate> *_delegate;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _pendingExitBlockLock;
    uint8_t _counter;
    RBProcessIndex *_processIndex;
    RBProcessIndex *_processGraveyard;
    RBSystemState *_systemState;
    RBProcessMap *_processState;
    NSMutableDictionary *_identityToPendingExitBlock;
    NSMutableDictionary *_identityToProcessLifecycleQueue;
    NSCountedSet *_lifecycleQueuesInUse;
    BOOL _systemPreventsIdleSleep;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


+(id)stateApplicationQueue;
-(BOOL)_canTerminateProcess:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)isActiveProcess:(id)arg0 ;
-(id)_getLifecycleQueueForIdentity:(id)arg0 ;
-(id)_lifecycleQueue_addProcessWithInstance:(id)arg0 properties:(id)arg1 ;
-(id)_processForIdentifier:(id)arg0 ;
-(id)_processForIdentifier:(id)arg0 withAuditToken:(id)arg1 forceStartTracking:(BOOL)arg2 ;
-(id)_processForInstance:(id)arg0 ;
-(id)_resolveProcessWithIdentifier:(id)arg0 auditToken:(id)arg1 properties:(*id)arg2 ;
-(id)busyExtensionInstancesFromSet:(id)arg0 ;
-(id)captureState;
-(id)executeLaunchRequest:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithBundlePropertiesManager:(id)arg0 entitlementManager:(id)arg1 jetsamPropertytManager:(id)arg2 timeProvider:(id)arg3 delegate:(id)arg4 ;
-(id)processForAuditToken:(id)arg0 ;
-(id)processForIdentifier:(id)arg0 ;
-(id)processForIdentifierWithoutStartingTracking:(id)arg0 ;
-(id)processForIdentity:(id)arg0 ;
-(id)processForInstance:(id)arg0 ;
-(id)processesMatchingPredicate:(id)arg0 ;
-(void)_executeLifecycleEventForIdentity:(id)arg0 sync:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)_releaseLifecycleQueueForIdentity:(id)arg0 ;
-(void)_removeProcess:(id)arg0 ;
-(void)applySystemState:(id)arg0 ;
-(void)didUpdateProcessStates:(id)arg0 completion:(id)arg1 ;
-(void)executeTerminateRequest:(id)arg0 completion:(id)arg1 ;
-(void)removeStateForProcessIdentity:(id)arg0 ;
-(void)start;
-(void)systemPreventIdleSleepStateDidChange:(BOOL)arg0 ;


@end


#endif