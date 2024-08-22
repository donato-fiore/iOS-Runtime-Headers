// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMUTABLEINDEXSET_H
#define NSMUTABLEINDEXSET_H



#import "NSIndexSet.h"

@interface NSMutableIndexSet : NSIndexSet {
    *void _reserved;
}




-(Class)classForCoder;
-(void)_addRangeToArray:(struct _NSRange )arg0 ;
-(void)_ensureRangeCapacity:(NSUInteger)arg0 ;
-(void)_incrementBy:(NSUInteger)arg0 startingAtIndex:(NSUInteger)arg1 ;
-(void)_insertRange:(struct _NSRange )arg0 inArrayAtIndex:(NSUInteger)arg1 ;
-(void)_mergeOverlappingRangesStartingAtIndex:(NSUInteger)arg0 ;
-(void)_removeAndDecrementBy:(NSUInteger)arg0 startingAtIndex:(NSUInteger)arg1 ;
-(void)_removeRangeInArrayAtIndex:(NSUInteger)arg0 ;
-(void)_replaceRangeInArrayAtIndex:(NSUInteger)arg0 withRange:(struct _NSRange )arg1 ;
-(void)addIndex:(NSUInteger)arg0 ;
-(void)addIndexes:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(void)addIndexes:(id)arg0 ;
-(void)addIndexesFromIndexSet:(id)arg0 ;
-(void)addIndexesInRange:(struct _NSRange )arg0 ;
-(void)removeAllIndexes;
-(void)removeIndex:(NSUInteger)arg0 ;
-(void)removeIndexes:(id)arg0 ;
-(void)removeIndexesFromIndexSet:(id)arg0 ;
-(void)removeIndexesInRange:(struct _NSRange )arg0 ;
-(void)removeIndexesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(void)removeIndexesPassingTest:(id)arg0 ;
-(void)removeIndexesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(void)shiftIndexesStartingAtIndex:(NSUInteger)arg0 by:(NSInteger)arg1 ;


@end


#endif