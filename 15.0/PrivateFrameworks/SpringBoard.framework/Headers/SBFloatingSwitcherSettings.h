// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGSWITCHERSETTINGS_H
#define SBFLOATINGSWITCHERSETTINGS_H

@class PTSettings, MTLumaDodgePillSettings, SBFFluidBehaviorSettings;



@interface SBFloatingSwitcherSettings : PTSettings

@property CGFloat cardSpacing; // ivar: _cardSpacing
@property CGFloat darkeningFadeDistance; // ivar: _darkeningFadeDistance
@property CGFloat darkeningMinimumDistanceThreshold; // ivar: _darkeningMinimumDistanceThreshold
@property CGFloat dimmingAlpha; // ivar: _dimmingAlpha
@property (retain) MTLumaDodgePillSettings *homeAffordanceSettings; // ivar: _homeAffordanceSettings
@property CGFloat leadingEdgeRubberbandingRange; // ivar: _leadingEdgeRubberbandingRange
@property CGFloat maximumDarkening; // ivar: _maximumDarkening
@property CGFloat opacityFadeDistance; // ivar: _opacityFadeDistance
@property CGFloat opacityMinimumDistanceThreshold; // ivar: _opacityMinimumDistanceThreshold
@property CGFloat overshootPullbackDelayOffscreen; // ivar: _overshootPullbackDelayOffscreen
@property CGFloat overshootPullbackDelayOnscreen; // ivar: _overshootPullbackDelayOnscreen
@property CGFloat perCardAdditionalScaleCoefficient; // ivar: _perCardAdditionalScaleCoefficient
@property CGFloat rightEdgePeekDelay; // ivar: _rightEdgePeekDelay
@property CGFloat rightEdgePeekTimeout; // ivar: _rightEdgePeekTimeout
@property CGFloat scaleCurveExponent; // ivar: _scaleCurveExponent
@property BOOL showFloats; // ivar: _showFloats
@property CGFloat switcherCardScale; // ivar: _switcherCardScale
@property CGFloat titleAndIconOpacityFadeDistance; // ivar: _titleAndIconOpacityFadeDistance
@property CGFloat titleAndIconOpacityMinimumDistanceThreshold; // ivar: _titleAndIconOpacityMinimumDistanceThreshold
@property CGFloat titleOpacityFadeDistance; // ivar: _titleOpacityFadeDistance
@property CGFloat titleOpacityMinimumDistanceThreshold; // ivar: _titleOpacityMinimumDistanceThreshold
@property (retain) SBFFluidBehaviorSettings *tongueCollapsedToExpandedAnimationSettings; // ivar: _tongueCollapsedToExpandedAnimationSettings
@property (retain) SBFFluidBehaviorSettings *tongueContainerPositionAnimationSettings; // ivar: _tongueContainerPositionAnimationSettings
@property (retain) SBFFluidBehaviorSettings *tongueContainerTransformAnimationSettings; // ivar: _tongueContainerTransformAnimationSettings
@property (retain) SBFFluidBehaviorSettings *tongueExpandedToCollapsedAnimationSettings; // ivar: _tongueExpandedToCollapsedAnimationSettings


+(id)settingsControllerModule;
-(id)archiveValueForKey:(id)arg0 ;
-(void)setDefaultValues;


@end


#endif