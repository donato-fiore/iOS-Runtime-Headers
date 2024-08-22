// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTODAYGESTURESETTINGS_H
#define SBFTODAYGESTURESETTINGS_H

@class PTSettings;


#import "SBFFluidBehaviorSettings.h"

@interface SBFTodayGestureSettings : PTSettings

@property (nonatomic) CGFloat dampingRatioAtMaximumVelocity; // ivar: _dampingRatioAtMaximumVelocity
@property (nonatomic) CGFloat dampingRatioAtMinimumVelocity; // ivar: _dampingRatioAtMinimumVelocity
@property (nonatomic) CGFloat interactiveSideSpringFriction; // ivar: _interactiveSideSpringFriction
@property (nonatomic) CGFloat interactiveSideSpringTension; // ivar: _interactiveSideSpringTension
@property (nonatomic) CGFloat maximumVelocity; // ivar: _maximumVelocity
@property (nonatomic) CGFloat minimumVelocity; // ivar: _minimumVelocity
@property (retain, nonatomic) SBFFluidBehaviorSettings *overlayBackdropSettings; // ivar: _overlayBackdropSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *overlayPositionSettings; // ivar: _overlayPositionSettings
@property (nonatomic) CGFloat responseAtMaximumVelocity; // ivar: _responseAtMaximumVelocity
@property (nonatomic) CGFloat responseAtMinimumVelocity; // ivar: _responseAtMinimumVelocity
@property (nonatomic) BOOL scaleAnimationSettingsWithGestureVelocity; // ivar: _scaleAnimationSettingsWithGestureVelocity
@property (nonatomic) CGFloat sideSpringFriction; // ivar: _sideSpringFriction
@property (nonatomic) CGFloat sideSpringTension; // ivar: _sideSpringTension


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif