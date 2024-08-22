// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERORBGESTURESETTINGS_H
#define SBAPPSWITCHERORBGESTURESETTINGS_H

@class PTSettings;


#import "SBAppSwitcherOrbGestureAnimationSettings.h"

@interface SBAppSwitcherOrbGestureSettings : PTSettings

@property CGFloat additionalThrowDisplacement; // ivar: _additionalThrowDisplacement
@property (retain) SBAppSwitcherOrbGestureAnimationSettings *animationSettings; // ivar: _animationSettings
@property CGFloat appToAppCurveMinimum; // ivar: _appToAppCurveMinimum
@property BOOL canPlayCommitHaptic; // ivar: _canPlayCommitHaptic
@property BOOL canPlayInitialHaptic; // ivar: _canPlayInitialHaptic
@property BOOL canPop; // ivar: _canPop
@property CGFloat commitToNextAppTranslation; // ivar: _commitToNextAppTranslation
@property CGFloat commitToPreviousAppTranslation; // ivar: _commitToPreviousAppTranslation
@property CGFloat dimmingValue; // ivar: _dimmingValue
@property CGFloat forceAdjustMax; // ivar: _forceAdjustMax
@property BOOL forceDrivesInitialProgress; // ivar: _forceDrivesInitialProgress
@property CGFloat forcePeekAdjustApex; // ivar: _forcePeekAdjustApex
@property CGFloat homeToAppCurveMinimum; // ivar: _homeToAppCurveMinimum
@property CGFloat maxAverageBreathingVelocity; // ivar: _maxAverageBreathingVelocity
@property CGFloat maxBreathingVelocityInterval; // ivar: _maxBreathingVelocityInterval
@property CGFloat maxIconScrollProgressAllowed; // ivar: _maxIconScrollProgressAllowed
@property CGFloat maxPopPanTranslation; // ivar: _maxPopPanTranslation
@property CGFloat minPanTranslation; // ivar: _minPanTranslation
@property CGFloat orbGestureRegionMax; // ivar: _orbGestureRegionMax
@property BOOL useOrbGesture; // ivar: _useOrbGesture


+(id)settingsControllerModule;
-(CGFloat)valueAlongDefaultForcePressCurveWithMinY:(CGFloat)arg0 progress:(CGFloat)arg1 fromHomeScreen:(BOOL)arg2 ;
-(void)setDefaultValues;


@end


#endif