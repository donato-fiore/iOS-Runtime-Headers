// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERSNAPSHOTMANAGER_H
#define PBFPOSTERSNAPSHOTMANAGER_H

@class NSMapTable, NSMutableArray, NSMutableSet, NSMutableDictionary, NSHashTable, RBSAssertion, NSOperationQueue, NSString;
@protocol PBFBehaviorAssertionProviding, PBFPosterSnapshotIngesting, PBFPosterSnapshotProviding, PBFRuntimeAssertionProviding, OS_dispatch_source, PBFExtensionProviding;

#import <Foundation/Foundation.h>


@interface PBFPosterSnapshotManager : NSObject <PBFBehaviorAssertionProviding, PBFPosterSnapshotIngesting, PBFPosterSnapshotProviding>

 {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _assertionLock;
    NSMapTable *_lock_requestToCompletion;
    NSMapTable *_lock_identityToSnapshotCoordinator;
    NSMapTable *_lock_extensionToOperationPriorityQueue;
    NSMapTable *_lock_extensionToActiveOperation;
    NSMutableArray *_lock_fulfilledSnapshotBlocks;
    NSMutableSet *_assertionLock_inUseAssertions;
    NSMutableDictionary *_assertionLock_extensionSnapshotterDisabledAssertions;
    NSMutableDictionary *_assertionLock_extensionEditingInProgressAssertions;
    BOOL _assertionLock_isOperationQueueSuspended;
    NSHashTable *_assertionLock_assertionObservers;
    RBSAssertion *_posterBoardPrewarmAssertion;
    id<PBFRuntimeAssertionProviding> *_runtimeAssertionProvider;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PBFExtensionProviding> *extensionProvider; // ivar: _extensionProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_assertionLock_isExtensionProhibitedFromSnapshotting:(id)arg0 ;
-(BOOL)_assertionLock_updateOperationQueueSuspended:(BOOL)arg0 ;
-(BOOL)_isExtensionProhibitedFromSnapshotting:(id)arg0 ;
-(BOOL)_isOperationQueueSuspended;
-(BOOL)_lock_cancelSnapshotter:(id)arg0 reason:(id)arg1 ;
-(BOOL)areSnapshotsFullyPrepared:(id)arg0 ;
-(BOOL)cancelRequestedSnapshotsForExtensionBundleIdentifier:(id)arg0 ;
-(BOOL)cancelRequestedSnapshotsForPath:(id)arg0 ;
-(BOOL)cancelRequestedSnapshotsForRequests:(id)arg0 reason:(id)arg1 ;
-(BOOL)ingestSnapshotCollection:(id)arg0 forConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)isSnapshotRequestFulfilled:(id)arg0 ;
-(NSUInteger)_lock_numberOfRemainingOperations;
-(id)_createSnapshotForDefinition:(id)arg0 withSurface:(id)arg1 snapshotScale:(CGFloat)arg2 configuredProperties:(id)arg3 path:(id)arg4 error:(*id)arg5 ;
-(id)_loadReservationsForDefinitionForRequest:(id)arg0 ;
-(id)_lock_buildSnapshotterForRequest:(id)arg0 attemptNumber:(NSUInteger)arg1 ;
-(id)_lock_snapshotCoordinatorForPath:(id)arg0 ;
-(id)_lock_snapshotterFromRequest:(id)arg0 ;
-(id)_lock_snapshottersForExtensionBundleIdentifier:(id)arg0 ;
-(id)_snapshotCoordinatorForPath:(id)arg0 ;
-(id)_snapshotSuspendedExtensionBundleIdentifiers;
-(id)_snapshotterFromRequest:(id)arg0 ;
-(id)acquireEditingSessionAssertionForProvider:(id)arg0 withReason:(id)arg1 ;
-(id)acquireSnapshotterDisabledAssertionForProvider:(id)arg0 withReason:(id)arg1 ;
-(id)acquireSnapshotterInUseAssertionWithReason:(id)arg0 ;
-(id)activeEditingSessionAssertionExtensionIdentifiers;
-(id)initWithRuntimeAssertionProvider:(id)arg0 ;
-(id)posterSnapshotForRequest:(id)arg0 definition:(id)arg1 error:(*id)arg2 ;
-(void)_acquirePrewarmAssertionIfNeeded:(BOOL)arg0 ;
-(void)_assertionLock_evaluateInUseAssertions;
-(void)_enqueueSnapshotForRequestIfNeeded:(id)arg0 relativePriority:(NSUInteger)arg1 completion:(id)arg2 ;
// -(void)_enumerateAssertionObservers:(id)arg0 respondingToSelector:(unk)arg1  ;
-(void)_failRequest:(id)arg0 withError:(id)arg1 shouldReEnqueue:(BOOL)arg2 attempt:(NSUInteger)arg3 ;
-(void)_ingestResultsFromSnapshotter:(id)arg0 ;
-(void)_invalidateEditingSessionAssertion:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)_invalidateExtensionSnapshotterDisabledAssertion:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)_invalidateInUseAssertion:(id)arg0 ;
-(void)_kickoffNextOperation;
-(void)_lock_acquirePrewarmAssertionIfNeeded:(BOOL)arg0 ;
// -(void)_lock_addCompletion:(id)arg0 forRequest:(unk)arg1  ;
-(void)_lock_cleanupAfterOperation:(id)arg0 ;
-(void)_lock_cleanupAfterRequest:(id)arg0 ;
-(void)_lock_enqueueSnapshotter:(id)arg0 forRequest:(id)arg1 attempt:(NSInteger)arg2 relativePriority:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_lock_fireCompletionsForRequest:(id)arg0 snapshotImagesByReservation:(id)arg1 error:(id)arg2 ;
-(void)_lock_kickoffNextOperation;
-(void)_lock_logOperationQueueStatus;
-(void)_lock_prioritizeOperation:(id)arg0 ;
-(void)_lock_teardownPrewarmAssertionIfAppropriate:(id)arg0 ;
-(void)_memoryWarningWasReceived;
-(void)_operationDidComplete:(id)arg0 snapshotter:(id)arg1 ;
-(void)_posterBoardPrewarmAssertionWasInvalidated;
-(void)_setupMemoryPressureTracking;
-(void)_teardownPrewarmAssertionIfAppropriate:(id)arg0 ;
-(void)addBehaviorAssertionObserver:(id)arg0 ;
-(void)cancelAllRequests;
-(void)dealloc;
-(void)fetchPosterSnapshotForRequest:(id)arg0 definition:(id)arg1 completion:(id)arg2 ;
-(void)fetchPosterSnapshotsForRequest:(id)arg0 completion:(id)arg1 ;
-(void)prewarmSnapshotsForRequests:(id)arg0 completion:(id)arg1 ;
-(void)removeBehaviorAssertionObserver:(id)arg0 ;
-(void)removeSnapshotsAtURLs:(id)arg0 ;


@end


#endif