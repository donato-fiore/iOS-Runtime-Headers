// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERANIMATIONSETTINGS_H
#define SBFLUIDSWITCHERANIMATIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBFluidSwitcherAnimationSettings : PTSettings

@property (nonatomic) CGFloat alertBarSwipeDismissClientAnimationsDelay; // ivar: _alertBarSwipeDismissClientAnimationsDelay
@property (nonatomic) CGFloat alertBarSwipeDismissHapticDelay; // ivar: _alertBarSwipeDismissHapticDelay
@property (nonatomic) CGFloat alertBarSwipeDismissZoomOutDelay; // ivar: _alertBarSwipeDismissZoomOutDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *alertBarSwipeDismissalSettings; // ivar: _alertBarSwipeDismissalSettings
@property (nonatomic) CGFloat alertCardifiedDismissClientAnimationsDelay; // ivar: _alertCardifiedDismissClientAnimationsDelay
@property (nonatomic) CGFloat alertCardifiedDismissHapticDelay; // ivar: _alertCardifiedDismissHapticDelay
@property (nonatomic) CGFloat alertCardifiedDismissZoomOutDelay; // ivar: _alertCardifiedDismissZoomOutDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *alertCardifiedDismissalSettings; // ivar: _alertCardifiedDismissalSettings
@property (nonatomic) BOOL allowIconZoomFromLargeWidgets; // ivar: _allowIconZoomFromLargeWidgets
@property (nonatomic) BOOL allowIconZoomFromMediumWidgets; // ivar: _allowIconZoomFromMediumWidgets
@property (retain, nonatomic) SBFFluidBehaviorSettings *appSelectionSquishSettings; // ivar: _appSelectionSquishSettings
@property (nonatomic) CGFloat appSwitcherTitleAndIconFadeInSlowDownFactor; // ivar: _appSwitcherTitleAndIconFadeInSlowDownFactor
@property (retain, nonatomic) SBFFluidBehaviorSettings *appToSwitcherCornerRadiusSettings; // ivar: _appToSwitcherCornerRadiusSettings
@property (nonatomic) CGFloat appToSwitcherTransitionMinCardScaleFactor; // ivar: _appToSwitcherTransitionMinCardScaleFactor
@property (retain, nonatomic) SBFFluidBehaviorSettings *arcSwipeSettings; // ivar: _arcSwipeSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *backdropBlurSettings; // ivar: _backdropBlurSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *bannerUnfurlSettings; // ivar: _bannerUnfurlSettings
@property (nonatomic) CGFloat bannerUnfurlWallpaperAlphaDelay; // ivar: _bannerUnfurlWallpaperAlphaDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *bannerUnfurlWallpaperAlphaSettings; // ivar: _bannerUnfurlWallpaperAlphaSettings
@property (nonatomic) CGFloat cardFlyInAccelerationDipThreshold; // ivar: _cardFlyInAccelerationDipThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *cardFlyInSettings; // ivar: _cardFlyInSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *centerToSlideOverAnimationSettings; // ivar: _centerToSlideOverAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *centerZoomOpacitySettings; // ivar: _centerZoomOpacitySettings
@property (nonatomic) CGFloat centerZoomScale; // ivar: _centerZoomScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *centerZoomSettings; // ivar: _centerZoomSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *continuityBannerSlideUpSettings; // ivar: _continuityBannerSlideUpSettings
@property (nonatomic) CGFloat crossblurDosidoBlurRadius; // ivar: _crossblurDosidoBlurRadius
@property (nonatomic) CGFloat crossblurDosidoLargeScale; // ivar: _crossblurDosidoLargeScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *crossblurDosidoSettings; // ivar: _crossblurDosidoSettings
@property (nonatomic) CGFloat crossblurDosidoSmallScale; // ivar: _crossblurDosidoSmallScale
@property (nonatomic) CGFloat crossblurRasterizationScale; // ivar: _crossblurRasterizationScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *crossfadeDosidoSettings; // ivar: _crossfadeDosidoSettings
@property (nonatomic) CGFloat dimmingAlphaInApplication; // ivar: _dimmingAlphaInApplication
@property (nonatomic) CGFloat dimmingAlphaInSwitcher; // ivar: _dimmingAlphaInSwitcher
@property (nonatomic) CGFloat disableAsyncRenderingTransitionPercentage; // ivar: _disableAsyncRenderingTransitionPercentage
@property (nonatomic) CGFloat disallowAcceleratedHomeButtonPressTransitionPercentage; // ivar: _disallowAcceleratedHomeButtonPressTransitionPercentage
@property (nonatomic) CGFloat dockHurdlingIconZoomDockToBackTiming; // ivar: _dockHurdlingIconZoomDockToBackTiming
@property (nonatomic) CGFloat dockHurdlingIconZoomDockToFrontTiming; // ivar: _dockHurdlingIconZoomDockToFrontTiming
@property (nonatomic) CGFloat dockHurdlingIconZoomInitialVelocity; // ivar: _dockHurdlingIconZoomInitialVelocity
@property (nonatomic) CGFloat dosidoScale; // ivar: _dosidoScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *dosidoScaleDownSettings; // ivar: _dosidoScaleDownSettings
@property (nonatomic) CGFloat dosidoScaleUpDelay; // ivar: _dosidoScaleUpDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *dosidoScaleUpSettings; // ivar: _dosidoScaleUpSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *dosidoSettings; // ivar: _dosidoSettings
@property (nonatomic) CGFloat emptySwitcherDismissDelay; // ivar: _emptySwitcherDismissDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *floatingDockIconFadeSettings; // ivar: _floatingDockIconFadeSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *fullScreenToPeekFirstPhaseAnimationSettings; // ivar: _fullScreenToPeekFirstPhaseAnimationSettings
@property (nonatomic) CGFloat fullScreenToPeekSecondPhaseAnimationDelay; // ivar: _fullScreenToPeekSecondPhaseAnimationDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *fullScreenToPeekSecondPhaseAnimationSettings; // ivar: _fullScreenToPeekSecondPhaseAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *gestureInitiatedAppToSwitcherSettings; // ivar: _gestureInitiatedAppToSwitcherSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureBottomRowZoomDownLayoutSettings; // ivar: _homeGestureBottomRowZoomDownLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureBottomRowZoomDownPositionSettings; // ivar: _homeGestureBottomRowZoomDownPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureBottomRowZoomDownScaleSettings; // ivar: _homeGestureBottomRowZoomDownScaleSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureCenterRowZoomUpSettings; // ivar: _homeGestureCenterRowZoomUpSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureEdgeRowZoomUpSettings; // ivar: _homeGestureEdgeRowZoomUpSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureLargeWidgetZoomDownLayoutSettings; // ivar: _homeGestureLargeWidgetZoomDownLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureLargeWidgetZoomDownPositionSettings; // ivar: _homeGestureLargeWidgetZoomDownPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureLargeWidgetZoomDownScaleSettings; // ivar: _homeGestureLargeWidgetZoomDownScaleSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureMediumWidgetZoomDownLayoutSettings; // ivar: _homeGestureMediumWidgetZoomDownLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureMediumWidgetZoomDownPositionSettings; // ivar: _homeGestureMediumWidgetZoomDownPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureMediumWidgetZoomDownScaleSettings; // ivar: _homeGestureMediumWidgetZoomDownScaleSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureSmallWidgetZoomDownLayoutSettings; // ivar: _homeGestureSmallWidgetZoomDownLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureSmallWidgetZoomDownPositionSettings; // ivar: _homeGestureSmallWidgetZoomDownPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureSmallWidgetZoomDownScaleSettings; // ivar: _homeGestureSmallWidgetZoomDownScaleSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureTopRowZoomDownLayoutSettings; // ivar: _homeGestureTopRowZoomDownLayoutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureTopRowZoomDownPositionSettings; // ivar: _homeGestureTopRowZoomDownPositionSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeGestureTopRowZoomDownScaleSettings; // ivar: _homeGestureTopRowZoomDownScaleSettings
@property (nonatomic) CGFloat homeScreenBlurInApplication; // ivar: _homeScreenBlurInApplication
@property (nonatomic) CGFloat homeScreenBlurInSwitcher; // ivar: _homeScreenBlurInSwitcher
@property (nonatomic) CGFloat homeScreenBlurInSwitcherReduceMotionEnabled; // ivar: _homeScreenBlurInSwitcherReduceMotionEnabled
@property (nonatomic) CGFloat homeScreenOpacityInApplication; // ivar: _homeScreenOpacityInApplication
@property (nonatomic) CGFloat homeScreenOpacityInSwitcher; // ivar: _homeScreenOpacityInSwitcher
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeScreenOpacitySettings; // ivar: _homeScreenOpacitySettings
@property (nonatomic) CGFloat homeScreenScaleInApplication; // ivar: _homeScreenScaleInApplication
@property (nonatomic) CGFloat homeScreenScaleInSwitcher; // ivar: _homeScreenScaleInSwitcher
@property (retain, nonatomic) SBFFluidBehaviorSettings *homeScreenScaleSettings; // ivar: _homeScreenScaleSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *iconFadeInSettings; // ivar: _iconFadeInSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *iconZoomDownSettings; // ivar: _iconZoomDownSettings
@property (nonatomic) CGFloat iconZoomFloatingDockFadeDelay; // ivar: _iconZoomFloatingDockFadeDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *launchAppFromSwitcherSettings; // ivar: _launchAppFromSwitcherSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings; // ivar: _layoutSettings
@property (nonatomic) NSInteger minimumTouchSamplesForAccelerationDip; // ivar: _minimumTouchSamplesForAccelerationDip
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings; // ivar: _opacitySettings
@property (nonatomic) BOOL performTwoPhaseFullScreenToPeekTransition; // ivar: _performTwoPhaseFullScreenToPeekTransition
@property (nonatomic) CGFloat pulseScale; // ivar: _pulseScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *pulseScaleSettings; // ivar: _pulseScaleSettings
@property (nonatomic) CGFloat pulseSecondStageDelay; // ivar: _pulseSecondStageDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *reduceMotionAppToSwitcherSettings; // ivar: _reduceMotionAppToSwitcherSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *reduceMotionArcSwipeSettings; // ivar: _reduceMotionArcSwipeSettings
@property (nonatomic) CGFloat reduceMotionCrossfadeDuration; // ivar: _reduceMotionCrossfadeDuration
@property (nonatomic) CGFloat reduceMotionTriggerDelay; // ivar: _reduceMotionTriggerDelay
@property (nonatomic) CGFloat reopenButtonFadeInDelay; // ivar: _reopenButtonFadeInDelay
@property (nonatomic) CGFloat reopenButtonInitialScale; // ivar: _reopenButtonInitialScale
@property (retain, nonatomic) SBFFluidBehaviorSettings *reopenButtonScaleSettings; // ivar: _reopenButtonScaleSettings
@property (nonatomic) CGFloat resizeBlurDelay; // ivar: _resizeBlurDelay
@property (nonatomic) CGFloat siriSwipeDismissClientAnimationsDelay; // ivar: _siriSwipeDismissClientAnimationsDelay
@property (nonatomic) CGFloat siriSwipeDismissHapticDelay; // ivar: _siriSwipeDismissHapticDelay
@property (nonatomic) CGFloat siriSwipeDismissZoomOutDelay; // ivar: _siriSwipeDismissZoomOutDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *siriSwipeDismissalSettings; // ivar: _siriSwipeDismissalSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *slideOverSettings; // ivar: _slideOverSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *slideOverToFullScreenAnimationSettings; // ivar: _slideOverToFullScreenAnimationSettings
@property (nonatomic) CGFloat slideOverToFullScreenOutgoingAppScaleBack; // ivar: _slideOverToFullScreenOutgoingAppScaleBack
@property (nonatomic) CGFloat slideOverToFullScreenOutgoingFinalOpacity; // ivar: _slideOverToFullScreenOutgoingFinalOpacity
@property (retain, nonatomic) SBFFluidBehaviorSettings *slideUpSettings; // ivar: _slideUpSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *splitViewToSlideOverSettings; // ivar: _splitViewToSlideOverSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *stackedSwitcherTrackingSettings; // ivar: _stackedSwitcherTrackingSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *statusBarFadeInSettings; // ivar: _statusBarFadeInSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *statusBarFadeOutSettings; // ivar: _statusBarFadeOutSettings
@property (nonatomic) CGFloat statusBarFromApexBounceAnimationDuration; // ivar: _statusBarFromApexBounceAnimationDuration
@property (nonatomic) CGFloat statusBarToApexBounceAnimationDuration; // ivar: _statusBarToApexBounceAnimationDuration
@property (retain, nonatomic) SBFFluidBehaviorSettings *swapAppSidesLayoutAnimationSettings; // ivar: _swapAppSidesLayoutAnimationSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *swapAppSidesOpacityAnimationSettings; // ivar: _swapAppSidesOpacityAnimationSettings
@property (nonatomic) CGFloat swapAppSidesShadowFadeOutDelay; // ivar: _swapAppSidesShadowFadeOutDelay
@property (retain, nonatomic) SBFFluidBehaviorSettings *swipeToKillOpacitySettings; // ivar: _swipeToKillOpacitySettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherFadeOutSettings; // ivar: _switcherFadeOutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherToHomeOpacitySettings; // ivar: _switcherToHomeOpacitySettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherToHomeSettings; // ivar: _switcherToHomeSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *switcherZoomDownIconFadeOutSettings; // ivar: _switcherZoomDownIconFadeOutSettings
@property (retain, nonatomic) SBFFluidBehaviorSettings *toggleAppSwitcherSettings; // ivar: _toggleAppSwitcherSettings
@property (nonatomic) CGFloat wallpaperScaleInApplication; // ivar: _wallpaperScaleInApplication
@property (nonatomic) CGFloat wallpaperScaleInSwitcher; // ivar: _wallpaperScaleInSwitcher
@property (retain, nonatomic) SBFFluidBehaviorSettings *wallpaperScaleSettings; // ivar: _wallpaperScaleSettings
@property (nonatomic) CGFloat zoomDownVelocityXMaximum; // ivar: _zoomDownVelocityXMaximum
@property (nonatomic) CGFloat zoomDownVelocityXMinimum; // ivar: _zoomDownVelocityXMinimum
@property (nonatomic) CGFloat zoomDownVelocityXPositionResponseMultiplier; // ivar: _zoomDownVelocityXPositionResponseMultiplier
@property (nonatomic) CGFloat zoomDownVelocityYLayoutResponseMultiplier; // ivar: _zoomDownVelocityYLayoutResponseMultiplier
@property (nonatomic) CGFloat zoomDownVelocityYMaximum; // ivar: _zoomDownVelocityYMaximum
@property (nonatomic) CGFloat zoomDownVelocityYMinimum; // ivar: _zoomDownVelocityYMinimum
@property (nonatomic) CGFloat zoomDownWidgetScaleOvershootDuration; // ivar: _zoomDownWidgetScaleOvershootDuration
@property (nonatomic) CGFloat zoomDownWidgetScaleOvershootMaximumMultiplier; // ivar: _zoomDownWidgetScaleOvershootMaximumMultiplier
@property (nonatomic) CGFloat zoomDownWidgetScaleOvershootMinimumMultiplier; // ivar: _zoomDownWidgetScaleOvershootMinimumMultiplier
@property (nonatomic) CGFloat zoomDownWidgetScaleVelocityYMaximum; // ivar: _zoomDownWidgetScaleVelocityYMaximum
@property (nonatomic) CGFloat zoomDownWidgetScaleVelocityYMinimum; // ivar: _zoomDownWidgetScaleVelocityYMinimum
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomUpSettings; // ivar: _zoomUpSettings


+(id)settingsControllerModule;
-(CGFloat)homeScreenAlphaForMode:(NSInteger)arg0 ;
-(CGFloat)homeScreenBlurProgressForMode:(NSInteger)arg0 ;
-(CGFloat)homeScreenDimmingAlphaForMode:(NSInteger)arg0 ;
-(CGFloat)homeScreenScaleForMode:(NSInteger)arg0 ;
-(CGFloat)wallpaperScaleForMode:(NSInteger)arg0 ;
-(void)_setEntityPresentationDefaultValues;
-(void)_setHomeGestureAnimationDefaultValues;
-(void)_setKeyboardShortcutDefaultValues;
-(void)_setTopAffordanceTransitionDefaultValues;
-(void)setDefaultValues;


@end


#endif