// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTHIDDENSTATEEXTENT_H
#define TSTHIDDENSTATEEXTENT_H

@class NSMutableIndexSet, NSMutableDictionary, NSString, NSArray;
@protocol TSCEFormulaOwning, TSTGroupByChangeProtocol, TSTCellWillChangeProtocol;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSTTableFilterSet.h"
#import "TSCEUIDSet.h"
#import "TSTHiddenStatesOwner.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTHiddenStateExtent : NSObject <TSCEFormulaOwning, TSTGroupByChangeProtocol, TSTCellWillChangeProtocol>

 {
    TSCECalculationEngine *_calcEngine;
    unordered_map<TSKUIDStruct, unsigned char, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned char>>> _baseHiddenByUid;
    unordered_map<TSKUIDStruct, unsigned char, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned char>>> _summaryHiddenByUid;
    TSTTableFilterSet *_filterSet;
    NSMutableIndexSet *_baseUserHiddenIndexes;
    NSMutableIndexSet *_baseFilteredIndexes;
    _opaque_pthread_mutex_t _viewIndexesMutex;
    NSMutableIndexSet *_userHiddenIndexes;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableIndexSet *_combinedHiddenIndexes;
    NSMutableIndexSet *_collapsedIndexes;
    NSMutableIndexSet *_summaryFilteredIndexes;
    NSMutableIndexSet *_summaryPivotHiddenIndexes;
    NSMutableDictionary *_uniqueValuesByColumnUid;
    unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> _columnUidsWithUniqueIndexes;
    TSTTableFilterSet *_rewrittenFilterSet;
    os_unfair_lock_s _pendingComputedLock;
    ? _pendingColumnsOrRowsShown;
    ? _pendingColumnsOrRowsHidden;
    ? _pendingViewColumnsOrRowsShown;
    ? _pendingViewColumnsOrRowsHidden;
    ? _cellRangesToInvalidate;
    BOOL _invalidateViewGeometry;
    BOOL _invalidateCollapsed;
    os_unfair_lock_s _uniqueValuesLock;
    BOOL _needsSummaryUidUpgrade;
}


@property (readonly, nonatomic) BOOL anyCollapsed;
@property (readonly, nonatomic) BOOL anyHidden;
@property (readonly, nonatomic) BOOL anyUserHidden;
@property (readonly, nonatomic) TSCEUIDSet *collapsedGroupUids; // ivar: _collapsedGroupUids
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSTTableFilterSet *filterSet;
@property (readonly, nonatomic) BOOL forRows; // ivar: _forRows
@property (readonly) NSUInteger hash;
@property (nonatomic) TSKUIDStruct hiddenStateExtentUid; // ivar: _hiddenStateExtentUid
@property (weak, nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner; // ivar: _hiddenStatesOwner
@property (nonatomic) BOOL needsFilterFormulaRewriteForImport;
@property (nonatomic) BOOL needsToUpdateFilterSetForImport; // ivar: _needsToUpdateFilterSetForImport
@property (readonly, nonatomic) unsigned int numberOfHidden;
@property (readonly, nonatomic) unsigned int numberOfUserHidden;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) NSArray *thresholdCellValues; // ivar: _thresholdCellValues


+(NSUInteger)firstIndexNotInIndexSet:(id)arg0 beginRange:(NSUInteger)arg1 pastEndRange:(NSUInteger)arg2 ;
+(NSUInteger)firstIndexNotInIndexSet:(id)arg0 orIndexSet:(id)arg1 beginRange:(NSUInteger)arg2 pastEndRange:(NSUInteger)arg3 ;
+(NSUInteger)lastIndexNotInIndexSet:(id)arg0 beginRange:(NSUInteger)arg1 pastEndRange:(NSUInteger)arg2 ;
+(NSUInteger)lastIndexNotInIndexSet:(id)arg0 orIndexSet:(id)arg1 beginRange:(NSUInteger)arg2 pastEndRange:(NSUInteger)arg3 ;
+(id)mutableIndexSetByIntersecting:(id)arg0 withRange:(struct _NSRange )arg1 ;
+(void)swapIndexesWithIndexSet:(id)arg0 index:(NSUInteger)arg1 withIndex:(NSUInteger)arg2 ;
-(BOOL)anyHiddenInRange:(struct _NSRange )arg0 ;
-(BOOL)anyHiddenInRange:(struct _NSRange )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hasActiveFilters;
-(BOOL)hasFilterRulesWithTable:(id)arg0 inBaseColumns:(id)arg1 ;
-(BOOL)hasHiddenAtIndex:(unsigned int)arg0 ;
-(BOOL)hideAtBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideAtUid:(struct TSKUIDStruct *)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideAtUid:(struct TSKUIDStruct *)arg0 forIndex:(struct TSUModelColumnOrRowIndex )arg1 forViewIndex:(struct TSUViewColumnOrRowIndex )arg2 forAction:(unsigned char)arg3 ;
-(BOOL)hideAtViewIndex:(struct TSUViewColumnOrRowIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)isGroupCollapsedAndVisible:(struct TSKUIDStruct *)arg0 dimension:(NSInteger)arg1 ;
-(BOOL)isGroupOrParentsCollapsed:(struct TSKUIDStruct *)arg0 dimension:(NSInteger)arg1 ;
-(BOOL)isGroupUIDCollapsed:(struct TSKUIDStruct *)arg0 ;
-(BOOL)p_canUsePrePivotFilterSet;
-(BOOL)showAtBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)showAtUid:(struct TSKUIDStruct *)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)showAtUid:(struct TSKUIDStruct *)arg0 forIndex:(struct TSUModelColumnOrRowIndex )arg1 forViewIndex:(struct TSUViewColumnOrRowIndex )arg2 forAction:(unsigned char)arg3 ;
-(BOOL)showAtViewIndex:(struct TSUViewColumnOrRowIndex )arg0 forAction:(unsigned char)arg1 ;
-(NSInteger)evaluationMode;
-(id)applyCollapseExpandState:(id)arg0 outUndoState:(*id)arg1 ;
-(id)collapseSummaryGroupUIDs:(id)arg0 ;
-(id)copyCollapsedStateToUpdatedGroupUids:(id)arg0 dimension:(NSInteger)arg1 ;
-(id)duplicateFilterSet;
-(id)duplicateFilterSetInUidFormWithTable:(id)arg0 ;
-(id)expandSummaryGroupUIDs:(id)arg0 ;
-(id)hiddenOrCollapsedIndexes;
-(id)indexesOfCollapsedInRange:(struct _NSRange )arg0 ;
-(id)indexesOfFilteredInRange:(struct _NSRange )arg0 ;
-(id)indexesOfHiddenInBaseRange:(struct _NSRange )arg0 ;
-(id)indexesOfHiddenInRange:(struct _NSRange )arg0 ;
-(id)indexesOfUserHiddenInRange:(struct _NSRange )arg0 ;
-(id)indexesOfUserVisibleInRange:(struct _NSRange )arg0 ;
-(id)indexesOfVisibleInRange:(struct _NSRange )arg0 ;
-(id)indexesOfVisibleIndexesInIndexes:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forHiddenStatesOwner:(id)arg2 ;
-(id)initWithHiddenStatesOwner:(id)arg0 forRows:(BOOL)arg1 ;
-(id)linkedResolver;
-(id)mutableFilteredIndexes;
-(id)mutablePivotHiddenIndexes;
-(id)mutableUserHiddenIndexes;
-(id)p_baseHiddenIndexes;
-(id)p_calculateUniqueThresholdWithCalcEngine:(id)arg0 formulaCoord:(struct TSUCellCoord *)arg1 ;
-(id)p_collapsedIndexes;
-(id)p_createThresholdCellValue:(struct TSCEValue )arg0 locale:(id)arg1 ;
-(id)p_filteredIndexes;
-(id)p_hiddenIndexes;
-(id)p_summaryFilteredIndexes;
-(id)p_summaryHiddenIndexes;
-(id)p_summaryPivotHiddenIndexes;
-(id)p_userHiddenIndexes;
-(id)precedentsForFilterSet:(id)arg0 calcEngine:(id)arg1 hostOwnerUID:(struct TSKUIDStruct *)arg2 hostCellID:(struct TSUCellCoord *)arg3 ;
-(id)pruneCollapsedGroupsInDimension:(NSInteger)arg0 ;
-(id)tableTranslator;
-(id)uniqueValuesForColumnUID:(struct TSKUIDStruct *)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCECellRef )cellReferenceForIndex:(struct TSUModelColumnOrRowIndex )arg0 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSCEValue )p_calculateAverageThresholdWithCalcEngine:(id)arg0 formulaCoord:(struct TSUCellCoord *)arg1 ;
-(struct TSCEValue )p_calculateTopOrBottomThresholdWithCalcEngine:(id)arg0 formulaCoord:(struct TSUCellCoord *)arg1 isTop:(BOOL)arg2 keyScale:(unsigned char)arg3 ;
-(struct TSKUIDStruct )ownerUID;
-(struct TSUViewColumnOrRowIndex )p_viewIndexForBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 ;
-(unsigned char)hidingActionForBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 ;
-(unsigned char)hidingActionForUid:(struct TSKUIDStruct *)arg0 ;
-(unsigned char)hidingActionForViewIndex:(struct TSUViewColumnOrRowIndex )arg0 ;
-(unsigned int)findFirstVisibleIndexInBegin:(unsigned int)arg0 afterEnd:(unsigned int)arg1 ;
-(unsigned int)findLastVisibleIndexInBegin:(unsigned int)arg0 afterEnd:(unsigned int)arg1 ;
-(unsigned int)indexOfVisibleAfterAndIncludingIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleAfterIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleBeforeAndIncludingIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleBeforeIndex:(unsigned int)arg0 ;
-(unsigned int)numberOfHiddenInBaseRange:(struct _NSRange )arg0 ;
-(unsigned int)numberOfHiddenInRange:(struct _NSRange )arg0 ;
-(unsigned int)numberOfUserHiddenInBaseRange:(struct _NSRange )arg0 ;
-(unsigned int)numberOfUserHiddenInRange:(struct _NSRange )arg0 ;
-(unsigned short)ownerKind;
-(void)clearAllCachedRowIndexes;
-(void)clearAllFiltered;
-(void)clearAllPivotHidden;
-(void)clearInvalidIndexes;
-(void)dealloc;
-(void)deleteBaseRange:(struct _NSRange )arg0 withUids:(*void)arg1 ;
-(void)didAddRowUID:(struct TSKUIDStruct )arg0 toGroup:(id)arg1 ;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg0 ;
-(void)didRemoveGroup:(id)arg0 ;
-(void)didRemoveRowUID:(struct TSKUIDStruct )arg0 fromGroup:(id)arg1 ;
-(void)dirtyFilterState;
-(void)dirtyFilterStateForFooters;
-(void)dirtyFilterStateForHeaders;
-(void)dirtyFilterStateForRowRange:(struct _NSRange )arg0 ;
-(void)enableFilterSet:(BOOL)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)endOfGroupingChangesBatch;
-(void)hideAtViewIndexes:(id)arg0 forAction:(unsigned char)arg1 ;
-(void)insertBaseRange:(struct _NSRange )arg0 ;
-(void)invalidateAllCollapsed;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)invalidateViewGeometry;
-(void)loadIndexesFromTable:(id)arg0 ;
-(void)moveBaseRangeFrom:(struct _NSRange )arg0 toIndex:(struct TSUModelColumnOrRowIndex )arg1 ;
-(void)moveViewRangeOnlyFrom:(struct _NSRange )arg0 toIndex:(struct TSUViewColumnOrRowIndex )arg1 ;
-(void)mutateFormulaFiltersWithTable:(id)arg0 usingBlock:(id)arg1 ;
-(void)p_addHiddenIndex:(struct TSUModelColumnOrRowIndex )arg0 viewIndex:(struct TSUViewColumnOrRowIndex )arg1 forAction:(unsigned char)arg2 ;
-(void)p_calculateUniqueDistinctIndexWithCalcEngine:(id)arg0 formulaCoord:(struct TSUCellCoord *)arg1 tableModel:(id)arg2 rule:(id)arg3 ;
-(void)p_hiddenStateChangedForBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 viewIndex:(struct TSUViewColumnOrRowIndex )arg1 forAction:(unsigned char)arg2 ;
-(void)p_registerAllFormulas;
-(void)p_registerAllFormulasReturningCoords:(*void)arg0 ;
-(void)p_removeAllFormulaFromCalculationEngine;
-(void)p_removeHiddenIndex:(struct TSUModelColumnOrRowIndex )arg0 viewIndex:(struct TSUViewColumnOrRowIndex )arg1 forAction:(unsigned char)arg2 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)removeUid:(struct TSKUIDStruct *)arg0 ;
-(void)setGroupUID:(struct TSKUIDStruct *)arg0 asCollapsed:(BOOL)arg1 ;
-(void)setupAfterUnarchive;
-(void)showAtViewIndexes:(id)arg0 forAction:(unsigned char)arg1 ;
-(void)startOfGroupingChangesBatch;
-(void)swapBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 withIndex:(struct TSUModelColumnOrRowIndex )arg1 ;
-(void)syncUpHiddenStateFormulaOwnerUIDs;
-(void)uniqueValuesLock;
-(void)uniqueValuesUnlock;
-(void)unregisterFromCalcEngine;
-(void)verifyIndexesAreConsistent;
-(void)willApplyBaseCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willApplyCell:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)willApplyConcurrentCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willChangeGroupByTo:(id)arg0 ;
-(void)willRemoveGroup:(id)arg0 ;
-(void)willRemoveRows:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif