// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPHOTOSCOLORPALETTE_H
#define NTKPHOTOSCOLORPALETTE_H

@class UIColor;


#import "NTKFaceColorPalette.h"

@interface NTKPhotosColorPalette : NTKFaceColorPalette

@property (retain, nonatomic) UIColor *monocromeRamp;


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