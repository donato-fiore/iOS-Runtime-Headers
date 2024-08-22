// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTURESETTINGS_H
#define SBHOMEGESTURESETTINGS_H

@class PTSettings;


#import "SBHomeGestureExclusionTrapezoidSettings.h"

@interface SBHomeGestureSettings : PTSettings

@property (nonatomic) CGFloat adaptiveThresholdsDecreasingRateFraction; // ivar: _adaptiveThresholdsDecreasingRateFraction
@property (nonatomic) CGFloat appSwitcherVelocityThresholdIncreasingRateFraction; // ivar: _appSwitcherVelocityThresholdIncreasingRateFraction
@property (nonatomic) CGFloat cardFlyInDelayAfterEnteringAppSwitcher; // ivar: _cardFlyInDelayAfterEnteringAppSwitcher
@property (nonatomic) CGFloat cardFlyInMaximumVelocityThreshold; // ivar: _cardFlyInMaximumVelocityThreshold
@property (nonatomic) CGFloat dockVelocityThresholdIncreasingRateFraction; // ivar: _dockVelocityThresholdIncreasingRateFraction
@property (nonatomic) CGFloat edgeAngleWindow; // ivar: _edgeAngleWindow
@property (nonatomic) CGFloat edgeDistanceToCorrectGestureFinalDestination; // ivar: _edgeDistanceToCorrectGestureFinalDestination
@property (retain, nonatomic) SBHomeGestureExclusionTrapezoidSettings *exclusionTrapezoidSettings; // ivar: _exclusionTrapezoidSettings
@property (nonatomic) CGFloat homeGestureCenterZoomDownCenterYOffsetFactor; // ivar: _homeGestureCenterZoomDownCenterYOffsetFactor
@property (nonatomic, getter=isHomeGestureEnabled) BOOL homeGestureEnabled; // ivar: _homeGestureEnabled
@property (nonatomic) CGFloat horizontalRubberbandDistance; // ivar: _horizontalRubberbandDistance
@property (nonatomic) CGFloat horizontalRubberbandEnd; // ivar: _horizontalRubberbandEnd
@property (nonatomic) CGFloat horizontalRubberbandExponent; // ivar: _horizontalRubberbandExponent
@property (nonatomic) CGFloat horizontalRubberbandStart; // ivar: _horizontalRubberbandStart
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (nonatomic) BOOL injectGestureVelocityForZoomDown; // ivar: _injectGestureVelocityForZoomDown
@property (nonatomic) CGFloat maximumAdaptivePauseVelocityThresholdForAppSwitcher; // ivar: _maximumAdaptivePauseVelocityThresholdForAppSwitcher
@property (nonatomic) CGFloat maximumAdaptiveVelocityThresholdForDock; // ivar: _maximumAdaptiveVelocityThresholdForDock
@property (nonatomic) CGFloat maximumDistanceYThresholdToPresentDock; // ivar: _maximumDistanceYThresholdToPresentDock
@property (nonatomic) CGFloat maximumScaleVelocity; // ivar: _maximumScaleVelocity
@property (nonatomic) CGFloat maximumYDistanceToTriggerArcByDistance; // ivar: _maximumYDistanceToTriggerArcByDistance
@property (nonatomic) CGFloat maximumYDistanceToTriggerArcByFlick; // ivar: _maximumYDistanceToTriggerArcByFlick
@property (nonatomic) CGFloat minimumDistanceThresholdToScaleMultiplier; // ivar: _minimumDistanceThresholdToScaleMultiplier
@property (nonatomic) CGFloat minimumXDistanceForFirstArcSwipe; // ivar: _minimumXDistanceForFirstArcSwipe
@property (nonatomic) CGFloat minimumXDistanceToTriggerArcByDistanceLandscape; // ivar: _minimumXDistanceToTriggerArcByDistanceLandscape
@property (nonatomic) CGFloat minimumXDistanceToTriggerArcByDistancePortrait; // ivar: _minimumXDistanceToTriggerArcByDistancePortrait
@property (nonatomic) CGFloat minimumYDistanceForHomeOrAppSwitcher; // ivar: _minimumYDistanceForHomeOrAppSwitcher
@property (nonatomic) CGFloat minimumYDistanceToConsiderAccelerationDip; // ivar: _minimumYDistanceToConsiderAccelerationDip
@property (nonatomic) CGFloat minimumYVelocityForArcSwipe; // ivar: _minimumYVelocityForArcSwipe
@property (nonatomic) CGFloat minimumYVelocityForHome; // ivar: _minimumYVelocityForHome
@property (nonatomic) CGFloat normalizedDistanceYThresholdForUnconditionalHome; // ivar: _normalizedDistanceYThresholdForUnconditionalHome
@property (nonatomic) CGFloat normalizedDistanceYThresholdForUnconditionalHomeInSlideOver; // ivar: _normalizedDistanceYThresholdForUnconditionalHomeInSlideOver
@property (nonatomic) CGFloat normalizedDistanceYThresholdRangeForUnconditionalHome; // ivar: _normalizedDistanceYThresholdRangeForUnconditionalHome
@property (nonatomic) CGFloat normalizedDistanceYThresholdRangeForUnconditionalHomeInSlideOver; // ivar: _normalizedDistanceYThresholdRangeForUnconditionalHomeInSlideOver
@property (nonatomic) BOOL onlyInjectVelocityForShortFlicks; // ivar: _onlyInjectVelocityForShortFlicks
@property (nonatomic) CGFloat pauseVelocityThresholdForAppSwitcher; // ivar: _pauseVelocityThresholdForAppSwitcher
@property (nonatomic) CGFloat pauseVelocityThresholdForDefiniteAppSwitcher; // ivar: _pauseVelocityThresholdForDefiniteAppSwitcher
@property (nonatomic) CGFloat positionVelocityXPercentOfGestureVelocityX; // ivar: _positionVelocityXPercentOfGestureVelocityX
@property (nonatomic) CGFloat positionVelocityYPercentOfGestureVelocityY; // ivar: _positionVelocityYPercentOfGestureVelocityY
@property (nonatomic) BOOL preventMultipleEdgesAfterAppInteraction; // ivar: _preventMultipleEdgesAfterAppInteraction
@property (nonatomic) BOOL recognizeAlongEdge; // ivar: _recognizeAlongEdge
@property (nonatomic) BOOL resetSwitcherListAfterAppInteraction; // ivar: _resetSwitcherListAfterAppInteraction
@property (nonatomic) CGFloat scaleVelocityPercentOfGestureVelocityYDividedByViewHeight; // ivar: _scaleVelocityPercentOfGestureVelocityYDividedByViewHeight
@property (nonatomic) CGFloat secondsToAllowMultipleEdges; // ivar: _secondsToAllowMultipleEdges
@property (nonatomic) CGFloat secondsToResetSwitcherListAfterTransition; // ivar: _secondsToResetSwitcherListAfterTransition
@property (nonatomic) BOOL snapToMaxVelocityThresholdAfterAccelerationDip; // ivar: _snapToMaxVelocityThresholdAfterAccelerationDip
@property (nonatomic) CGFloat travelDistanceForTranslatingScreenHeight; // ivar: _travelDistanceForTranslatingScreenHeight
@property (nonatomic) BOOL useZStackResolverResults; // ivar: _useZStackResolverResults
@property (nonatomic) CGFloat velocitySlopeThresholdForBottomSwipeUpArc; // ivar: _velocitySlopeThresholdForBottomSwipeUpArc
@property (nonatomic) CGFloat velocitySlopeThresholdForCurrentLayout; // ivar: _velocitySlopeThresholdForCurrentLayout
@property (nonatomic) CGFloat velocitySlopeThresholdForScrunchArc; // ivar: _velocitySlopeThresholdForScrunchArc
@property (nonatomic) CGFloat velocityXThresholdForUnconditionalArcSwipe; // ivar: _velocityXThresholdForUnconditionalArcSwipe
@property (nonatomic) CGFloat velocityYThresholdForUnconditionalHome; // ivar: _velocityYThresholdForUnconditionalHome
@property (nonatomic) CGFloat verticalRubberbandDistance; // ivar: _verticalRubberbandDistance
@property (nonatomic) CGFloat verticalRubberbandEnd; // ivar: _verticalRubberbandEnd
@property (nonatomic) CGFloat verticalRubberbandExponent; // ivar: _verticalRubberbandExponent
@property (nonatomic) CGFloat verticalRubberbandStart; // ivar: _verticalRubberbandStart


+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setHomeGestureTuningDefaults;
-(void)setLatchDefaults;


@end


#endif