// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHCROSSFADEZOOMSETTINGS_H
#define SBHCROSSFADEZOOMSETTINGS_H

@class SBFAnimationSettings;


#import "SBHScaleZoomSettings.h"

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *morphSettings; // ivar: _morphSettings
@property (nonatomic) BOOL morphWithZoom; // ivar: _morphWithZoom


+(id)settingsControllerModule;
-(id)effectiveMorphAnimationSettings;
-(void)setDefaultValues;


@end


#endif