// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPCONTAINER_H
#define MSPCONTAINER_H

@class NSArray, NSHashTable, NSCountedSet, NSMutableSet, NSMutableArray, NSString;
@protocol MSPContainerPersisterDelegate, OS_dispatch_queue, MSPContainerStateSnapshot, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "MSPQuerySource.h"
#import "MSPContainerPersister.h"

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<MSPContainerStateSnapshot> *_currentStateSnapshot;
    NSArray *_currentProcessedContents;
    NSHashTable *_observers;
    NSCountedSet *_editCoalescingContexts;
    BOOL _isCommittingEnqueuedEdits;
    id<NSObject><NSCopying> *_contextCoalescingFor;
    BOOL _coalescedEditsNeedEntireContents;
    NSMutableSet *_coalescedPartialContentIdentifiersToFetch;
    NSMutableArray *_enqueuedCoalescingEditBarrierBlocks;
    NSMutableArray *_enqueuedCoalescingCompletionBlocks;
    BOOL _hasScheduledDelayedCommitForCoalescedEdits;
    BOOL _hasLoadedContents;
}


@property (readonly, nonatomic) BOOL _preventsAssertionsForDuplicateStorageIdentifiers; // ivar: _preventsAssertionsForDuplicateStorageIdentifiers
@property (readonly, nonatomic, getter=_accessQueue) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) BOOL containerHasLoadedContents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MSPQuerySource *entireContentsQuerySource;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSPContainerPersister *persister; // ivar: _persister
@property (nonatomic, getter=_simulatesClearingDiscardableDataAfterOperations, setter=_setSimulatesClearingDiscardableDataAfterOperations:) BOOL simulatesClearingDiscardableDataAfterOperations; // ivar: _simulatesClearingDiscardableDataAfterOperations
@property (readonly) Class superclass;


+(BOOL)_deletes:(NSUInteger)arg0 mayRepresentDataLossIfAppliedTo:(NSUInteger)arg1 ;
+(void)_disableLogging;
+(void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(id)arg0 ;
+(void)clearDiscardableDataFromAllContainers;
+(void)mutableObjectContentDidUpdate:(id)arg0 ;
// -(BOOL)_checkAndAddCoalescedEditForContext:(id)arg0 identifiers:(id)arg1 enqueuedBlock:(id)arg2 completionQueue:(unk)arg3 completion:(id)arg4  ;
-(id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg0 ;
-(id)_processedContentsForPersisterContents:(id)arg0 ;
-(id)beginCoalescingEditsWithContext:(id)arg0 ;
-(id)init;
-(id)initWithPersister:(id)arg0 ;
-(void)_clearObjectCacheIfNeeded;
-(void)_commitEditWithFinalContents:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_commitPendingCoalescedEditsIfAny;
-(void)_endCoalescingEditsForContext:(id)arg0 ;
-(void)_forEachObserver:(id)arg0 ;
-(void)_performInitialLoadNotifyingObservers:(BOOL)arg0 kickOffSynchronously:(BOOL)arg1 completion:(id)arg2 ;
-(void)_processNewEditedContents:(id)arg0 ;
-(void)_processNewLoadedContents:(id)arg0 ;
-(void)accessContentsUsingConcurrentBlock:(id)arg0 ;
-(void)accessStateSnapshotUsingConcurrentBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)coalesceEditsForContext:(id)arg0 inBlock:(id)arg1 ;
-(void)dealloc;
-(void)editByMergingStateSnapshot:(id)arg0 mergeOptions:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
// -(void)editContentsUsingBarrierBlock:(id)arg0 completionQueue:(unk)arg1 completion:(id)arg2  ;
// -(void)editContentsUsingBarrierBlock:(id)arg0 context:(unk)arg1 completionQueue:(id)arg2 completion:(id)arg3  ;
// -(void)editObjectsWithIdentifiers:(id)arg0 usingBarrierBlock:(id)arg1 completionQueue:(unk)arg2 completion:(id)arg3  ;
// -(void)editObjectsWithIdentifiers:(id)arg0 usingBarrierBlock:(id)arg1 context:(unk)arg2 completionQueue:(id)arg3 completion:(id)arg4  ;
-(void)eraseFromStorageTypes:(NSUInteger)arg0 withCompletionQueue:(id)arg1 completion:(id)arg2 ;
-(void)eraseWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)persisterContentsDidChangeExternally:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif