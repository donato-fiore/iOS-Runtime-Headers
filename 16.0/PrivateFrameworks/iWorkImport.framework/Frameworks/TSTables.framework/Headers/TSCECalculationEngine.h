// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCECALCULATIONENGINE_H
#define TSCECALCULATIONENGINE_H

@class TSPObject, TSKAccessController, TSKChangeNotifier, NSDate, NSTimeZone, NSString, TSULocale;
@protocol TSCEFormulaReplacing, TSKMultiTableRemapping, TSCERefNamingProtocol, TSCERefParsingProtocol;


#import "TSCETransaction.h"
#import "TSTHeaderNameMgr.h"
#import "TSCENamedReferenceManager.h"
#import "TSCERemoteDataStore.h"
#import "TSCERewritingMinion.h"
#import "TSCETablesByNameDistributor.h"
#import "TSCERewriteTableUIDInfo.h"
#import "TSCETablesByName.h"

@interface TSCECalculationEngine : TSPObject <TSCEFormulaReplacing>

 {
    BOOL _isUnarchiving;
    BOOL _calculationWillShutDown;
}


@property int XLImportDateMode;
@property (weak, nonatomic) TSKAccessController *accessController;
@property (weak, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) *void cppCalcEngine; // ivar: _cppCalcEngine
@property (retain) NSDate *currentDate;
@property (retain) NSObject<TSKMultiTableRemapping> *currentTableIdRemapper;
@property (retain) NSTimeZone *currentTimeZone;
@property (readonly) TSCETransaction *currentTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger documentRandomSeed;
@property (nonatomic) BOOL duringRollback;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) TSTHeaderNameMgr *headerNameMgr;
@property (nonatomic) NSUInteger loadFromFileVersion;
@property (retain) TSULocale *locale; // ivar: _locale
@property (readonly, nonatomic) TSCENamedReferenceManager *namedReferenceManager;
@property (readonly, retain, nonatomic) NSObject<TSCERefNamingProtocol> *namer;
@property (nonatomic) BOOL needsSubOwnerIDUpgrade;
@property (readonly) NSString *previousLocaleIdentifier;
@property (readonly, retain, nonatomic) NSObject<TSCERefParsingProtocol> *refParser;
@property (readonly) TSCERemoteDataStore *remoteDataStore;
@property (retain, nonatomic) TSCERewritingMinion *rewritingMinion;
@property (readonly) BOOL shouldAbortRecalculation;
@property (readonly, nonatomic) BOOL shouldSendSetNowCommand;
@property (readonly) Class superclass;
@property (readonly) TSCETablesByNameDistributor *tableNameChangeDistributor;
@property (readonly) TSCERewriteTableUIDInfo *tableUIDHistory;
@property (readonly) TSCETablesByName *tablesByName;
@property (readonly, nonatomic) NSObject<TSCEFormulaReplacing> *upgradingFormulasMinion;


+(BOOL)isPotentiallyTerminating;
+(BOOL)localVariablesEnabled;
+(NSUInteger)generateRandomSeed;
+(NSUInteger)randomSeedFromRandomLo:(int)arg0 hi:(int)arg1 ;
+(void)confirmTermination;
+(void)pauseEvaluationForPotentialTermination;
+(void)resumeEvaluationIfNotTerminated;
+(void)splitRandomSeed:(NSUInteger)arg0 intoLo:(*int)arg1 hi:(*int)arg2 ;
-(*void)dependencyTracker;
-(?)cellRefsForCategoryRefatRowUid;
-(?)formulaCoordsInRangeinOwner;
-(?)formulaCoordsReferringToRange:(?)arg0 fromOwnerskipSpanning;
-(?)formulaCoordsReferringToRangefromOwner;
-(?)unorderedCellRefsForCategoryRefatRowUid;
-(BOOL)allCellsAreClean;
-(BOOL)allCellsAreCleanNonBlocking;
-(BOOL)allOwnersRegistered;
-(BOOL)cellContainsAFormula:(struct TSCEInternalCellReference *)arg0 ;
-(BOOL)cellHasPrecedents:(struct TSCECellRef *)arg0 ;
-(BOOL)cellIsInACycle:(struct TSCECellRef *)arg0 ;
-(BOOL)cellWillBeModifiedInCurrentRecalcCycle:(struct TSCEInternalCellReference *)arg0 ;
-(BOOL)duringSubOwnerUIDUpgrade;
-(BOOL)foundConsistencyIssues;
-(BOOL)hasDateTimeVolatileFunctions;
-(BOOL)hasDisallowedHeaderIndexingForTableUID:(struct TSKUIDStruct *)arg0 ;
-(BOOL)hasFormulaAt:(struct TSCECellRef *)arg0 ;
-(BOOL)hasFormulaCellsUsingNowTodayRandom;
-(BOOL)hasMaxNumFormulas;
-(BOOL)hasRemoteDataFunctions;
-(BOOL)hasRunRecalculationALongTime;
-(BOOL)isCellReferenceDirty:(struct TSCECellRef *)arg0 ;
-(BOOL)isInCollaborationMode;
-(BOOL)isRecalculationRunning;
-(BOOL)isRecalculationStarted;
-(BOOL)ownerIsRegistered:(struct TSKUIDStruct )arg0 ;
-(BOOL)rangeIsWithinTable:(struct TSCERangeRef *)arg0 ;
-(BOOL)recalculationIsPaused;
-(BOOL)referenceIsValid:(struct TSCERangeRef *)arg0 ;
-(BOOL)referenceIsValidIncludingSheet:(struct TSCERangeRef *)arg0 ;
-(BOOL)referenceWasGuaranteedCleanAtRecalcCycleStart:(struct TSCEAnyRef *)arg0 ;
-(BOOL)shouldDelayArchiving;
-(BOOL)shouldForceRegisterAllTables;
-(BOOL)verifyAllOwnersAreKnown;
-(BOOL)verifyTableAndBodyRangesForTable:(struct TSKUIDStruct *)arg0 ;
-(CGFloat)recalcTimeInSecs;
-(NSInteger)dirtyCellCount;
-(NSUInteger)cellDependMemoryUseEstimate;
-(NSUInteger)dirtyCellCountInOwner:(struct TSKUIDStruct *)arg0 ;
-(NSUInteger)numFormulaCellsInOwner:(struct TSKUIDStruct *)arg0 ;
-(NSUInteger)numberOfCellsWithFormulas;
-(id)allCellDependenciesAsString;
-(id)allFormulaOwnersAsString;
-(id)allRangeDependenciesAsString;
-(id)allSpanningDependenciesAsString;
-(id)anyResolver;
-(id)calcEngine;
-(id)cellDependenciesAsStringForOwner:(struct TSKUIDStruct *)arg0 ;
-(id)documentLocale;
-(id)documentRoot;
-(id)emptyReferenceSetWrapper;
-(id)extendTableUIDHistoryWithRewrite:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)legacyGlobalIDStringToOwnerUIDMap;
-(id)openTransaction;
-(id)ownerForOwnerUID:(struct TSKUIDStruct )arg0 ;
-(id)ownerForUUIDBytes:(unsigned char)arg0 ;
-(id)packageLocator;
-(id)referencesToDirty;
-(id)resolverContainerMatchingName:(id)arg0 ;
-(id)resolverForCellRef:(id)arg0 ;
-(id)resolverForTableID:(unsigned short)arg0 ;
-(id)resolverForTableUID:(struct TSKUIDStruct )arg0 ;
-(id)resolverMatchingName:(id)arg0 contextResolver:(id)arg1 ;
-(id)resolverMatchingNameWithContextContainer:(id)arg0 contextContainerName:(id)arg1 ;
-(id)rewriteSpecStack;
-(id)valueGridForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 hidingActionMask:(unsigned char)arg2 error:(*id)arg3 ;
-(int)forwardRegisterOwnerWithOwnerUID:(struct TSKUIDStruct )arg0 legacyGlobalID:(id)arg1 ;
-(int)registerOwnerWithOwnerUID:(struct TSKUIDStruct )arg0 owner:(id)arg1 referenceResolver:(id)arg2 baseOwnerUID:(struct TSKUIDStruct )arg3 ownerKind:(unsigned short)arg4 ;
-(struct TSCECellCoordSet )allFormulaCoordsInOwner:(struct TSKUIDStruct *)arg0 ;
-(struct TSCECellCoordSet )cellCoordinatesNeedingExcelImportForTable:(struct TSKUIDStruct *)arg0 ;
-(struct TSCECellCoordSet )cellsInACycleInOwner:(struct TSKUIDStruct *)arg0 ;
-(struct TSCECellRef )rootCauseForErrorInCell:(struct TSCECellRef *)arg0 atRootCell:(*BOOL)arg1 ;
-(struct TSCECellRefSet )cellDependentsOfCell:(struct TSCECellRef *)arg0 ;
-(struct TSCEInternalCellRefSet )corruptCellRefs;
-(struct TSCERangeRef )aggregateRangeRefForCategoryRef:(id)arg0 ;
-(struct TSCERecalculationState )updateCalculatedPrecedents:(*void)arg0 forFormula:(id)arg1 atCellRef:(struct TSCECellRef *)arg2 withState:(struct TSCERecalculationState )arg3 ;
-(struct TSCEReferenceSet )emptyReferenceSet;
-(struct TSCEReferenceSet )precedentsOfCell:(struct TSCECellRef *)arg0 ;
-(struct TSCETableResolver *)tableOrLinkedResolverForTableUID:(struct TSKUIDStruct *)arg0 ;
-(struct TSCETableResolver *)tableResolverForRefResolver:(id)arg0 ;
-(struct TSCETableResolver *)tableResolverForTableID:(unsigned short)arg0 ;
-(struct TSCETableResolver *)tableResolverForTableUID:(struct TSKUIDStruct *)arg0 ;
-(struct TSCEValue )evaluateSynchedWithCalcEngineWithFormula:(id)arg0 evalContext:(*void)arg1 ;
-(struct TSKUIDStruct )formulaOwnerUIDForInternalFormulaOwnerID:(unsigned short)arg0 ;
-(struct TSKUIDStruct )mapOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(struct TSKUIDStruct )ownerUIDForLegacyGlobalID:(id)arg0 registeringIfNeeded:(BOOL)arg1 ;
-(struct TSKUIDStruct )uuidForTableUID:(struct TSKUIDStruct )arg0 andIndex:(unsigned int)arg1 direction:(BOOL)arg2 ;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )allRefResolverOwnerUIDs;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )categoryRefsForSpanningCategoryRef:(id)arg0 ;
-(struct vector<TSCEValue, std::allocator<TSCEValue>> )valuesForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 hidingActionMask:(unsigned char)arg2 error:(*id)arg3 ;
-(unsigned char)aggregateTypeForCategoryRef:(id)arg0 ;
-(unsigned int)delayedArchivingPriority;
-(unsigned short)internalFormulaOwnerIDForFormulaOwnerUID:(struct TSKUIDStruct )arg0 ;
-(unsigned short)ownerKindForOwnerID:(unsigned short)arg0 ;
-(unsigned short)ownerKindForOwnerUID:(struct TSKUIDStruct )arg0 ;
-(void)addAllFormulasCleanObserver:(id)arg0 ;
-(void)addCalculationStateObserver:(id)arg0 ;
-(void)addSubOwnerAliasesForUpgrade:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)assertAt:(id)arg0 nonCalcEngineException:(id)arg1 evaluatingFormula:(id)arg2 ;
-(void)assertDirtyPrecedentsCountConsistency;
-(void)beginBatchingGroupCellDirtying;
-(void)beginSuppressingWillModifyCalls;
-(void)beginTrackingNamesInTableForLegacyNRM:(struct TSKUIDStruct *)arg0 ;
-(void)beginUpgradingFormulasMode;
-(void)blockUntilRecalcIsCompleteWithTimeout:(CGFloat)arg0 ;
-(void)clearDisallowHeaderIndexingForTableUID:(struct TSKUIDStruct *)arg0 ;
-(void)clearErrorForCell:(struct TSCECellRef *)arg0 ;
-(void)clearErrorForCells:(*void)arg0 ;
-(void)clearLegacyGlobalIDs;
-(void)clearPreviousLocaleIdentifier;
-(void)clearRecalculationTimer;
-(void)closeTransaction:(id)arg0 ;
-(void)dealloc;
-(void)debugFlushAllDirtyReferences;
-(void)detectAndRepairDirtyCellsAreOnLeafQueue;
-(void)dirtyCellsForColumnRange:(struct _NSRange )arg0 fromTable:(struct TSKUIDStruct *)arg1 tableRange:(struct TSCERangeCoordinate )arg2 ;
-(void)dirtyCellsForInsertionOfColumns:(struct _NSRange )arg0 forTable:(struct TSKUIDStruct *)arg1 tableRange:(struct TSCERangeCoordinate )arg2 headerRange:(struct TSCERangeCoordinate )arg3 ;
-(void)dirtyCellsForInsertionOfRows:(struct _NSRange )arg0 forTable:(struct TSKUIDStruct *)arg1 tableRange:(struct TSCERangeCoordinate )arg2 headerRange:(struct TSCERangeCoordinate )arg3 ;
-(void)dirtyCellsForMergingRange:(struct TSCERangeCoordinate )arg0 forTable:(struct TSKUIDStruct *)arg1 headerRowRange:(struct TSCERangeCoordinate )arg2 headerColumnRange:(struct TSCERangeCoordinate )arg3 ;
-(void)dirtyCellsForRemovalOfColumns:(struct _NSRange )arg0 fromTable:(struct TSKUIDStruct *)arg1 tableRange:(struct TSCERangeCoordinate )arg2 ;
-(void)dirtyCellsForRemovalOfRows:(struct _NSRange )arg0 fromTable:(struct TSKUIDStruct *)arg1 tableRange:(struct TSCERangeCoordinate )arg2 ;
-(void)dirtyCellsForRowRange:(struct _NSRange )arg0 fromTable:(struct TSKUIDStruct *)arg1 tableRange:(struct TSCERangeCoordinate )arg2 ;
-(void)dirtyCellsForUpgrade;
-(void)documentDidLoad;
-(void)documentLocaleDidChange;
-(void)endBatchingGroupCellDirtying;
-(void)endSuppressingWillModifyCalls;
-(void)endTrackingNamesInTableForLegacyNRM:(struct TSKUIDStruct *)arg0 ;
-(void)enumerateFormulaOwnersUsingBlock:(id)arg0 ;
-(void)executeBlockWhileCalculationEngineIsNotWriting:(id)arg0 ;
-(void)headerStateOfTableChanged:(struct TSKUIDStruct )arg0 ;
-(void)headerStateOfTableChanged:(struct TSKUIDStruct )arg0 changedRows:(BOOL)arg1 ;
-(void)intendToChangePrecedent:(struct TSCECellRef *)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)markAllExternalGroupByRefsDirty:(struct TSKUIDStruct *)arg0 ;
-(void)markAllFunctionsAsDirty;
-(void)markAllVolatileFunctionsAsDirty;
-(void)markCellRefAsDirty:(struct TSCECellRef *)arg0 ;
-(void)markCellRefsAsDirty:(id)arg0 ;
-(void)markCoordsDirty:(*void)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)markDateTimeVolatileFunctionsAsDirty;
-(void)markDateTimeVolatileFunctionsAsDirtyForCurrentDateTime;
-(void)markGeometryVolatileFunctionsAsDirtyInOwner:(struct TSKUIDStruct )arg0 ;
-(void)markIndirectCallsAsDirty;
-(void)markLocaleVolatileFunctionsAsDirty;
-(void)markOnlyDependentsDirty:(struct TSCECellRef *)arg0 ;
-(void)markOwnerAsDirty:(struct TSKUIDStruct )arg0 ;
-(void)markRandomVolatileFunctionsAsDirty;
-(void)markRangeRefAsDirty:(struct TSCERangeRef *)arg0 ;
-(void)markRemoteDataVolatileFunctionsAsDirty;
-(void)markRemoteDataVolatileFunctionsAsDirtyForKeys:(id)arg0 ;
-(void)p_addApplicationNotification;
-(void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg0 ;
-(void)p_removeApplicationNotification;
-(void)pauseRecalculation;
-(void)pauseRecalculationForBlock:(id)arg0 ;
-(void)pauseRecalculationSometimeSoon;
-(void)popRewriteSpec:(id)arg0 ;
-(void)pushRewriteSpec:(id)arg0 ;
-(void)recalculateWithTimeout:(CGFloat)arg0 ;
-(void)removeAllFormulasCleanObserver:(id)arg0 ;
-(void)removeAllFormulasFromOwner:(struct TSKUIDStruct *)arg0 ;
-(void)removeCalculationStateObserver:(id)arg0 ;
-(void)removeFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)removeFormulasAt:(*void)arg0 ;
-(void)removeFormulasFromRange:(struct TSCERangeRef *)arg0 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord )arg1 inOwner:(struct TSKUIDStruct )arg2 ;
-(void)replaceFormula:(id)arg0 atCellCoord:(struct TSUCellCoord *)arg1 inOwner:(struct TSKUIDStruct *)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions )arg3 ;
-(void)replaceFormulaAt:(struct TSUCellCoord *)arg0 inOwner:(struct TSKUIDStruct *)arg1 precedents:(id)arg2 replaceOptions:(struct TSCEReplaceFormulaOptions *)arg3 ;
-(void)replaceRemoteDataKeysInterestedIn:(id)arg0 forCell:(struct TSCECellRef *)arg1 ;
-(void)resetCorruptCellRefs:(*void)arg0 ;
-(void)resetFormulaAt:(struct TSCECellRef *)arg0 ;
-(void)resumeRecalculation;
-(void)resumeRecalculationForBlock:(id)arg0 ;
-(void)rollbackTableUIDHistoryWithRewriteInfo:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)scheduleDetectAndRepairConsistencyViolations;
-(void)scheduleRepairingSpanningFormulasInOwner:(struct TSKUIDStruct *)arg0 ;
-(void)setDisallowHeaderIndexingForTableUID:(struct TSKUIDStruct *)arg0 ;
-(void)setError:(id)arg0 forCell:(struct TSCECellRef *)arg1 ;
-(void)setOwnerUIDForLegacyGlobalID:(id)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(void)setTableRange:(struct TSCERangeCoordinate )arg0 bodyRange:(struct TSCERangeCoordinate )arg1 forTableUID:(struct TSKUIDStruct *)arg2 ;
-(void)startRecalcTaskIfNecessary;
-(void)startRecalculation;
-(void)superWillModify;
-(void)unregisterOwner:(struct TSKUIDStruct )arg0 ;
-(void)upgradeToSubOwnerUIDForOwners:(id)arg0 ;
-(void)willClose;
-(void)willModify;


@end


#endif