// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTSUMMARYMODEL_H
#define TSTSUMMARYMODEL_H

@class TSPObject;
@protocol TSTTableTileCreating, TSTGroupByChangeProtocol;


#import "TSTCategoryAggregateFormulaOwner.h"
#import "TSTColumnRowUIDMap.h"
#import "TSTTableDataStore.h"
#import "TSTTableGroupSortOrderUID.h"
#import "TSTSummaryCellVendor.h"
#import "TSTTableInfo.h"

@interface TSTSummaryModel : TSPObject <TSTTableTileCreating, TSTGroupByChangeProtocol>



@property (readonly, nonatomic) TSTCategoryAggregateFormulaOwner *aggregateFormulaOwner; // ivar: _aggregateFormulaOwner
@property (nonatomic) TSKUIDStruct aggregateFormulaOwnerUID; // ivar: _aggregateFormulaOwnerUID
@property (nonatomic) CGFloat categoryColumnWidth; // ivar: _categoryColumnWidth
@property (retain, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap; // ivar: _columnRowUIDMap
@property (readonly, nonatomic) TSTTableDataStore *dataStore; // ivar: _dataStore
@property (retain, nonatomic) TSTTableGroupSortOrderUID *groupSortOrder; // ivar: _groupSortOrder
@property (readonly, nonatomic) BOOL hasMigratableStylesInCells;
@property (readonly, nonatomic) *void labelRowHeightList; // ivar: _labelRowHeightList
@property (readonly, nonatomic) *void labelRowVisibilityList; // ivar: _labelRowVisibilityList
@property (nonatomic) BOOL needsFormulaReset; // ivar: _needsFormulaReset
@property (readonly, nonatomic) TSUModelColumnIndex numberOfColumns;
@property (readonly, nonatomic) TSUModelRowIndex numberOfRows;
@property (nonatomic) BOOL shouldUseWideRows;
@property (readonly, nonatomic) TSTSummaryCellVendor *summaryCellVendor; // ivar: _summaryCellVendor
@property (readonly, nonatomic) *void summaryRowHeightList; // ivar: _summaryRowHeightList
@property (readonly, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo


+(unsigned char)categoryLevelForTableStyleArea:(NSUInteger)arg0 ;
-(BOOL)cellExistsAtCellCoord:(struct TSUModelCellCoord )arg0 ;
-(BOOL)hasFormulaAtCellCoord:(struct TSUModelCellCoord )arg0 ;
-(CGFloat)heightOfRowAtIndex:(struct TSUModelRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(CGFloat)labelRowHeightAtCategoryLevel:(unsigned char)arg0 ;
-(CGFloat)summaryRowHeightAtCategoryLevel:(unsigned char)arg0 ;
-(CGFloat)widthOfColumnAtIndex:(struct TSUModelColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(NSUInteger)labelRowVisibilityAtCategoryLevel:(unsigned char)arg0 ;
-(NSUInteger)numberOfPopulatedCells;
-(NSUInteger)p_tableStyleAreaForCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)allRichTextStorages;
-(id)cellStyleAtModelCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)currentState;
-(id)defaultCellStyleForCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)defaultTextStyleForCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)description;
-(id)explicitFormatOfKind:(unsigned char)arg0 atModelCellCoord:(struct TSUModelCellCoord )arg1 currencyIsMostRecentlySet:(*BOOL)arg2 ;
-(id)formulaAtCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 tableInfo:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)mapReassigningPasteboardCustomFormatKeys:(id)arg0 ;
-(id)metadataForColumnIndex:(struct TSUModelColumnIndex )arg0 hidingAction:(unsigned char)arg1 ;
-(id)metadataForRowIndex:(struct TSUModelRowIndex )arg0 hidingAction:(unsigned char)arg1 ;
-(id)newCell;
-(id)textStyleAtModelCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(int)getCell:(id)arg0 atCellCoord:(struct TSUModelCellCoord )arg1 ;
-(int)getValue:(struct TSCEValue *)arg0 atCellID:(struct TSUModelCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(int)insertColumnsAtIndex:(struct TSUModelColumnIndex )arg0 metadatas:(id)arg1 ;
-(int)p_setCategoryCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 formulaReplacer:(id)arg2 ;
-(int)p_setPivotCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 formulaReplacer:(id)arg2 ;
-(int)setCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)setCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 formulaReplacer:(id)arg2 ;
-(int)setFormulaResultCellsWithCellMap:(id)arg0 ;
-(struct TSUModelCellRect )range;
-(unsigned char)cellValueTypeAtSummaryModelCoord:(struct TSUModelCellCoord )arg0 ;
-(unsigned char)p_ColumnCategoryLevelForCellCoord:(struct TSUModelCellCoord )arg0 ;
-(unsigned char)p_RowCategoryLevelForCellCoord:(struct TSUModelCellCoord )arg0 isLabel:(*BOOL)arg1 ;
-(void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)copyPasteboardCustomFormatsFromTableModel:(id)arg0 ;
-(void)didAddRowUID:(struct TSKUIDStruct )arg0 toGroup:(id)arg1 ;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg0 ;
-(void)didRemoveGroup:(id)arg0 ;
-(void)didRemoveRowUID:(struct TSKUIDStruct )arg0 fromGroup:(id)arg1 ;
-(void)endOfGroupingChangesBatch;
-(void)enumerateCellsForSOSSerializationWithBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)makePasteboardCustomFormatList;
-(void)p_removeRows:(struct _NSRange )arg0 ;
-(void)registerAllFormulasWithCalculationEngine:(id)arg0 wasCrossDocumentPaste:(BOOL)arg1 ;
-(void)removeCategoryColumnCellsForRows:(*void)arg0 ;
-(void)removeColumnsAtSummaryIndexes:(id)arg0 ;
-(void)resetForCategories;
-(void)resetForCategoriesWithForce:(BOOL)arg0 ;
-(void)resetForPivotingWithRowUids:(*void)arg0 columnUids:(*void)arg1 ;
-(void)runChange:(id)arg0 withSummaryChangeState:(id)arg1 migrationHelper:(id)arg2 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setAggregateType:(unsigned char)arg0 forColumnUID:(struct TSKUIDStruct *)arg1 atGroupLevel:(unsigned char)arg2 ;
-(void)setHeight:(CGFloat)arg0 ofRowAtIndex:(struct TSUModelRowIndex )arg1 ;
-(void)setLabelRowHeight:(CGFloat)arg0 atCategoryLevel:(unsigned char)arg1 ;
-(void)setLabelRowVisibility:(NSUInteger)arg0 atCategoryLevel:(unsigned char)arg1 ;
-(void)setStorageParentToInfo:(id)arg0 ;
-(void)setSummaryRowHeight:(CGFloat)arg0 atCategoryLevel:(unsigned char)arg1 ;
-(void)setWidth:(CGFloat)arg0 ofColumnAtIndex:(struct TSUModelColumnIndex )arg1 ;
-(void)setupReceiver;
-(void)startOfGroupingChangesBatch;
-(void)upgradeDuringDocumentUpgradeIfNeeded:(NSUInteger)arg0 tableInfo:(id)arg1 ;
-(void)upgradeFormulasForGroupByUIDChange;
-(void)willRemoveGroup:(id)arg0 ;


@end


#endif