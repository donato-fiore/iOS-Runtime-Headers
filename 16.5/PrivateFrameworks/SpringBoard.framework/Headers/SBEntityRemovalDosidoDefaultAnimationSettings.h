// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBENTITYREMOVALDOSIDODEFAULTANIMATIONSETTINGS_H
#define SBENTITYREMOVALDOSIDODEFAULTANIMATIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBEntityRemovalDosidoDefaultAnimationSettings : PTSettings

@property (nonatomic) CGFloat fromViewAlphaAnimationDelay; // ivar: _fromViewAlphaAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewAlphaAnimationSettings; // ivar: _fromViewAlphaAnimationSettings
@property (nonatomic) CGFloat fromViewFinalAlpha; // ivar: _fromViewFinalAlpha
@property (nonatomic) CGFloat fromViewFinalBlurRadius; // ivar: _fromViewFinalBlurRadius
@property (nonatomic) CGFloat fromViewFinalScale; // ivar: _fromViewFinalScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewScaleAnimationSettings; // ivar: _fromViewScaleAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewDimmingViewAlphaAnimationSettings; // ivar: _toViewDimmingViewAlphaAnimationSettings
@property (nonatomic) CGFloat toViewDimmingViewFadeOutDelay; // ivar: _toViewDimmingViewFadeOutDelay
@property (nonatomic) CGFloat toViewInitialBlurProgress; // ivar: _toViewInitialBlurProgress
@property (nonatomic) CGFloat toViewInitialDimmingAlpha; // ivar: _toViewInitialDimmingAlpha
@property (nonatomic) CGFloat toViewInitialPushInScale; // ivar: _toViewInitialPushInScale
@property (nonatomic) CGFloat toViewScaleAndAlphaResetAnimationDelay; // ivar: _toViewScaleAndAlphaResetAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewScaleAndAlphaResetAnimationSettings; // ivar: _toViewScaleAndAlphaResetAnimationSettings
@property (nonatomic) CGFloat toViewScreenInitialAlpha; // ivar: _toViewScreenInitialAlpha
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewWallpaperScaleAnimationSettings; // ivar: _toViewWallpaperScaleAnimationSettings


+(id)_settingsModule;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif