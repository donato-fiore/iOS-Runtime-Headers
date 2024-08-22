// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERSYSTEMAPERTURESETTINGS_H
#define SBSWITCHERSYSTEMAPERTURESETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBSwitcherSystemApertureSettings : PTSettings

@property (nonatomic) CGFloat xDeltaToRotationMappingFactor; // ivar: _xDeltaToRotationMappingFactor
@property (nonatomic) CGFloat zoomFromJindoBeginUnblurringProgressThreshold; // ivar: _zoomFromJindoBeginUnblurringProgressThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoBlurAnimationSettings; // ivar: _zoomFromJindoBlurAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoCornerRadiusSettings; // ivar: _zoomFromJindoCornerRadiusSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoLayoutSettings; // ivar: _zoomFromJindoLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoPositionSettings; // ivar: _zoomFromJindoPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoScaleAndRotateSettings; // ivar: _zoomFromJindoScaleAndRotateSettings
@property (nonatomic) CGFloat zoomFromJindoUnmaskThreshold; // ivar: _zoomFromJindoUnmaskThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToAndFromJindoMeshSettings; // ivar: _zoomToAndFromJindoMeshSettings
@property (nonatomic) CGFloat zoomToFromJindoMaxBlurRadius; // ivar: _zoomToFromJindoMaxBlurRadius
@property (nonatomic) CGFloat zoomToFromJindoMaxCornerRadius; // ivar: _zoomToFromJindoMaxCornerRadius
@property (nonatomic) CGFloat zoomToJindoArcSwipeScale; // ivar: _zoomToJindoArcSwipeScale
@property (nonatomic) CGFloat zoomToJindoBeginShowingShadowThreshold; // ivar: _zoomToJindoBeginShowingShadowThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoBlurAnimationSettings; // ivar: _zoomToJindoBlurAnimationSettings
@property (nonatomic) CGFloat zoomToJindoBounceThreshold; // ivar: _zoomToJindoBounceThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoCornerRadiusSettings; // ivar: _zoomToJindoCornerRadiusSettings
@property (nonatomic) CGFloat zoomToJindoEndShowingShadowThreshold; // ivar: _zoomToJindoEndShowingShadowThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoLayoutAlternateSettings; // ivar: _zoomToJindoLayoutAlternateSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoLayoutSettings; // ivar: _zoomToJindoLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoPositionAlternateSettings; // ivar: _zoomToJindoPositionAlternateSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoPositionSettings; // ivar: _zoomToJindoPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoScaleAndRotateAlternateSettings; // ivar: _zoomToJindoScaleAndRotateAlternateSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoScaleAndRotateSettings; // ivar: _zoomToJindoScaleAndRotateSettings
@property (nonatomic) CGFloat zoomToJindoStraightSwipeAlternateScale; // ivar: _zoomToJindoStraightSwipeAlternateScale
@property (nonatomic) CGFloat zoomToJindoStraightSwipeScale; // ivar: _zoomToJindoStraightSwipeScale
@property (nonatomic) CGFloat zoomToJindoTargetXDisplacement; // ivar: _zoomToJindoTargetXDisplacement
@property (nonatomic) CGFloat zoomToJindoTargetYDisplacement; // ivar: _zoomToJindoTargetYDisplacement
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoTopClippingSettings; // ivar: _zoomToJindoTopClippingSettings
@property (nonatomic) CGFloat zoomToJindoTuckInThreshold; // ivar: _zoomToJindoTuckInThreshold
@property (nonatomic) CGFloat zoomToJindoYFromScreenTopToUseAlternateSettings; // ivar: _zoomToJindoYFromScreenTopToUseAlternateSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif