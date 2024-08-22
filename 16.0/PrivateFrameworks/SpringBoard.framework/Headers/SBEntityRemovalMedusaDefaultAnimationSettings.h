// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBENTITYREMOVALMEDUSADEFAULTANIMATIONSETTINGS_H
#define SBENTITYREMOVALMEDUSADEFAULTANIMATIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBEntityRemovalMedusaDefaultAnimationSettings : PTSettings

@property (nonatomic) CGFloat toBeMadeFullscreenFrameAnimationDelay; // ivar: _toBeMadeFullscreenFrameAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenFrameAnimationSettings; // ivar: _toBeMadeFullscreenFrameAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedAlphaAnimationSettings; // ivar: _toBeRemovedAlphaAnimationSettings
@property (nonatomic) CGFloat toBeRemovedFinalAlpha; // ivar: _toBeRemovedFinalAlpha
@property (nonatomic) CGFloat toBeRemovedFinalBlurRadius; // ivar: _toBeRemovedFinalBlurRadius
@property (nonatomic) CGFloat toBeRemovedFinalScale; // ivar: _toBeRemovedFinalScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedScaleAnimationSettings; // ivar: _toBeRemovedScaleAnimationSettings


+(id)_settingsModule;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif