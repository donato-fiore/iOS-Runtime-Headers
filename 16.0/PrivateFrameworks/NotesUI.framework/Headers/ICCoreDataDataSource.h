// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCOREDATADATASOURCE_H
#define ICCOREDATADATASOURCE_H

@class NSDate, ICSelectorDelayer;
@protocol ICCoreDataIndexerDelegate, OS_dispatch_queue;


#import "ICDataSource.h"
#import "ICCoreDataIndexer.h"

@interface ICCoreDataDataSource : ICDataSource <ICCoreDataIndexerDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *applySnapshotCompletionQueue; // ivar: _applySnapshotCompletionQueue
@property (nonatomic) NSUInteger autoExpandMode; // ivar: _autoExpandMode
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *expansionStateCompletionQueue; // ivar: _expansionStateCompletionQueue
@property (retain, nonatomic) ICCoreDataIndexer *indexer; // ivar: _indexer
@property (retain, nonatomic) NSDate *lastReindexParentModificationDate; // ivar: _lastReindexParentModificationDate
@property (readonly, nonatomic) ICSelectorDelayer *reindexDelayer; // ivar: _reindexDelayer
@property (nonatomic) BOOL suspendsUpdates; // ivar: _suspendsUpdates


-(BOOL)needsReindexWithCollectionDifference:(id)arg0 controller:(id)arg1 identifiersToReload:(id)arg2 ;
-(id)firstRelevantItemIdentifier;
// -(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 indexer:(unk)arg2  ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)applySnapshotAnimated:(BOOL)arg0 dataRenderedBlock:(id)arg1 ;
-(void)collapseItemsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)expandItemsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)indexer:(id)arg0 didChangeContentWithDifference:(id)arg1 controller:(id)arg2 ;
-(void)noteLockManagerDidToggleLock:(id)arg0 ;
// -(void)performBlockSuspendingUpdates:(id)arg0 andApplySnapshotAnimated:(unk)arg1  ;
-(void)reindexAndApplySnapshot;
// -(void)reindexDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
// -(void)reloadDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
-(void)setExpanded:(BOOL)arg0 itemIdentifiers:(id)arg1 completion:(id)arg2 ;


@end


#endif