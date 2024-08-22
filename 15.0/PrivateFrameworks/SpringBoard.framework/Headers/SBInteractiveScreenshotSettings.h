// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIVESCREENSHOTSETTINGS_H
#define SBINTERACTIVESCREENSHOTSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;


#import "SBCornerPencilPanGestureSettings.h"

@interface SBInteractiveScreenshotSettings : PTSettings

@property (nonatomic) CGFloat applicationTouchDelayHysteresis; // ivar: _applicationTouchDelayHysteresis
@property (nonatomic) CGFloat baseCornerTranslationDegrees; // ivar: _baseCornerTranslationDegrees
@property (retain, nonatomic) SBFFluidBehaviorSettings *contentAnimationSettings; // ivar: _contentAnimationSettings
@property (nonatomic) CGFloat cornerRadiusVisibleProgressThreshold; // ivar: _cornerRadiusVisibleProgressThreshold
@property (nonatomic) CGFloat cropCornersVisibleProgressThreshold; // ivar: _cropCornersVisibleProgressThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *cropLinesAlphaAnimationSettings; // ivar: _cropLinesAlphaAnimationSettings
@property (nonatomic) CGFloat cropLinesVisibleProgressThreshold; // ivar: _cropLinesVisibleProgressThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *cropsAnimationSettings; // ivar: _cropsAnimationSettings
@property (nonatomic) CGFloat disabledGestureCancellationDistance; // ivar: _disabledGestureCancellationDistance
@property (retain, nonatomic) SBFFluidBehaviorSettings *disabledGestureContentAnimationSettings; // ivar: _disabledGestureContentAnimationSettings
@property (nonatomic) CGFloat disabledGestureVelocityScale; // ivar: _disabledGestureVelocityScale
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) SBCornerPencilPanGestureSettings *gestureSettings; // ivar: _gestureSettings
@property (nonatomic) CGFloat horizontalTranslationFactor; // ivar: _horizontalTranslationFactor
@property (nonatomic) CGFloat maximumInjectedVelocity; // ivar: _maximumInjectedVelocity
@property (nonatomic) CGFloat normalizedDistanceForCommitThreshold; // ivar: _normalizedDistanceForCommitThreshold
@property (nonatomic) CGFloat projectionDecelerationRate; // ivar: _projectionDecelerationRate
@property (nonatomic) CGFloat rubberbandingRange; // ivar: _rubberbandingRange
@property (nonatomic) BOOL shouldAsynchronouslyRender; // ivar: _shouldAsynchronouslyRender
@property (nonatomic) BOOL shouldInjectVelocity; // ivar: _shouldInjectVelocity
@property (nonatomic) BOOL shouldPreheat; // ivar: _shouldPreheat
@property (nonatomic) CGFloat verticalTranslationFactor; // ivar: _verticalTranslationFactor


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif