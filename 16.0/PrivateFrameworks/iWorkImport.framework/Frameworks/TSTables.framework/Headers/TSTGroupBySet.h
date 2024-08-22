// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTGROUPBYSET_H
#define TSTGROUPBYSET_H


#import <Foundation/Foundation.h>

#import "TSTColumnAggregateList.h"
#import "TSTGroupingColumnList.h"
#import "TSCECalculationEngine.h"
#import "TSTTableFilterSet.h"
#import "TSTGroupBy.h"
#import "TSTHiddenStates.h"
#import "TSTTableModel.h"

@interface TSTGroupBySet : NSObject {
    vector<TSTGroupBy *, std::allocator<TSTGroupBy *>> _inUseGroupBys;
    ? _aggregateUidList;
    unordered_map<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>>> _aggregateUidMap;
    ? _allColumnGroupUids;
    ? _baseColumnGroupUids;
    ? _summaryColumnGroupUids;
    ? _allRowGroupUids;
    ? _baseRowGroupUids;
    ? _summaryRowGroupUids;
    ? _allFlattenedUids;
    ? _baseFlattenedUids;
    unordered_map<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>>> _groupAggregateUidFlatteningMap;
    unordered_map<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>>> _groupAggregateUidUnflatteningMap;
    vector<TSUIndexSet, std::allocator<TSUIndexSet>> _assertedOnMissingCombinations;
}


@property (readonly, nonatomic) NSInteger activeFlatteningDimension; // ivar: _activeFlatteningDimension
@property (readonly, nonatomic) TSTColumnAggregateList *aggregates; // ivar: _aggregates
@property (retain, nonatomic) TSTGroupingColumnList *bodyGroupingList; // ivar: _bodyGroupingList
@property (nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, nonatomic) NSUInteger columnAggregateGroupSize;
@property (readonly, nonatomic) TSTGroupingColumnList *columnGroupings; // ivar: _columnGroupings
@property (copy, nonatomic) TSTTableFilterSet *filterSet; // ivar: _filterSet
@property (readonly, nonatomic) NSInteger flatteningDimension; // ivar: _flatteningDimension
@property (readonly, nonatomic) TSTGroupBy *groupByForColumnGroups;
@property (readonly, nonatomic) TSTGroupBy *groupByForRowGroups;
@property (readonly, nonatomic) BOOL hasRunningTotalAggregates;
@property (retain, nonatomic) TSTHiddenStates *hiddenStates; // ivar: _hiddenStates
@property (readonly, nonatomic) BOOL isRegisteredWithCalcEngine; // ivar: _isRegisteredWithCalcEngine
@property (readonly, nonatomic) TSTTableModel *pivotDataTable; // ivar: _pivotDataTable
@property (readonly, nonatomic) TSKUIDStruct pivotDataTableUID;
@property (nonatomic) TSKUIDStruct pivotTableUID; // ivar: _pivotTableUID
@property (readonly, nonatomic) NSUInteger rowAggregateGroupSize;
@property (readonly, nonatomic) TSTGroupingColumnList *rowGroupings; // ivar: _rowGroupings


-(*void)allColumnGroupUids;
-(*void)allColumnUids;
-(*void)allRowGroupUids;
-(*void)allRowUids;
-(*void)baseColumnGroupUids;
-(*void)baseColumnUids;
-(*void)baseRowGroupUids;
-(*void)baseRowUids;
-(*void)columnUidsForColumnGroupUid:(struct TSKUIDStruct *)arg0 ;
-(*void)rowUidsForRowGroupUid:(struct TSKUIDStruct *)arg0 ;
-(*void)summaryColumnGroupUids;
-(*void)summaryRowGroupUids;
-(?)ownerIndexForGroupingCombination;
-(?)pivotDataModelRowIndexesNeededForCell;
-(?)sawMissingCombination;
-(BOOL)hasUnfilteredAt:(struct TSKUIDStruct *)arg0 forDimension:(NSInteger)arg1 ;
-(BOOL)hasValidRunningTotalFieldForAggregate:(id)arg0 ;
-(BOOL)verifyConnectionsWithPivotDataModel:(id)arg0 pivotTableUID:(struct TSKUIDStruct )arg1 ;
-(NSInteger)groupingIndexForColumnUID:(struct TSKUIDStruct *)arg0 ;
-(NSUInteger)aggregateIndexForColumnUid:(struct TSKUIDStruct *)arg0 ;
-(NSUInteger)aggregateIndexForRowUid:(struct TSKUIDStruct *)arg0 ;
-(NSUInteger)numPracticalGroupBys;
-(id)aggregateForUidCoord:(struct TSKUIDStructCoord *)arg0 ;
-(id)categoryRefForUidCoord:(struct TSKUIDStructCoord *)arg0 outShowAsType:(*unsigned char)arg1 ;
-(id)columnNameForAggregateIndex:(NSUInteger)arg0 allowDuplicateNames:(BOOL)arg1 ;
-(id)compactDescriptionForAggregateIndex:(NSUInteger)arg0 locale:(id)arg1 ;
-(id)compactDescriptionForAggregateIndex:(NSUInteger)arg0 useShortLabel:(BOOL)arg1 allowDuplicateNames:(BOOL)arg2 locale:(id)arg3 ;
-(id)description;
-(id)descriptionForAggregateIndex:(NSUInteger)arg0 locale:(id)arg1 ;
-(id)descriptionForAggregateIndex:(NSUInteger)arg0 useShortLabel:(BOOL)arg1 allowDuplicateNames:(BOOL)arg2 locale:(id)arg3 ;
-(id)descriptionForPivotBodyCellForUidCoord:(struct TSKUIDStructCoord *)arg0 ;
-(id)descriptionForPivotGroupCellForColumnUid:(struct TSKUIDStruct *)arg0 upToLevel:(unsigned char)arg1 ;
-(id)descriptionForPivotGroupCellForRowUid:(struct TSKUIDStruct *)arg0 upToLevel:(unsigned char)arg1 ;
-(id)duplicateFilterSet;
-(id)expandGroupUidsForFlattening:(id)arg0 forDimension:(NSInteger)arg1 ;
-(id)filteringCategoryRefAt:(struct TSKUIDStruct *)arg0 forDimension:(NSInteger)arg1 ;
-(id)findExistingGroupNodeInGroupBy:(id)arg0 usingValues:(*void)arg1 upToLevel:(NSUInteger)arg2 coerceForDateFields:(BOOL)arg3 ;
-(id)firstAggregate;
-(id)getPivotDataBundleForUidCoord:(struct TSKUIDStructCoord *)arg0 ;
-(id)getPivotDataBundleForUidCoord:(struct TSKUIDStructCoord *)arg0 upToLevel:(unsigned char)arg1 ;
-(id)grandGrandTotalCategoryRefForAggregate:(id)arg0 ;
-(id)grandTotalCategoryRefForColumn:(struct TSKUIDStruct *)arg0 forAggregate:(id)arg1 ;
-(id)grandTotalCategoryRefForRow:(struct TSKUIDStruct *)arg0 forAggregate:(id)arg1 ;
-(id)groupByForColumnLevel:(unsigned char)arg0 rowLevel:(unsigned char)arg1 ;
-(id)groupByForOwnerIndex:(unsigned short)arg0 createIfMissing:(BOOL)arg1 ;
-(id)groupByForUuidCoord:(struct TSKUIDStructCoord *)arg0 ;
-(id)groupNodeForUuidCoord:(struct TSKUIDStructCoord *)arg0 ;
-(id)groupValueTupleForUuidCoord:(struct TSKUIDStructCoord *)arg0 createIfMissing:(BOOL)arg1 ;
-(id)groupingColumnForIndex:(NSUInteger)arg0 ;
-(id)groupingColumnsForOwnerIndex:(unsigned short)arg0 ;
-(id)initWithPivotTableUID:(struct TSKUIDStruct *)arg0 ;
-(id)p_descriptionForPivotGroupValueTuple:(id)arg0 upToLevel:(unsigned char)arg1 locale:(id)arg2 ;
-(id)percentParentDenominatorCategoryRefFor:(id)arg0 inGroupBy:(id)arg1 forAggregate:(id)arg2 forShowAsType:(unsigned char)arg3 ;
-(id)percentRunningDenominatorCategoryRefFor:(id)arg0 inGroupBy:(id)arg1 runningOnColumnUid:(struct TSKUIDStruct *)arg2 forAggregate:(id)arg3 ;
-(id)restrictColumnIndexes:(id)arg0 forAggrIndexLevel:(unsigned short)arg1 forPivotTable:(id)arg2 ;
-(id)restrictColumnIndexes:(id)arg0 toColumnGroupLevel:(unsigned char)arg1 forPivotTable:(id)arg2 ;
-(id)restrictRowIndexes:(id)arg0 forAggrIndexLevel:(unsigned short)arg1 forPivotTable:(id)arg2 ;
-(id)restrictRowIndexes:(id)arg0 toRowGroupLevel:(unsigned char)arg1 forPivotTable:(id)arg2 ;
-(int)linkToCalcEngine:(id)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSKUIDStruct )columnGroupUidForColumnUid:(struct TSKUIDStruct *)arg0 outAggregateIndex:(*NSUInteger)arg1 ;
-(struct TSKUIDStruct )columnUIDForGroupingColumnName:(id)arg0 ;
-(struct TSKUIDStruct )rowGroupUidForRowUid:(struct TSKUIDStruct *)arg0 outAggregateIndex:(*NSUInteger)arg1 ;
-(struct vector<TSTGroupNode *, std::allocator<TSTGroupNode *>> )allGroupRoots;
-(struct vector<unsigned long, std::allocator<unsigned long>> )groupColumnIndexesForOwnerIndex:(unsigned short)arg0 ;
-(unsigned char)columnGroupLevelForColumnUID:(struct TSKUIDStruct *)arg0 ;
-(unsigned char)rowGroupLevelForRowUID:(struct TSKUIDStruct *)arg0 ;
-(unsigned short)aggregateIndexForAggName:(id)arg0 locale:(id)arg1 ;
-(unsigned short)aggregateIndexForUidCoord:(struct TSKUIDStructCoord *)arg0 ;
-(unsigned short)maxGroupByIndex;
-(void)clearMissingCombinations;
-(void)getHidingIndexesForGrandTotalsForPivotTable:(id)arg0 columns:(id)arg1 rows:(id)arg2 ;
-(void)getPivotHidingIndexesForGroupingColumn:(struct TSKUIDStruct *)arg0 columns:(id)arg1 rows:(id)arg2 forHiding:(BOOL)arg3 forPivotTable:(id)arg4 ;
-(void)p_resetAllGroupUids:(*void)arg0 baseGroupUids:(*void)arg1 summaryGroupUids:(*void)arg2 forGroupBy:(id)arg3 uptoLevel:(unsigned char)arg4 isFlattening:(BOOL)arg5 ;
-(void)resetGroupingList;
-(void)restoreFromPivotDataTable:(id)arg0 columnGroupings:(id)arg1 rowGroupings:(id)arg2 aggregates:(id)arg3 flatteningDimension:(NSInteger)arg4 ;
-(void)setPivotRulesWithPivotDataTable:(id)arg0 columnGroupings:(id)arg1 rowGroupings:(id)arg2 aggregates:(id)arg3 flatteningDimension:(NSInteger)arg4 ;
-(void)unregisterFromCalcEngine;


@end


#endif