// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFWAKEANIMATIONSETTINGS_H
#define SBFWAKEANIMATIONSETTINGS_H

@class PTSettings;


#import "SBFAnimationSettings.h"

@interface SBFWakeAnimationSettings : PTSettings

@property (nonatomic) CGFloat awakeColorBrightness; // ivar: _awakeColorBrightness
@property (nonatomic) CGFloat awakeDateAlpha; // ivar: _awakeDateAlpha
@property (retain, nonatomic) SBFAnimationSettings *awakeWallpaperFilterSettings; // ivar: _awakeWallpaperFilterSettings
@property (nonatomic) CGFloat backlightFadeDuration; // ivar: _backlightFadeDuration
@property (retain, nonatomic) SBFAnimationSettings *contentWakeSettings; // ivar: _contentWakeSettings
@property (retain, nonatomic) SBFAnimationSettings *dateSleepSettings; // ivar: _dateSleepSettings
@property (retain, nonatomic) SBFAnimationSettings *dateWakeSettings; // ivar: _dateWakeSettings
@property (nonatomic) CGFloat sleepColorBrightness; // ivar: _sleepColorBrightness
@property (retain, nonatomic) SBFAnimationSettings *sleepWallpaperFilterSettings; // ivar: _sleepWallpaperFilterSettings
@property (nonatomic) CGFloat speedMultiplierForLiftToWake; // ivar: _speedMultiplierForLiftToWake
@property (nonatomic) CGFloat speedMultiplierForWake; // ivar: _speedMultiplierForWake


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif