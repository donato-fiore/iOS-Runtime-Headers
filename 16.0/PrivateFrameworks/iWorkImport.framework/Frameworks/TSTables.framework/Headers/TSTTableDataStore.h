// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATASTORE_H
#define TSTTABLEDATASTORE_H

@class TSPContainedObject, TSPLazyReference, NSMutableDictionary;
@protocol TSTCompatibilityVersionProviding, TSDContainerInfo><TSWPStorageParent;


#import "TSTTableDataList.h"
#import "TSTTableHeaderStorage.h"
#import "TSTMergeRegionMap.h"
#import "TSTTableTileStorage.h"

@interface TSTTableDataStore : TSPContainedObject <TSTCompatibilityVersionProviding>

 {
    uint8_t _iteratorRunningCount;
    ? _mergedRects;
    TSTTableDataList *_styleDataList;
    TSTTableDataList *_conditionalStyleSetDataList;
    TSTTableDataList *_stringDataList;
    TSTTableDataList *_formulaDataList;
    TSTTableDataList *_controlCellSpecDataList;
    TSTTableDataList *_formulaErrorDataList;
    TSTTableDataList *_richTextDataList;
    TSTTableDataList *_formatDataList;
    TSTTableDataList *_commentStorageDataList;
    TSTTableDataList *_importWarningSetDataList;
    TSTTableDataList *_preBNCFormatDataList;
    BOOL _foundABadDatalistKey;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (nonatomic) unsigned int cellCount; // ivar: _cellCount
@property (nonatomic) BOOL cellCountValid; // ivar: _cellCountValid
@property (retain, nonatomic) TSTTableHeaderStorage *columnHeaderStorage; // ivar: _columnHeaderStorage
@property (retain, nonatomic) TSPLazyReference *commentStorageTableReference; // ivar: _commentStorageTableReference
@property (retain, nonatomic) TSPLazyReference *conditionalStyleSetTableReference; // ivar: _conditionalStyleSetTableReference
@property (retain, nonatomic) TSPLazyReference *controlCellSpecTableReference; // ivar: _controlCellSpecTableReference
@property (retain, nonatomic) TSPLazyReference *formatTableReference; // ivar: _formatTableReference
@property (retain, nonatomic) TSPLazyReference *formulaErrorTableReference; // ivar: _formulaErrorTableReference
@property (retain, nonatomic) TSPLazyReference *formulaTableReference; // ivar: _formulaTableReference
@property (readonly, nonatomic) BOOL hasMigratableStylesInCells;
@property (retain, nonatomic) TSPLazyReference *importWarningSetTableReference; // ivar: _importWarningSetTableReference
@property (retain, nonatomic) TSTMergeRegionMap *mergedCellRanges; // ivar: _mergedCellRanges
@property (nonatomic) BOOL missingPostBNCDatalists; // ivar: _missingPostBNCDatalists
@property (readonly, nonatomic) TSTTableDataList *multipleChoiceListFormatDataList; // ivar: _multipleChoiceListFormatDataList
@property (readonly, nonatomic) NSUInteger numberOfComments;
@property (readonly, nonatomic) unsigned int numberOfConditionalStyles;
@property (readonly, nonatomic) unsigned int numberOfPopulatedCells;
@property (retain, nonatomic) NSMutableDictionary *pasteboardCustomFormatMap; // ivar: _pasteboardCustomFormatMap
@property (retain, nonatomic) TSPLazyReference *preBNCFormatTableReference; // ivar: _preBNCFormatTableReference
@property (weak, nonatomic) NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // ivar: _richTextParentInfo
@property (retain, nonatomic) TSPLazyReference *richTextTableReference; // ivar: _richTextTableReference
@property (retain, nonatomic) TSTTableHeaderStorage *rowHeaderStorage; // ivar: _rowHeaderStorage
@property (nonatomic) BOOL shouldUseWideRows;
@property (nonatomic) unsigned char storageVersionPreBNC; // ivar: _storageVersionPreBNC
@property (retain, nonatomic) TSPLazyReference *stringTableReference; // ivar: _stringTableReference
@property (retain, nonatomic) TSPLazyReference *styleTableReference; // ivar: _styleTableReference
@property (retain, nonatomic) TSTTableTileStorage *tileStorage; // ivar: _tileStorage
@property (nonatomic) BOOL upgrading; // ivar: _upgrading


-(?)mergedRects;
-(BOOL)_needToUpgradeCellStorage;
-(BOOL)auditColumnRowCellCountsReturningResult:(*id)arg0 hasUndercounts:(*BOOL)arg1 ;
-(BOOL)auditDatalistDuplicationReturningResult:(*id)arg0 ;
-(BOOL)auditRowInfoCellCountsReturningResult:(*id)arg0 ;
-(BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord )arg0 result:(*id)arg1 ;
-(BOOL)cellExistsAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)confirmRefCountsReturningResult:(*id)arg0 ;
-(BOOL)containsControlCellSpecs;
-(BOOL)containsFormulas;
-(BOOL)containsImportWarnings;
-(BOOL)getCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(BOOL)hasFormulaAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasFormulaSyntaxErrorAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)mightHaveCustomFormats;
-(BOOL)repairStyleDatalistStylesheetIfNecessary;
-(CGFloat)heightOfRowAtIndex:(unsigned int)arg0 ;
-(CGFloat)widthOfColumnAtIndex:(unsigned short)arg0 ;
-(NSUInteger)cellCountOfColumnAtIndex:(unsigned short)arg0 ;
-(NSUInteger)cellCountOfRowAtIndex:(unsigned int)arg0 ;
-(NSUInteger)defaultStylesOfColumnAtIndex:(unsigned short)arg0 outCellStyle:(*id)arg1 outTextStyle:(*id)arg2 ;
-(NSUInteger)defaultStylesOfRowAtIndex:(unsigned int)arg0 outCellStyle:(*id)arg1 outTextStyle:(*id)arg2 ;
-(id)allRichTextStorages;
-(id)cellMapForAddingPasteboardCustomFormats;
-(id)cellStyleAtCellID:(struct TSUCellCoord )arg0 ;
-(id)cellStyleOfColumnAtIndex:(unsigned short)arg0 ;
-(id)cellStyleOfRowAtIndex:(unsigned int)arg0 ;
-(id)commentStorageAtCellID:(struct TSUCellCoord )arg0 ;
-(id)commentStorageDataList;
-(id)conditionalStyleSetAtCellID:(struct TSUCellCoord )arg0 ;
-(id)conditionalStyleSetDataList;
-(id)controlCellSpecDataList;
-(id)copyWithOwner:(id)arg0 ;
-(id)formatDataList;
-(id)formatForCalcEngineAtCellID:(struct TSUCellCoord )arg0 formatIsExplicitOut:(*BOOL)arg1 refIfAvailable:(struct TSTCellStorage *)arg2 ;
-(id)formulaAtCellID:(struct TSUCellCoord )arg0 ;
-(id)formulaDataList;
-(id)formulaErrorDataList;
-(id)formulaSpecAtCellID:(struct TSUCellCoord )arg0 ;
-(id)formulaSpecForStorageRef:(struct TSTCellStorage *)arg0 ;
-(id)formulaSyntaxErrorAtCellID:(struct TSUCellCoord )arg0 ;
-(id)i_formatForDataListKey:(unsigned int)arg0 ;
-(id)i_rowInfoAtIndex:(unsigned int)arg0 ;
-(id)i_styleForDataListKey:(unsigned int)arg0 ;
-(id)i_tileStartingAtOrAfterRowIndex:(unsigned int)arg0 outTileRange:(struct _NSRange *)arg1 ;
-(id)i_tileStartingAtOrBeforeRowIndex:(unsigned int)arg0 outTileRange:(struct _NSRange *)arg1 ;
-(id)importWarningSetDataList;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 owner:(id)arg2 ;
-(id)initWithOwner:(id)arg0 ;
-(id)mapReassigningPasteboardCustomFormatKeys:(id)arg0 ;
-(id)metadataForColumnIndex:(unsigned short)arg0 hidingAction:(unsigned char)arg1 uuid:(struct TSKUIDStruct )arg2 defaultColumnWidth:(CGFloat)arg3 ;
-(id)metadataForRowIndex:(unsigned int)arg0 hidingAction:(unsigned char)arg1 uuid:(struct TSKUIDStruct )arg2 ;
-(id)p_addPasteboardCustomFormat:(id)arg0 key:(id)arg1 toDocument:(id)arg2 ;
-(id)p_cellMapForUpgradingToBraveNewCell;
-(id)p_makeALazyDatalistOfType:(int)arg0 ;
-(id)p_makeALazyDatalistOfType:(int)arg0 isNewForBNC:(BOOL)arg1 ;
-(id)p_populatedMultipleChoiceListFormat:(id)arg0 ;
-(id)p_preBNCpopulatedCustomFormat:(id)arg0 value:(CGFloat)arg1 ;
-(id)preBNCFormatDataList;
-(id)richTextDataList;
-(id)richTextStorageForCalcEngineAtCellID:(struct TSUCellCoord )arg0 refIfAvailable:(struct TSTCellStorage *)arg1 ;
-(id)stringAtCellID:(struct TSUCellCoord )arg0 ;
-(id)stringDataList;
-(id)stringForCalcEngineAtCellID:(struct TSUCellCoord )arg0 refIfAvailable:(struct TSTCellStorage *)arg1 ;
-(id)styleDataList;
-(id)textStyleAtCellID:(struct TSUCellCoord )arg0 ;
-(id)textStyleOfColumnAtIndex:(unsigned short)arg0 ;
-(id)textStyleOfRowAtIndex:(unsigned int)arg0 ;
-(struct ? )p_preBNCKeysForCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(struct ? )p_preBNCKeysForCell:(id)arg0 oldPreBNCStorageRef:(struct ? *)arg1 callWillModify:(BOOL)arg2 ;
-(struct ? )p_updatePreBNCDataListsForCurrentFormat:(id)arg0 numberFormat:(id)arg1 currencyFormat:(id)arg2 dateFormat:(id)arg3 durationFormat:(id)arg4 baseFormat:(id)arg5 customFormat:(id)arg6 stepperSliderFormat:(id)arg7 mcListFormat:(id)arg8 oldPreBNCStorageRef:(struct ? *)arg9 callWillModify:(BOOL)arg10 ;
-(struct TSCEValue )tsceValueFromCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(struct TSTCellStorage *)cellStorageRefAtCellID:(struct TSUCellCoord )arg0 ;
-(struct vector<TSTCell *, std::allocator<TSTCell *>> )accumulateCurrentCellsConcurrentlyInRow:(struct TSUModelRowIndex )arg0 rowInfo:(id)arg1 atColumns:(*void)arg2 usingCellCreationBlock:(id)arg3 ;
-(unsigned char)hidingStateOfColumnAtIndex:(unsigned short)arg0 ;
-(unsigned char)hidingStateOfRowAtIndex:(unsigned int)arg0 ;
-(unsigned char)valueTypeAtCellID:(struct TSUCellCoord )arg0 ;
-(void)_setCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormula:(BOOL)arg5 clearImportWarnings:(BOOL)arg6 richTextDOLCHint:(*BOOL)arg7 ;
-(void)assertIsNotIterating;
-(void)assertListTilesAndRows;
-(void)beginIteration;
-(void)clearPasteboardCustomFormatMap;
-(void)copyPasteboardCustomFormatsFromDataStore:(id)arg0 ;
-(void)decrementCellCountsAtCellID:(struct TSUCellCoord )arg0 ;
-(void)decrementColumnCellCount:(unsigned short)arg0 byAmount:(NSUInteger)arg1 ;
-(void)didApplyConcurrentCellMap:(id)arg0 ;
-(void)embiggenTableForUpgrade;
-(void)endIteration;
-(void)enumerateCellStoragesInRange:(struct TSUCellRect )arg0 withBlock:(id)arg1 ;
-(void)enumerateCellStoragesRowByRowToMaxID:(struct TSUCellCoord )arg0 getPreBNC:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)forceLoadHeaderStorages;
-(void)incrementCellCountsAtCellID:(struct TSUCellCoord )arg0 ;
-(void)insertColumns:(struct _NSRange )arg0 ;
-(void)insertRows:(struct _NSRange )arg0 ;
-(void)loadLazyReferencesForUpgrade;
-(void)moveColumnIndexRange:(struct _NSRange )arg0 toIndex:(unsigned short)arg1 ;
-(void)moveRowIndexRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(void)p_clearDataListEntriesForStorageRef:(struct TSTCellStorage *)arg0 cellID:(struct TSUCellCoord )arg1 ;
-(void)p_clearDataListEntriesInRange:(struct TSUCellRect )arg0 ;
-(void)p_loadDatalist:(*id)arg0 forLazyReference:(id)arg1 ;
-(void)p_loadDatalist:(*id)arg0 forLazyReference:(id)arg1 completionBlock:(id)arg2 ;
-(void)p_stashBadKey:(NSUInteger)arg0 forList:(id)arg1 ;
-(void)p_updateNumberOfPopulatedCells;
-(void)prepareToApplyConcurrentCellMap:(id)arg0 ;
-(void)removeColumns:(struct _NSRange )arg0 ;
-(void)removeRows:(struct _NSRange )arg0 ;
-(void)replaceConditionalStyleSetsUsingBlock:(id)arg0 ;
-(void)replaceFormulasUsingBlock:(id)arg0 ;
-(void)resetAllColumnRowSizes;
-(void)resetAlmostEverything;
-(void)resolveDataListKeysForCell:(id)arg0 cache:(id)arg1 suppressTransmutation:(BOOL)arg2 sourceStorageVersion:(unsigned char)arg3 ;
-(void)resolveDataListKeysForPreBNCCell:(id)arg0 suppressTransmutation:(BOOL)arg1 sourceStorageVersion:(unsigned char)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 isInTheDocument:(BOOL)arg2 ;
-(void)setCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormula:(BOOL)arg5 clearImportWarnings:(BOOL)arg6 ;
-(void)setCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormula:(BOOL)arg5 clearImportWarnings:(BOOL)arg6 doRichTextDOLC:(BOOL)arg7 ;
-(void)setCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 calculationEngine:(id)arg2 conditionalStyleOwner:(id)arg3 ignoreFormulas:(BOOL)arg4 skipDirtyingNonFormulaCells:(BOOL)arg5 doRichTextDOLC:(BOOL)arg6 ;
-(void)setCellStyle:(id)arg0 ofColumnAtIndex:(unsigned short)arg1 ;
-(void)setCellStyle:(id)arg0 ofRowAtIndex:(unsigned int)arg1 ;
-(void)setCellsConcurrently:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 calculationEngine:(id)arg2 conditionalStyleOwner:(id)arg3 ignoreFormula:(BOOL)arg4 clearImportWarnings:(BOOL)arg5 ;
-(void)setHeight:(CGFloat)arg0 ofRowAtIndex:(unsigned int)arg1 ;
-(void)setHidingState:(unsigned char)arg0 ofColumnAtIndex:(unsigned short)arg1 ;
-(void)setHidingState:(unsigned char)arg0 ofRowAtIndex:(unsigned int)arg1 ;
-(void)setStorageParentToInfo:(id)arg0 ;
-(void)setTextStyle:(id)arg0 ofColumnAtIndex:(unsigned short)arg1 ;
-(void)setTextStyle:(id)arg0 ofRowAtIndex:(unsigned int)arg1 ;
-(void)setWidth:(CGFloat)arg0 ofColumnAtIndex:(unsigned short)arg1 ;
-(void)swapRowAtIndex:(unsigned int)arg0 withRowAtIndex:(unsigned int)arg1 ;
-(void)tsceValueForCellStorageRef:(struct TSTCellStorage *)arg0 cellCoord:(struct TSUCellCoord *)arg1 hostTableUID:(struct TSKUIDStruct *)arg2 outValue:(struct TSCEValue *)arg3 ;
-(void)updateColumnHeaderAtIndex:(unsigned short)arg0 fromMetadata:(id)arg1 ;
-(void)updateCustomFormatsAtKey:(id)arg0 ;
-(void)updateDataListsConcurrentlyWithConcurrentCellMap:(id)arg0 clearImportWarnings:(BOOL)arg1 ;
-(void)updateHeaderStorageStylesWithBlock:(id)arg0 ;
-(void)updateRowHeaderAtIndex:(unsigned int)arg0 fromMetadata:(id)arg1 ;
-(void)upgradeCellFormatsU2_0;
-(void)upgradeConditionalStylesToLinkedRefWithTableUID:(struct TSKUIDStruct *)arg0 ;
-(void)upgradeDataStoreCellStorageIfNeededWithTableUID:(struct TSKUIDStruct *)arg0 conditionalStyleOwner:(id)arg1 ;


@end


#endif