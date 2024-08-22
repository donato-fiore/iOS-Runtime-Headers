// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMANIMATIONSETTINGS_H
#define SBSYSTEMANIMATIONSETTINGS_H

@class PTSettings, SBFAnimationSettings, SBFWakeAnimationSettings;


#import "SBEntityRemovalAnimationSettings.h"

@interface SBSystemAnimationSettings : PTSettings

@property (nonatomic) float assistantAnimationDuration; // ivar: _assistantAnimationDuration
@property (nonatomic) float assistantBottomEdgeDismissThreshold; // ivar: _assistantBottomEdgeDismissThreshold
@property (nonatomic) float assistantBottomEdgeDismissVelocity; // ivar: _assistantBottomEdgeDismissVelocity
@property (nonatomic) float assistantDismissAnimationDurationOverApp; // ivar: _assistantDismissAnimationDurationOverApp
@property (retain, nonatomic) SBEntityRemovalAnimationSettings *entityRemovalAnimationSettings; // ivar: _entityRemovalAnimationSettings
@property (retain, nonatomic) SBFAnimationSettings *slideoverDosidoAnimationSettings; // ivar: _slideoverDosidoAnimationSettings
@property (nonatomic) float spotlightNoninteractiveAnimationDuration; // ivar: _spotlightNoninteractiveAnimationDuration
@property (retain, nonatomic) SBFWakeAnimationSettings *wakeAnimationSettings; // ivar: _wakeAnimationSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif