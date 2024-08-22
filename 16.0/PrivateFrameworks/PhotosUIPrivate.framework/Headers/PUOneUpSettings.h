// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUONEUPSETTINGS_H
#define PUONEUPSETTINGS_H

@class PXSettings, NSNumber, NSString;
@protocol PXPreferencesObserver;


#import "PUScrubberSettings.h"

@interface PUOneUpSettings : PXSettings <PXPreferencesObserver>

 {
    NSNumber *_cachedAutoplayVideoEnabled;
}


@property (nonatomic) CGFloat accessoryInitialTopPosition; // ivar: _accessoryInitialTopPosition
@property (nonatomic) NSInteger accessoryViewType; // ivar: _accessoryViewType
@property (nonatomic) BOOL allowBadges; // ivar: _allowBadges
@property (nonatomic) BOOL allowChromeHiding; // ivar: _allowChromeHiding
@property (nonatomic) BOOL allowDoubleTapZoom; // ivar: _allowDoubleTapZoom
@property (nonatomic) BOOL allowFullsizeJPEGDisplay; // ivar: _allowFullsizeJPEGDisplay
@property (nonatomic) BOOL allowGIFPlayback; // ivar: _allowGIFPlayback
@property (nonatomic) BOOL allowParallax; // ivar: _allowParallax
@property (nonatomic) BOOL allowPlayButtonInBars; // ivar: _allowPlayButtonInBars
@property (nonatomic) BOOL allowScrubber; // ivar: _allowScrubber
@property (nonatomic) BOOL allowStatusBar; // ivar: _allowStatusBar
@property (nonatomic) BOOL allowUserTransform; // ivar: _allowUserTransform
@property (nonatomic) BOOL allowVisualIntelligence; // ivar: _allowVisualIntelligence
@property (nonatomic) BOOL allowsDetailsToggleButtonInBars; // ivar: _allowsDetailsToggleButtonInBars
@property (nonatomic) BOOL allowsVisualIntelligenceInVideoFrame; // ivar: _allowsVisualIntelligenceInVideoFrame
@property (nonatomic) BOOL allowsVisualIntelligenceRemoveBackground; // ivar: _allowsVisualIntelligenceRemoveBackground
@property (nonatomic) BOOL allowsVisualIntelligenceV2; // ivar: _allowsVisualIntelligenceV2
@property (nonatomic) BOOL alwaysShowAirPlayButton; // ivar: _alwaysShowAirPlayButton
@property (nonatomic) BOOL alwaysShowRenderIndicator; // ivar: _alwaysShowRenderIndicator
@property (nonatomic) BOOL applyPerspectiveTransformDuringVitality; // ivar: _applyPerspectiveTransformDuringVitality
@property (nonatomic) CGFloat autoplayScrubberWidth; // ivar: _autoplayScrubberWidth
@property (nonatomic) BOOL autoplayVideo; // ivar: _autoplayVideo
@property (nonatomic) CGFloat barsAreaVerticalOutset; // ivar: _barsAreaVerticalOutset
@property (nonatomic) CGFloat bounceDelay; // ivar: _bounceDelay
@property (nonatomic) CGFloat bounceDuration; // ivar: _bounceDuration
@property (nonatomic) CGFloat bounceInitialVelocity; // ivar: _bounceInitialVelocity
@property (nonatomic) CGFloat bounceSpringDamping; // ivar: _bounceSpringDamping
@property (nonatomic) NSInteger chromeAnimationType; // ivar: _chromeAnimationType
@property (nonatomic) NSInteger chromeAutoHideBehaviorOnLivePhoto; // ivar: _chromeAutoHideBehaviorOnLivePhoto
@property (nonatomic) NSInteger chromeAutoHideBehaviorOnPlayButton; // ivar: _chromeAutoHideBehaviorOnPlayButton
@property (nonatomic) NSInteger chromeAutoHideBehaviorOnSwipe; // ivar: _chromeAutoHideBehaviorOnSwipe
@property (nonatomic) NSInteger chromeAutoHideBehaviorOnZoom; // ivar: _chromeAutoHideBehaviorOnZoom
@property (nonatomic) CGFloat chromeAutoHideDelay; // ivar: _chromeAutoHideDelay
@property (nonatomic) NSInteger chromeBackgroundAnimationType; // ivar: _chromeBackgroundAnimationType
@property (nonatomic) CGFloat chromeDefaultAnimationDuration; // ivar: _chromeDefaultAnimationDuration
@property (nonatomic) CGFloat chromeTimedAutoHideAnimationDuration; // ivar: _chromeTimedAutoHideAnimationDuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debuggingBadges; // ivar: _debuggingBadges
@property (nonatomic) NSUInteger debuggingBadgesWhenFavorite; // ivar: _debuggingBadgesWhenFavorite
@property (nonatomic) NSInteger debuggingTitleType; // ivar: _debuggingTitleType
@property (nonatomic) CGFloat defaultZoomInFactor; // ivar: _defaultZoomInFactor
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doubleTapZoomAreaExcludesBackground; // ivar: _doubleTapZoomAreaExcludesBackground
@property (nonatomic) BOOL doubleTapZoomAreaExcludesBars; // ivar: _doubleTapZoomAreaExcludesBars
@property (nonatomic) CGFloat doubleTapZoomFactor; // ivar: _doubleTapZoomFactor
@property (nonatomic) BOOL enableFigPhotoBackgroundSizeBasedDisplay; // ivar: _enableFigPhotoBackgroundSizeBasedDisplay
@property (nonatomic) BOOL enableFigPhotoTiledLayer; // ivar: _enableFigPhotoTiledLayer
@property (nonatomic) BOOL enableSuggestionsAnalysis; // ivar: _enableSuggestionsAnalysis
@property (nonatomic) CGFloat finalFadeOutDuration; // ivar: _finalFadeOutDuration
@property (nonatomic) BOOL forceURLWithFigPhotoTiledLayer; // ivar: _forceURLWithFigPhotoTiledLayer
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideFloatingInfoPanel; // ivar: _hideFloatingInfoPanel
@property (nonatomic) BOOL hideFloatingInfoPanelWhenHidingChrome; // ivar: _hideFloatingInfoPanelWhenHidingChrome
@property (nonatomic) BOOL hideToolbarWhenShowingAccessoryView; // ivar: _hideToolbarWhenShowingAccessoryView
@property (nonatomic) BOOL hideVisualIntelligenceOverlayIn1Up; // ivar: _hideVisualIntelligenceOverlayIn1Up
@property (nonatomic) BOOL hideVisualIntelligenceOverlayIn1UpDetails; // ivar: _hideVisualIntelligenceOverlayIn1UpDetails
@property (nonatomic) CGFloat initialDetailsIndicatorDelay; // ivar: _initialDetailsIndicatorDelay
@property (nonatomic) CGFloat initialDetailsIndicatorDuration; // ivar: _initialDetailsIndicatorDuration
@property (nonatomic) BOOL initialDetailsIndicatorShouldSlideIn; // ivar: _initialDetailsIndicatorShouldSlideIn
@property (nonatomic) CGFloat interpageSpacing; // ivar: _interpageSpacing
@property (nonatomic) CGFloat livePhotoInteractionThreshold; // ivar: _livePhotoInteractionThreshold
@property (nonatomic) CGFloat livePhotoMinimumOverlappingDuration; // ivar: _livePhotoMinimumOverlappingDuration
@property (nonatomic) BOOL livePhotoSRLCompensationEnabled; // ivar: _livePhotoSRLCompensationEnabled
@property (copy, nonatomic) NSString *livePhotoSRLCompensationFilterName; // ivar: _livePhotoSRLCompensationFilterName
@property (nonatomic) BOOL livePhotoSRLCompensationManualMode; // ivar: _livePhotoSRLCompensationManualMode
@property (nonatomic) CGFloat livePhotoSRLCompensationManualValue; // ivar: _livePhotoSRLCompensationManualValue
@property (nonatomic) BOOL livePhotoScrubberShowForPlayback; // ivar: _livePhotoScrubberShowForPlayback
@property (nonatomic) BOOL lockScrollDuringLivePhotoPlayback; // ivar: _lockScrollDuringLivePhotoPlayback
@property (nonatomic) NSInteger minNavigationDistanceForFastRegime; // ivar: _minNavigationDistanceForFastRegime
@property (nonatomic) NSInteger minNavigationDistanceForQuickPagingRegime; // ivar: _minNavigationDistanceForQuickPagingRegime
@property (nonatomic) CGFloat minimumFullCommentTitleViewWidth; // ivar: _minimumFullCommentTitleViewWidth
@property (nonatomic) CGFloat minimumVisibleCommentedContentHeight; // ivar: _minimumVisibleCommentedContentHeight
@property (nonatomic) CGFloat minimumVisibleContentHeight; // ivar: _minimumVisibleContentHeight
@property (nonatomic) NSUInteger overlappingLivePhotosCountLimit; // ivar: _overlappingLivePhotosCountLimit
@property (nonatomic) CGFloat pagingFrictionAdjustment; // ivar: _pagingFrictionAdjustment
@property (nonatomic) CGFloat pagingSpringPullAdjustment; // ivar: _pagingSpringPullAdjustment
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (nonatomic) NSInteger parallaxModel; // ivar: _parallaxModel
@property (nonatomic) BOOL persistChromeVisibility; // ivar: _persistChromeVisibility
@property (nonatomic) CGFloat playGIFEnterThreshold; // ivar: _playGIFEnterThreshold
@property (nonatomic) CGFloat playGIFMoveOutThreshold; // ivar: _playGIFMoveOutThreshold
@property (nonatomic) CGFloat playGIFSettledThreshold; // ivar: _playGIFSettledThreshold
@property (nonatomic) NSUInteger scaleToFitBehavior; // ivar: _scaleToFitBehavior
@property (retain, nonatomic) PUScrubberSettings *scrubberSettings; // ivar: _scrubberSettings
@property (nonatomic) BOOL shouldFadeAccessoryView; // ivar: _shouldFadeAccessoryView
@property (nonatomic) BOOL shouldMergeOverlappingLivePhotos; // ivar: _shouldMergeOverlappingLivePhotos
@property (nonatomic) BOOL showBestSquareRect; // ivar: _showBestSquareRect
@property (nonatomic) BOOL showBufferingIndicatorDuringPlay; // ivar: _showBufferingIndicatorDuringPlay
@property (nonatomic) BOOL showFacesRect; // ivar: _showFacesRect
@property (nonatomic) BOOL showFacesTorsosRects; // ivar: _showFacesTorsosRects
@property (nonatomic) BOOL showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls; // ivar: _showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls
@property (nonatomic) BOOL showGIFLoadingDelays; // ivar: _showGIFLoadingDelays
@property (nonatomic) BOOL showGainMapButton; // ivar: _showGainMapButton
@property (nonatomic) BOOL showInitialDetailsIndicator; // ivar: _showInitialDetailsIndicator
@property (nonatomic) BOOL showLoadingIndicatorDuringDownload; // ivar: _showLoadingIndicatorDuringDownload
@property (nonatomic) BOOL showPaddedFacesRect; // ivar: _showPaddedFacesRect
@property (nonatomic) BOOL showReframedBadge; // ivar: _showReframedBadge
@property (nonatomic) BOOL showSaliencyRects; // ivar: _showSaliencyRects
@property (nonatomic) BOOL showSuggestionsForAllAssets; // ivar: _showSuggestionsForAllAssets
@property (nonatomic) BOOL showToggleCTMButton; // ivar: _showToggleCTMButton
@property (nonatomic) BOOL showWallpaperCropRect; // ivar: _showWallpaperCropRect
@property (nonatomic) BOOL simulateAssetContentLoading; // ivar: _simulateAssetContentLoading
@property (nonatomic) BOOL simulateLoadingError; // ivar: _simulateLoadingError
@property (nonatomic) BOOL simulateWorstCaseFigPhotoBackgroundSize; // ivar: _simulateWorstCaseFigPhotoBackgroundSize
@property (nonatomic) CGFloat simulatedAssetContentLoadingDuration; // ivar: _simulatedAssetContentLoadingDuration
@property (nonatomic) NSInteger simulatedLoadingErrorType; // ivar: _simulatedLoadingErrorType
@property (nonatomic) CGFloat simulatedRenderProgress; // ivar: _simulatedRenderProgress
@property (nonatomic) BOOL squareImageCapToHalfHeight; // ivar: _squareImageCapToHalfHeight
@property (readonly) Class superclass;
@property (nonatomic) NSInteger titleTapAction; // ivar: _titleTapAction
@property (nonatomic) BOOL unmuteOnChromeHide; // ivar: _unmuteOnChromeHide
@property (nonatomic) BOOL useDebuggingColors; // ivar: _useDebuggingColors
@property (nonatomic) BOOL useDebuggingProgressLabel; // ivar: _useDebuggingProgressLabel
@property (nonatomic) BOOL useGlobalCommentsVisibility; // ivar: _useGlobalCommentsVisibility
@property (nonatomic) BOOL useGlobalDetailsVisibility; // ivar: _useGlobalDetailsVisibility
@property (nonatomic) BOOL useHDRVideoThumbnails; // ivar: _useHDRVideoThumbnails
@property (nonatomic) BOOL useURLForLargePhotosWithFigPhotoTiledLayer; // ivar: _useURLForLargePhotosWithFigPhotoTiledLayer
@property (nonatomic) NSInteger userNavigationMaximumDistance; // ivar: _userNavigationMaximumDistance
@property (nonatomic) CGFloat videoAutoplayThreshold; // ivar: _videoAutoplayThreshold
@property (nonatomic) CGFloat videoPauseThreshold; // ivar: _videoPauseThreshold
@property (nonatomic) BOOL videoRemuteOnBackgrounding; // ivar: _videoRemuteOnBackgrounding
@property (nonatomic) BOOL videoShowDebugBorders; // ivar: _videoShowDebugBorders
@property (nonatomic) BOOL videoShowLiveEffectsRenderingIndicator; // ivar: _videoShowLiveEffectsRenderingIndicator
@property (nonatomic) NSUInteger viewModelCacheCountLimit; // ivar: _viewModelCacheCountLimit
@property (nonatomic) CGFloat visibilityDurationForEnteringFastRegime; // ivar: _visibilityDurationForEnteringFastRegime
@property (nonatomic) CGFloat visibilityDurationForEnteringQuickPagingRegime; // ivar: _visibilityDurationForEnteringQuickPagingRegime
@property (nonatomic) CGFloat visibilityDurationForExitingFastRegime; // ivar: _visibilityDurationForExitingFastRegime
@property (nonatomic) CGFloat visibilityDurationForExitingQuickPagingRegime; // ivar: _visibilityDurationForExitingQuickPagingRegime
@property (nonatomic) CGFloat vitalityFeatherScale; // ivar: _vitalityFeatherScale
@property (nonatomic) CGFloat vitalityMaskBlur; // ivar: _vitalityMaskBlur
@property (nonatomic) CGFloat vitalityMaxAllowedInsetPoints; // ivar: _vitalityMaxAllowedInsetPoints
@property (nonatomic) CGFloat vitalityMaxAllowedLargeInsetPoints; // ivar: _vitalityMaxAllowedLargeInsetPoints
@property (nonatomic) BOOL vitalityUseInsetLimiting; // ivar: _vitalityUseInsetLimiting


+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)allowAutoplayVideoForAsset:(id)arg0 ;
-(NSInteger)version;
-(id)parentSettings;
-(void)_updateVisualIntelligenceRelatedSettings;
-(void)createChildren;
-(void)preferencesDidChange;
-(void)setDefaultValues;


@end


#endif