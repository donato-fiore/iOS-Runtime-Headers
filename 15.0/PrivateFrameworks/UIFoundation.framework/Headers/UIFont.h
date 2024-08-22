// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFONT_H
#define UIFONT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIFontDescriptor.h"

@interface UIFont : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat ascender;
@property (readonly, nonatomic) CGFloat capHeight;
@property (readonly, nonatomic) CGFloat descender;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) CGFloat leading;
@property (readonly, nonatomic) CGFloat lineHeight;
@property (readonly, nonatomic) CGFloat maximumPointSizeAfterScaling;
@property (readonly, nonatomic) CGFloat pointSize;
@property (readonly, nonatomic) CGFloat pointSizeForScaling;
@property (readonly, nonatomic) NSString *textStyleForScaling;
@property (readonly, nonatomic) CGFloat xHeight;


+(BOOL)_isSupportedDynamicFontTextStyle:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)_pointSize:(CGFloat)arg0 scaledLikeTextStyle:(id)arg1 maximumPointSize:(CGFloat)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(CGFloat)_pointSize:(CGFloat)arg0 scaledLikeTextStyle:(id)arg1 maximumPointSize:(CGFloat)arg2 compatibleWithTraitCollection:(id)arg3 roundSize:(BOOL)arg4 ;
+(CGFloat)_readableWidth;
+(CGFloat)buttonFontSize;
+(CGFloat)labelFontSize;
+(CGFloat)smallSystemFontSize;
+(CGFloat)systemFontSize;
+(id)_fontWithDescriptor:(id)arg0 size:(CGFloat)arg1 textStyleForScaling:(id)arg2 pointSizeForScaling:(CGFloat)arg3 maximumPointSizeAfterScaling:(CGFloat)arg4 forIB:(BOOL)arg5 legibilityWeight:(NSInteger)arg6 ;
+(id)_fontWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)_lightSystemFontOfSize:(CGFloat)arg0 ;
+(id)_opticalBoldSystemFontOfSize:(CGFloat)arg0 ;
+(id)_opticalSystemFontOfSize:(CGFloat)arg0 ;
+(id)_preferredFontForTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 ;
+(id)_preferredFontForTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 design:(id)arg2 weight:(CGFloat)arg3 ;
+(id)_preferredFontForTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 weight:(CGFloat)arg2 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 variant:(NSInteger)arg2 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 variant:(NSInteger)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 variant:(NSInteger)arg2 maximumContentSizeCategory:(id)arg3 compatibleWithTraitCollection:(id)arg4 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 variant:(NSInteger)arg2 maximumContentSizeCategory:(id)arg3 compatibleWithTraitCollection:(id)arg4 pointSize:(CGFloat)arg5 pointSizeForScaling:(CGFloat)arg6 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 weight:(CGFloat)arg2 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 weight:(CGFloat)arg2 maximumContentSizeCategory:(id)arg3 compatibleWithTraitCollection:(id)arg4 ;
+(id)_preferredFontForTextStyle:(id)arg0 design:(id)arg1 weight:(id)arg2 symbolicTraits:(unsigned int)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5 pointSize:(CGFloat)arg6 pointSizeForScaling:(CGFloat)arg7 ;
+(id)_preferredFontForTextStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 ;
+(id)_preferredFontForTextStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)_preferredFontForTextStyle:(id)arg0 maximumPointSize:(CGFloat)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)_preferredFontForTextStyle:(id)arg0 variant:(NSInteger)arg1 ;
+(id)_preferredFontForTextStyle:(id)arg0 variant:(NSInteger)arg1 maximumContentSizeCategory:(id)arg2 ;
+(id)_preferredFontForTextStyle:(id)arg0 weight:(CGFloat)arg1 ;
+(id)_sharedFontCache;
+(id)_sharedZeroPointFont;
+(id)_supportedDynamicFontStyles;
+(id)_systemFontsOfSize:(CGFloat)arg0 traits:(int)arg1 ;
+(id)_thinSystemFontOfSize:(CGFloat)arg0 ;
+(id)_ultraLightSystemFontOfSize:(CGFloat)arg0 ;
+(id)boldSystemFontOfSize:(CGFloat)arg0 ;
+(id)classFallbacksForKeyedArchiver;
+(id)defaultFontForTextStyle:(id)arg0 ;
+(id)fontNamesForFamilyName:(id)arg0 ;
+(id)fontWithDescriptor:(id)arg0 size:(CGFloat)arg1 ;
+(id)fontWithFamilyName:(id)arg0 traits:(int)arg1 size:(CGFloat)arg2 ;
+(id)fontWithMarkupDescription:(id)arg0 ;
+(id)fontWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)fontWithName:(id)arg0 size:(CGFloat)arg1 traits:(int)arg2 ;
+(id)ib_preferredFontForTextStyle:(id)arg0 ;
+(id)italicSystemFontOfSize:(CGFloat)arg0 ;
+(id)monospacedDigitSystemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)monospacedSystemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)preferredFontForTextStyle:(id)arg0 ;
+(id)preferredFontForTextStyle:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)preferredFontForUsage:(id)arg0 ;
+(id)preferredFontForUsage:(id)arg0 contentSizeCategoryName:(id)arg1 ;
+(id)systemFontOfSize:(CGFloat)arg0 ;
+(id)systemFontOfSize:(CGFloat)arg0 traits:(int)arg1 ;
+(id)systemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)systemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 design:(id)arg2 ;
+(id)userFontOfSize:(CGFloat)arg0 ;
+(void)_evictAllItemsFromFontAndFontDescriptorCaches;
+(void)_setButtonFontSize:(CGFloat)arg0 ;
+(void)_setLabelFontSize:(CGFloat)arg0 ;
+(void)_setSmallSystemFontSize:(CGFloat)arg0 ;
+(void)_setSystemFontSize:(CGFloat)arg0 ;
-(BOOL)__isSystemFont;
-(BOOL)_getLatin1Glyphs:(**unsigned short)arg0 advanceWidths:(**CGFloat)arg1 ;
-(BOOL)_hasColorGlyphs;
-(BOOL)_isDefaultFace;
-(BOOL)_isHiraginoFont;
-(BOOL)_isTextStyleFont;
-(BOOL)_isUIFont;
-(BOOL)isFixedPitch;
-(BOOL)isIBFontMetricsScaledFont;
-(BOOL)isIBTextStyleFont;
-(BOOL)isSystemFont;
-(BOOL)isVertical;
-(CGFloat)_ascenderDeltaForBehavior:(NSInteger)arg0 ;
-(CGFloat)_baseLineHeightForFont:(BOOL)arg0 ;
-(CGFloat)_bodyLeading;
-(CGFloat)_defaultLineHeightForUILayout;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(CGFloat)_totalAdvancementForNativeGlyphs:(*unsigned short)arg0 count:(NSInteger)arg1 ;
-(CGFloat)readableWidth;
-(CGFloat)underlinePosition;
-(CGFloat)underlineThickness;
-(Class)classForCoder;
-(NSUInteger)getCaretPositions:(*CGFloat)arg0 forGlyph:(unsigned int)arg1 maximumLength:(NSUInteger)arg2 ;
-(NSUInteger)mostCompatibleStringEncoding;
-(NSUInteger)numberOfGlyphs;
-(NSUInteger)renderingMode;
-(id)_alternateSystemFonts;
-(id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg0 ;
-(id)_fontAdjustedForCurrentContentSizeCategory;
-(id)_fontScaledByScaleFactor:(CGFloat)arg0 ;
-(id)_fontScaledLikeTextStyle:(id)arg0 maximumPointSize:(CGFloat)arg1 compatibleWithTraitCollection:(id)arg2 forIB:(BOOL)arg3 ;
-(id)_kernOverride;
-(id)_textStyle;
-(id)bestMatchingFontForCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 attributes:(id)arg2 actualCoveredLength:(*NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coveredCharacterSet;
-(id)description;
-(id)familyNameForCSSFontFamilyValueForWebKit:(BOOL)arg0 ;
-(id)fontWithSize:(CGFloat)arg0 ;
-(id)htmlMarkupDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFamilyName:(id)arg0 traits:(int)arg1 size:(CGFloat)arg2 ;
-(id)initWithMarkupDescription:(id)arg0 ;
-(id)initWithName:(id)arg0 size:(CGFloat)arg1 ;
-(id)lastResortFont;
-(id)markupDescription;
-(id)markupDescriptionForWebKit:(BOOL)arg0 pointSize:(float)arg1 sizeUnit:(id)arg2 ;
-(id)screenFontWithRenderingMode:(NSUInteger)arg0 ;
-(id)verticalFont;
-(int)traits;
-(struct CGAffineTransform )_textMatrixTransformForContext:(id)arg0 ;
-(struct CGFont *)_backingCGSFont;
-(struct CGRect )boundingRectForFont;
-(struct CGSize )advancementForGlyph:(unsigned short)arg0 ;
-(struct __CTFont *)CTFont;
-(unsigned int)_defaultGlyphForChar:(unsigned short)arg0 ;
-(unsigned int)hyphenGlyphForLocale:(id)arg0 ;
-(unsigned short)glyphWithName:(id)arg0 ;
-(void)applyToGraphicsContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAdvancements:(struct CGSize *)arg0 forCGGlyphs:(*unsigned short)arg1 count:(NSUInteger)arg2 ;
-(void)getBoundingRects:(struct CGRect *)arg0 forCGGlyphs:(*unsigned short)arg1 count:(NSUInteger)arg2 ;
-(void)getVerticalOriginTranslations:(struct CGSize *)arg0 forCGGlyphs:(*unsigned short)arg1 count:(NSUInteger)arg2 ;
-(void)setInContext:(struct CGContext *)arg0 ;


@end


#endif