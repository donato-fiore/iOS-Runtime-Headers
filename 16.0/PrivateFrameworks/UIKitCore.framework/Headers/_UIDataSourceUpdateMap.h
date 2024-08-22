// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATASOURCEUPDATEMAP_H
#define _UIDATASOURCEUPDATEMAP_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UIDataSourceBatchUpdateMapHelper.h"
#import "_UIDataSourceSnapshotter.h"

@interface _UIDataSourceUpdateMap : NSObject

@property (retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper; // ivar: _batchUpdateMapHelper
@property (retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot; // ivar: _finalSnapshot
@property (retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // ivar: _initialSnapshot
@property (readonly, nonatomic) BOOL isBatchUpdateMap;
@property (copy, nonatomic) NSArray *originalUpdateItems; // ivar: _originalUpdateItems
@property (retain, nonatomic) NSArray *reverseUpdateItems; // ivar: _reverseUpdateItems
@property (retain, nonatomic) NSArray *updateItems; // ivar: _updateItems


+(id)mapForInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 batchUpdateItems:(id)arg2 ;
+(id)mapForInitialSnapshot:(id)arg0 orderedUpdateItems:(id)arg1 ;
-(BOOL)_isSectionOnlyIndexPath:(id)arg0 ;
-(BOOL)_mapIsSimpleInsertMoveSequence;
-(NSInteger)_transformSectionIndex:(NSInteger)arg0 applyingUpdateItem:(id)arg1 withSnapshot:(id)arg2 ;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(id)_findUpdateForIdentifier:(id)arg0 ;
-(id)_mapUpdateForCollectionUpdateItem:(id)arg0 snapshot:(id)arg1 ;
-(id)_rebasedUpdatesForUpdate:(id)arg0 ;
-(id)_sectionIndexPathForSection:(NSInteger)arg0 ;
-(id)_transformIndexPath:(id)arg0 applyingUpdateItem:(id)arg1 withSnapshot:(id)arg2 ;
-(id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg0 ;
-(id)description;
-(id)finalIndexPathForIndexPath:(id)arg0 startingAtUpdateWithIdentifier:(id)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)finalUpdateForInitialUpdate:(id)arg0 ;
-(id)initWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 updateItems:(id)arg2 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg0 ;
-(id)initialIndexPathForIndexPath:(id)arg0 beforeUpdateWithIdentifier:(id)arg1 ;
-(id)initialUpdateForFinalUpdate:(id)arg0 ;
-(id)initialUpdateForUpdateIdentifier:(id)arg0 ;
-(id)rebasedMapFromNewBaseMap:(id)arg0 ;
-(id)submapAfterUpdate:(id)arg0 ;
-(id)submapBeforeUpdate:(id)arg0 ;
-(id)updateMapByRevertingUpdateWithIdentifier:(id)arg0 ;
-(id)updates;
-(void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg0 ;
-(void)_performAppendingInsertsFixups;
-(void)_updateSnapshot:(id)arg0 forUpdateItem:(id)arg1 ;


@end


#endif