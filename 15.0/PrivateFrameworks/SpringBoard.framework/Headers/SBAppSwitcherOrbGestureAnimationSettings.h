// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERORBGESTUREANIMATIONSETTINGS_H
#define SBAPPSWITCHERORBGESTUREANIMATIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *breathingSettings; // ivar: _breathingSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *peekingAndPanningSettings; // ivar: _peekingAndPanningSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *popToSwitcherSettings; // ivar: _popToSwitcherSettings
@property (nonatomic) CGFloat response; // ivar: _response


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif