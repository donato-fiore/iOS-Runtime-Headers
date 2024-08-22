// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFWALLPAPERPARALLAXSETTINGS_H
#define SBFWALLPAPERPARALLAXSETTINGS_H



#import "SBFParallaxSettings.h"

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings

@property CGFloat overhangX; // ivar: _overhangX
@property CGFloat overhangY; // ivar: _overhangY
@property CGFloat perspectiveTransform; // ivar: _perspectiveTransform


+(CGFloat)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize )arg0 parallaxFactor:(CGFloat)arg1 ;
+(CGFloat)minimumZoomScaleForWallpaperSize:(struct CGSize )arg0 parallaxFactor:(CGFloat)arg1 deviceType:(NSInteger)arg2 ;
+(NSInteger)_currentDeviceType;
+(id)settingsControllerModule;
+(struct CGSize )_requiredOverhangSizeForCurrentDevice;
+(struct CGSize )_requiredOverhangSizeForDeviceType:(NSInteger)arg0 ;
+(struct CGSize )bestWallpaperSizeForParallaxFactor:(CGFloat)arg0 ;
+(struct CGSize )bestWallpaperSizeForParallaxFactor:(CGFloat)arg0 portrait:(BOOL)arg1 ;
+(struct CGSize )bestWallpaperSizeForWallpaperSize:(struct CGSize )arg0 deviceType:(NSInteger)arg1 parallaxFactor:(CGFloat)arg2 portrait:(BOOL)arg3 ;
+(struct CGSize )minimumWallpaperSizeForCurrentDevice;
+(struct CGSize )minimumWallpaperSizeForWallpaperSize:(struct CGSize )arg0 deviceType:(NSInteger)arg1 ;
+(struct CGSize )overhangSizeForCurrentDevice;
+(struct CGSize )overhangSizeForDeviceType:(NSInteger)arg0 ;
-(void)setDefaultValues;


@end


#endif