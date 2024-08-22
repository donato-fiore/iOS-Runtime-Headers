// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMEDUSASETTINGS_H
#define SBMEDUSASETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings, PTOutlet;


#import "SBMedusa1oSettings.h"

@interface SBMedusaSettings : PTSettings

@property (nonatomic) CGFloat blurFadeAnimationDuration; // ivar: _blurFadeAnimationDuration
@property (nonatomic) CGFloat cardDragOverSplitAppLayoutScale; // ivar: _cardDragOverSplitAppLayoutScale
@property (nonatomic) CGFloat cardPlatterScale; // ivar: _cardPlatterScale
@property (nonatomic) CGFloat contentDraggingCommandeerGutterInsetForUniversalControl; // ivar: _contentDraggingCommandeerGutterInsetForUniversalControl
@property (nonatomic) CGFloat contentDraggingCommandeerGutterWidth; // ivar: _contentDraggingCommandeerGutterWidth
@property (nonatomic) CGFloat contentDraggingFloatingActivationGutterWidth; // ivar: _contentDraggingFloatingActivationGutterWidth
@property (nonatomic) CGFloat contentDraggingSideActivationGutterWidth; // ivar: _contentDraggingSideActivationGutterWidth
@property (nonatomic) CGFloat cornerRadiusFallbackForOldApps; // ivar: _cornerRadiusFallbackForOldApps
@property (nonatomic) CGFloat cornerRadiusForCompatibilityAppOuterCorners; // ivar: _cornerRadiusForCompatibilityAppOuterCorners
@property (nonatomic) CGFloat cornerRadiusForFloatingApps; // ivar: _cornerRadiusForFloatingApps
@property (nonatomic) CGFloat cornerRadiusForInnerCorners; // ivar: _cornerRadiusForInnerCorners
@property (nonatomic) CGFloat coronaDiffuseShadowOpacity; // ivar: _coronaDiffuseShadowOpacity
@property (nonatomic) CGFloat coronaDiffuseShadowOpacityWhileTouched; // ivar: _coronaDiffuseShadowOpacityWhileTouched
@property (nonatomic) CGFloat coronaRimShadowOpacity; // ivar: _coronaRimShadowOpacity
@property (nonatomic) CGFloat defaultDimmingOpacity; // ivar: _defaultDimmingOpacity
@property (nonatomic) CGFloat diffuseShadowOffsetHorizontal; // ivar: _diffuseShadowOffsetHorizontal
@property (nonatomic) CGFloat diffuseShadowOffsetHorizontalWhileTouched; // ivar: _diffuseShadowOffsetHorizontalWhileTouched
@property (nonatomic) CGFloat diffuseShadowOffsetVertical; // ivar: _diffuseShadowOffsetVertical
@property (nonatomic) CGFloat diffuseShadowOffsetVerticalWhileTouched; // ivar: _diffuseShadowOffsetVerticalWhileTouched
@property (nonatomic) CGFloat diffuseShadowOpacity; // ivar: _diffuseShadowOpacity
@property (nonatomic) CGFloat diffuseShadowOpacityWhileTouched; // ivar: _diffuseShadowOpacityWhileTouched
@property (nonatomic) CGFloat diffuseShadowRadius; // ivar: _diffuseShadowRadius
@property (nonatomic) CGFloat diffuseShadowRadiusWhileTouched; // ivar: _diffuseShadowRadiusWhileTouched
@property (nonatomic) CGFloat dismissHitTestTopPadding; // ivar: _dismissHitTestTopPadding
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings; // ivar: _dockAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockWithPresentedFolderAnimationSettings; // ivar: _dockWithPresentedFolderAnimationSettings
@property (nonatomic) CGFloat draggingPlatterFullscreenActivationRegionHeight; // ivar: _draggingPlatterFullscreenActivationRegionHeight
@property (nonatomic) CGFloat draggingPlatterFullscreenActivationRegionWidth; // ivar: _draggingPlatterFullscreenActivationRegionWidth
@property (nonatomic) CGFloat draggingPlatterSideActivationGutterPadding; // ivar: _draggingPlatterSideActivationGutterPadding
@property (retain, nonatomic) SBFFluidBehaviorSettings *dropAnimationSettings; // ivar: _dropAnimationSettings
@property (nonatomic) CGFloat dropAnimationUnblurThresholdPercentage; // ivar: _dropAnimationUnblurThresholdPercentage
@property (nonatomic) CGFloat floatingAppCardScaleWhileCursorHovered; // ivar: _floatingAppCardScaleWhileCursorHovered
@property (nonatomic) CGFloat floatingAppCardScaleWhileTouched; // ivar: _floatingAppCardScaleWhileTouched
@property (nonatomic) CGFloat floatingCardPlatterScale; // ivar: _floatingCardPlatterScale
@property (nonatomic) CGFloat iconPlatterScale; // ivar: _iconPlatterScale
@property (retain, nonatomic) PTOutlet *killSpringBoardOutlet; // ivar: _killSpringBoardOutlet
@property (nonatomic) CGFloat leadingSlideOverRelocationDelay; // ivar: _leadingSlideOverRelocationDelay
@property (retain, nonatomic) SBMedusa1oSettings *medusa1oSettings; // ivar: _medusa1oSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *medusaAnimationSettings; // ivar: _medusaAnimationSettings
@property (nonatomic) CGFloat medusaSeparatorCursorBottomEdgeInset; // ivar: _medusaSeparatorCursorBottomEdgeInset
@property (nonatomic) CGFloat medusaSeparatorCursorLeftEdgeInset; // ivar: _medusaSeparatorCursorLeftEdgeInset
@property (nonatomic) CGFloat medusaSeparatorCursorRightEdgeInset; // ivar: _medusaSeparatorCursorRightEdgeInset
@property (nonatomic) CGFloat medusaSeparatorCursorTopEdgeInset; // ivar: _medusaSeparatorCursorTopEdgeInset
@property (nonatomic) CGFloat medusaWindowDraggingCursorBottomEdgeInset; // ivar: _medusaWindowDraggingCursorBottomEdgeInset
@property (nonatomic) CGFloat medusaWindowDraggingCursorLeftEdgeInset; // ivar: _medusaWindowDraggingCursorLeftEdgeInset
@property (nonatomic) CGFloat medusaWindowDraggingCursorRightEdgeInset; // ivar: _medusaWindowDraggingCursorRightEdgeInset
@property (nonatomic) CGFloat medusaWindowDraggingCursorTopEdgeInset; // ivar: _medusaWindowDraggingCursorTopEdgeInset
@property (nonatomic) CGFloat movePanGestureNegativeVelocityThreshold; // ivar: _movePanGestureNegativeVelocityThreshold
@property (nonatomic) CGFloat movePanGesturePositiveVelocityThreshold; // ivar: _movePanGesturePositiveVelocityThreshold
@property (nonatomic) CGFloat movePanGestureThresholdPercentage; // ivar: _movePanGestureThresholdPercentage
@property (nonatomic) CGFloat narrowEdgeSwipeHitTestWidth; // ivar: _narrowEdgeSwipeHitTestWidth
@property (nonatomic) CGFloat numberOfRecents; // ivar: _numberOfRecents
@property (nonatomic) BOOL persistentDock; // ivar: _persistentDock
@property (retain, nonatomic) SBFFluidBehaviorSettings *platterAnimationSettings; // ivar: _platterAnimationSettings
@property (nonatomic) CGFloat reduceMotionBlurFadeAnimationDuration; // ivar: _reduceMotionBlurFadeAnimationDuration
@property (nonatomic) CGFloat reflowAnimationProgressForCardHeaderFadeIn; // ivar: _reflowAnimationProgressForCardHeaderFadeIn
@property (nonatomic) CGFloat replacementDimmingAlpha; // ivar: _replacementDimmingAlpha
@property (nonatomic) CGFloat resizeAnimationDismissItemOpacity; // ivar: _resizeAnimationDismissItemOpacity
@property (retain, nonatomic) SBFFluidBehaviorSettings *resizeAnimationSettings; // ivar: _resizeAnimationSettings
@property (nonatomic) CGFloat resizeAnimationUnblurThresholdPercentage; // ivar: _resizeAnimationUnblurThresholdPercentage
@property (nonatomic) CGFloat rimShadowOpacity; // ivar: _rimShadowOpacity
@property (nonatomic) CGFloat rimShadowRadius; // ivar: _rimShadowRadius
@property (nonatomic) BOOL showContentDragExclusionRects; // ivar: _showContentDragExclusionRects
@property (nonatomic) CGFloat slideOverTongueExpandedScale; // ivar: _slideOverTongueExpandedScale
@property (nonatomic) BOOL statusBarDebugBackgroundColorsEnabled; // ivar: _statusBarDebugBackgroundColorsEnabled
@property (nonatomic) BOOL statusBarDebugOffsettingEnabled; // ivar: _statusBarDebugOffsettingEnabled
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherCardDropAnimationSettings; // ivar: _switcherCardDropAnimationSettings
@property (nonatomic) CGFloat switcherCenterWindowContentPushInScale; // ivar: _switcherCenterWindowContentPushInScale
@property (nonatomic) CGFloat switcherCenterWindowShadowOffsetY; // ivar: _switcherCenterWindowShadowOffsetY
@property (nonatomic) CGFloat switcherCenterWindowShadowOpacity; // ivar: _switcherCenterWindowShadowOpacity
@property (nonatomic) CGFloat switcherCenterWindowShadowRadius; // ivar: _switcherCenterWindowShadowRadius
@property (nonatomic) CGFloat switcherFullScreenContentPushInScale; // ivar: _switcherFullScreenContentPushInScale
@property (nonatomic) CGFloat switcherPeekingWindowShadowOffsetY; // ivar: _switcherPeekingWindowShadowOffsetY
@property (nonatomic) CGFloat switcherPeekingWindowShadowOpacity; // ivar: _switcherPeekingWindowShadowOpacity
@property (nonatomic) CGFloat switcherPeekingWindowShadowRadius; // ivar: _switcherPeekingWindowShadowRadius
@property (nonatomic) CGFloat switcherShelfBackgroundBlurPresentationThreshold; // ivar: _switcherShelfBackgroundBlurPresentationThreshold
@property (nonatomic) CGFloat switcherShelfBottomSpacing; // ivar: _switcherShelfBottomSpacing
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfBounceIconSettings; // ivar: _switcherShelfBounceIconSettings
@property (nonatomic) CGFloat switcherShelfCardCornerRadius; // ivar: _switcherShelfCardCornerRadius
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfCardGenieDismissalSettings; // ivar: _switcherShelfCardGenieDismissalSettings
@property (nonatomic) CGFloat switcherShelfCardGenieDismissedScale; // ivar: _switcherShelfCardGenieDismissedScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfCardGeniePresentationSettings; // ivar: _switcherShelfCardGeniePresentationSettings
@property (nonatomic) CGFloat switcherShelfCardGenieResponseIncrementScalar; // ivar: _switcherShelfCardGenieResponseIncrementScalar
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfCardNonGenieDismissalSettings; // ivar: _switcherShelfCardNonGenieDismissalSettings
@property (nonatomic) CGFloat switcherShelfCardNonGenieDismissedScale; // ivar: _switcherShelfCardNonGenieDismissedScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfCardNonGeniePresentationSettings; // ivar: _switcherShelfCardNonGeniePresentationSettings
@property (nonatomic) CGFloat switcherShelfCardNonGenieResponseIncrementScalar; // ivar: _switcherShelfCardNonGenieResponseIncrementScalar
@property (nonatomic) CGFloat switcherShelfCardScale; // ivar: _switcherShelfCardScale
@property (nonatomic) CGFloat switcherShelfCardShadowOffsetY; // ivar: _switcherShelfCardShadowOffsetY
@property (nonatomic) CGFloat switcherShelfCardShadowOpacity; // ivar: _switcherShelfCardShadowOpacity
@property (nonatomic) CGFloat switcherShelfCardShadowRadius; // ivar: _switcherShelfCardShadowRadius
@property (nonatomic) CGFloat switcherShelfGenieBezierCurvePointYDeltaFromTarget; // ivar: _switcherShelfGenieBezierCurvePointYDeltaFromTarget
@property (nonatomic) CGFloat switcherShelfGenieBezierCurveScaleExponent; // ivar: _switcherShelfGenieBezierCurveScaleExponent
@property (nonatomic) CGFloat switcherShelfGenieBezierCurveXExponent; // ivar: _switcherShelfGenieBezierCurveXExponent
@property (nonatomic) CGFloat switcherShelfGenieBezierCurveYExponent; // ivar: _switcherShelfGenieBezierCurveYExponent
@property (nonatomic) CGFloat switcherShelfGenieIconBounceDelay; // ivar: _switcherShelfGenieIconBounceDelay
@property (nonatomic) CGFloat switcherShelfGenieInitialYIncrementBelowScreen; // ivar: _switcherShelfGenieInitialYIncrementBelowScreen
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfGenieRopeSettings; // ivar: _switcherShelfGenieRopeSettings
@property (nonatomic) CGFloat switcherShelfIconHitTestInset; // ivar: _switcherShelfIconHitTestInset
@property (nonatomic) CGFloat switcherShelfLabelLineSpacing; // ivar: _switcherShelfLabelLineSpacing
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherShelfNonGenieRopeSettings; // ivar: _switcherShelfNonGenieRopeSettings
@property (nonatomic) CGFloat switcherShelfSplitViewIconInset; // ivar: _switcherShelfSplitViewIconInset
@property (nonatomic) CGFloat switcherSlideOverContentPushInScale; // ivar: _switcherSlideOverContentPushInScale
@property (nonatomic) CGFloat switcherSlideOverDosidoLayoutOvershootMultiplicationFactor; // ivar: _switcherSlideOverDosidoLayoutOvershootMultiplicationFactor
@property (retain, nonatomic) SBFFluidBehaviorSettings *topAffordanceCollapseAnimationSettings; // ivar: _topAffordanceCollapseAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *topAffordanceExpandAnimationSettings; // ivar: _topAffordanceExpandAnimationSettings
@property (nonatomic) CGFloat topAffordanceHitTestExtendBottom; // ivar: _topAffordanceHitTestExtendBottom
@property (nonatomic) CGFloat topAffordanceHitTestExtendLeft; // ivar: _topAffordanceHitTestExtendLeft
@property (nonatomic) CGFloat topAffordanceHitTestExtendRight; // ivar: _topAffordanceHitTestExtendRight
@property (nonatomic) CGFloat topAffordanceHitTestExtendTop; // ivar: _topAffordanceHitTestExtendTop
@property (nonatomic) CGFloat vibrantColorMatrixM11; // ivar: _vibrantColorMatrixM11
@property (nonatomic) CGFloat vibrantColorMatrixM12; // ivar: _vibrantColorMatrixM12
@property (nonatomic) CGFloat vibrantColorMatrixM13; // ivar: _vibrantColorMatrixM13
@property (nonatomic) CGFloat vibrantColorMatrixM14; // ivar: _vibrantColorMatrixM14
@property (nonatomic) CGFloat vibrantColorMatrixM15; // ivar: _vibrantColorMatrixM15
@property (nonatomic) CGFloat vibrantColorMatrixM21; // ivar: _vibrantColorMatrixM21
@property (nonatomic) CGFloat vibrantColorMatrixM22; // ivar: _vibrantColorMatrixM22
@property (nonatomic) CGFloat vibrantColorMatrixM23; // ivar: _vibrantColorMatrixM23
@property (nonatomic) CGFloat vibrantColorMatrixM24; // ivar: _vibrantColorMatrixM24
@property (nonatomic) CGFloat vibrantColorMatrixM25; // ivar: _vibrantColorMatrixM25
@property (nonatomic) CGFloat vibrantColorMatrixM31; // ivar: _vibrantColorMatrixM31
@property (nonatomic) CGFloat vibrantColorMatrixM32; // ivar: _vibrantColorMatrixM32
@property (nonatomic) CGFloat vibrantColorMatrixM33; // ivar: _vibrantColorMatrixM33
@property (nonatomic) CGFloat vibrantColorMatrixM34; // ivar: _vibrantColorMatrixM34
@property (nonatomic) CGFloat vibrantColorMatrixM35; // ivar: _vibrantColorMatrixM35
@property (nonatomic) CGFloat vibrantColorMatrixM41; // ivar: _vibrantColorMatrixM41
@property (nonatomic) CGFloat vibrantColorMatrixM42; // ivar: _vibrantColorMatrixM42
@property (nonatomic) CGFloat vibrantColorMatrixM43; // ivar: _vibrantColorMatrixM43
@property (nonatomic) CGFloat vibrantColorMatrixM44; // ivar: _vibrantColorMatrixM44
@property (nonatomic) CGFloat vibrantColorMatrixM45; // ivar: _vibrantColorMatrixM45
@property (nonatomic) CGFloat wideEdgeSwipeHitTestWidth; // ivar: _wideEdgeSwipeHitTestWidth
@property (retain, nonatomic) SBFFluidBehaviorSettings *windowDragAnimationSettings; // ivar: _windowDragAnimationSettings
@property (nonatomic) CGFloat windowPlatterScale; // ivar: _windowPlatterScale
@property (nonatomic) CGFloat windowPlatterScaleForReplacingEntireSpace; // ivar: _windowPlatterScaleForReplacingEntireSpace
@property (nonatomic) CGFloat windowSplitViewDismissalGutterWidth; // ivar: _windowSplitViewDismissalGutterWidth
@property (nonatomic) CGFloat windowTearOffDraggingFloatingActivationGutterWidth; // ivar: _windowTearOffDraggingFloatingActivationGutterWidth
@property (nonatomic) CGFloat windowTearOffDraggingSideActivationGutterWidth; // ivar: _windowTearOffDraggingSideActivationGutterWidth


+(id)settingsControllerModule;
-(CGFloat)effectiveBlurFadeAnimationDuration;
-(struct CAColorMatrix )coronaVibrantColorMatrixInput;
-(struct UIEdgeInsets )medusaSeparatorCursorEdgeInsets;
-(struct UIEdgeInsets )medusaWindowDraggingCursorEdgeInsets;
-(void)setDefaultValues;


@end


#endif