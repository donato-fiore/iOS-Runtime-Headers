// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKPHOTOSCOLORPALETTE_H
#define NTKPHOTOSCOLORPALETTE_H

@class UIColor;


#import "NTKFaceColorPalette.h"

@interface NTKPhotosColorPalette : NTKFaceColorPalette

@property (readonly, nonatomic) UIColor *monocolorRampColor;


+(void)applyColorRamp:(id)arg0 colorRampAmount:(CGFloat)arg1 monochromeColorMatrix:(id)arg2 toView:(id)arg3 ;
+(void)colorRampForMonochromeColorMatrix:(id)arg0 fromPalette:(id)arg1 toPalette:(id)arg2 transitionFraction:(CGFloat)arg3 completion:(id)arg4 ;
+(void)removeColorRampFromView:(id)arg0 ;
-(BOOL)isOriginalColor;
-(id)colorRampImage;
-(id)colorRampsIndex;
-(id)colorRampsIndexByColorName;
-(id)imageAsset;
-(id)monocolorRampImage;
-(id)swatchImageForSize:(struct CGSize )arg0 ;
-(id)swatchPrimaryColor;


@end


#endif