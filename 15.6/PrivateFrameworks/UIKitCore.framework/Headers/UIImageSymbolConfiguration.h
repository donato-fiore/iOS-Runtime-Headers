// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIIMAGESYMBOLCONFIGURATION_H
#define UIIMAGESYMBOLCONFIGURATION_H

@class NSArray, NSDictionary, NSString;


#import "UIImageConfiguration.h"

@interface UIImageSymbolConfiguration : UIImageConfiguration {
    CGFloat _pointSize;
    ? _configFlags;
}


@property (readonly, nonatomic) NSArray *_colors; // ivar: _colors
@property (readonly, nonatomic) NSDictionary *_namedColorStyles; // ivar: _namedColorStyles
@property (readonly, nonatomic) CGFloat customFontPointSizeMultiplier; // ivar: _customFontPointSizeMultiplier
@property (readonly, nonatomic) CGFloat pointSizeForScalingWithTextStyle;
@property (readonly, nonatomic) NSInteger scale; // ivar: _scale
@property (readonly, copy, nonatomic) NSString *textStyle; // ivar: _textStyle
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
+(id)_configurationWithHierarchicalColors:(id)arg0 ;
+(id)_configurationWithNamedColorStyles:(id)arg0 ;
+(id)_defaultConfiguration;
+(id)configurationPreferringMulticolor;
+(id)configurationWithFont:(id)arg0 ;
+(id)configurationWithFont:(id)arg0 scale:(NSInteger)arg1 ;
+(id)configurationWithHierarchicalColor:(id)arg0 ;
+(id)configurationWithPaletteColors:(id)arg0 ;
+(id)configurationWithPointSize:(CGFloat)arg0 ;
+(id)configurationWithPointSize:(CGFloat)arg0 weight:(NSInteger)arg1 ;
+(id)configurationWithPointSize:(CGFloat)arg0 weight:(NSInteger)arg1 scale:(NSInteger)arg2 ;
+(id)configurationWithScale:(NSInteger)arg0 ;
+(id)configurationWithTextStyle:(id)arg0 ;
+(id)configurationWithTextStyle:(id)arg0 scale:(NSInteger)arg1 ;
+(id)configurationWithWeight:(NSInteger)arg0 ;
+(id)defaultConfiguration;
+(id)unspecifiedConfiguration;
-(BOOL)_hasColorConfigurationWithTintColor;
-(BOOL)_hasSpecifiedScale;
-(BOOL)_isUnspecified;
-(BOOL)_shouldApplyConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(BOOL)isEquivalentToConfiguration:(id)arg0 ;
-(BOOL)isSimilarToConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)_configurationByReplacingColors:(id)arg0 ;
-(id)_hierarchicalColorForLayerLevel:(NSInteger)arg0 traitCollection:(id)arg1 ;
-(id)_initWithTraitCollection:(id)arg0 ;
-(id)_paletteColorsWithTraitCollection:(id)arg0 ;
-(id)configurationWithoutPointSizeAndWeight;
-(id)configurationWithoutScale;
-(id)configurationWithoutTextStyle;
-(id)configurationWithoutWeight;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_applyConfigurationValuesTo:(id)arg0 ;
-(void)_deriveGlyphSize:(*NSInteger)arg0 weight:(*NSInteger)arg1 pointSize:(*CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif