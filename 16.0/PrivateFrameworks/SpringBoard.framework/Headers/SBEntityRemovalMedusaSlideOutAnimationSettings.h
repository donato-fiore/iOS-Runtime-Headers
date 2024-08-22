// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBENTITYREMOVALMEDUSASLIDEOUTANIMATIONSETTINGS_H
#define SBENTITYREMOVALMEDUSASLIDEOUTANIMATIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;


#import "SBEntityRemovalMedusaDefaultAnimationSettings.h"

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings

@property (retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *defaultAnimationSettings; // ivar: _defaultAnimationSettings
@property (nonatomic) CGFloat toBeMadeFullScreenPushInScale; // ivar: _toBeMadeFullScreenPushInScale
@property (nonatomic) CGFloat toBeMadeFullScreenScaleResetAnimationDelay; // ivar: _toBeMadeFullScreenScaleResetAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenPushInScaleAnimationSettings; // ivar: _toBeMadeFullscreenPushInScaleAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenScaleResetAnimationSettings; // ivar: _toBeMadeFullscreenScaleResetAnimationSettings
@property (nonatomic) CGFloat toBeRemovedSlideOutAnimationDelay; // ivar: _toBeRemovedSlideOutAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedSlideOutAnimationSettings; // ivar: _toBeRemovedSlideOutAnimationSettings
@property (nonatomic) CGFloat toBeRemovedSlideOutHeightOffsetMultiplier; // ivar: _toBeRemovedSlideOutHeightOffsetMultiplier


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif