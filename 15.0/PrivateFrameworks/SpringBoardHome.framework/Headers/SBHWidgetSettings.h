// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHWIDGETSETTINGS_H
#define SBHWIDGETSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;


#import "SBHPeopleWidgetPersonDetailInteractionSettings.h"

@interface SBHWidgetSettings : PTSettings

@property (nonatomic) CGFloat animatedInsertionImpactDelay; // ivar: _animatedInsertionImpactDelay
@property (nonatomic) CGFloat animatedInsertionImpactScale; // ivar: _animatedInsertionImpactScale
@property (nonatomic) CGFloat animatedInsertionJumpDampingRatio; // ivar: _animatedInsertionJumpDampingRatio
@property (nonatomic) CGFloat animatedInsertionJumpDuration; // ivar: _animatedInsertionJumpDuration
@property (nonatomic) CGFloat animatedInsertionJumpScale; // ivar: _animatedInsertionJumpScale
@property (nonatomic) CGFloat animatedInsertionPositionDampingRatio; // ivar: _animatedInsertionPositionDampingRatio
@property (nonatomic) CGFloat animatedInsertionPositionDuration; // ivar: _animatedInsertionPositionDuration
@property (nonatomic) CGFloat animatedInsertionScaleResetDampingRatio; // ivar: _animatedInsertionScaleResetDampingRatio
@property (nonatomic) CGFloat animatedInsertionScaleResetDelay; // ivar: _animatedInsertionScaleResetDelay
@property (nonatomic) CGFloat animatedInsertionScaleResetDuration; // ivar: _animatedInsertionScaleResetDuration
@property (nonatomic) CGFloat animatedInsertionSlamDampingRatio; // ivar: _animatedInsertionSlamDampingRatio
@property (nonatomic) CGFloat animatedInsertionSlamDelay; // ivar: _animatedInsertionSlamDelay
@property (nonatomic) CGFloat animatedInsertionSlamDuration; // ivar: _animatedInsertionSlamDuration
@property (nonatomic) CGFloat configurationAbsoluteVerticalMargin; // ivar: _configurationAbsoluteVerticalMargin
@property (nonatomic) BOOL configurationBlursBackground; // ivar: _configurationBlursBackground
@property (nonatomic) CGFloat configurationDarkeningTintAlpha; // ivar: _configurationDarkeningTintAlpha
@property (nonatomic) BOOL configurationEnforcesMaxCardHeight; // ivar: _configurationEnforcesMaxCardHeight
@property (nonatomic) BOOL configurationEqualizesMinCardToCameraDistance; // ivar: _configurationEqualizesMinCardToCameraDistance
@property (nonatomic) CGFloat configurationFractionBetweenSourceAndContainerX; // ivar: _configurationFractionBetweenSourceAndContainerX
@property (nonatomic) CGFloat configurationFractionBetweenSourceAndContainerY; // ivar: _configurationFractionBetweenSourceAndContainerY
@property (nonatomic) CGFloat configurationHomeScreenAlpha; // ivar: _configurationHomeScreenAlpha
@property (nonatomic) CGFloat configurationHomeScreenScale; // ivar: _configurationHomeScreenScale
@property (nonatomic) CGFloat configurationMaxCardHeight; // ivar: _configurationMaxCardHeight
@property (nonatomic) BOOL configurationMaximizesCardHeight; // ivar: _configurationMaximizesCardHeight
@property (nonatomic) CGFloat configurationMinCardToCameraDistance; // ivar: _configurationMinCardToCameraDistance
@property (nonatomic) CGFloat configurationPercentVerticalMargin; // ivar: _configurationPercentVerticalMargin
@property (nonatomic) CGFloat configurationPerspectiveCameraDistance; // ivar: _configurationPerspectiveCameraDistance
@property (nonatomic) BOOL configurationScalesHomeScreenRelativeToCardPosition; // ivar: _configurationScalesHomeScreenRelativeToCardPosition
@property (nonatomic) BOOL configurationUsesPercentVerticalMargin; // ivar: _configurationUsesPercentVerticalMargin
@property (nonatomic) BOOL configurationUsesSidebarAsContainer; // ivar: _configurationUsesSidebarAsContainer
@property (nonatomic) CGFloat configurationWidgetTintColorAlpha; // ivar: _configurationWidgetTintColorAlpha
@property (retain, nonatomic) SBFFluidBehaviorSettings *dropInsertionAnimationSettings; // ivar: _dropInsertionAnimationSettings
@property (nonatomic) CGFloat dropInsertionImpactDelay; // ivar: _dropInsertionImpactDelay
@property (nonatomic) CGFloat dropInsertionImpactScale; // ivar: _dropInsertionImpactScale
@property (nonatomic) CGFloat dropInsertionScaleResetDampingRatio; // ivar: _dropInsertionScaleResetDampingRatio
@property (nonatomic) CGFloat dropInsertionScaleResetDelay; // ivar: _dropInsertionScaleResetDelay
@property (nonatomic) CGFloat dropInsertionScaleResetDuration; // ivar: _dropInsertionScaleResetDuration
@property (nonatomic) CGFloat dropInsertionSlamDampingRatio; // ivar: _dropInsertionSlamDampingRatio
@property (nonatomic) CGFloat dropInsertionSlamDelay; // ivar: _dropInsertionSlamDelay
@property (nonatomic) CGFloat dropInsertionSlamDuration; // ivar: _dropInsertionSlamDuration
@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled; // ivar: _hitTestingDisabled
@property (nonatomic) NSUInteger maximumWidgetsInAStack; // ivar: _maximumWidgetsInAStack
@property (retain, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *personDetailInteractionSettings; // ivar: _personDetailInteractionSettings
@property (nonatomic) BOOL showLabelsInTodayView; // ivar: _showLabelsInTodayView
@property (nonatomic) BOOL stackAlwaysShowsBorder; // ivar: _stackAlwaysShowsBorder
@property (nonatomic) BOOL stackAlwaysShowsPageControl; // ivar: _stackAlwaysShowsPageControl
@property (nonatomic) BOOL stackConfigurationBlursBackground; // ivar: _stackConfigurationBlursBackground
@property (nonatomic) CGFloat stackConfigurationContentHeightRatio; // ivar: _stackConfigurationContentHeightRatio
@property (nonatomic) CGFloat stackConfigurationDimmingAlpha; // ivar: _stackConfigurationDimmingAlpha
@property (nonatomic) CGFloat stackConfigurationExtraLargeIconScale; // ivar: _stackConfigurationExtraLargeIconScale
@property (nonatomic) CGFloat stackConfigurationLargeIconScale; // ivar: _stackConfigurationLargeIconScale
@property (nonatomic) CGFloat stackConfigurationMediumIconScale; // ivar: _stackConfigurationMediumIconScale
@property (nonatomic) CGFloat stackConfigurationNoBlurDimmingAlpha; // ivar: _stackConfigurationNoBlurDimmingAlpha
@property (nonatomic) BOOL stackConfigurationUsesFolderBlur; // ivar: _stackConfigurationUsesFolderBlur
@property (nonatomic) CGFloat stackConfigurationZoomTransitionDuration; // ivar: _stackConfigurationZoomTransitionDuration
@property (nonatomic) BOOL stackFlashesPageControlOnAppearance; // ivar: _stackFlashesPageControlOnAppearance
@property (retain, nonatomic) SBFFluidBehaviorSettings *toggleEditingOrPinnedAnimationSettings; // ivar: _toggleEditingOrPinnedAnimationSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif