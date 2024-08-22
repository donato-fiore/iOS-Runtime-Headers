// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLESTYLENETWORK_H
#define TSTTABLESTYLENETWORK_H

@protocol NSFastEnumeration;


#import "TSPObject.h"
#import "TSTTableStyle.h"
#import "TSTCellStyle.h"
#import "TSWPParagraphStyle.h"
#import "TSWPShapeStyle.h"

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration>

 {
    NSUInteger mPresetIndex;
    TSTTableStyle *mTableStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSTCellStyle *mBodyCellStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSWPShapeStyle *mTableNameShapeStyle;
}


@property (readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property (readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property (readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property (readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property (nonatomic) NSUInteger presetIndex;
@property (retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (retain, nonatomic) TSTTableStyle *tableStyle;


+(id)createStylesInStylesheet:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
+(id)defaultTableNameShapeStyleWithContext:(id)arg0 ;
+(id)identifiersForPresetIndex:(NSUInteger)arg0 ;
+(id)networkFromStylesheet:(id)arg0 presetIndex:(NSUInteger)arg1 ;
+(id)networkFromTableModel:(id)arg0 ;
+(id)networkFromTheme:(id)arg0 presetIndex:(NSUInteger)arg1 ;
+(id)networkWithContext:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
+(id)tableNameShapeStyleIDForPreset:(NSUInteger)arg0 ;
+(id)tableNameStyleIDForPreset:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)stylesInStylesheet:(id)arg0 ;
-(BOOL)valid;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)cellStyleForTableArea:(unsigned int)arg0 ;
-(id)copy;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 context:(id)arg1 ;
-(id)dictionaryWithPreset:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 fromArray:(id)arg1 presetIndex:(NSUInteger)arg2 ;
-(id)initWithContext:(id)arg0 fromDictionary:(id)arg1 withPreset:(NSUInteger)arg2 ;
-(id)styleArray;
-(id)textStyleForTableArea:(unsigned int)arg0 ;
-(void)dealloc;
-(void)setCellStyle:(id)arg0 forTableArea:(unsigned int)arg1 ;
-(void)setStylesFromTableModel:(id)arg0 ;
-(void)setTextStyle:(id)arg0 forTableArea:(unsigned int)arg1 ;


@end


#endif