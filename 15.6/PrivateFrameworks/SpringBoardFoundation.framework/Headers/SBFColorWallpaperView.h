// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFCOLORWALLPAPERVIEW_H
#define SBFCOLORWALLPAPERVIEW_H

@class UIImage, UIColor;


#import "SBFWallpaperView.h"

@interface SBFColorWallpaperView : SBFWallpaperView

@property (retain, nonatomic) UIImage *cachedSnapshotImage; // ivar: _cachedSnapshotImage
@property (readonly, nonatomic) UIColor *wallpaperColor;


-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg0 forVariant:(NSInteger)arg1 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 contrastWithinBoxes:(*CGFloat)arg1 contrastBetweenBoxes:(*CGFloat)arg2 ;
-(NSInteger)wallpaperType;
-(id)_computeAverageColor;
-(id)averageColorInRect:(struct CGRect )arg0 withSmudgeRadius:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)snapshotImage;


@end


#endif