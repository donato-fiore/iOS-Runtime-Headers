// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFWALLPAPERSETTINGS_H
#define SBFWALLPAPERSETTINGS_H

@class PTSettings, PTOutlet;


#import "SBFWallpaperParallaxSettings.h"

@interface SBFWallpaperSettings : PTSettings

@property (retain, nonatomic) SBFWallpaperParallaxSettings *homeScreenParallaxSettings; // ivar: _homeScreenParallaxSettings
@property (retain, nonatomic) SBFWallpaperParallaxSettings *lockScreenParallaxSettings; // ivar: _lockScreenParallaxSettings
@property (retain, nonatomic) PTOutlet *resetWallpaperOutlet; // ivar: _resetWallpaperOutlet


+(id)settingsControllerModule;
-(id)parallaxSettingsForVariant:(NSInteger)arg0 ;
-(void)setDefaultValues;


@end


#endif