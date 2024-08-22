// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERPROTOTYPESETTINGS_H
#define PBUIWALLPAPERPROTOTYPESETTINGS_H

@class PTSettings, PTOutlet;


#import "PBUIWallpaperParallaxSettings.h"

@interface PBUIWallpaperPrototypeSettings : PTSettings

@property (retain, nonatomic) PBUIWallpaperParallaxSettings *homeScreenParallaxSettings; // ivar: _homeScreenParallaxSettings
@property (retain, nonatomic) PBUIWallpaperParallaxSettings *lockScreenParallaxSettings; // ivar: _lockScreenParallaxSettings
@property (retain, nonatomic) PTOutlet *resetWallpaperOutlet; // ivar: _resetWallpaperOutlet


+(id)settingsControllerModule;
-(id)parallaxSettingsForVariant:(NSInteger)arg0 ;
-(void)setDefaultValues;


@end


#endif