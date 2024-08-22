// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFWALLPAPERCONFIGURATION_H
#define SBFWALLPAPERCONFIGURATION_H

@class PBUIWallpaperConfiguration;


#import "SBFWallpaperImage.h"
#import "SBFWallpaperOptions.h"

@interface SBFWallpaperConfiguration : PBUIWallpaperConfiguration

@property (readonly, nonatomic) SBFWallpaperImage *wallpaperImage;
@property (readonly, copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;




@end


#endif