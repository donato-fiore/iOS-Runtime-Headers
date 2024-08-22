// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHCENTERAPPZOOMSETTINGS_H
#define SBHCENTERAPPZOOMSETTINGS_H

@class SBFAnimationSettings;


#import "SBHCenterZoomSettings.h"

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *appFadeSettings; // ivar: _appFadeSettings
@property (nonatomic) CGFloat appHeadStart; // ivar: _appHeadStart
@property (retain, nonatomic) SBFAnimationSettings *appZoomSettings; // ivar: _appZoomSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif