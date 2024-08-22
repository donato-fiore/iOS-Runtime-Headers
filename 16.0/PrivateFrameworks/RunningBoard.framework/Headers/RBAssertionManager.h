// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBASSERTIONMANAGER_H
#define RBASSERTIONMANAGER_H

@class NSMutableDictionary, NSMapTable, NSCountedSet, NSMutableSet, NSString;
@protocol RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing, OS_dispatch_queue, RBAssertionManagerDelegate, RBBundlePropertiesManaging, RBAssertionDescriptorValidating, RBAssertionOriginatorPidPersisting, RBTimeProviding, RBDaemonContextProviding;

#import <Foundation/Foundation.h>

#import "RBAssertionCollection.h"
#import "RBProcessIndex.h"
#import "RBProcessMap.h"
#import "RBAssertionStateResolver.h"
#import "RBAssertionManagerEventQueue.h"
#import "RBSystemState.h"

@interface RBAssertionManager : NSObject <RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing>

 {
    NSObject<OS_dispatch_queue> *_workloop;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    os_unfair_lock_s _lock;
    id<RBAssertionManagerDelegate> *_delegate;
    RBAssertionCollection *_assertions;
    NSMutableDictionary *_pluginHoldsForAssertions;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    NSMutableDictionary *_relativeStartTimesByTargetIdentity;
    NSMapTable *_originatorExitTimesByAssertion;
    NSMutableDictionary *_originatorToInFlightOperationsCountMap;
    NSCountedSet *_inFlightAssertionTargets;
    NSMutableSet *_inFlightTerminations;
    os_unfair_lock_s _inFlightOperationsLock;
    id<RBBundlePropertiesManaging> *_bundlePropertiesManager;
    id<RBAssertionDescriptorValidating> *_descriptorValidator;
    id<RBAssertionOriginatorPidPersisting> *_originatorPidStore;
    id<RBTimeProviding> *_timeProvider;
    id<RBDaemonContextProviding> *_daemonContext;
    NSUInteger _maxOperationsInFlight;
    NSUInteger _maxAssertionsPerOriginator;
    RBAssertionStateResolver *_stateResolver;
    RBAssertionManagerEventQueue *_eventQueue;
    NSMutableSet *_assertionTargets;
    NSMutableSet *_acquiringAssertionIdentifiers;
    NSMutableSet *_invalidAssertions;
    NSMapTable *_savedEndowments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) RBSystemState *systemState; // ivar: _systemState


+(id)sharedWorkloop;
-(BOOL)_decreaseInFlightOperationsForOriginator:(id)arg0 ;
-(BOOL)_increaseInFlightOperationsForOriginator:(id)arg0 andSuspendIfNeeded:(id)arg1 ;
-(BOOL)_invalidateAssertion:(id)arg0 sync:(BOOL)arg1 ;
-(BOOL)_lock_batchContextInvalidatesSynchronously:(id)arg0 ;
-(BOOL)_lock_enforceAssertionLimitIfNecessaryForBatchContext:(id)arg0 originatorProcess:(id)arg1 error:(*id)arg2 ;
-(BOOL)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg0 ;
-(BOOL)_lock_originatorHasExited:(id)arg0 ;
-(BOOL)_lock_validateDescriptor:(id)arg0 originatorProcess:(id)arg1 originatorState:(id)arg2 concreteTarget:(id)arg3 targetProcess:(id)arg4 targetIdentity:(id)arg5 targetIdentifier:(id)arg6 targetState:(id)arg7 acquisitionContext:(id)arg8 error:(*id)arg9 ;
-(BOOL)_lock_willExceedAssertionLimitForOriginatorProcess:(id)arg0 withIncomingCount:(NSUInteger)arg1 ;
-(BOOL)addSavedEndowment:(id)arg0 forProcess:(id)arg1 ;
-(BOOL)areTargetPropertiesValidForContext:(id)arg0 forAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)containsAttributeWithDomain:(id)arg0 andName:(id)arg1 ;
-(BOOL)hasAssertionWithIdentifier:(id)arg0 ;
-(BOOL)invalidateAssertion:(id)arg0 ;
-(BOOL)invalidateAssertionFromOriginator:(id)arg0 sync:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(BOOL)invalidateAssertionFromOriginator:(id)arg0 withIdentifier:(id)arg1 ;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg0 ;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg0 ;
-(BOOL)isProcessForeground:(id)arg0 ;
-(CGFloat)_lock_delayedStartTimeForAssertion:(id)arg0 ;
-(CGFloat)_lock_invalidationTimeForAssertion:(id)arg0 ;
-(CGFloat)_lock_originatorExitTimeForAssertion:(id)arg0 ;
-(CGFloat)_lock_relativeStartTimeForAssertion:(id)arg0 ;
-(CGFloat)_lock_startTimeForAssertion:(id)arg0 ;
-(CGFloat)_remainingRuntimeForProcessIdentity:(id)arg0 ;
-(CGFloat)eventQueue:(id)arg0 remainingRuntimeForProcessIdentity:(id)arg1 ;
-(CGFloat)eventQueue:(id)arg0 startTimeForAssertion:(id)arg1 ;
-(NSUInteger)_lock_incomingAssertionCountForBatchContext:(id)arg0 originatorIdentifier:(id)arg1 ;
-(NSUInteger)_lock_numberOfStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg0 ;
-(NSUInteger)_lock_resolvePreliminaryStatesForNonExistingProcessesWithAssertions:(id)arg0 completionPolicy:(NSUInteger)arg1 ;
-(id)_concreteTargetForTarget:(id)arg0 allowAbstractTarget:(BOOL)arg1 ;
-(id)_lock_activateDelayedAssertionsForTargets:(id)arg0 ;
-(id)_lock_assertionCreationAttributeContextForTargetIdentity:(id)arg0 originator:(id)arg1 ;
-(id)_lock_createAssertionForDescriptor:(id)arg0 originatorState:(id)arg1 acquisitionContext:(id)arg2 error:(*id)arg3 ;
-(id)_lock_createAssertionWithAcquisitionContext:(id)arg0 attributeContext:(id)arg1 concreteTarget:(id)arg2 targetIdentity:(id)arg3 originator:(id)arg4 error:(*id)arg5 ;
-(id)_lock_createAssertionsForBatchContext:(id)arg0 originatorState:(id)arg1 errorsByIndex:(id)arg2 ;
-(id)_lock_deactivateAssertions:(id)arg0 ;
-(id)_lock_deactivateDelayedAssertionsForTargets:(id)arg0 ;
-(id)_lock_deactivateExistingAssertionsDelayedByIncomingAssertions:(id)arg0 ;
-(id)_lock_invalidateAssertionByConditions:(id)arg0 changedAssertions:(*id)arg1 ;
-(id)_lock_originatorIdentifiersInAssertions:(id)arg0 ;
-(id)_lock_savedEndowmentsForProcess:(id)arg0 ;
-(id)_lock_sortedAssertionsForTarget:(id)arg0 ;
-(id)_lock_targetIdentitiesInAssertions:(id)arg0 ;
-(id)_lock_updateStatesDueToChangingAssertions:(id)arg0 invalidatedAssertions:(id)arg1 ;
-(id)additionalRestrictionsForDomain:(id)arg0 andName:(id)arg1 ;
-(id)allEntitlements;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg0 ;
-(id)assertionsForOriginator:(id)arg0 ;
-(id)attributesForDomain:(id)arg0 andName:(id)arg1 context:(id)arg2 withError:(*id)arg3 ;
-(id)captureState;
-(id)endowmentNamespaceForDomain:(id)arg0 andName:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 bundlePropertiesManager:(id)arg1 originatorPidStore:(id)arg2 assertionDescriptorValidator:(id)arg3 timeProvider:(id)arg4 daemonContext:(id)arg5 maxOperationsInFlight:(NSUInteger)arg6 maxAssertionsPerOriginator:(NSUInteger)arg7 ;
-(id)limitationsForInstance:(id)arg0 ;
-(id)originatorEntitlementsForDomain:(id)arg0 andName:(id)arg1 ;
-(id)popPluginHoldForAssertion:(id)arg0 ;
-(id)processForIdentity:(id)arg0 ;
-(id)restrictionsForDomain:(id)arg0 andName:(id)arg1 ;
-(id)savedEndowmentsForProcess:(id)arg0 ;
-(id)stateForIdentity:(id)arg0 ;
-(id)targetEntitlementsForDomain:(id)arg0 andName:(id)arg1 ;
-(void)_acquireAssertions:(id)arg0 invalidateIdentifiers:(id)arg1 forOriginatorProcess:(id)arg2 completionPolicy:(NSUInteger)arg3 acquisitionErrorsByIndex:(id)arg4 completeStage:(id)arg5 ;
-(void)_acquireUnderlyingAssertionForProcess:(id)arg0 ;
-(void)_decreaseInFlightOperationsForTargetIdentities:(id)arg0 ;
-(void)_dumpAssertions;
-(void)_increaseInFlightOperationsForTargetIdentities:(id)arg0 ;
-(void)_invalidateAssertionsWithContext:(id)arg0 ;
-(void)_lock_addAssertion:(id)arg0 ;
-(void)_lock_checkAssertionToInvalidateByCondition:(id)arg0 condition:(id)arg1 currentValue:(id)arg2 assertionsToInvalidate:(id)arg3 ;
-(void)_lock_clearStartTimesForUnbusyTargets:(id)arg0 ;
-(void)_lock_dumpAssertionsForTarget:(id)arg0 ;
-(void)_lock_enqueueAssertionsForRemoval:(id)arg0 ;
-(void)_lock_finalizeRemovingAssertions:(id)arg0 ;
-(void)_lock_invalidateAssertions:(id)arg0 forceSync:(BOOL)arg1 ;
-(void)_lock_notifyDelegateOfExcessiveAssertionsForOriginatorProcess:(id)arg0 ;
-(void)_lock_notifyDelegateOfInvalidatedAssertions:(id)arg0 ;
-(void)_lock_notifyDelegateOfProcessStateChangeSet:(id)arg0 ;
-(void)_lock_removeAssertion:(id)arg0 ;
-(void)_lock_removeAssertions:(id)arg0 andUpdateChangedAssertions:(id)arg1 ;
-(void)_lock_removeInvalidAssertions;
-(void)_lock_removeStateForProcessIdentityIfNecessary:(id)arg0 ;
-(void)_lock_setState:(id)arg0 forProcessIdentity:(id)arg1 ;
-(void)_removeInvalidAssertions;
-(void)acquireAssertionWithContext:(id)arg0 completion:(id)arg1 ;
-(void)commitBatchWithContext:(id)arg0 completion:(id)arg1 ;
-(void)eventQueue:(id)arg0 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg1 expirationTime:(CGFloat)arg2 ;
-(void)eventQueue:(id)arg0 handleInvalidationEventForAssertion:(id)arg1 ;
-(void)eventQueue:(id)arg0 handleWarningEventForAssertion:(id)arg1 ;
-(void)processDidLaunch:(id)arg0 ;
-(void)processDidTerminate:(id)arg0 ;
-(void)revalidateAssertionsForProcessIdentities:(id)arg0 ;


@end


#endif