// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCELLRANGECACHE_H
#define TSCELLRANGECACHE_H


#import <Foundation/Foundation.h>


@interface TSCellRangeCache : NSObject {
    unordered_map<unsigned long, TSUModelCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUModelCellRect>>> _mergeRanges;
    TSCECellRangeRTree _mergeRangesRTree;
    TSCEBitGrid _mergedAtCellIds;
    *void _transaction;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) BOOL isEmpty;


-(?)mergeRangesIntersectingBaseCellRect;
-(?)mergeRangesIntersectingBaseCellRegion;
-(BOOL)hasRangeSpanningRowsForCellRange:(struct TSUModelCellRect )arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRect:(struct TSUModelCellRect )arg0 ;
-(BOOL)hasRangeSpanningRowsForCellRegion:(id)arg0 ;
-(BOOL)partiallyIntersectsBaseCellRect:(struct TSUModelCellRect )arg0 ;
-(BOOL)partiallyIntersectsBaseCellRegion:(id)arg0 ;
-(id)description;
-(id)expandBaseCellRegionToCoverMergedCells:(id)arg0 ;
-(id)indexesForBaseCellRegion:(id)arg0 ;
-(id)indexesForRange:(struct TSUModelCellRect )arg0 ;
-(id)mergedGridIndicesForDimension:(NSInteger)arg0 ;
-(struct TSUModelCellRect )cellRangeAtIndex:(NSUInteger)arg0 ;
-(struct TSUModelCellRect )expandBaseCellRectToCoverMergedCells:(struct TSUModelCellRect )arg0 ;
-(struct TSUModelCellRect )mergedRangeForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> )mergeRanges;
-(void)clear;
-(void)commitRewritingTransaction;
-(void)dealloc;
-(void)enumerateCacheItemsIntersectingBaseCellRect:(struct TSUModelCellRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateCacheItemsIntersectingBaseCellRegion:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateCacheItemsUsingBlock:(id)arg0 ;
-(void)openRewritingTransaction;
-(void)p_updateIndexesForReplacingRangeAtIndex:(NSUInteger)arg0 withRange:(struct TSUModelCellRect )arg1 ;
-(void)removeCellRangeAtIndex:(NSUInteger)arg0 ;
-(void)setCellRange:(struct TSUModelCellRect )arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif