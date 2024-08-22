// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXARRAYCHANGEDETAILS_H
#define PXARRAYCHANGEDETAILS_H

@class NSIndexSet, NSDictionary;
@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface PXArrayChangeDetails : NSObject <NSMutableCopying, NSCopying>



@property (readonly, nonatomic) NSIndexSet *changedIndexes; // ivar: _changedIndexes
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) BOOL hasMoves;
@property (retain, nonatomic) NSDictionary *indexesWithChangesByProperty; // ivar: _indexesWithChangesByProperty
@property (readonly, nonatomic) NSIndexSet *insertedIndexes; // ivar: _insertedIndexes
@property (readonly, nonatomic) *__CFArray movesFromIndexes; // ivar: _movesFromIndexes
@property (readonly, nonatomic) NSIndexSet *movesToIndexes; // ivar: _movesToIndexes
@property (readonly, nonatomic) NSIndexSet *removedIndexes; // ivar: _removedIndexes


+(BOOL)_mutableCopyInputs;
+(NSUInteger)indexAfterApplyingChanges:(id)arg0 toIndex:(NSUInteger)arg1 objectChanged:(*BOOL)arg2 ;
+(NSUInteger)indexAfterRevertingChanges:(id)arg0 fromIndex:(NSUInteger)arg1 objectChanged:(*BOOL)arg2 ;
+(id)changeDetailsFromArray:(id)arg0 toArray:(id)arg1 changedObjects:(id)arg2 ;
+(id)changeDetailsFromArray:(id)arg0 toArray:(id)arg1 changedObjects:(id)arg2 objectComparator:(id)arg3 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg0 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg0 originatingChange:(id)arg1 ;
+(id)changeDetailsFromSubrange:(struct _NSRange )arg0 toSubrange:(struct _NSRange )arg1 ;
+(id)changeDetailsWithChangedIndexRange:(struct _NSRange )arg0 ;
+(id)changeDetailsWithChangedIndexes:(id)arg0 ;
+(id)changeDetailsWithInsertedIndexRange:(struct _NSRange )arg0 ;
+(id)changeDetailsWithMovedFromIndexRange:(struct _NSRange )arg0 toIndexRange:(struct _NSRange )arg1 ;
+(id)changeDetailsWithNoChanges;
+(id)changeDetailsWithNoIncrementalChanges;
+(id)changeDetailsWithOldKeyItemIndex:(NSInteger)arg0 oldCount:(NSInteger)arg1 newKeyItemIndex:(NSInteger)arg2 newCount:(NSInteger)arg3 ;
+(id)changeDetailsWithRemovedIndexRange:(struct _NSRange )arg0 ;
-(BOOL)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOnlyInsertionAtEnd:(*BOOL)arg0 orRemovalAtEnd:(*BOOL)arg1 countBeforeChange:(NSInteger)arg2 countAfterChange:(NSInteger)arg3 ;
-(NSUInteger)indexAfterApplyingChangesToIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexAfterRevertingChangesFromIndex:(NSUInteger)arg0 ;
-(id)changeDetailsByAddingChangeDetails:(id)arg0 ;
-(id)changeDetailsByAddingChangedIndexes:(id)arg0 ;
-(id)changeDetailsByReplacingChangedItemsWithRemovalsAndInsertions;
-(id)changeDetailsShiftedBy:(NSInteger)arg0 ;
-(id)changeDetailsShiftedBy:(NSInteger)arg0 scaledBy:(NSInteger)arg1 ;
-(id)changedPropertiesForIndex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexSetAfterApplyingChangesToIndexSet:(id)arg0 ;
-(id)indexSetAfterRevertingChangesToIndexSet:(id)arg0 ;
-(id)indexesWithChangesToProperty:(id)arg0 ;
-(id)init;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg0 insertedIndexes:(id)arg1 movesToIndexes:(id)arg2 movesFromIndexes:(struct __CFArray *)arg3 changedIndexes:(id)arg4 ;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg0 insertedIndexes:(id)arg1 movesToIndexes:(id)arg2 movesFromIndexes:(struct __CFArray *)arg3 changedIndexes:(id)arg4 indexesWithChangesByProperty:(id)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
// -(void)applyToDictionary:(id)arg0 removalHandler:(id)arg1 moveHandler:(unk)arg2  ;
-(void)applyToIndexSet:(id)arg0 ;
-(void)dealloc;
-(void)enumerateMovedIndexesUsingBlock:(id)arg0 ;
-(void)enumerateMovedRangesUsingBlock:(id)arg0 ;


@end


#endif