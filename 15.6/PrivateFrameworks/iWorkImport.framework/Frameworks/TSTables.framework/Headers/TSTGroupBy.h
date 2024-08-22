// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTGROUPBY_H
#define TSTGROUPBY_H

@class TSPObject, NSMutableArray, NSArray, TSKCustomFormatWrapper, NSString, TSULocale;
@protocol TSCEFormulaOwning, TSTGroupByChangeProtocol, TSTCompatibilityVersionProviding, TSCEFormulaReplacing;


#import "TSTGroupNode.h"
#import "TSCECalculationEngine.h"
#import "TSTCategoryOwner.h"
#import "TSTGroupByChangeDistributor.h"
#import "TSTGroupBySet.h"
#import "TSTHiddenStates.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTGroupBy : TSPObject <TSCEFormulaOwning, TSTGroupByChangeProtocol, TSTCompatibilityVersionProviding>

 {
    UUIDData<TSP::UUIDData> _groupByUid;
    TSTGroupNode *_groupRoot;
    TSUCellCoord _columnOrderChangedCoord;
    TSUCellCoord _rowOrderChangedCoord;
    TSUCellCoord _rowOrderChangedIgnoringRecalcCoord;
    TSUCellCoord _hiddenStatesChangedCoord;
    TSUCellCoord _nextAggFormulaCoord;
    os_unfair_lock_s _aggValuesLock;
    unordered_map<TSUCellCoord, TSTAggNode *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTAggNode *>>> _aggNodesByFormulaCoord;
    unordered_map<TSKUIDStruct, TSTGroupNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTGroupNode *>>> _groupNodesByGroupUid;
    NSUInteger _rebuildFormulasDeferredLevel;
    NSUInteger _deferGroupByChangeNotificationsLevel;
    NSMutableArray *_deferredGroupByChangeNotifications;
    NSMutableArray *_calcEngineGroupByChangeNotifications;
    BOOL _inCalcEngineMode;
    BOOL _groupingColumnHeadersChanged;
    TSCEUidLookupList _rowUidLookupList;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableArray *aggregators; // ivar: _aggregators
@property (readonly, nonatomic) TSUCellCoord allAggsInGroupRootFormulaCoord; // ivar: _allAggsInGroupRootFormulaCoord
@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (readonly, nonatomic) TSKUIDStruct baseTableUID;
@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (weak, nonatomic) TSTCategoryOwner *categoryOwner; // ivar: _categoryOwner
@property (readonly, nonatomic) NSArray *columnAggregates; // ivar: _columnAggregates
@property (readonly, nonatomic) TSCECellRef columnOrderChangedPrecedent;
@property (readonly, nonatomic) TSKCustomFormatWrapper *customFormatForBlankGroup; // ivar: _customFormatForBlankGroup
@property (readonly, nonatomic) TSKCustomFormatWrapper *customFormatForErrorGroup; // ivar: _customFormatForErrorGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTGroupByChangeDistributor *groupByChangeDistributor; // ivar: _groupByChangeDistributor
@property (weak, nonatomic) TSTGroupBySet *groupBySet; // ivar: _groupBySet
@property (nonatomic) TSKUIDStruct groupByUid;
@property (readonly, nonatomic) TSUCellCoord groupingColumnHeadersFormulaCoord; // ivar: _groupingColumnHeadersFormulaCoord
@property (readonly) NSArray *groupingColumns; // ivar: _groupingColumns
@property (readonly, nonatomic) TSUCellCoord groupingColumnsFormulaCoord; // ivar: _groupingColumnsFormulaCoord
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSTHiddenStates *hiddenStates; // ivar: _hiddenStates
@property (readonly, nonatomic) TSCECellRef hiddenStatesChangedPrecedent;
@property (readonly, nonatomic) TSUCellCoord indirectAggTypeChangeFormulaCoord; // ivar: _indirectAggTypeChangeFormulaCoord
@property (readonly, nonatomic) BOOL isCategorized;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isForPivotTable;
@property (nonatomic) BOOL isRegisteredWithCalcEngine; // ivar: _isRegisteredWithCalcEngine
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) NSObject<TSCEFormulaReplacing> *minion;
@property (nonatomic) BOOL needsRebuildOfAggFormulas; // ivar: _needsRebuildOfAggFormulas
@property (readonly) unsigned char numberOfLevels;
@property (readonly, nonatomic) unsigned short ownerIndex; // ivar: _ownerIndex
@property (readonly, nonatomic) TSCECellRef rowOrderChangedPrecedent;
@property (readonly, nonatomic) TSCECellRef rowOrderChangedPrecedentIgnoringRecalc;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) TSTGroupNode *topLevelGroupNode;
@property (readonly, nonatomic) TSKUIDStruct topLevelGroupUid;
@property (readonly, nonatomic) BOOL usesPrePivotAggregateTypesOnly;


+(BOOL)isRelativeAncestorGroupUid:(struct TSKUIDStruct *)arg0 ;
+(BOOL)validateNumberOfGroupsForGroupingColumnList:(id)arg0 pivotDataModel:(id)arg1 limit:(NSUInteger)arg2 groupNodeCount:(*NSUInteger)arg3 ;
+(BOOL)validateNumberOfGroupsForGroupingColumnList:(id)arg0 sourceTableModel:(id)arg1 sourceBodyTract:(id)arg2 limit:(NSUInteger)arg3 groupNodeCount:(*NSUInteger)arg4 ;
+(id)groupByForCategoryRef:(id)arg0 withCalcEngine:(id)arg1 ;
+(id)groupByForUID:(struct TSKUIDStruct )arg0 withCalcEngine:(id)arg1 ;
+(id)localizedFalseStringForBooleanGroupWithString:(id)arg0 documentLocale:(id)arg1 ;
+(id)localizedNameForBlankGroupForDocumentLocale:(id)arg0 ;
+(id)localizedNameForErrorGroupForDocumentLocale:(id)arg0 ;
+(id)localizedTrueStringForBooleanGroupWithString:(id)arg0 documentLocale:(id)arg1 ;
+(id)p_dateBySettingUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ofDate:(id)arg2 inCalendar:(id)arg3 ;
+(int)relativeLevelOfAncestorGroupUid:(struct TSKUIDStruct *)arg0 ;
+(struct TSKUIDStruct )relativeAncestorGroupUid:(int)arg0 ;
+(struct TSKUIDStruct )tableUIDForCategoryRef:(id)arg0 withCalcEngine:(id)arg1 ;
+(unsigned char)aggregateTypeForAggregateLabel:(id)arg0 locale:(id)arg1 ;
+(unsigned short)groupingComboForGroupingType:(NSInteger)arg0 ;
-(*void)groupNodesByGroupUid;
-(?)bodyRowUidsForCategoryRef:(?)arg0 atRowUidordered;
-(?)cellRefsForCategoryRef:(?)arg0 atRowUidordered;
-(?)cellRefsForCategoryRefatRowUid;
-(?)unorderedCellRefsForCategoryRefatRowUid;
-(?)valuesForCategoryRef;
-(?)valuesForCategoryRef:(?)arg0 atRowUidhidingActionMask;
-(?)valuesForCategoryRefatRowUid;
-(BOOL)analyze;
-(BOOL)changeCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 toBeInGroup:(id)arg2 ;
-(BOOL)containsRowUid:(struct TSKUIDStruct *)arg0 ;
-(BOOL)createAggregatorsIfMissingAndAssert:(BOOL)arg0 ;
-(BOOL)inCalcEngineMode;
-(BOOL)isBlankGroupUid:(struct TSKUIDStruct *)arg0 ;
-(BOOL)isDeferringGroupByChangeNotifications;
-(BOOL)isErrorGroupUid:(struct TSKUIDStruct *)arg0 ;
-(BOOL)isGroupingColumn:(struct TSKUIDStruct *)arg0 ;
-(BOOL)isPrePivotV2Compatible;
-(BOOL)isRebuildFormulasDeferred;
-(BOOL)isSpanningCategoryRef:(id)arg0 ;
-(BOOL)isValidCategoryRef:(id)arg0 ;
-(BOOL)p_setCell:(id)arg0 groupingCellPlan:(*void)arg1 groupValue:(id)arg2 toGroup:(id)arg3 templateCell:(id)arg4 ;
-(BOOL)verifyConnectionsWithPivotDataModel:(id)arg0 ;
-(NSInteger)evaluationMode;
-(NSUInteger)countOfValuesForCategoryRef:(id)arg0 ;
-(NSUInteger)indexOfGroupingColumn:(id)arg0 ;
-(NSUInteger)numberOfAggregatesAtLevel:(unsigned char)arg0 ;
-(NSUInteger)numberOfGroupsAtLevel:(unsigned char)arg0 ;
-(NSUInteger)numberOfGroupsUptoLevel:(unsigned char)arg0 ;
-(id)aggNodeForAggFormulaCoord:(struct TSUCellCoord *)arg0 ;
-(id)aggregateLabelForCategoryRef:(id)arg0 ;
-(id)aggregateRefOnValue:(id)arg0 forColumnUid:(struct TSKUIDStruct *)arg1 forType:(unsigned char)arg2 atLevel:(unsigned char)arg3 ;
-(id)aggregatesOnLevel:(unsigned char)arg0 ;
-(id)aggregatorForColumn:(struct TSKUIDStruct )arg0 ;
-(id)allGroupNodeUids;
-(id)anyAggregator;
-(id)categoryRefForAggregateRangeRef:(struct TSCERangeRef *)arg0 ;
-(id)cellDiffForCell:(id)arg0 applyingGroupCellValue:(id)arg1 groupingType:(NSInteger)arg2 toBeInGroup:(id)arg3 ;
-(id)changeCellDiffMapToMoveRows:(*void)arg0 toGroup:(id)arg1 templateRowUID:(struct TSKUIDStruct *)arg2 ;
-(id)changeForMovingBaseRows:(*void)arg0 toDestGroup:(id)arg1 ;
-(id)changeForSettingGroupingColumnList:(id)arg0 ;
-(id)changeForUpdatingGroupValueOnNode:(struct TSKUIDStruct *)arg0 toValue:(id)arg1 ;
-(id)childGroupUidsForGroupUids:(id)arg0 ;
-(id)columnAggregateListCopy;
-(id)columnAggregatesOnColumnUids:(*void)arg0 ;
-(id)columnNameForCategoryLevel:(unsigned char)arg0 shortForm:(BOOL)arg1 ;
-(id)columnNameForCategoryRef:(id)arg0 ;
-(id)convertCategoryRefToRelativeAncestorUid:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 inHostTable:(struct TSKUIDStruct *)arg2 ;
-(id)createAggregatorOnColumn:(struct TSKUIDStruct )arg0 ;
-(id)defaultDateForGrouping;
-(id)distinctValuesAtLevel:(unsigned char)arg0 ;
-(id)findGroupNodeForValue:(id)arg0 atLevel:(unsigned char)arg1 createIfMissing:(BOOL)arg2 ;
-(id)groupHierarchyTreeAsFiltered:(BOOL)arg0 usingOrder:(id)arg1 forDimension:(NSInteger)arg2 ;
-(id)groupNodeForGroupUid:(struct TSKUIDStruct )arg0 ;
-(id)groupNodeForGroupUuid:(id)arg0 ;
-(id)groupNodeForGroupValueHierarchyFromSplitter:(id)arg0 startAtComponent:(NSUInteger)arg1 startAtWord:(NSUInteger)arg2 preserveFlags:(struct TSUPreserveFlags *)arg3 ;
-(id)groupNodeForRowUid:(struct TSKUIDStruct )arg0 atLevel:(unsigned char)arg1 ;
-(id)groupValueHierarchyRefOnValue:(id)arg0 atLevel:(unsigned char)arg1 ;
-(id)groupValueHierarchyStringForCategoryRef:(id)arg0 forHostCellRef:(struct TSCECellRef *)arg1 namingContext:(id)arg2 ;
-(id)groupValueRefOnValue:(id)arg0 atLevel:(unsigned char)arg1 ;
-(id)groupValueTupleForRowUid:(struct TSKUIDStruct )arg0 atLevel:(unsigned char)arg1 ;
-(id)groupingColumnAtCategoryLevel:(unsigned char)arg0 ;
-(id)groupingColumnListCopy;
-(id)groupsAtLevel:(unsigned char)arg0 ;
-(id)indexesOfGroupUidsInUids:(*void)arg0 ;
-(id)initWithArchive:(*void)arg0 forCategoryOwner:(id)arg1 unarchiver:(id)arg2 ;
-(id)initWithGroupings:(id)arg0 categoryOwner:(id)arg1 ;
-(id)initWithGroupings:(id)arg0 categoryOwner:(id)arg1 groupByUid:(struct TSKUIDStruct *)arg2 ownerIndex:(unsigned short)arg3 ;
-(id)initWithGroupings:(id)arg0 isEnabled:(BOOL)arg1 categoryOwner:(id)arg2 groupByUid:(struct TSKUIDStruct *)arg3 ownerIndex:(unsigned short)arg4 ;
-(id)labelForCategoryRef:(id)arg0 ;
-(id)labelRowUIDSet;
-(id)labelRowUIDSetForCategoryLevel:(unsigned char)arg0 labelRowVisibility:(NSUInteger)arg1 ;
-(id)labelRowUidsForGroupUids:(id)arg0 ;
-(id)linkedResolver;
-(id)p_cellDiffForFinishedCell:(id)arg0 ;
-(id)p_columnNameForColumnUid:(struct TSKUIDStruct *)arg0 ;
-(id)prettyStringForCategoryRef:(id)arg0 forHostCellRef:(struct TSCECellRef *)arg1 namingContext:(id)arg2 ;
-(id)resolveCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 inHostTable:(struct TSKUIDStruct *)arg2 ;
-(id)rowUIDSetForCategoryLevel:(unsigned char)arg0 ;
-(id)rowUidsForGroupUids:(id)arg0 ;
-(id)rowsForGroupValue:(id)arg0 atLevel:(unsigned char)arg1 ;
-(id)sortedValuesAtLevel:(unsigned char)arg0 ;
-(id)stringForCategoryRef:(id)arg0 hostTableUID:(struct TSKUIDStruct *)arg1 ;
-(id)uidRectRefForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 ;
-(id)valueForFormulaCoord:(struct TSUCellCoord *)arg0 ;
-(id)valueGridForCategoryRef:(id)arg0 ;
-(id)valueGridForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 ;
-(id)valueGridForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 hidingActionMask:(unsigned char)arg2 ;
-(id)viewCellTractRefForCategoryRef:(id)arg0 ;
-(id)viewCellTractRefForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERangeRef )aggregateRangeRefForCategoryRef:(id)arg0 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSKUIDStruct )convertToRelativeAncestorUid:(struct TSKUIDStruct *)arg0 atRowUid:(struct TSKUIDStruct *)arg1 ;
-(struct TSKUIDStruct )ownerUID;
-(struct TSKUIDStruct )resolveRelativeAncestorUid:(struct TSKUIDStruct *)arg0 atRowUid:(struct TSKUIDStruct *)arg1 ;
-(struct TSKUIDStruct )rowUIDForLookupKey:(unsigned int)arg0 ;
-(struct TSUCellCoord )getNextAggFormulaCoord;
-(struct unordered_map<TSKUIDStruct, TSTPlanForGroupingCell, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPlanForGroupingCell>>> )changesPerColumnMapToBeInGroup:(id)arg0 ;
-(struct vector<TSCECategoryLevel, std::allocator<TSCECategoryLevel>> )groupingColumnLevelsForColumn:(struct TSKUIDStruct *)arg0 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )captureAnyCategoryRefsForViewRegion:(id)arg0 atLevel:(unsigned char)arg1 asSpanning:(BOOL)arg2 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )captureCategoryLabelRefsForViewRegion:(id)arg0 atLevel:(unsigned char)arg1 asSpanning:(BOOL)arg2 forRows:(BOOL)arg3 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )captureCategoryRefsForViewRegion:(id)arg0 atLevel:(unsigned char)arg1 asSpanning:(BOOL)arg2 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )captureCategoryRefsFromIterator:(id)arg0 atLevel:(unsigned char)arg1 asSpanning:(BOOL)arg2 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )categoryRefsForSpanningCategoryRef:(id)arg0 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )expandSpanningCategoryRef:(id)arg0 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )p_promoteSpanningReferences:(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )arg0 withCaptured:(id)arg1 atLevel:(unsigned char)arg2 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )promoteSpanningReferences:(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )arg0 ;
-(unsigned char)aggregateTypeForAggregateLabel:(id)arg0 ;
-(unsigned char)aggregateTypeForCategoryRef:(id)arg0 ;
-(unsigned char)aggregateTypeForColumnUID:(struct TSKUIDStruct )arg0 atGroupLevel:(unsigned char)arg1 ;
-(unsigned char)anyAggregateTypeForColumnUID:(struct TSKUIDStruct )arg0 ;
-(unsigned char)groupLevelForGroupUid:(struct TSKUIDStruct )arg0 ;
-(unsigned char)groupLevelForGroupUid:(struct TSKUIDStruct *)arg0 isBlank:(*BOOL)arg1 isError:(*BOOL)arg2 ;
-(unsigned char)groupLevelForGroupingColumnUid:(struct TSKUIDStruct )arg0 ;
-(unsigned int)findKeyForRowUid:(struct TSKUIDStruct *)arg0 ;
-(unsigned int)lookupKeyForRowUID:(struct TSKUIDStruct *)arg0 ;
-(unsigned short)ownerKind;
-(void)_addAggregates:(id)arg0 atLevel:(unsigned char)arg1 ;
-(void)_removeAggregates:(id)arg0 ;
-(void)addAggregator:(id)arg0 ;
-(void)beginDeferringRebuildFormulas;
-(void)checkForFormulaCoordUpgrade;
-(void)clearAggNode:(id)arg0 forFormulaCoord:(struct TSUCellCoord *)arg1 ;
-(void)clearValueForFormulaCoord:(struct TSUCellCoord *)arg0 ;
-(void)deferGroupByChangeNotifications;
-(void)didAddGroupNode:(id)arg0 ;
-(void)didAddRowUID:(struct TSKUIDStruct )arg0 toGroup:(id)arg1 ;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg0 ;
-(void)didInitFromSOS;
-(void)didRemoveGroup:(id)arg0 ;
-(void)didRemoveRowUID:(struct TSKUIDStruct )arg0 fromGroup:(id)arg1 ;
-(void)dropAggregator:(id)arg0 ;
-(void)dropAllAggregators;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 backwardCompatOptions:(NSUInteger)arg2 ;
-(void)endDeferringRebuildFormulas;
-(void)endOfGroupingChangesBatch;
-(void)enterCalcEngineMode;
-(void)enumerateAggregates:(id)arg0 ;
-(void)enumerateAggregatesAtLevel:(unsigned char)arg0 withBlock:(id)arg1 ;
-(void)enumerateAllGroupsWithBlock:(id)arg0 ;
-(void)enumerateGroupingColumnsForColumn:(struct TSKUIDStruct )arg0 withBlock:(id)arg1 ;
-(void)enumerateGroupsAtLevel:(unsigned char)arg0 withBlock:(id)arg1 ;
-(void)enumerateGroupsBetweenLevel:(unsigned char)arg0 andLevel:(unsigned char)arg1 withBlock:(id)arg2 ;
-(void)enumerateRowsUidsAtLevel:(unsigned char)arg0 withBlock:(id)arg1 ;
-(void)exitCalcEngineMode;
-(void)insertRowUid:(struct TSKUIDStruct *)arg0 atRowIndex:(unsigned int)arg1 forGroupValue:(id)arg2 ;
-(void)insertRowUids:(id)arg0 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)mapGroupUidsForChange:(id)arg0 ;
-(void)markAllAggregatesAsDirty;
-(void)markAllDependentsAsDirty;
-(void)markAllGroupNodesDirty;
-(void)p_setCell:(id)arg0 forDayGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forDayOfWeekGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forMonthGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forMonthOfYearGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forQuarterOfYearGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forUniqueGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forYearGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forYearQuarterGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 forYearWeekGroupingTypeWithGroupColumnValue:(id)arg1 toBeInGroup:(id)arg2 ;
-(void)p_setCell:(id)arg0 groupingTypeCombo:(unsigned short)arg1 groupingCellValue:(id)arg2 toBeInGroup:(id)arg3 ;
-(void)p_setupCustomFormatsWithLocale:(id)arg0 ;
-(void)rebuildAllAggFormulas;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)removeRowUid:(struct TSKUIDStruct *)arg0 ;
-(void)removeRowUid:(struct TSKUIDStruct *)arg0 forGroupValue:(id)arg1 ;
-(void)removeRowUids:(id)arg0 ;
-(void)resetAllAggsFormula;
-(void)resetGroupBy;
-(void)resetGroupings;
-(void)resetWithGroupings:(id)arg0 categoryOwner:(id)arg1 hiddenStates:(id)arg2 groupBySet:(id)arg3 ;
-(void)resumeGroupByChangeNotifications;
-(void)runChange:(id)arg0 withAggregates:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)sendDeferredNotifictions:(id)arg0 ;
-(void)setAggNode:(id)arg0 forFormulaCoord:(struct TSUCellCoord *)arg1 ;
-(void)setAggregateType:(unsigned char)arg0 forColumnUID:(struct TSKUIDStruct )arg1 atGroupLevel:(unsigned char)arg2 ;
-(void)setAggregates:(id)arg0 ;
-(void)setGroupingColumnList:(id)arg0 ;
-(void)setValue:(id)arg0 forFormulaCoord:(struct TSUCellCoord *)arg1 ;
-(void)startOfGroupingChangesBatch;
-(void)teardown;
-(void)updateAggFormulaCoord:(struct TSUCellCoord )arg0 ;
-(void)updateWithDocumentRoot:(id)arg0 ;
-(void)upgradeForNewAggregateTypes:(id)arg0 ;
-(void)usedAggFormulaCoord:(struct TSUCellCoord *)arg0 ;
-(void)willMakeGroupingChangesInRowUIDs:(id)arg0 ;
-(void)willModify;
-(void)willRemoveGroup:(id)arg0 ;
-(void)willRemoveGroupNode:(id)arg0 ;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif