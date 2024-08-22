// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIGRADIENTWALLPAPERVIEW_H
#define PBUIGRADIENTWALLPAPERVIEW_H



#import "PBUIWallpaperView.h"
#import "PBUIWallpaperGradient.h"

@interface PBUIGradientWallpaperView : PBUIWallpaperView

@property (readonly, copy, nonatomic) PBUIWallpaperGradient *wallpaperGradient; // ivar: _wallpaperGradient


+(Class)layerClass;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg0 forVariant:(NSInteger)arg1 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 contrastWithinBoxes:(*CGFloat)arg1 contrastBetweenBoxes:(*CGFloat)arg2 ;
-(NSInteger)wallpaperType;
-(id)_computeAverageColor;
-(id)averageColorInRect:(struct CGRect )arg0 withSmudgeRadius:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;


@end


#endif