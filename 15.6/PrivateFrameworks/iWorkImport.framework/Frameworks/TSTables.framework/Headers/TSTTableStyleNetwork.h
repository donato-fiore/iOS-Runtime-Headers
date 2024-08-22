// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLESTYLENETWORK_H
#define TSTTABLESTYLENETWORK_H

@class TSPObject, TSWPParagraphStyle, TSWPShapeStyle;
@protocol TSTStyleProviding;


#import "TSTTableStyle.h"
#import "TSTCellStyle.h"

@interface TSTTableStyleNetwork : TSPObject <TSTStyleProviding>

 {
    int _presetIndex;
    TSTTableStyle *_tableStyle;
    TSWPParagraphStyle *_tableNameStyle;
    TSWPShapeStyle *_tableNameShapeStyle;
    vector<TSTCellStyle *, std::allocator<TSTCellStyle *>> _cellStyles;
    vector<TSWPParagraphStyle *, std::allocator<TSWPParagraphStyle *>> _textStyles;
}


@property (retain, nonatomic) TSTCellStyle *bodyCellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property (retain, nonatomic) TSTCellStyle *categoryLevel1CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel1TextStyle;
@property (retain, nonatomic) TSTCellStyle *categoryLevel2CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel2TextStyle;
@property (retain, nonatomic) TSTCellStyle *categoryLevel3CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel3TextStyle;
@property (retain, nonatomic) TSTCellStyle *categoryLevel4CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel4TextStyle;
@property (retain, nonatomic) TSTCellStyle *categoryLevel5CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel5TextStyle;
@property (retain, nonatomic) TSTCellStyle *footerRowCellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property (retain, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property (retain, nonatomic) TSTCellStyle *headerRowCellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel1CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel1TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel2CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel2TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel3CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel3TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel4CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel4TextStyle;
@property (retain, nonatomic) TSTCellStyle *labelLevel5CellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel5TextStyle;
@property (retain, nonatomic) TSTCellStyle *pivotBodySummaryColumnCellStyle;
@property (retain, nonatomic) TSTCellStyle *pivotBodySummaryRowCellStyle;
@property (retain, nonatomic) TSTCellStyle *pivotHeaderColumnSummaryCellStyle;
@property (nonatomic) NSUInteger presetID;
@property (retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (retain, nonatomic) TSTTableStyle *tableStyle;


+(NSUInteger)pivotTableStyleAreaForRowLevel:(unsigned char)arg0 columnLevel:(unsigned char)arg1 numberOfRowLevels:(NSUInteger)arg2 numberOfColumnLevels:(NSUInteger)arg3 columnIndex:(struct TSUViewColumnIndex )arg4 ;
+(NSUInteger)styleAreaForColumnType:(unsigned char)arg0 rowType:(unsigned char)arg1 forAPivotTable:(BOOL)arg2 ;
+(id)createStylesInStylesheet:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
+(id)curatedTableStylePropertySetForCrossDocumentPasteMasterComparison;
+(id)defaultTableNameShapeStyleWithContext:(id)arg0 ;
+(id)deriveBodyPivotDeEmphasisHorizontalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveBodyPivotEmphasisVerticalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveBodyPivotGroupHorizontalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveBodyPivotGroupVerticalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveCategoryBottomStrokeFromFooterRowSeparatorStroke:(id)arg0 ;
+(id)deriveCategoryInteriorStrokeFromFooterRowVerticalStroke:(id)arg0 ;
+(id)deriveCategoryTopStrokeFromFooterRowSeparatorStroke:(id)arg0 ;
+(id)deriveFooterRowPivotGroupVerticalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveHeaderColumnPivotGroupDeEmphasisStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveHeaderColumnPivotGroupHorizontalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveHeaderColumnPivotSeparatorStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveHeaderRowPivotGroupDeEmphasisStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveHeaderRowPivotGroupVerticalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)deriveHeaderRowPivotTitleStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 ;
+(id)identifiersForPresetID:(NSUInteger)arg0 ;
+(id)networkFromStyleProvider:(id)arg0 ;
+(id)networkFromStylesheet:(id)arg0 presetID:(NSUInteger)arg1 ;
+(id)networkFromTheme:(id)arg0 presetID:(NSUInteger)arg1 ;
+(id)networkFromTheme:(id)arg0 presetIndex:(NSUInteger)arg1 ;
+(id)networkWithContext:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
+(id)networkWithContext:(id)arg0 presetID:(NSUInteger)arg1 styleProvider:(id)arg2 styleMorphingBlock:(id)arg3 ;
// +(id)networkWithContext:(id)arg0 presetID:(NSUInteger)arg1 styleProvider:(id)arg2 tableStyleMorphingBlock:(id)arg3 nameStyleMorphingBlock:(unk)arg4 nameShapeStyleMorphingBlock:(id)arg5 cellStyleMorphingBlockByStyleArea:(unk)arg6 textStyleMorphingBlockByStyleArea:(id)arg7  ;
// +(id)nonValidatedNetworkWithContext:(id)arg0 presetID:(NSUInteger)arg1 styleProvider:(id)arg2 tableStyleMorphingBlock:(id)arg3 nameStyleMorphingBlock:(unk)arg4 nameShapeStyleMorphingBlock:(id)arg5 cellStyleMorphingBlockByStyleArea:(unk)arg6 textStyleMorphingBlockByStyleArea:(id)arg7  ;
+(id)p_deriveHeaderColumnPivotSeparatorAndHeaderRowPivotGroupVerticalStrokeFromTableStyle:(id)arg0 propertyMap:(id)arg1 returnHeaderRowPivotGroupVerticalStroke:(BOOL)arg2 ;
+(id)tableNameShapeStyleIDForPreset:(NSUInteger)arg0 ;
+(id)tableNameStyleIDForPreset:(NSUInteger)arg0 ;
-(*void)cellStyles;
-(*void)textStyles;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 objectComparisonBlock:(id)arg1 ;
-(BOOL)stylesInStylesheet:(id)arg0 ;
-(BOOL)valid;
-(NSUInteger)hash;
-(id)cellStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)copy;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 context:(id)arg1 ;
-(id)deriveCategoryCellStyleForTableStyleArea:(NSUInteger)arg0 connectedToStylesheet:(BOOL)arg1 ;
-(id)deriveCategoryTextStyleForTableStyleArea:(NSUInteger)arg0 connectedToStylesheet:(BOOL)arg1 ;
-(id)dictionaryWithPreset:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 fromDictionary:(id)arg1 withPreset:(NSUInteger)arg2 ;
-(id)initWithContext:(id)arg0 styleProvider:(id)arg1 ;
-(id)initWithContext:(id)arg0 styleProvider:(id)arg1 presetID:(NSUInteger)arg2 ;
-(id)networkForPivotTables;
-(id)p_deriveCategoryCellStyleForTableStyleArea:(NSUInteger)arg0 fromCellStyle:(id)arg1 connectedToStylesheet:(BOOL)arg2 ;
-(id)p_deriveCategoryTextStyleForTableStyleArea:(NSUInteger)arg0 fromTextStyle:(id)arg1 connectedToStylesheet:(BOOL)arg2 ;
-(id)p_derivePivotCellStyleFromCellStyle:(id)arg0 optionalSourceFill:(id)arg1 brightnessShift:(CGFloat)arg2 connectedToStylesheet:(BOOL)arg3 styleArea:(NSUInteger)arg4 ;
-(id)sheetFill;
-(id)styleForStyleNetworkIndex:(NSUInteger)arg0 ;
-(id)textStyleForTableStyleArea:(NSUInteger)arg0 ;
-(void)clearAndGenerateCategoryStylesConnectedToStylesheet:(BOOL)arg0 ;
-(void)clearAndGeneratePivotStylesConnectedToStylesheet:(BOOL)arg0 ;
-(void)enumerateAllStylesWithBlock:(id)arg0 ;
-(void)generateCategoryStrokesInTableStyle:(id)arg0 ;
-(void)generateCategoryStylesConnectedToStylesheet:(BOOL)arg0 ;
-(void)generatePivotStrokesInTableStyle:(id)arg0 ;
-(void)generatePivotStylesConnectedToStylesheet:(BOOL)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)maintainPivotStrokesInTableStyle:(id)arg0 fromTable:(id)arg1 ;
-(void)p_clearCategoryStyles;
-(void)p_clearPivotStyles;
-(void)p_saveToArchive:(*void)arg0 archiver:(id)arg1 isPre30Alternate:(BOOL)arg2 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCellStyle:(id)arg0 forTableStyleArea:(NSUInteger)arg1 ;
-(void)setTextStyle:(id)arg0 forTableStyleArea:(NSUInteger)arg1 ;
-(void)upgradeIfNecessary;


@end


#endif