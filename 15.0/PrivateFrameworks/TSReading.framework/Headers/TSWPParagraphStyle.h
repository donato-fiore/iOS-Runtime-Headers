// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPPARAGRAPHSTYLE_H
#define TSWPPARAGRAPHSTYLE_H

@class NSString;
@protocol TSSPreset;


#import "TSSStyle.h"

@interface TSWPParagraphStyle : TSSStyle <TSSPreset>

 {
    *void _coreTextParagraphStyle;
    *__CFDictionary _styleCache;
    *__CFDictionary _scalePercentStyleCaches;
}


@property (readonly, nonatomic) NSString *presetKind;


+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultPropertyMap;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)deprecatedProperties;
+(id)nonEmphasisParagraphProperties;
+(id)p_normalDecimalSeparator;
+(id)paragraphProperties;
+(id)paragraphPropertiesAllowingNSNull;
+(id)presetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)styleSummaryForPropertyMap:(id)arg0 ;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(void)initialize;
-(BOOL)transformsFontSizes;
-(NSUInteger)p_lineBoundsOptions;
-(SEL)mapThemePropertyMapSelector;
-(char)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg0 ;
-(id)contentTag;
-(id)followingParagraphStyle;
-(id)fullPropertyMap;
-(id)initialListStyle;
-(id)styleSummary;
-(struct __CFDictionary *)getTypesetterAttributes:(id)arg0 scalePercent:(NSUInteger)arg1 isRightToLeft:(BOOL)arg2 ;
-(struct __CFDictionary *)p_newCoreTextCharacterStyle:(id)arg0 allowLigatures:(BOOL)arg1 scalePercent:(NSUInteger)arg2 ;
-(struct __CTFont *)findCachedFontForCharacterStyle:(id)arg0 scalePercent:(NSUInteger)arg1 ;
-(struct __CTParagraphStyle *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg0 writingDirection:(int)arg1 lineBoundsOptions:(NSUInteger)arg2 ;
-(void)clearStyleCaches;
-(void)dealloc;
-(void)localizeForBidi:(BOOL)arg0 ;
-(void)localizeForRightToLeft;
-(void)setInitialListStyle:(id)arg0 ;
-(void)setOverridePropertyMap:(id)arg0 ;


@end


#endif