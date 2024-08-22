// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOLORPRESET_H
#define AVTCOLORPRESET_H

@class NSDictionary, NSString, UIImage;

#import <Foundation/Foundation.h>

#import "AVTVaryingColor.h"
#import "AVTMaterial.h"

@interface AVTColorPreset : NSObject {
    NSInteger _category;
    NSDictionary *_propertyColors;
    NSDictionary *_derivedColors;
    AVTVaryingColor *_previewColor;
    AVTVaryingColor *_previewAccentColor;
    NSUInteger _previewAccentType;
    float _variation;
    AVTMaterial *_material;
}


@property (readonly) NSInteger category;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) UIImage *thumbnail;
@property (readonly) float variation;


+(id)_colorPresetsForCategory:(NSInteger)arg0 palette:(id)arg1 ;
+(id)colorPresetWithName:(id)arg0 category:(NSInteger)arg1 ;
+(id)colorPresetWithName:(id)arg0 category:(NSInteger)arg1 colorIndex:(NSUInteger)arg2 variation:(float)arg3 ;
+(id)colorPresetWithName:(id)arg0 category:(NSInteger)arg1 variation:(float)arg2 ;
+(id)colorPresetsForCategory:(NSInteger)arg0 ;
+(id)colorPresetsForCategory:(NSInteger)arg0 colorIndex:(NSUInteger)arg1 ;
+(id)fallbackColorPresetForNilPresetAndCategory:(NSInteger)arg0 colorIndex:(NSUInteger)arg1 ;
+(id)secondaryColorPresetWithName:(id)arg0 category:(NSInteger)arg1 variation:(float)arg2 ;
+(id)secondaryColorPresetsForCategory:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNaturalLipsColor;
-(BOOL)shouldBlendWithSkinColor;
-(id)baseColor;
-(id)colorPresetWithVariation:(float)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)gradientLayerWithRangeMin:(float)arg0 max:(float)arg1 ;
-(id)gradientLayerWithRangeMin:(float)arg0 max:(float)arg1 withSkinColor:(id)arg2 ;
-(id)initWithCategory:(NSInteger)arg0 description:(id)arg1 ;
-(id)makeMaterial;
-(id)previewAccentColor;
-(id)previewColor;
-(void)enumerateDerivedColorPresetsUsingBlock:(id)arg0 ;
-(void)renderColorIntoCALayer:(id)arg0 withSkinColor:(id)arg1 ;


@end


#endif