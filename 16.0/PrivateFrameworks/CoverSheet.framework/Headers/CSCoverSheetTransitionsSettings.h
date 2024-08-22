// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOVERSHEETTRANSITIONSSETTINGS_H
#define CSCOVERSHEETTRANSITIONSSETTINGS_H

@class PTSettings;


#import "CSCoverSheetTransitionSettings.h"
#import "CSCoverSheetFlyInSettings.h"

@interface CSCoverSheetTransitionsSettings : PTSettings

@property (retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperInitialTransitionSettings; // ivar: _differentWallpaperInitialTransitionSettings
@property (retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperSubsequentTransitionSettings; // ivar: _differentWallpaperSubsequentTransitionSettings
@property (retain, nonatomic) CSCoverSheetFlyInSettings *flyInSettings; // ivar: _flyInSettings
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat inPlaceFriction; // ivar: _inPlaceFriction
@property (nonatomic) CGFloat inPlaceTension; // ivar: _inPlaceTension
@property (retain, nonatomic) CSCoverSheetTransitionSettings *inactiveOverAppTransitionSettings; // ivar: _inactiveOverAppTransitionSettings
@property (retain, nonatomic) CSCoverSheetTransitionSettings *overAppTransitionSettings; // ivar: _overAppTransitionSettings
@property (retain, nonatomic) CSCoverSheetTransitionSettings *overLandscapeTransitionSettings; // ivar: _overLandscapeTransitionSettings
@property (retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperInitialTransitionSettings; // ivar: _sameWallpaperInitialTransitionSettings
@property (retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperSubsequentTransitionSettings; // ivar: _sameWallpaperSubsequentTransitionSettings
@property (nonatomic) CGFloat tension; // ivar: _tension


+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setDefaultValuesForBaseConfiguration;
-(void)setDefaultValuesForBlurOnly;
-(void)setDefaultValuesForFadeAndScale;
-(void)setDefaultValuesForParallaxAndBlur;
-(void)setDefaultValuesForParallaxOnly;


@end


#endif