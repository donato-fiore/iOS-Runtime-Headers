// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRDCOREDATADATASOURCE_H
#define ICRDCOREDATADATASOURCE_H

@class NSDate, ICSelectorDelayer;
@protocol ICRDCoreDataIndexerDelegate, OS_dispatch_queue;


#import "ICRDDataSource.h"
#import "ICRDCoreDataIndexer.h"

@interface ICRDCoreDataDataSource : ICRDDataSource <ICRDCoreDataIndexerDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *applySnapshotCompletionQueue; // ivar: _applySnapshotCompletionQueue
@property (nonatomic) BOOL autoExpandItems; // ivar: _autoExpandItems
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *expansionStateCompletionQueue; // ivar: _expansionStateCompletionQueue
@property (retain, nonatomic) ICRDCoreDataIndexer *indexer; // ivar: _indexer
@property (retain, nonatomic) NSDate *lastReindexParentModificationDate; // ivar: _lastReindexParentModificationDate
@property (readonly, nonatomic) ICSelectorDelayer *reindexDelayer; // ivar: _reindexDelayer
@property (nonatomic) BOOL suspendsUpdates; // ivar: _suspendsUpdates


-(id)firstRelevantItemIdentifier;
// -(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 indexer:(unk)arg2  ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(void)applySnapshotAnimated:(BOOL)arg0 dataRenderedBlock:(id)arg1 ;
-(void)collapseItemsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)expandItemsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)indexer:(id)arg0 didChangeContentWithDifference:(id)arg1 controller:(id)arg2 ;
-(void)noteDidAddOrRemovePassword:(id)arg0 ;
// -(void)performBlockSuspendingUpdates:(id)arg0 andApplySnapshotAnimated:(unk)arg1  ;
-(void)reindexAndApplySnapshot;
// -(void)reindexDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
// -(void)reloadDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
-(void)setExpanded:(BOOL)arg0 itemIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif