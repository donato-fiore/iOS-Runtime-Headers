// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTPIVOTOWNER_H
#define TSTPIVOTOWNER_H

@class TSPObject, NSString;
@protocol TSCEFormulaOwning, TSCETableNameChangeProtocol;


#import "TSCECalculationEngine.h"
#import "TSTPivotGroupingColumnOptionsMap.h"
#import "TSTColumnAggregateList.h"
#import "TSTGroupingColumnList.h"
#import "TSTFormulaStore.h"
#import "TSTGroupBySet.h"
#import "TSTFormula.h"
#import "TSCECellTractRef.h"
#import "TSTTableModel.h"

@interface TSTPivotOwner : TSPObject <TSCEFormulaOwning, TSCETableNameChangeProtocol>

 {
    TSCECalculationEngine *_calcEngine;
    TSTPivotGroupingColumnOptionsMap *_groupingColumnOptionsMap;
    ? _sortedColumnUids;
    ? _sortedRowUids;
    BOOL _resetHeaderLabelsAfterSort;
    BOOL _invalidateAfterAsyncSort;
    BOOL _autoImplicitSort;
    BOOL _isHidingGrandTotalColumns;
    BOOL _isHidingGrandTotalRows;
    ? _pivotRowUIDs;
    ? _pivotColumnUIDs;
}


@property (readonly, nonatomic) TSTColumnAggregateList *aggregates; // ivar: _aggregates
@property (readonly, nonatomic) TSTGroupingColumnList *columnGroupings; // ivar: _columnGroupings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flatteningDimension; // ivar: _flatteningDimension
@property (readonly, nonatomic) TSTFormulaStore *formulaStore; // ivar: _formulaStore
@property (readonly, nonatomic) TSTGroupBySet *groupBySet; // ivar: _groupBySet
@property (readonly, nonatomic) TSTPivotGroupingColumnOptionsMap *groupingColumnOptionsMapCopy;
@property (readonly, nonatomic) BOOL hasHeaderColumnForAggregateNames;
@property (readonly, nonatomic) BOOL hasHeaderRowForAggregateNames;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmptyPivot; // ivar: _isEmptyPivot
@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (nonatomic) TSKUIDStruct pivotAggregateRuleChangeUID; // ivar: _pivotAggregateRuleChangeUID
@property ? pivotColumnUIDs;
@property (nonatomic) CGFloat pivotDataRefreshTimestamp; // ivar: _pivotDataRefreshTimestamp
@property (nonatomic) TSKUIDStruct pivotDataRefreshUID; // ivar: _pivotDataRefreshUID
@property (nonatomic) TSKUIDStruct pivotRowColumnRuleChangeUID; // ivar: _pivotRowColumnRuleChangeUID
@property ? pivotRowUIDs;
@property (readonly, nonatomic) TSTFormula *pivotSourceBodyReferenceEmbeddedInFormula;
@property (retain, nonatomic) TSCECellTractRef *pivotSourceBodyTract;
@property ? pivotSourceBodyUidTract;
@property (retain, nonatomic) TSCECellTractRef *pivotSourceHeaderTract;
@property (retain, nonatomic) NSString *pivotSourceTableName; // ivar: _pivotSourceTableName
@property (nonatomic) TSKUIDStruct pivotSourceTableUID; // ivar: _pivotSourceTableUID
@property (readonly, nonatomic) TSTGroupingColumnList *rowGroupings; // ivar: _rowGroupings
@property (nonatomic) BOOL shouldSkipNextAsyncSort; // ivar: _shouldSkipNextAsyncSort
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


+(id)enclosingGroupNameForGroupCellValue:(id)arg0 ;
-(BOOL)groupingColumnUidExists:(struct TSKUIDStruct )arg0 ;
-(BOOL)requiresTrailingAlignment:(struct TSUCellCoord )arg0 ;
-(BOOL)requiresUnwrapping:(struct TSUCellCoord )arg0 ;
-(id)enclosingGroupNameForColumnIndex:(unsigned short)arg0 level:(unsigned char)arg1 ;
-(id)enclosingGroupNameForRowIndex:(unsigned int)arg0 level:(unsigned char)arg1 ;
-(id)filterSetForPivotDataTable:(id)arg0 ;
-(id)hiddenStatesForPivotDataTable:(id)arg0 ;
-(id)indexesForLeadingColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)initWithTableModel:(id)arg0 ;
-(id)lowestCategoryLevelAsLeadingColumnGroupName:(unsigned short)arg0 ;
-(id)lowestCategoryLevelAsLeadingRowGroupName:(unsigned int)arg0 ;
-(id)p_formulaForCellCoord:(struct TSKUIDStructCoord )arg0 runningTotalContext:(id)arg1 ;
-(id)p_referenceNodeFromTractRef:(id)arg0 ;
-(id)pivotOptionsForColumnGroupsAtLevel:(unsigned char)arg0 ;
-(id)pivotOptionsForGroupingColumn:(id)arg0 ;
-(id)pivotOptionsForGroupingColumnUid:(struct TSKUIDStruct )arg0 ;
-(id)pivotOptionsForRowGroupsAtLevel:(unsigned char)arg0 ;
-(id)pivotSourceRangeNameWithTractRef:(id)arg0 ;
-(int)linkToCalcEngine:(id)arg0 forTableModel:(id)arg1 ;
-(int)registerWithCalcEngine:(id)arg0 forTableModel:(id)arg1 baseOwnerUID:(struct TSKUIDStruct *)arg2 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSUModelColumnIndex )baseColumnIndexForGroupingAtColumnIndex:(unsigned short)arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForGroupingAtRowIndex:(unsigned int)arg0 ;
-(unsigned char)columnGroupLevelForHeaderRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)rowGroupLevelForHeaderColumn:(struct TSUViewColumnIndex )arg0 ;
-(void)clearAllPivotHiddenAndFiltered:(BOOL)arg0 ;
-(void)collapseExpandChanged:(id)arg0 forState:(id)arg1 ;
-(void)didAddTableName:(id)arg0 forTableUID:(struct TSKUIDStruct )arg1 ;
-(void)didChangeTableName:(id)arg0 fromTableName:(id)arg1 forTableUID:(struct TSKUIDStruct )arg2 ;
-(void)didRemoveTableName:(id)arg0 forTableUID:(struct TSKUIDStruct )arg1 ;
-(void)filteringChanged:(id)arg0 forDimension:(NSInteger)arg1 ;
-(void)handlePivotSorting:(BOOL)arg0 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_ensureHiddenStatesExistsWithPivotDataTable:(id)arg0 ;
-(void)p_sortFullTable:(NSUInteger)arg0 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)sortColumnsByRowIndex:(unsigned int)arg0 level:(unsigned char)arg1 aggregateIndex:(NSUInteger)arg2 sortDirection:(int)arg3 ;
-(void)sortRowsByColumnIndex:(unsigned int)arg0 level:(unsigned char)arg1 aggregateIndex:(NSUInteger)arg2 sortDirection:(int)arg3 ;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif