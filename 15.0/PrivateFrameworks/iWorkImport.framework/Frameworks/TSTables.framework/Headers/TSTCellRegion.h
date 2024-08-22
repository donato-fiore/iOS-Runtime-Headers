// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLREGION_H
#define TSTCELLREGION_H

@class NSIndexSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSTCellRegion : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) TSUCellCoord boundingBottomRightCellID;
@property (nonatomic) TSUCellRect boundingCellRange; // ivar: _boundingCellRange
@property (readonly, nonatomic) TSUModelCellRect boundingModelCellRect;
@property (readonly, nonatomic) TSUCellCoord boundingTopLeftCellID;
@property (readonly, nonatomic) TSUViewCellRect boundingViewCellRect;
@property (nonatomic) NSUInteger cellCount; // ivar: _cellCount
@property (readonly, nonatomic) NSUInteger cellRangeCount;
@property (readonly, nonatomic) *void cellRanges; // ivar: _cellRanges
@property (nonatomic) TSUCellCoord firstCellID; // ivar: _firstCellID
@property (retain, nonatomic) NSIndexSet *intersectingColumnsIndexSet; // ivar: _intersectingColumnsIndexSet
@property (retain, nonatomic) NSIndexSet *intersectingRowsIndexSet; // ivar: _intersectingRowsIndexSet
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isRectangle;
@property (nonatomic) TSUCellCoord lastCellID; // ivar: _lastCellID
@property (readonly, nonatomic) unsigned int numberOfIntersectingColumns;
@property (readonly, nonatomic) unsigned int numberOfIntersectingRows;
@property (readonly, nonatomic) NSUInteger sizeClass;


+(?)combineNonOverlappingCellRangesaddingOverlappingCellRanges;
+(id)invalidRegion;
+(id)region:(id)arg0 addingRange:(struct TSUCellRect )arg1 ;
+(id)region:(id)arg0 addingRegion:(id)arg1 ;
+(id)region:(id)arg0 intersectingRange:(struct TSUCellRect )arg1 ;
+(id)region:(id)arg0 intersectingRegion:(id)arg1 ;
+(id)region:(id)arg0 subtractingColumnIndexes:(id)arg1 ;
+(id)region:(id)arg0 subtractingRange:(struct TSUCellRect )arg1 ;
+(id)region:(id)arg0 subtractingRegion:(id)arg1 ;
+(id)region:(id)arg0 subtractingRowIndexes:(id)arg1 ;
+(id)regionFillingColumnsFromRegion:(id)arg0 ;
+(id)regionFillingRowsFromRegion:(id)arg0 ;
+(id)regionFromCellCoordSet:(*void)arg0 ;
+(id)regionFromCellDiffMap:(id)arg0 withTableInfo:(id)arg1 ;
+(id)regionFromCellIDVector:(*void)arg0 ;
+(id)regionFromCellMap:(id)arg0 withTableInfo:(id)arg1 ;
+(id)regionFromCellMap:(id)arg0 withTableInfo:(id)arg1 passingTest:(id)arg2 ;
+(id)regionFromCellRangeVector:(*void)arg0 ;
+(id)regionFromCellUIDVector:(*void)arg0 withTableInfo:(id)arg1 ;
+(id)regionFromColumnIndexes:(id)arg0 rowIndexes:(id)arg1 ;
+(id)regionFromColumnIndices:(id)arg0 ;
+(id)regionFromColumnIndices:(id)arg0 rowRange:(struct _NSRange )arg1 ;
+(id)regionFromMergeActionArray:(id)arg0 withTableInfo:(id)arg1 ;
+(id)regionFromMergeList:(*void)arg0 ;
+(id)regionFromModelCellRect:(struct TSUModelCellRect )arg0 ;
+(id)regionFromModelMergeList:(*void)arg0 ;
+(id)regionFromOverlappingCellRangeVector:(*void)arg0 ;
+(id)regionFromPropertyListRepresentation:(id)arg0 ;
+(id)regionFromRange:(struct TSUCellRect )arg0 ;
+(id)regionFromRowIndices:(id)arg0 ;
+(id)regionFromRowIndices:(id)arg0 columnRange:(struct _NSRange )arg1 ;
+(id)regionFromViewCellRect:(struct TSUViewCellRect )arg0 ;
+(id)regionFromViewCellRectVector:(*void)arg0 ;
+(id)unionEveryRangeInRegion:(id)arg0 withRange:(struct TSUCellRect )arg1 ;
-(?)subRangesOfCellCount;
-(BOOL)containsCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)containsCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)containsCellRegion:(id)arg0 ;
-(BOOL)containsModelCellCoord:(struct TSUModelCellCoord )arg0 ;
-(BOOL)containsModelCellRect:(struct TSUModelCellRect )arg0 ;
-(BOOL)equalsCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)equalsCellRegion:(id)arg0 ;
-(BOOL)intersectsCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)intersectsCellRegion:(id)arg0 ;
-(BOOL)intersectsColumn:(unsigned short)arg0 ;
-(BOOL)intersectsModelCellRect:(struct TSUModelCellRect )arg0 ;
-(BOOL)intersectsRow:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)partiallyIntersectsCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)partiallyIntersectsModelCellRect:(struct TSUModelCellRect )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initFromMessage:(*void)arg0 ;
-(id)intersectingColumnsInRow:(unsigned int)arg0 ;
-(id)isSingleCellWideOrHigh:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newBottomToTopIterator;
-(id)newIterator;
-(id)newRightToLeftIterator;
-(id)p_copy;
-(id)propertyListRepresentation;
-(id)prunedCellRegionAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 ;
-(id)prunedCellRegionAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)regionAfterColumnIndex:(unsigned short)arg0 ;
-(id)regionAfterColumnIndexRtoL:(unsigned short)arg0 ;
-(id)regionAfterRowIndex:(unsigned int)arg0 ;
-(id)regionByAddingColumns:(id)arg0 ;
-(id)regionByAddingModelCellRect:(struct TSUModelCellRect )arg0 ;
-(id)regionByAddingModelCellRegion:(id)arg0 ;
-(id)regionByAddingRange:(struct TSUCellRect )arg0 ;
-(id)regionByAddingRegion:(id)arg0 ;
-(id)regionByAddingRows:(id)arg0 ;
-(id)regionByAddingViewCellRect:(struct TSUViewCellRect )arg0 ;
-(id)regionByAddingViewCellRegion:(id)arg0 ;
-(id)regionByApplyingRowMapping:(id)arg0 ;
-(id)regionByCollapsingRangesForRemovedColumns:(id)arg0 ;
-(id)regionByCollapsingRangesForRemovedRows:(id)arg0 ;
-(id)regionByIntersectingColumnIndices:(id)arg0 ;
-(id)regionByIntersectingRange:(struct TSUCellRect )arg0 ;
-(id)regionByIntersectingRegion:(id)arg0 ;
-(id)regionByIntersectingRowIndices:(id)arg0 ;
-(id)regionByMovingColumnsFromRange:(struct _NSRange )arg0 toIndex:(unsigned short)arg1 ;
-(id)regionByMovingRowsFromRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(id)regionByRemovingColumns:(id)arg0 ;
-(id)regionByRemovingRows:(id)arg0 ;
-(id)regionBySubtractingColumnIndexes:(id)arg0 ;
-(id)regionBySubtractingModelCellRect:(struct TSUModelCellRect )arg0 ;
-(id)regionBySubtractingModelCellRegion:(id)arg0 ;
-(id)regionBySubtractingRange:(struct TSUCellRect )arg0 ;
-(id)regionBySubtractingRegion:(id)arg0 ;
-(id)regionBySubtractingRowIndexes:(id)arg0 ;
-(id)regionBySubtractingViewCellRect:(struct TSUViewCellRect )arg0 ;
-(id)regionBySubtractingViewCellRegion:(id)arg0 ;
-(id)regionByTrimmingAroundColumnIndices:(id)arg0 ;
-(id)regionByTrimmingAroundRowIndices:(id)arg0 ;
-(id)regionByUnioningEveryRangeInRegionWithRange:(struct TSUCellRect )arg0 ;
-(id)regionOffsetBy:(struct TSUColumnRowOffset )arg0 ;
-(id)regionUpToColumnIndex:(unsigned short)arg0 ;
-(id)regionUpToColumnIndexRtoL:(unsigned short)arg0 maxColumnIndex:(unsigned short)arg1 ;
-(id)regionUpToRowIndex:(unsigned int)arg0 ;
-(struct TSCECellCoordSet )asCellCoordSet;
-(struct TSUCellCoord )suitableAnchor;
-(struct TSUCellCoord )suitableCursor;
-(struct TSUCellRect )largestRangeContainingCellID:(struct TSUCellCoord )arg0 ;
-(struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> )modelCellRanges;
-(void)enumerateCellIDsUsingBlock:(id)arg0 ;
-(void)enumerateCellRangesUsingBlock:(id)arg0 ;
-(void)enumerateColumnRangesInReverseUsingBlock:(id)arg0 ;
-(void)enumerateColumnRangesUsingBlock:(id)arg0 ;
-(void)enumerateColumnsInReverseUsingBlock:(id)arg0 ;
-(void)enumerateColumnsIntersectingCellRange:(struct TSUCellRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateColumnsUsingBlock:(id)arg0 ;
-(void)enumerateGridColumnsUsingBlock:(id)arg0 ;
-(void)enumerateGridRowsUsingBlock:(id)arg0 ;
-(void)enumerateInDirection:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateMissingColumnsIntersectingCellRange:(struct TSUCellRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateMissingRowsIntersectingCellRange:(struct TSUCellRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateModelCellRectsUsingBlock:(id)arg0 ;
-(void)enumerateRowRangesInReverseUsingBlock:(id)arg0 ;
-(void)enumerateRowRangesUsingBlock:(id)arg0 ;
-(void)enumerateRowsInReverseUsingBlock:(id)arg0 ;
-(void)enumerateRowsIntersectingCellRange:(struct TSUCellRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateRowsUsingBlock:(id)arg0 ;
-(void)enumerateViewCellRectsUsingBlock:(id)arg0 ;
-(void)fillCellRangeColMajorSet:(*void)arg0 topToBottom:(BOOL)arg1 ;
-(void)fillCellRangeRowMajorSet:(*void)arg0 leftToRight:(BOOL)arg1 ;
-(void)p_calculateAncillaryInformation;
-(void)p_copyFromRegion:(id)arg0 ;
-(void)p_insertRangeIntoRegion:(struct TSUCellRect )arg0 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif