// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLSELECTION_H
#define TSTCELLSELECTION_H

@class TSKSelection, NSString;
@protocol TSDTextSelection;


#import "TSTCellUIDRegion.h"
#import "TSTCellRegion.h"
#import "TSTTableInfo.h"

@interface TSTCellSelection : TSKSelection <TSDTextSelection>



@property (readonly, nonatomic) TSUCellCoord anchorCellID;
@property (nonatomic) TSKUIDStructCoord anchorCellUID; // ivar: _anchorCellUID
@property (retain, nonatomic) TSTCellUIDRegion *baseCellUIDRegion; // ivar: _baseCellUIDRegion
@property (readonly, nonatomic) TSTCellRegion *baseRegion;
@property (readonly, nonatomic) BOOL beginImplicitEditing; // ivar: _beginImplicitEditing
@property (retain, nonatomic) TSTCellRegion *cachedBaseRegion; // ivar: _cachedBaseRegion
@property (nonatomic) NSUInteger cachedBaseRegionVersionCounter; // ivar: _cachedBaseRegionVersionCounter
@property (retain, nonatomic) TSTCellRegion *cachedCellRegion; // ivar: _cachedCellRegion
@property (nonatomic) NSUInteger cachedCellRegionVersionCounter; // ivar: _cachedCellRegionVersionCounter
@property (readonly, nonatomic) NSUInteger cellCount;
@property (readonly, nonatomic) TSTCellRegion *cellRegion;
@property (readonly, nonatomic) NSString *cellSelectionNameForContextAndActionMenus;
@property (retain, nonatomic) TSTCellUIDRegion *cellUIDRegion; // ivar: _cellUIDRegion
@property (readonly, nonatomic) BOOL containsBodyColumns;
@property (readonly, nonatomic) BOOL containsBodyRows;
@property (readonly, nonatomic) BOOL containsCellsInCategoryColumn;
@property (readonly, nonatomic) BOOL containsCellsInCategoryColumnsOrRows;
@property (readonly, nonatomic) BOOL containsCellsInCategoryGroupingColumn;
@property (readonly, nonatomic) BOOL containsCellsInLabelRow;
@property (readonly, nonatomic) BOOL containsCellsInSummaryOrLabelRows;
@property (readonly, nonatomic) BOOL containsCellsInSummaryRow;
@property (readonly, nonatomic) BOOL containsFooterRows;
@property (readonly, nonatomic) BOOL containsGroupValueCells;
@property (readonly, nonatomic) BOOL containsHeaderColumns;
@property (readonly, nonatomic) BOOL containsHeaderRows;
@property (readonly, nonatomic) BOOL containsOnlyCellsInCategoryColumn;
@property (readonly, nonatomic) BOOL containsOnlyCellsInSummaryAndLabelRows;
@property (readonly, nonatomic) BOOL containsOnlyCellsInSummaryRow;
@property (readonly, nonatomic) BOOL containsOnlyGroupValueCells;
@property (readonly, nonatomic) BOOL containsOnlySpecialCategoryCells;
@property (readonly, nonatomic) BOOL containsOnlySpecialCategoryOrPivotCells;
@property (readonly, nonatomic) BOOL containsOnlySpecialPivotCells;
@property (readonly, nonatomic) TSUCellCoord cursorCellID;
@property (nonatomic) TSKUIDStructCoord cursorCellUID; // ivar: _cursorCellUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) _NSRange range;
@property (nonatomic) _NSRange searchReferenceRange; // ivar: _searchReferenceRange
@property (readonly, nonatomic) NSInteger selectionType; // ivar: _selectionType
@property (readonly, nonatomic) NSUInteger sizeClass;
@property (readonly) Class superclass;
@property (weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(Class)archivedSelectionClass;
+(id)selectionWithTableInfo:(id)arg0 cellID:(struct TSUCellCoord )arg1 ;
+(id)selectionWithTableInfo:(id)arg0 cellRegion:(id)arg1 ;
+(id)selectionWithTableInfo:(id)arg0 cellUID:(struct TSKUIDStructCoord *)arg1 ;
+(id)selectionWithTableInfo:(id)arg0 columnIndices:(id)arg1 ;
+(id)selectionWithTableInfo:(id)arg0 rowIndices:(id)arg1 ;
-(BOOL)areCellsInTheSameRegionInTable:(id)arg0 ;
-(BOOL)canEditWithCellSubselectionInTable:(id)arg0 ;
-(BOOL)canEditWithControlCellSubselectionInTable:(id)arg0 ;
-(BOOL)canEditWithStockCellSubselectionInTable:(id)arg0 ;
-(BOOL)containsCell:(struct TSUCellCoord )arg0 ;
-(BOOL)containsSelection:(id)arg0 ;
-(BOOL)containsSingleCellOrMergeInTable:(id)arg0 ;
-(BOOL)getAggregateType:(*unsigned char)arg0 ;
-(BOOL)intersectsPartialMergeRangeInTable:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSelection:(id)arg0 ;
-(BOOL)selectsSingleControlCellWithInteractionUIInTable:(id)arg0 ;
-(id)briefDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForUpgradeWithTableInfo:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord )arg2 cursorCellID:(struct TSUCellCoord )arg3 baseRegion:(id)arg4 selectionType:(NSInteger)arg5 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithRdar39989167Archive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 andCellID:(struct TSUCellCoord )arg1 ;
-(id)initWithTableInfo:(id)arg0 andCellRange:(struct TSUCellRect )arg1 ;
-(id)initWithTableInfo:(id)arg0 andPreviousSelection:(id)arg1 offsetBy:(struct TSUColumnRowOffset )arg2 ;
-(id)initWithTableInfo:(id)arg0 cellID:(struct TSUCellCoord )arg1 selectionType:(NSInteger)arg2 ;
-(id)initWithTableInfo:(id)arg0 cellRange:(struct TSUCellRect )arg1 type:(NSInteger)arg2 anchorCellID:(struct TSUCellCoord )arg3 cursorCellID:(struct TSUCellCoord )arg4 ;
-(id)initWithTableInfo:(id)arg0 cellRegion:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord )arg2 cursorCellID:(struct TSUCellCoord )arg3 ;
-(id)initWithTableInfo:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord )arg2 cursorCellID:(struct TSUCellCoord )arg3 baseRegion:(id)arg4 ;
-(id)initWithTableInfo:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord )arg2 cursorCellID:(struct TSUCellCoord )arg3 baseRegion:(id)arg4 selectionType:(NSInteger)arg5 ;
-(id)initWithTableInfo:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord )arg2 cursorCellID:(struct TSUCellCoord )arg3 baseRegion:(id)arg4 selectionType:(NSInteger)arg5 searchReferenceRange:(struct _NSRange )arg6 beginImplicitEditing:(BOOL)arg7 ;
-(id)initWithTableInfo:(id)arg0 cellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord )arg2 cursorCellID:(struct TSUCellCoord )arg3 selectionType:(NSInteger)arg4 ;
-(id)initWithTableInfo:(id)arg0 cellUIDRegion:(id)arg1 anchorCellUID:(struct TSKUIDStructCoord *)arg2 cursorCellUID:(struct TSKUIDStructCoord *)arg3 baseCellUIDRegion:(id)arg4 selectionType:(NSInteger)arg5 searchReferenceRange:(struct _NSRange )arg6 beginImplicitEditing:(BOOL)arg7 ;
-(id)initWithTableInfo:(id)arg0 columnIndices:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 rowIndices:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 rowOrColumn:(NSInteger)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 ;
-(id)initWithTableInfo:(id)arg0 selectionType:(NSInteger)arg1 ;
-(id)initWithTableInfo:(id)arg0 startingColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned int)arg2 ;
-(id)initWithTableInfo:(id)arg0 startingRowIndex:(unsigned int)arg1 numberOfRows:(unsigned int)arg2 ;
-(id)p_selectionRemovingHiddenColumnsInTableInfo:(id)arg0 ;
-(id)p_selectionRemovingHiddenRowsInTableInfo:(id)arg0 ;
-(id)selectionAdjustedForGeometryInTableInfo:(id)arg0 ;
-(id)selectionAdjustedForVisibilityInTableInfo:(id)arg0 ;
-(id)selectionAdjustedForVisibilityInTableInfo:(id)arg0 alwaysCheckColumns:(BOOL)arg1 ;
-(id)selectionByAddingCellRange:(struct TSUCellRect )arg0 inTable:(id)arg1 withAnchor:(struct TSUCellCoord )arg2 cursor:(struct TSUCellCoord )arg3 selectionType:(NSInteger)arg4 ;
-(id)selectionByExtendingWithCellRange:(struct TSUCellRect )arg0 inTable:(id)arg1 selectionType:(NSInteger)arg2 cursorCell:(struct TSUCellCoord )arg3 ;
-(id)selectionByRemovingCellRange:(struct TSUCellRect )arg0 inTable:(id)arg1 withAnchor:(struct TSUCellCoord )arg2 cursor:(struct TSUCellCoord )arg3 selectionType:(NSInteger)arg4 ;
-(id)selectionExpandedToCoverCollapsedRows;
-(id)selectionToBeginImplicitEditingInTableInfo:(id)arg0 ;
-(struct TSUCellCoord )logicalCellIDInTable:(id)arg0 ;
-(void)insert:(NSInteger)arg0 atIndex:(unsigned int)arg1 count:(unsigned int)arg2 ;
-(void)p_cacheBaseRegion:(id)arg0 ;
-(void)p_cacheCellRegion:(id)arg0 ;
-(void)remove:(NSInteger)arg0 atIndex:(unsigned int)arg1 count:(unsigned int)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setCellRange:(struct TSUCellRect )arg0 ;


@end


#endif