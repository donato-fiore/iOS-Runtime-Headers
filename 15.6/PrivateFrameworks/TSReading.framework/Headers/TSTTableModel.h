// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEMODEL_H
#define TSTTABLEMODEL_H

@class NSString, NSArray;


#import "TSPObject.h"
#import "TSTTableDataStore.h"
#import "TSWPStorage.h"
#import "TSDFill.h"
#import "TSTCellStyle.h"
#import "TSDStroke.h"
#import "TSWPParagraphStyle.h"
#import "TSTCellDictionary.h"
#import "TSTCell.h"
#import "TSKDocumentRoot.h"
#import "TSWPShapeStyle.h"
#import "TSTTableStyle.h"

@interface TSTTableModel : TSPObject {
    TSTTableDataStore *mDataStore;
    *__CFUUID mTableID;
    *__CFUUID mFromTableID;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfHeaderRows;
    unsigned short mNumberOfHeaderColumns;
    unsigned short mNumberOfFooterRows;
    BOOL mHeaderRowsFrozen;
    BOOL mHeaderColumnsFrozen;
    unsigned short mNumberOfFilteredRows;
    CGFloat mDefaultRowHeight;
    CGFloat mDefaultColumnWidth;
    NSString *mTableName;
    BOOL mTableNameEnabled;
    CGFloat mTableNameHeight;
    BOOL mTableNameBorderEnabled;
    BOOL mRepeatingHeaderRowsEnabled;
    BOOL mRepeatingHeaderColumnsEnabled;
    NSUInteger mPresetIndex;
    BOOL mStyleApplyClearsAll;
    ? mStyles;
    _TSTDefaultCellBlock mDefaultCells;
    TSWPStorage *mDeprecatedProvider;
}


@property (readonly, nonatomic) TSDFill *backgroundFill;
@property (readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDFill *bodyFill;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property (readonly, nonatomic) TSDStroke *borderStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // ivar: mCellsPendingWrite
@property NSArray *columnWidths;
@property (readonly, nonatomic) TSTCell *defaultBodyCell;
@property (readonly, nonatomic) TSTCell *defaultFooterRowCell;
@property (readonly, nonatomic) TSTCell *defaultHeaderColumnCell;
@property (readonly, nonatomic) TSTCell *defaultHeaderRowCell;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property (readonly, nonatomic) TSDFill *footerRowsFill;
@property (readonly, nonatomic) *__CFUUID fromTableID;
@property (readonly, nonatomic) BOOL hasAlternatingRows;
@property (readonly, nonatomic) BOOL hasTableBorder;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property (readonly, nonatomic) TSDFill *headerColumnsFill;
@property (nonatomic) BOOL headerColumnsFrozen;
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property (readonly, nonatomic) TSDFill *headerRowsFill;
@property (nonatomic) BOOL headerRowsFrozen;
@property (nonatomic) unsigned short numberOfColumns;
@property (nonatomic) unsigned short numberOfFooterRows;
@property (nonatomic) unsigned short numberOfHeaderColumns;
@property (nonatomic) unsigned short numberOfHeaderRows;
@property (readonly, nonatomic) unsigned short numberOfHiddenColumns; // ivar: mNumberOfHiddenColumns
@property (readonly, nonatomic) unsigned short numberOfHiddenRows; // ivar: mNumberOfHiddenRows
@property (nonatomic) unsigned short numberOfRows;
@property (readonly, nonatomic) unsigned short numberOfUserHiddenColumns; // ivar: mNumberOfUserHiddenColumns
@property (readonly, nonatomic) unsigned short numberOfUserHiddenRows; // ivar: mNumberOfUserHiddenRows
@property (readonly, nonatomic) unsigned short numberOfVisibleBodyColumns;
@property (readonly, nonatomic) unsigned short numberOfVisibleBodyRows;
@property (readonly, nonatomic) TSDStroke *parentBorderStroke;
@property (nonatomic) NSUInteger presetIndex;
@property (nonatomic) BOOL repeatingHeaderColumnsEnabled;
@property (nonatomic) BOOL repeatingHeaderRowsEnabled;
@property NSArray *rowHeights;
@property (nonatomic) BOOL styleApplyClearsAll;
@property (readonly, nonatomic) *__CFUUID tableID;
@property (retain, nonatomic) NSString *tableName;
@property (nonatomic) BOOL tableNameBorderEnabled;
@property (readonly, nonatomic) TSDStroke *tableNameBorderStroke;
@property (nonatomic) BOOL tableNameEnabled;
@property (nonatomic) CGFloat tableNameHeight;
@property (readonly, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (readonly, nonatomic) TSTTableStyle *tableStyle;
@property (nonatomic) BOOL wasUnarchivedFromAProvidedTable; // ivar: mWasUnarchivedFromAProvidedTable


+(id)unnamedTableString;
+(struct ? )cellRangeForTableArea:(unsigned int)arg0 givenTableSize:(struct ? )arg1 numberOfHeaderRows:(unsigned short)arg2 numberOfFooterRows:(unsigned short)arg3 numberOfHeaderColumns:(unsigned short)arg4 ;
+(unsigned int)tableAreaForCellID:(struct ? )arg0 inTableWithHeaderColumns:(unsigned short)arg1 headerRows:(unsigned short)arg2 footerRows:(unsigned short)arg3 totalRows:(unsigned short)arg4 ;
-(BOOL)hasMergeRanges;
-(BOOL)isColumnHidden:(unsigned char)arg0 forAction:(int)arg1 ;
-(BOOL)isRowHidden:(unsigned short)arg0 forAction:(int)arg1 ;
-(BOOL)useBandedFill;
-(id)allRichTextPayloadStorages;
-(id)bandedFillObject;
-(id)cellRegionWithConditionalStyleMatchingCell:(struct ? )arg0 ;
-(id)dataStore;
-(id)defaultCellForTableArea:(unsigned int)arg0 ;
-(id)defaultCellStyleForTableArea:(unsigned int)arg0 ;
-(id)defaultTextStyleForTableArea:(unsigned int)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 fromSourceModel:(id)arg1 region:(id)arg2 tableInfo:(id)arg3 ;
-(id)initWithContext:(id)arg0 rows:(unsigned short)arg1 columns:(unsigned short)arg2 styles:(id)arg3 tableInfo:(id)arg4 ;
-(id)mergedGridIndicesForDirection:(int)arg0 ;
-(int)defaultCell:(id)arg0 forTableArea:(unsigned int)arg1 ;
-(int)hidingStateForColumn:(unsigned char)arg0 ;
-(int)hidingStateForRow:(unsigned short)arg0 ;
-(struct ? )bodyColumnRange;
-(struct ? )bodyRange;
-(struct ? )bodyRowRange;
-(struct ? )cellRangeForTableArea:(unsigned int)arg0 ;
-(struct ? )footerRowRange;
-(struct ? )headerColumnRange;
-(struct ? )headerRowRange;
-(struct ? )minPopulatedCellRange;
-(struct ? )range;
-(unsigned int)tableAreaForCellID:(struct ? )arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)defaultStrokesForCellID:(struct ? )arg0 inTableWithHeaderColumns:(unsigned short)arg1 headerRows:(unsigned short)arg2 footerRows:(unsigned short)arg3 totalColumns:(unsigned short)arg4 totalRows:(unsigned short)arg5 tableArea:(unsigned int)arg6 outTopStroke:(*id)arg7 outLeftStroke:(*id)arg8 outBottomStroke:(*id)arg9 outRightStroke:(*id)arg10 ;
-(void)defaultStrokesForCellID:(struct ? )arg0 outTopStroke:(*id)arg1 outLeftStroke:(*id)arg2 outBottomStroke:(*id)arg3 outRightStroke:(*id)arg4 ;
-(void)mapTableStylesToStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)moveCalcEngineReferencesFromSourceTable:(struct __CFUUID *)arg0 sourceRange:(struct ? )arg1 sourceOffset:(struct ? )arg2 ;
-(void)p_fetchCellHoldingReadLock:(*void)arg0 returnCode:(*void)arg1 ;
-(void)p_releaseExistingDefaultStyles;
-(void)p_scaleStrokeFromProperty:(int)arg0 style:(id)arg1 pmap:(id)arg2 scale:(CGFloat)arg3 ;
-(void)p_scaleStrokesOnCell:(id)arg0 atCellID:(struct ? )arg1 transformedObjects:(id)arg2 scale:(CGFloat)arg3 ;
-(void)private_validateMergeCellsPedantically;
-(void)resetStyles:(id)arg0 ;
-(void)setDrawableIsBeingCopied:(BOOL)arg0 ;
-(void)setHeight:(CGFloat)arg0 ofRow:(unsigned short)arg1 ;
-(void)setStorageParentToInfo:(id)arg0 ;
-(void)setWidth:(CGFloat)arg0 ofColumn:(unsigned char)arg1 ;
-(void)setupDefaultCells;
-(void)transformStrokes:(struct CGAffineTransform )arg0 transformedObjects:(id)arg1 inBounds:(struct CGRect )arg2 ;
-(void)upgradeFromPreUFF;
-(void)validate;
-(void)validateStyles;


@end


#endif