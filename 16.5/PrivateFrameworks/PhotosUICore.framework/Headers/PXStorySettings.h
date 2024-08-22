// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSETTINGS_H
#define PXSTORYSETTINGS_H

@class NSString;


#import "PXSettings.h"
#import "PXStoryChapterSettings.h"
#import "PXStoryConcreteTimelineSettings.h"
#import "PXStoryMultipartPanoramaSettings.h"
#import "PXStoryScrubberLayoutSettings.h"
#import "PXStoryTransitionsSettings.h"

@interface PXStorySettings : PXSettings

@property (nonatomic) BOOL adjustToWallClockTime; // ivar: _adjustToWallClockTime
@property (nonatomic) CGFloat aestheticsScorePercentileThreshold; // ivar: _aestheticsScorePercentileThreshold
@property (nonatomic) BOOL allowAspectModeToggle; // ivar: _allowAspectModeToggle
@property (nonatomic) BOOL allowLimitingImagesTo3MP; // ivar: _allowLimitingImagesTo3MP
@property (nonatomic) BOOL allowNonFillingCompositionsForKeyAsset; // ivar: _allowNonFillingCompositionsForKeyAsset
@property (nonatomic) BOOL allowOnDemandVideoAnalysis; // ivar: _allowOnDemandVideoAnalysis
@property (nonatomic) BOOL allowRelatedProductionBeforeReadyToPlay; // ivar: _allowRelatedProductionBeforeReadyToPlay
@property (nonatomic) BOOL allowsContinuousKenBurnsAnimations; // ivar: _allowsContinuousKenBurnsAnimations
@property (nonatomic) BOOL allowsFormSheetPresentation; // ivar: _allowsFormSheetPresentation
@property (nonatomic) BOOL allowsNUpBackground; // ivar: _allowsNUpBackground
@property (nonatomic) BOOL allowsShowcase; // ivar: _allowsShowcase
@property (nonatomic) BOOL allowsTimelineRecombination; // ivar: _allowsTimelineRecombination
@property (nonatomic) BOOL allowsViewControllerTransitions; // ivar: _allowsViewControllerTransitions
@property (nonatomic) BOOL areRelatedHUDsVisible; // ivar: _areRelatedHUDsVisible
@property (nonatomic) CGFloat aspectFillOneUpCropTolerance; // ivar: _aspectFillOneUpCropTolerance
@property (nonatomic) NSInteger audioFadeCurve; // ivar: _audioFadeCurve
@property (nonatomic) CGFloat audioFadeMaxDuration; // ivar: _audioFadeMaxDuration
@property (nonatomic) CGFloat audioFadeMinDuration; // ivar: _audioFadeMinDuration
@property (nonatomic) CGFloat audioJCutDuration; // ivar: _audioJCutDuration
@property (nonatomic) NSInteger audioJCutStrategy; // ivar: _audioJCutStrategy
@property (nonatomic) CGFloat audioLCutDuration; // ivar: _audioLCutDuration
@property (nonatomic) NSInteger audioLCutStrategy; // ivar: _audioLCutStrategy
@property (nonatomic) float audioQualityMin; // ivar: _audioQualityMin
@property (nonatomic) CGFloat autoEditDiptychCropAspectMax; // ivar: _autoEditDiptychCropAspectMax
@property (nonatomic) BOOL autoEditDisableNUp; // ivar: _autoEditDisableNUp
@property (nonatomic) CGFloat autoEditDoublePlaceMultiplier; // ivar: _autoEditDoublePlaceMultiplier
@property (nonatomic) NSInteger autoEditEmptySpaceLengthMax; // ivar: _autoEditEmptySpaceLengthMax
@property (nonatomic) CGFloat autoEditHighCurationScoreThreshold; // ivar: _autoEditHighCurationScoreThreshold
@property (nonatomic) NSInteger autoEditModuleLengthMax; // ivar: _autoEditModuleLengthMax
@property (nonatomic) CGFloat autoEditPortraitAreaMin; // ivar: _autoEditPortraitAreaMin
@property (nonatomic) CGFloat autoEditProductionSimulatedDelay; // ivar: _autoEditProductionSimulatedDelay
@property (nonatomic) NSInteger autoEditRotateMotionMax; // ivar: _autoEditRotateMotionMax
@property (nonatomic) CGFloat autoEditSceneConfidenceThreshold; // ivar: _autoEditSceneConfidenceThreshold
@property (nonatomic) NSInteger autoEditSongPaceOverride; // ivar: _autoEditSongPaceOverride
@property (nonatomic) CGFloat autoEditTriptychCropAspectMax; // ivar: _autoEditTriptychCropAspectMax
@property (nonatomic) BOOL autoEditUseMomentRecipes; // ivar: _autoEditUseMomentRecipes
@property (nonatomic) CGFloat backgroundAudioLoudnessTarget; // ivar: _backgroundAudioLoudnessTarget
@property (nonatomic) CGFloat backgroundQualityScale; // ivar: _backgroundQualityScale
@property (nonatomic) CGFloat bottomLegibilityGradientHeight; // ivar: _bottomLegibilityGradientHeight
@property (nonatomic) CGFloat bufferingHUDAutoPresentationTimeout; // ivar: _bufferingHUDAutoPresentationTimeout
@property (retain, nonatomic) PXStoryChapterSettings *chapterSettings; // ivar: _chapterSettings
@property (nonatomic) BOOL chromeAllowAutoHide; // ivar: _chromeAllowAutoHide
@property (nonatomic) CGFloat chromeAutoHideDelay; // ivar: _chromeAutoHideDelay
@property (copy, nonatomic) NSString *clipCompositionFallback; // ivar: _clipCompositionFallback
@property (nonatomic) NSInteger clipCompositionShowcaseMode; // ivar: _clipCompositionShowcaseMode
@property (nonatomic) float colorGradeBlendingFactor; // ivar: _colorGradeBlendingFactor
@property (nonatomic) NSInteger colorGradeEditorPreviewMode; // ivar: _colorGradeEditorPreviewMode
@property (nonatomic) float colorGradeSmoothingFactor; // ivar: _colorGradeSmoothingFactor
@property (nonatomic) NSInteger colorGradeSmoothingPasses; // ivar: _colorGradeSmoothingPasses
@property (nonatomic) NSInteger colorNormalizationCubeEdgeSize; // ivar: _colorNormalizationCubeEdgeSize
@property (nonatomic) float colorNormalizationIntensity; // ivar: _colorNormalizationIntensity
@property (nonatomic) NSInteger colorNormalizationMode; // ivar: _colorNormalizationMode
@property (nonatomic) NSInteger colorNormalizationTechnique; // ivar: _colorNormalizationTechnique
@property (nonatomic) BOOL colorNormalizationUseColorCube; // ivar: _colorNormalizationUseColorCube
@property (retain, nonatomic) PXStoryConcreteTimelineSettings *concreteTimelineSettings; // ivar: _concreteTimelineSettings
@property (nonatomic) CGFloat continuousKenBurnsAnimationsTolerance; // ivar: _continuousKenBurnsAnimationsTolerance
@property (nonatomic) NSInteger curatedAssetsLimit; // ivar: _curatedAssetsLimit
@property (nonatomic) CGFloat curationScorePercentileThreshold; // ivar: _curationScorePercentileThreshold
@property (nonatomic) NSUInteger currentFeedPPTPreset; // ivar: _currentFeedPPTPreset
@property (nonatomic) NSUInteger currentPPTPreset; // ivar: _currentPPTPreset
@property (nonatomic) NSUInteger currentPPTSubpreset; // ivar: _currentPPTSubpreset
@property (nonatomic) BOOL debugShowAudioPlaybackDetails; // ivar: _debugShowAudioPlaybackDetails
@property (nonatomic) BOOL debugShowColorNormalizationValues; // ivar: _debugShowColorNormalizationValues
@property (nonatomic) BOOL debugShowVideoPlaybackDetails; // ivar: _debugShowVideoPlaybackDetails
@property (nonatomic) NSInteger defaultHUDType; // ivar: _defaultHUDType
@property (nonatomic) BOOL detectVideoLags; // ivar: _detectVideoLags
@property (nonatomic) BOOL disableColorGrading; // ivar: _disableColorGrading
@property (nonatomic) BOOL disableShowcaseBadge; // ivar: _disableShowcaseBadge
@property (nonatomic) CGFloat duckingFadeDuration; // ivar: _duckingFadeDuration
@property (nonatomic) BOOL enableBrowseViewColorNormalization; // ivar: _enableBrowseViewColorNormalization
@property (nonatomic) BOOL enableColorNormalizationWithoutColorGrade; // ivar: _enableColorNormalizationWithoutColorGrade
@property (nonatomic) BOOL enableFalseColorNormalization; // ivar: _enableFalseColorNormalization
@property (nonatomic) BOOL enableScrubberColorNormalization; // ivar: _enableScrubberColorNormalization
@property (nonatomic) BOOL enableTitlePositioningLogs; // ivar: _enableTitlePositioningLogs
@property (nonatomic) BOOL estimateTimeLeftPerPlaybackStyle; // ivar: _estimateTimeLeftPerPlaybackStyle
@property (nonatomic) CGFloat estimatedMinimumDurationPerCuratedAsset; // ivar: _estimatedMinimumDurationPerCuratedAsset
@property (nonatomic) BOOL exaggerateResourceDownloadTimes; // ivar: _exaggerateResourceDownloadTimes
@property (nonatomic) NSInteger exportHUDType; // ivar: _exportHUDType
@property (nonatomic) NSInteger exportVideoQuality; // ivar: _exportVideoQuality
@property (nonatomic) CGFloat exposeToBlackRecipeRelativeFrequency; // ivar: _exposeToBlackRecipeRelativeFrequency
@property (nonatomic) CGFloat feedCardLandscapeAspectRatio; // ivar: _feedCardLandscapeAspectRatio
@property (nonatomic) CGFloat feedCardPortraitAspectRatio; // ivar: _feedCardPortraitAspectRatio
@property (nonatomic) NSInteger feedHUDType; // ivar: _feedHUDType
@property (nonatomic) NSInteger feedInitialLimit; // ivar: _feedInitialLimit
@property (nonatomic) CGFloat feedItemCornerRadius; // ivar: _feedItemCornerRadius
@property (nonatomic) int feedPresentationType; // ivar: _feedPresentationType
@property (nonatomic) CGFloat focusChangeFadeDuration; // ivar: _focusChangeFadeDuration
@property (nonatomic) BOOL forceLivePhotoVideo; // ivar: _forceLivePhotoVideo
@property (nonatomic) BOOL forceMinDurationKenBurnsAnimations; // ivar: _forceMinDurationKenBurnsAnimations
@property (nonatomic) BOOL forcePacingToSegmentMaxDuration; // ivar: _forcePacingToSegmentMaxDuration
@property (nonatomic) CGFloat foregroundAudioLoudnessTarget; // ivar: _foregroundAudioLoudnessTarget
@property (readonly, nonatomic) NSUInteger fullsizePaperTrailOptions;
@property (nonatomic) BOOL hideDetailContentDuringTransition; // ivar: _hideDetailContentDuringTransition
@property (nonatomic) BOOL hideSummaryContentDuringTransition; // ivar: _hideSummaryContentDuringTransition
@property (nonatomic) BOOL includeDeviceDiagnosticsForTTR; // ivar: _includeDeviceDiagnosticsForTTR
@property (nonatomic) BOOL includeImagesInVisualDiagnosticsForTTR; // ivar: _includeImagesInVisualDiagnosticsForTTR
@property (nonatomic) CGSize inlinePlaybackCriticalInsets; // ivar: _inlinePlaybackCriticalInsets
@property (nonatomic) BOOL isAppleMusicAllowed; // ivar: _isAppleMusicAllowed
@property (nonatomic) BOOL isExportHUDEnabled; // ivar: _isExportHUDEnabled
@property (nonatomic) BOOL isFeedHUDVisible; // ivar: _isFeedHUDVisible
@property (nonatomic) BOOL isHUDEnabled; // ivar: _isHUDEnabled
@property (nonatomic) BOOL isHUDVisible; // ivar: _isHUDVisible
@property (nonatomic) NSInteger kenBurnsShowcaseMode; // ivar: _kenBurnsShowcaseMode
@property (nonatomic) NSInteger keyAssetAspectRatioOverride; // ivar: _keyAssetAspectRatioOverride
@property (nonatomic) CGFloat legibilityGradientOpacity; // ivar: _legibilityGradientOpacity
@property (nonatomic) CGFloat legibilityPlaybackEndDimming; // ivar: _legibilityPlaybackEndDimming
@property (nonatomic) CGFloat legibilityPlaybackEndDimmingDuration; // ivar: _legibilityPlaybackEndDimmingDuration
@property (nonatomic) CGFloat legibilityPlaybackEndUndimmingDuration; // ivar: _legibilityPlaybackEndUndimmingDuration
@property (nonatomic) CGFloat legibilityRelatedDimming; // ivar: _legibilityRelatedDimming
@property (nonatomic) BOOL limitKeyAssetAspectRatioToFeedCard; // ivar: _limitKeyAssetAspectRatioToFeedCard
@property (nonatomic) NSInteger livePhotoAudioStrategy; // ivar: _livePhotoAudioStrategy
@property (nonatomic) NSInteger livePhotoLocalVideoQuality; // ivar: _livePhotoLocalVideoQuality
@property (nonatomic) CGFloat livePhotoOppositeOrientationCompactMaximumScale; // ivar: _livePhotoOppositeOrientationCompactMaximumScale
@property (nonatomic) CGFloat livePhotoOppositeOrientationRegularMaximumScale; // ivar: _livePhotoOppositeOrientationRegularMaximumScale
@property (nonatomic) CGFloat livePhotoSameOrientationCompactMaximumScale; // ivar: _livePhotoSameOrientationCompactMaximumScale
@property (nonatomic) CGFloat livePhotoSameOrientationRegularMaximumScale; // ivar: _livePhotoSameOrientationRegularMaximumScale
@property (nonatomic) NSInteger loopingVideoAudioStrategy; // ivar: _loopingVideoAudioStrategy
@property (nonatomic) CGFloat maximumAppBackgroundDurationBeforeAutoPause; // ivar: _maximumAppBackgroundDurationBeforeAutoPause
@property (nonatomic) NSInteger minPreloadedeSegments; // ivar: _minPreloadedeSegments
@property (nonatomic) NSInteger movementAnimationCurve; // ivar: _movementAnimationCurve
@property (nonatomic) CGFloat movementAnimationLinearFraction; // ivar: _movementAnimationLinearFraction
@property (nonatomic) CGFloat movementAnimationPauseDeceleration; // ivar: _movementAnimationPauseDeceleration
@property (nonatomic) CGFloat movementAnimationPausedVelocity; // ivar: _movementAnimationPausedVelocity
@property (nonatomic) CGFloat movementAnimationResumeAcceleration; // ivar: _movementAnimationResumeAcceleration
@property (retain, nonatomic) PXStoryMultipartPanoramaSettings *multipartPanoramaSettings; // ivar: _multipartPanoramaSettings
@property (nonatomic) float musicBackgroundVolume; // ivar: _musicBackgroundVolume
@property (nonatomic) BOOL musicDemoVolumeAdjustment; // ivar: _musicDemoVolumeAdjustment
@property (nonatomic) float musicDuckedVolume; // ivar: _musicDuckedVolume
@property (nonatomic) NSInteger musicEndBehavior; // ivar: _musicEndBehavior
@property (nonatomic) float musicFadeOutVolume; // ivar: _musicFadeOutVolume
@property (nonatomic) NSInteger musicSimulatedFailureMode; // ivar: _musicSimulatedFailureMode
@property (nonatomic) float musicTargetLoudnessLKFS; // ivar: _musicTargetLoudnessLKFS
@property (nonatomic) CGFloat musicTouchDuckingDelay; // ivar: _musicTouchDuckingDelay
@property (nonatomic) BOOL muteBackgroundMusic; // ivar: _muteBackgroundMusic
@property (nonatomic) CGFloat muteToggleButtonAutoHideDelay; // ivar: _muteToggleButtonAutoHideDelay
@property (nonatomic) BOOL needs79067616Workaround; // ivar: _needs79067616Workaround
@property (nonatomic) CGFloat noncriticalBufferingTimeout; // ivar: _noncriticalBufferingTimeout
@property (nonatomic) NSInteger otherAssetsAspectRatioOverride; // ivar: _otherAssetsAspectRatioOverride
@property (nonatomic) BOOL overrideDurations; // ivar: _overrideDurations
@property (nonatomic) BOOL overrideLegibilityGradientHeights; // ivar: _overrideLegibilityGradientHeights
@property (nonatomic) CGFloat panRecipeRelativeFrequency; // ivar: _panRecipeRelativeFrequency
@property (copy, nonatomic) NSString *playButtonRewindSymbolName; // ivar: _playButtonRewindSymbolName
@property (nonatomic) BOOL playbackShouldWaitForBufferingToBeReady; // ivar: _playbackShouldWaitForBufferingToBeReady
@property (nonatomic) int playerPresentationType; // ivar: _playerPresentationType
@property (nonatomic) BOOL playerShowsBufferingStatus; // ivar: _playerShowsBufferingStatus
@property (nonatomic) BOOL preferTopChromeItemsInAppNavigationBar; // ivar: _preferTopChromeItemsInAppNavigationBar
@property (nonatomic) NSUInteger preferredFullsizePaperTrailOptions; // ivar: _preferredFullsizePaperTrailOptions
@property (nonatomic) BOOL preloadNonKeyRelated; // ivar: _preloadNonKeyRelated
@property (nonatomic) NSInteger preloadingEstimationStrategy; // ivar: _preloadingEstimationStrategy
@property (nonatomic) NSInteger preloadingSegmentsBatchSize; // ivar: _preloadingSegmentsBatchSize
@property (nonatomic) CGFloat pressedScale; // ivar: _pressedScale
@property (nonatomic) CGFloat relatedAnimationDuration; // ivar: _relatedAnimationDuration
@property (nonatomic) NSInteger relatedProducerKind; // ivar: _relatedProducerKind
@property (nonatomic) CGFloat relatedProductionPlaybackFractionCompletedThreshold; // ivar: _relatedProductionPlaybackFractionCompletedThreshold
@property (nonatomic) BOOL renderTitlesForRelated; // ivar: _renderTitlesForRelated
@property (nonatomic) BOOL reportColorNormalizationErrors; // ivar: _reportColorNormalizationErrors
@property (nonatomic) CGFloat scaleRecipeRelativeFrequency; // ivar: _scaleRecipeRelativeFrequency
@property (nonatomic) CGFloat scrubberAutoHideDelay; // ivar: _scrubberAutoHideDelay
@property (nonatomic) BOOL scrubberDimsMainContent; // ivar: _scrubberDimsMainContent
@property (nonatomic) NSInteger scrubberDisplayMode; // ivar: _scrubberDisplayMode
@property (nonatomic) CGFloat scrubberEdgeFadeDistance; // ivar: _scrubberEdgeFadeDistance
@property (nonatomic) NSInteger scrubberEdgeFadeMode; // ivar: _scrubberEdgeFadeMode
@property (nonatomic) CGFloat scrubberEdgeFadeOffset; // ivar: _scrubberEdgeFadeOffset
@property (retain, nonatomic) PXStoryScrubberLayoutSettings *scrubberLayoutSettings; // ivar: _scrubberLayoutSettings
@property (nonatomic) BOOL scrubberLayoutStretchesSmallNumberOfAssets; // ivar: _scrubberLayoutStretchesSmallNumberOfAssets
@property (nonatomic) BOOL scrubberSelectionStartsPlayback; // ivar: _scrubberSelectionStartsPlayback
@property (nonatomic) NSInteger separatorEffectsShowcaseMode; // ivar: _separatorEffectsShowcaseMode
@property (nonatomic) BOOL shouldHideSidebarWhenDisplayed; // ivar: _shouldHideSidebarWhenDisplayed
@property (nonatomic) BOOL shouldPauseInStyleSwitcher; // ivar: _shouldPauseInStyleSwitcher
@property (nonatomic) BOOL shouldRecombineTimelineWithSameVisibleSegments; // ivar: _shouldRecombineTimelineWithSameVisibleSegments
@property (nonatomic) BOOL shouldStylesAlwaysIncludePersistedSong; // ivar: _shouldStylesAlwaysIncludePersistedSong
@property (nonatomic) BOOL showErrorAlertsDuringTestExecution; // ivar: _showErrorAlertsDuringTestExecution
@property (nonatomic) BOOL showFeedChromeOnHover; // ivar: _showFeedChromeOnHover
@property (nonatomic) BOOL showMusicAndColorGradeEditor; // ivar: _showMusicAndColorGradeEditor
@property (nonatomic) BOOL showStyleSwitcher; // ivar: _showStyleSwitcher
@property (nonatomic) BOOL showTVPreviewInDiagnostics; // ivar: _showTVPreviewInDiagnostics
@property (nonatomic) CGFloat showcaseSegmentDuration; // ivar: _showcaseSegmentDuration
@property (nonatomic) CGFloat showcaseTransitionDuration; // ivar: _showcaseTransitionDuration
@property (nonatomic) CGFloat significantPlayedDuration; // ivar: _significantPlayedDuration
@property (nonatomic) BOOL simulateLongChromeStrings; // ivar: _simulateLongChromeStrings
@property (nonatomic) BOOL simulateNoAppleMusicSubscription; // ivar: _simulateNoAppleMusicSubscription
@property (nonatomic) BOOL simulateResourcesBufferingError; // ivar: _simulateResourcesBufferingError
@property (nonatomic) BOOL simulateSlowResourcesBuffering; // ivar: _simulateSlowResourcesBuffering
@property (nonatomic) BOOL simulateSlowTextLayout; // ivar: _simulateSlowTextLayout
@property (nonatomic) CGFloat simulatedAudioCuesLoadingDelay; // ivar: _simulatedAudioCuesLoadingDelay
@property (nonatomic) NSInteger simulatedError; // ivar: _simulatedError
@property (nonatomic) CGFloat simulatedSlowResourcesBufferingDelay; // ivar: _simulatedSlowResourcesBufferingDelay
@property (nonatomic) NSInteger simultaneousPreloadingOperationsCount; // ivar: _simultaneousPreloadingOperationsCount
@property (nonatomic) NSInteger slomoVideoAudioStrategy; // ivar: _slomoVideoAudioStrategy
@property (nonatomic) CGFloat smartGradientBlurRadius; // ivar: _smartGradientBlurRadius
@property (nonatomic) CGFloat smartGradientEdgeStretchFactor; // ivar: _smartGradientEdgeStretchFactor
@property (nonatomic) BOOL smartGradientEnabled; // ivar: _smartGradientEnabled
@property (nonatomic) CGFloat smartGradientExposureValue; // ivar: _smartGradientExposureValue
@property (nonatomic) BOOL smartGradientRepeatEdges; // ivar: _smartGradientRepeatEdges
@property (nonatomic) BOOL smartGradientUseSimpleBlur; // ivar: _smartGradientUseSimpleBlur
@property (nonatomic) BOOL smartGradientUseSmartColor; // ivar: _smartGradientUseSmartColor
@property (nonatomic) NSInteger songsProducerKind; // ivar: _songsProducerKind
@property (nonatomic) CGFloat subtitleMinimumScale; // ivar: _subtitleMinimumScale
@property (nonatomic) CGFloat subtitleSizeScale; // ivar: _subtitleSizeScale
@property (nonatomic) NSInteger swipeDownAction; // ivar: _swipeDownAction
@property (nonatomic) NSInteger swipeDownBehavior; // ivar: _swipeDownBehavior
@property (nonatomic) CGFloat swipeDownDismissalDelay; // ivar: _swipeDownDismissalDelay
@property (nonatomic) CGFloat swipeDownDismissalDistanceThreshold; // ivar: _swipeDownDismissalDistanceThreshold
@property (nonatomic) CGFloat swipeDownSignificantDuration; // ivar: _swipeDownSignificantDuration
@property (nonatomic) CGFloat swipeDownThresholdFadeDuration; // ivar: _swipeDownThresholdFadeDuration
@property (nonatomic) CGFloat tapNavigationAreaFraction; // ivar: _tapNavigationAreaFraction
@property (nonatomic) NSInteger timelineManagerPaperTrailLength; // ivar: _timelineManagerPaperTrailLength
@property (nonatomic) NSInteger timelineProducerKind; // ivar: _timelineProducerKind
@property (nonatomic) CGFloat titleFarthestDistanceThreshold; // ivar: _titleFarthestDistanceThreshold
@property (nonatomic) CGFloat titleFeedLandscapeWidthScale; // ivar: _titleFeedLandscapeWidthScale
@property (nonatomic) CGFloat titleFeedPortraitWidthScale; // ivar: _titleFeedPortraitWidthScale
@property (nonatomic) CGFloat titleFullScreenLandscapeWidthScale; // ivar: _titleFullScreenLandscapeWidthScale
@property (nonatomic) CGFloat titleFullScreenPortraitWidthScale; // ivar: _titleFullScreenPortraitWidthScale
@property (nonatomic) NSInteger titleMaximumNumberOfLines; // ivar: _titleMaximumNumberOfLines
@property (nonatomic) CGFloat titleMinimumScale; // ivar: _titleMinimumScale
@property (nonatomic) CGFloat titlePaddingTopScale; // ivar: _titlePaddingTopScale
@property (nonatomic) CGFloat titleReferenceWidthLandscape; // ivar: _titleReferenceWidthLandscape
@property (nonatomic) CGFloat titleReferenceWidthPortrait; // ivar: _titleReferenceWidthPortrait
@property (nonatomic) CGFloat titleRegularPaddingBottomScale; // ivar: _titleRegularPaddingBottomScale
@property (nonatomic) CGFloat titleSizeScale; // ivar: _titleSizeScale
@property (nonatomic) BOOL titleUseCenterAlignment; // ivar: _titleUseCenterAlignment
@property (nonatomic) CGFloat titleWidthMax; // ivar: _titleWidthMax
@property (nonatomic) CGFloat titleWidthMin; // ivar: _titleWidthMin
@property (nonatomic) CGFloat topLegibilityGradientHeight; // ivar: _topLegibilityGradientHeight
@property (nonatomic) NSInteger transitionFallback; // ivar: _transitionFallback
@property (nonatomic) NSInteger transitionShowcaseMode; // ivar: _transitionShowcaseMode
@property (retain, nonatomic) PXStoryTransitionsSettings *transitionsSettings; // ivar: _transitionsSettings
@property (nonatomic) NSInteger twoFingerTapAction; // ivar: _twoFingerTapAction
@property (nonatomic) BOOL useBestHighlightTrim; // ivar: _useBestHighlightTrim
@property (nonatomic) BOOL useBottomLegibilityGradientForBufferingIndicator; // ivar: _useBottomLegibilityGradientForBufferingIndicator
@property (nonatomic) BOOL useFeedPlaceholderItems; // ivar: _useFeedPlaceholderItems
@property (nonatomic) BOOL useMusicCuesForPacing; // ivar: _useMusicCuesForPacing
@property (nonatomic) BOOL useMusicCuesForTimeline; // ivar: _useMusicCuesForTimeline
@property (nonatomic) BOOL useReferenceWidthBasedTitleLayout; // ivar: _useReferenceWidthBasedTitleLayout
@property (nonatomic) BOOL useVerboseStyleHUDText; // ivar: _useVerboseStyleHUDText
@property (nonatomic) BOOL validationShouldWaitForTimelineToBeReadyToPlay; // ivar: _validationShouldWaitForTimelineToBeReadyToPlay
@property (nonatomic) NSInteger videoAudioStrategy; // ivar: _videoAudioStrategy
@property (nonatomic) BOOL videoInlineStabilization; // ivar: _videoInlineStabilization
@property (nonatomic) CGFloat videoMaximumAspectFillScale; // ivar: _videoMaximumAspectFillScale
@property (nonatomic) NSInteger videoQuality; // ivar: _videoQuality
@property (nonatomic) CGFloat viewControllerTransitionDuration; // ivar: _viewControllerTransitionDuration
@property (nonatomic) CGFloat viewModeTransitionAccessoryFadepoint; // ivar: _viewModeTransitionAccessoryFadepoint
@property (nonatomic) CGFloat viewModeTransitionSpringStiffness; // ivar: _viewModeTransitionSpringStiffness
@property (nonatomic) BOOL wantsAnimations; // ivar: _wantsAnimations
@property (nonatomic) BOOL wantsAudioFade; // ivar: _wantsAudioFade
@property (nonatomic) BOOL wantsAudioFromVideo; // ivar: _wantsAudioFromVideo
@property (nonatomic) BOOL wantsAudioJLCuts; // ivar: _wantsAudioJLCuts
@property (nonatomic) BOOL wantsBufferingIndicatorOverScrubber; // ivar: _wantsBufferingIndicatorOverScrubber
@property (nonatomic) BOOL wantsFeedItemShadow; // ivar: _wantsFeedItemShadow
@property (nonatomic) BOOL wantsFullscreenFeedExperience; // ivar: _wantsFullscreenFeedExperience
@property (nonatomic) BOOL wantsGridLayout; // ivar: _wantsGridLayout
@property (nonatomic) BOOL wantsHighContrastColors; // ivar: _wantsHighContrastColors
@property (nonatomic) BOOL wantsInlinePlayback; // ivar: _wantsInlinePlayback
@property (nonatomic) BOOL wantsMovieHighlights; // ivar: _wantsMovieHighlights
@property (nonatomic) BOOL wantsPersistence; // ivar: _wantsPersistence
@property (nonatomic) BOOL wantsRelated; // ivar: _wantsRelated
@property (nonatomic) BOOL wantsRelatedCountdown; // ivar: _wantsRelatedCountdown
@property (nonatomic) BOOL wantsResourcesPreloading; // ivar: _wantsResourcesPreloading
@property (nonatomic) BOOL wantsScrubber; // ivar: _wantsScrubber
@property (nonatomic) BOOL wantsTitles; // ivar: _wantsTitles
@property (nonatomic) BOOL wantsTransitions; // ivar: _wantsTransitions
@property (nonatomic) BOOL wantsValidation; // ivar: _wantsValidation


+(id)availableClipCompositions;
+(id)possibleClipCompositionFallbackTitles;
+(id)possibleClipCompositionFallbacks;
+(id)possibleDefaultHUDTypes;
+(id)possibleFeedHUDTypes;
+(id)possibleNormalizationModes;
+(id)possibleNormalizationTechniques;
+(id)possiblePaperTrailOptions;
+(id)possibleTransitionFallbackTitles;
+(id)possibleTransitionFallbacks;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)transientProperties;
-(BOOL)allowsDefaultBehaviorForShowcaseMode:(NSInteger)arg0 ;
-(BOOL)allowsRandomFallbackForShowcaseMode:(NSInteger)arg0 ;
-(id)feedItemShadow;
-(id)parentSettings;
-(id)possibleClipCompositionsForFallback:(id)arg0 ;
-(id)possibleTransitionKindsForFallback:(NSInteger)arg0 ;
-(void)createChildren;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)performPostSaveActions;
-(void)setDefaultValues;


@end


#endif