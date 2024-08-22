// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNCHARTMEDIATOR_H
#define TNCHARTMEDIATOR_H

@class TSCHChartMediator, NSCondition, TSUIntToIntDictionary, NSDictionary, TSCECalculationEngine, NSString;
@protocol TSCECalculationEngineRegistration, TSCEFormulaOwning;


#import "TNChartFormulaStorage.h"
#import "TNMutableChartFormulaStorage.h"

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning>

 {
    TNChartFormulaStorage *_cleanFormulaStorage;
    unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> _formulasToRecalculate;
    int _scatterFormat;
    BOOL _isRegisteredWithCalcEngine;
    BOOL _editingHasIsPhantomOverride;
    BOOL _editingIsPhantomOverride;
    TNChartFormulaStorage *_editingStorageOverride;
    TNMutableChartFormulaStorage *_editingAccumulatedFormulas;
    TNMutableChartFormulaStorage *_editingActiveFormulas;
    NSCondition *_importUpgradeCondition;
    BOOL _shouldFixAreaFormula;
    TSUIntToIntDictionary *_formulaIndexToGridIndex;
    NSDictionary *_tableUidToHeaderRowRangesInPrecedents;
    BOOL _shouldResetFormulas;
}


@property (readonly, nonatomic) TSCECalculationEngine *calculationEngine;
@property (readonly, nonatomic) BOOL categoryLabelFormulasAreAllStatic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) TSKUIDStruct entityUID; // ivar: _entityUID
@property (readonly, nonatomic) TNChartFormulaStorage *formulaStorage;
@property (readonly, nonatomic) BOOL hasBlittedSinceConditionVarSet; // ivar: _hasBlittedSinceConditionVarSet
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (readonly, nonatomic) BOOL labelFormulasAreAllStatic;
@property (retain) TNChartFormulaStorage *rawFormulaStorage; // ivar: _formulaStorage
@property (readonly, nonatomic) int scatterFormat;
@property (readonly, nonatomic) BOOL seriesLabelFormulasAreAllStatic;
@property (readonly) Class superclass;


+(id)defaultErrorBarFormulaWrapper;
+(id)propertiesThatInvalidateMediator;
-(?)expandSingleRangeForLabelsformulaType;
-(?)p_expandSingleRangeForLabelsiterateOverRowsNotColumns;
-(BOOL)hasCategoryReferences;
-(BOOL)hasTractReference;
-(BOOL)interestedInRewrite:(id)arg0 ;
-(BOOL)isPhantom;
-(BOOL)labelFormulasAreAllStaticInFormulaStorage:(id)arg0 ;
-(BOOL)p_didHeaderRowRangesChangeForCalcEngine:(id)arg0 ;
-(BOOL)p_isScatterOrBubble;
-(BOOL)p_isValidFormulaEditForScheme:(id)arg0 ;
-(BOOL)p_labelsAreStaticInMap:(id)arg0 ofType:(NSUInteger)arg1 ;
-(BOOL)p_tableHasBaseCell:(struct TSCECellRef )arg0 withCalcEngine:(id)arg1 ;
-(BOOL)p_tableHasBaseRange:(struct TSCERangeRef )arg0 withCalcEngine:(id)arg1 ;
-(BOOL)p_tabularCategoryLabelsAppearRegularInMap:(id)arg0 ;
-(BOOL)registerLast;
-(BOOL)repairBadRefsInFormulas:(id)arg0 ;
-(BOOL)shouldSkipHiddenData;
-(NSInteger)evaluationMode;
-(NSUInteger)formulaIndexForSeriesDimension:(id)arg0 ;
-(NSUInteger)formulaTypeFromDataType:(int)arg0 ;
-(NSUInteger)labelIndexForSeriesNameSeriesIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_formulaComponents:(id)arg0 ;
-(NSUInteger)p_formulaComponentsInMap:(id)arg0 ofType:(NSUInteger)arg1 ;
-(NSUInteger)p_numberOfLabelsFromExpandedGeometricRangeRefsWithFormulas:(id)arg0 formulaType:(NSUInteger)arg1 ;
-(NSUInteger)referenceType;
-(id)categoryLabelFormulas;
-(id)columnFormulas;
-(id)commandSetCategoryName:(id)arg0 forCategoryIndex:(NSUInteger)arg1 ;
-(id)commandSetSeriesName:(id)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(id)commandToChangeCategoryLabelFormulas:(id)arg0 ;
-(id)commandToChangeLabelFormulas:(id)arg0 forType:(NSUInteger)arg1 modelUpdateDataType:(int)arg2 ;
-(id)commandToSetChartGridDirection:(int)arg0 documentRoot:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg0 seriesIndex:(NSUInteger)arg1 dataType:(int)arg2 ;
-(id)commandToSetNewSeriesIndex:(NSUInteger)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(id)commandToSetSeriesDataFormula:(id)arg0 seriesDimension:(id)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg0 seriesIndex:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customNegFormulas;
-(id)customNegScatterXFormulas;
-(id)customPosFormulas;
-(id)customPosScatterXFormulas;
-(id)dataFormatterForAxis:(id)arg0 documentRoot:(id)arg1 ;
-(id)dataFormatterForSeries:(id)arg0 index:(NSUInteger)arg1 axisType:(int)arg2 documentRoot:(id)arg3 ;
-(id)dataFormatterFromFormat:(id)arg0 in:(id)arg1 ;
-(id)dataFormulas;
-(id)descriptorForChartSeries:(NSInteger)arg0 inTable:(id)arg1 ;
-(id)descriptorForSummaryChart;
-(id)errorBarCustomFormulaForSeriesIndex:(NSUInteger)arg0 dataType:(int)arg1 ;
-(id)formulaOwner;
-(id)formulaStorageFromCatTable:(id)arg0 selection:(id)arg1 direction:(int)arg2 ;
-(id)formulaStorageFromPivotTable:(id)arg0 ;
-(id)formulaStorageFromPivotTable:(id)arg0 cellRect:(struct TSUCellRect *)arg1 ;
-(id)formulaStorageFromPivotTable:(id)arg0 cellRect:(struct TSUCellRect *)arg1 aggregateIndex:(unsigned short)arg2 plotDirection:(int)arg3 groupLabelOptions:(unsigned char)arg4 ;
-(id)formulaStorageFromPivotTable:(id)arg0 cellRegion:(id)arg1 ;
-(id)formulaStorageFromPivotTable:(id)arg0 rowLevel:(unsigned char)arg1 columnLevel:(unsigned char)arg2 aggregateIndex:(unsigned short)arg3 plotDirection:(int)arg4 ;
-(id)formulaStorageFromPivotTable:(id)arg0 rowLevel:(unsigned char)arg1 columnLevel:(unsigned char)arg2 aggregateIndex:(unsigned short)arg3 plotDirection:(int)arg4 groupLabelOptions:(unsigned char)arg5 ;
-(id)formulaStorageFromTable:(id)arg0 selection:(id)arg1 direction:(int)arg2 scheme:(int)arg3 ;
-(id)hubFormulaPrecedentsWithCalcEngine:(id)arg0 hostOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 ;
-(id)initWithChartInfo:(id)arg0 withTable:(id)arg1 direction:(int)arg2 ;
-(id)initWithChartInfo:(id)arg0 withTable:(id)arg1 selection:(id)arg2 direction:(int)arg3 ;
-(id)initWithChartInfo:(id)arg0 withTable:(id)arg1 selection:(id)arg2 direction:(int)arg3 scheme:(int)arg4 ;
-(id)labelFormulasForType:(NSUInteger)arg0 ;
-(id)linkedResolver;
-(id)nonDefaultDataFormatterForSeries:(id)arg0 index:(NSUInteger)arg1 axisType:(int)arg2 documentRoot:(id)arg3 ;
-(id)nonDefaultDataFormatterForSummarySeries:(id)arg0 index:(NSUInteger)arg1 axisType:(int)arg2 documentRoot:(id)arg3 ;
-(id)objectToArchiveInDependencyTracker;
-(id)ownerUIDMapper;
-(id)p_chartFormulaStorageForEditingOverride;
-(id)p_commandToSetSeriesNameFormulaWrapper:(id)arg0 seriesIndex:(NSUInteger)arg1 ;
-(id)p_formulaWrapperFromTSTFormula:(id)arg0 ;
-(id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg0 runningCount:(*NSUInteger)arg1 ;
-(id)p_tstFormulaFromForumulaWrapper:(id)arg0 ;
-(id)p_untitledLabelWithIndex:(NSUInteger)arg0 ;
-(id)referencedEntities;
-(id)rowFormulas;
-(id)seriesDataFormulaForSeriesDimension:(id)arg0 ;
-(id)seriesDimensionForFormulaIndex:(NSUInteger)arg0 ;
-(id)seriesNameFormulaForSeriesIndex:(NSUInteger)arg0 ;
-(id)untitledLabelOfType:(NSUInteger)arg0 formulaMap:(id)arg1 existingLabels:(id)arg2 runningIndex:(*NSUInteger)arg3 ;
-(int)formulasDirection;
-(struct TSCERangeRef )p_headerRowRangeRefForTableInfo:(id)arg0 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSCERecalculationState )multiEvaluateFormulasAt:(*void)arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSKUIDStruct )formulaOwnerUID;
-(struct TSKUIDStruct )ownerUID;
-(struct vector<TSCERangeRef, std::allocator<TSCERangeRef>> )expandSingleTractForProposedCategoryLabels:(id)arg0 byRow:(BOOL)arg1 ;
-(unsigned short)ownerKind;
-(void)amendRewriteSpec:(id)arg0 withPostCellRefs:(*void)arg1 calcEngine:(id)arg2 ;
-(void)clearEditingIsPhantomOverride;
-(void)clearFormulasToRecalculate;
-(void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg0 formulaMap:(id)arg1 ;
-(void)invalidateAndSynchronizeMediator;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)localizeFormulaLiteralsWithTemplateBundle:(id)arg0 locale:(id)arg1 ;
-(void)p_copyValuesIntoToChartModel:(id)arg0 formulaMap:(id)arg1 ;
-(void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg0 andEditingState:(id)arg1 rewriteSpec:(id)arg2 ;
-(void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg0 andEditingState:(id)arg1 rewriteSpec:(id)arg2 ;
-(void)p_disconnectLabelsInMap:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)p_hackSetCalcEngineLegacyGlobalID;
-(void)p_logFormulaEditAnalytics;
-(void)p_promoteSpanningCategorizedCategoryLabelsInMap:(id)arg0 ;
-(void)p_registerAreaFormulaForMap:(id)arg0 withCalcEngine:(id)arg1 ;
-(void)p_registerFormulaeWithCalcEngine:(id)arg0 ;
-(void)p_registerHubFormulaWithCalcEngine:(id)arg0 ;
-(void)p_removeDeletedFormulas:(id)arg0 ;
-(void)p_repairCategorizedCategoryLabelsInMap:(id)arg0 ;
-(void)p_repairMissingCategoryLabelsInMap:(id)arg0 ;
-(void)p_repairMissingStaticCategoryLabelsInMap:(id)arg0 ;
-(void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg0 ;
-(void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg0 ;
-(void)p_reregister:(BOOL)arg0 withCalculationEngine:(id)arg1 ;
-(void)p_signalImportUpgradeCondition;
-(void)p_transposeSeriesAndCategoryLabelsInMap:(id)arg0 ;
-(void)p_unregisterAllFormulaeFromCalcEngine:(id)arg0 ;
-(void)pauseCalculationEngine;
-(void)prepareRewriteSpec:(id)arg0 withPreCellRefs:(*void)arg1 calcEngine:(id)arg2 ;
-(void)registerWithCalcEngineForDocumentLoad:(id)arg0 ownerKind:(unsigned short)arg1 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg0 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg0 ignoringNonVisibleLabels:(BOOL)arg1 ;
-(void)repairMissingSeriesLabelsInMap:(id)arg0 ;
-(void)resetFormulasForCellRefs:(*void)arg0 calcEngine:(id)arg1 ;
-(void)resumeCalculationEngine;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setEditingIsPhantomOverride:(BOOL)arg0 ;
-(void)setEditingStorageOverride:(id)arg0 ;
-(void)setFormulaOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(void)setImportUpgradeCondition:(id)arg0 ;
-(void)synchronizeModelFromFormulaStorage;
-(void)synchronizeModelFromFormulaStorage:(id)arg0 ;
-(void)unregisterFromCalcEngine:(id)arg0 ;
-(void)updateForTableIDHistoryWithCalcEngine:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif