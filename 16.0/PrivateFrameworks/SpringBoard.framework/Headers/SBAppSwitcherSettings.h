// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERSETTINGS_H
#define SBAPPSWITCHERSETTINGS_H

@class PTSettings, PTOutlet;


#import "SBFluidSwitcherAnimationSettings.h"
#import "SBSwitcherChamoisSettings.h"
#import "SBFloatingSwitcherSettings.h"
#import "SBAppSwitcherOrbGestureSettings.h"
#import "SBSwitcherSystemApertureSettings.h"

@interface SBAppSwitcherSettings : PTSettings {
    NSInteger _simplicityOptions;
}


@property CGFloat aExpLayoutCoeff; // ivar: _aExpLayoutCoeff
@property (retain, nonatomic) PTOutlet *addAppsToModelOutlet; // ivar: _addAppsToModelOutlet
@property (retain, nonatomic) PTOutlet *addPPTAppsToModelOutlet; // ivar: _addPPTAppsToModelOutlet
@property (retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings; // ivar: _animationSettings
@property CGFloat appExposeFloatingDoubleRowScale; // ivar: _appExposeFloatingDoubleRowScale
@property CGFloat appExposeNonFloatingDoubleRowScale; // ivar: _appExposeNonFloatingDoubleRowScale
@property CGFloat appExposeNonFloatingSingleRowScale; // ivar: _appExposeNonFloatingSingleRowScale
@property CGFloat asynchronousRenderingDisableSurfaceCacheDelayDuration; // ivar: _asynchronousRenderingDisableSurfaceCacheDelayDuration
@property CGFloat bAlpha; // ivar: _bAlpha
@property CGFloat bDarkening; // ivar: _bDarkening
@property CGFloat bExpLayoutCoeff; // ivar: _bExpLayoutCoeff
@property CGFloat centerPoint; // ivar: _centerPoint
@property (retain, nonatomic) SBSwitcherChamoisSettings *chamoisSettings; // ivar: _chamoisSettings
@property (retain, nonatomic) PTOutlet *clearModelOutlet; // ivar: _clearModelOutlet
@property CGFloat coplanarSpacingPad; // ivar: _coplanarSpacingPad
@property CGFloat coplanarSpacingPhone; // ivar: _coplanarSpacingPhone
@property CGFloat cursorHoverShadowOffsetInterpolationAmount; // ivar: _cursorHoverShadowOffsetInterpolationAmount
@property CGFloat cursorHoverShadowOpacityInterpolationAmount; // ivar: _cursorHoverShadowOpacityInterpolationAmount
@property CGFloat cursorHoverShadowRadiusInterpolationAmount; // ivar: _cursorHoverShadowRadiusInterpolationAmount
@property CGFloat deckSwitcherDecelerationRate; // ivar: _deckSwitcherDecelerationRate
@property CGFloat deckSwitcherPageScale; // ivar: _deckSwitcherPageScale
@property CGFloat depthPadding; // ivar: _depthPadding
@property (retain, nonatomic) SBFloatingSwitcherSettings *floatingSwitcherSettings; // ivar: _floatingSwitcherSettings
@property CGFloat gridSwitcherHomeButtonDeviceCardCornerRadius; // ivar: _gridSwitcherHomeButtonDeviceCardCornerRadius
@property CGFloat gridSwitcherHorizontalInterpageSpacingLandscape; // ivar: _gridSwitcherHorizontalInterpageSpacingLandscape
@property CGFloat gridSwitcherHorizontalInterpageSpacingPortrait; // ivar: _gridSwitcherHorizontalInterpageSpacingPortrait
@property CGFloat gridSwitcherPageScale; // ivar: _gridSwitcherPageScale
@property CGFloat gridSwitcherSnapToControlCenterHeightSlop; // ivar: _gridSwitcherSnapToControlCenterHeightSlop
@property CGFloat gridSwitcherSwipeUpMinimumScale; // ivar: _gridSwitcherSwipeUpMinimumScale
@property CGFloat gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale; // ivar: _gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale
@property CGFloat gridSwitcherSwipeUpNormalizedRubberbandingRange; // ivar: _gridSwitcherSwipeUpNormalizedRubberbandingRange
@property CGFloat gridSwitcherVerticalNaturalSpacingLandscape; // ivar: _gridSwitcherVerticalNaturalSpacingLandscape
@property CGFloat gridSwitcherVerticalNaturalSpacingPortrait; // ivar: _gridSwitcherVerticalNaturalSpacingPortrait
@property CGFloat iconSideLength; // ivar: _iconSideLength
@property CGFloat liveResizeGridMinimumHeight; // ivar: _liveResizeGridMinimumHeight
@property CGFloat liveResizeGridMinimumWidth; // ivar: _liveResizeGridMinimumWidth
@property CGFloat liveResizeGridRubberbandingRange; // ivar: _liveResizeGridRubberbandingRange
@property CGFloat liveResizePointerInteractionRegionInnerLength; // ivar: _liveResizePointerInteractionRegionInnerLength
@property CGFloat liveResizePointerInteractionRegionOuterLength; // ivar: _liveResizePointerInteractionRegionOuterLength
@property CGFloat liveResizeSceneUpdateDistanceThreshold; // ivar: _liveResizeSceneUpdateDistanceThreshold
@property CGFloat liveResizeSceneUpdateTimeThresholdSeconds; // ivar: _liveResizeSceneUpdateTimeThresholdSeconds
@property BOOL liveResizeSendsAnimatedSceneSizeUpdates; // ivar: _liveResizeSendsAnimatedSceneSizeUpdates
@property BOOL liveResizeUsesGrid; // ivar: _liveResizeUsesGrid
@property (retain, nonatomic) PTOutlet *loadModelOutlet; // ivar: _loadModelOutlet
@property CGFloat mAlpha; // ivar: _mAlpha
@property CGFloat mDarkening; // ivar: _mDarkening
@property CGFloat mScale; // ivar: _mScale
@property CGFloat maxDarkening; // ivar: _maxDarkening
@property CGFloat maxScale; // ivar: _maxScale
@property CGFloat multipleWindowsIndicatorSideLength; // ivar: _multipleWindowsIndicatorSideLength
@property NSUInteger numberOfSnapshotsToAlwaysKeepAround; // ivar: _numberOfSnapshotsToAlwaysKeepAround
@property NSUInteger numberOfSnapshotsToCacheInSwitcher; // ivar: _numberOfSnapshotsToCacheInSwitcher
@property CGFloat offscreenCardScaleForFlyIn; // ivar: _offscreenCardScaleForFlyIn
@property (retain, nonatomic) SBAppSwitcherOrbGestureSettings *orbGestureSettings; // ivar: _orbGestureSettings
@property CGFloat peekInsetWidth; // ivar: _peekInsetWidth
@property CGFloat preventMedusaSnapshotsAfterTransitionDuration; // ivar: _preventMedusaSnapshotsAfterTransitionDuration
@property BOOL shouldDisableSwitcherModelUpdatesForDemo; // ivar: _shouldDisableSwitcherModelUpdatesForDemo
@property BOOL shouldRoundCornersDuringSwipeUp; // ivar: _shouldRoundCornersDuringSwipeUp
@property BOOL showFloatingModifierTimeline; // ivar: _showFloatingModifierTimeline
@property BOOL showFloats; // ivar: _showFloats
@property BOOL showMainModifierTimeline; // ivar: _showMainModifierTimeline
@property BOOL showModifierDebugLabel; // ivar: _showModifierDebugLabel
@property BOOL simplicityOptionNoBlurs; // ivar: _simplicityOptionNoBlurs
@property BOOL simplicityOptionNoControlCenter; // ivar: _simplicityOptionNoControlCenter
@property BOOL simplicityOptionNoCrossfade; // ivar: _simplicityOptionNoCrossfade
@property BOOL simplicityOptionNoIcons; // ivar: _simplicityOptionNoIcons
@property BOOL simplicityOptionNoLabels; // ivar: _simplicityOptionNoLabels
@property BOOL simplicityOptionNoShadows; // ivar: _simplicityOptionNoShadows
@property BOOL simplicityOptionNoSnapshotBkg; // ivar: _simplicityOptionNoSnapshotBkg
@property BOOL simplicityOptionNoSnapshots; // ivar: _simplicityOptionNoSnapshots
@property NSInteger simplicityOptions;
@property CGFloat spacingBetweenBoundsCenterAndSecondIcon; // ivar: _spacingBetweenBoundsCenterAndSecondIcon
@property CGFloat spacingBetweenIconAndLabel; // ivar: _spacingBetweenIconAndLabel
@property CGFloat spacingBetweenLabelAndMultipleWindowsIndicator; // ivar: _spacingBetweenLabelAndMultipleWindowsIndicator
@property CGFloat spacingBetweenLabelAndSecondIcon; // ivar: _spacingBetweenLabelAndSecondIcon
@property CGFloat spacingBetweenLeadingEdgeAndIcon; // ivar: _spacingBetweenLeadingEdgeAndIcon
@property CGFloat spacingBetweenSnapshotAndDescriptionLabelBaseline; // ivar: _spacingBetweenSnapshotAndDescriptionLabelBaseline
@property CGFloat spacingBetweenSnapshotAndIcon; // ivar: _spacingBetweenSnapshotAndIcon
@property CGFloat spacingBetweenTitleAndSubtitleBaseline; // ivar: _spacingBetweenTitleAndSubtitleBaseline
@property CGFloat spacingBetweenTrailingEdgeAndLabels; // ivar: _spacingBetweenTrailingEdgeAndLabels
@property (retain, nonatomic) PTOutlet *stashModelOutlet; // ivar: _stashModelOutlet
@property CGFloat switcherCardScaleWhileCursorHovered; // ivar: _switcherCardScaleWhileCursorHovered
@property CGFloat switcherCardScaleWhileTouched; // ivar: _switcherCardScaleWhileTouched
@property CGFloat switcherCardShadowOffsetHorizontal; // ivar: _switcherCardShadowOffsetHorizontal
@property CGFloat switcherCardShadowOffsetHorizontalWhileTouched; // ivar: _switcherCardShadowOffsetHorizontalWhileTouched
@property CGFloat switcherCardShadowOffsetVertical; // ivar: _switcherCardShadowOffsetVertical
@property CGFloat switcherCardShadowOffsetVerticalWhileTouched; // ivar: _switcherCardShadowOffsetVerticalWhileTouched
@property CGFloat switcherCardShadowOpacity; // ivar: _switcherCardShadowOpacity
@property CGFloat switcherCardShadowOpacityWhileTouched; // ivar: _switcherCardShadowOpacityWhileTouched
@property CGFloat switcherCardShadowRadius; // ivar: _switcherCardShadowRadius
@property CGFloat switcherCardShadowRadiusWhileTouched; // ivar: _switcherCardShadowRadiusWhileTouched
@property CGFloat switcherCenterYOffsetPercentOfScreenHeight; // ivar: _switcherCenterYOffsetPercentOfScreenHeight
@property NSInteger switcherStyle; // ivar: _switcherStyle
@property (retain, nonatomic) SBSwitcherSystemApertureSettings *systemApertureSettings; // ivar: _systemApertureSettings
@property CGFloat tetheredInsertionRemovalInsetForDeterminingVisibility; // ivar: _tetheredInsertionRemovalInsetForDeterminingVisibility
@property CGFloat tintStyleDimmingAlphaInFocusForDarkMode; // ivar: _tintStyleDimmingAlphaInFocusForDarkMode
@property CGFloat tintStyleDimmingAlphaInFocusForLightMode; // ivar: _tintStyleDimmingAlphaInFocusForLightMode
@property CGFloat tintStyleDimmingAlphaUnFocusForDarkMode; // ivar: _tintStyleDimmingAlphaUnFocusForDarkMode
@property CGFloat titleOpacityACoeff; // ivar: _titleOpacityACoeff
@property CGFloat titleOpacityBCoeff; // ivar: _titleOpacityBCoeff
@property CGFloat titleOpacityCCoeff; // ivar: _titleOpacityCCoeff
@property CGFloat titleOpacityDCoeff; // ivar: _titleOpacityDCoeff
@property BOOL useAsynchronousRendering; // ivar: _useAsynchronousRendering
@property BOOL useTitleOpacityPrototypeSettings; // ivar: _useTitleOpacityPrototypeSettings


+(id)settingsControllerModule;
-(BOOL)shouldSimplifyForOptions:(NSInteger)arg0 ;
-(NSInteger)effectiveSwitcherStyle;
-(id)archiveValueForKey:(id)arg0 ;
-(void)setDefaultValues;


@end


#endif