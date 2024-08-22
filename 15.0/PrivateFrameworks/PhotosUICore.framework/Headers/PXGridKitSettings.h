// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGRIDKITSETTINGS_H
#define PXGRIDKITSETTINGS_H



#import "PXSettings.h"

@interface PXGridKitSettings : PXSettings

@property (nonatomic) BOOL allowBlockingDueToFences; // ivar: _allowBlockingDueToFences
@property (nonatomic) BOOL allowBlockingDuringScrolling; // ivar: _allowBlockingDuringScrolling
@property (nonatomic) NSInteger blockOnMissingThumbnailsAtSpeedRegime; // ivar: _blockOnMissingThumbnailsAtSpeedRegime
@property (nonatomic) CGFloat blockingWhileInitialLoadTimeout; // ivar: _blockingWhileInitialLoadTimeout
@property (nonatomic) CGFloat blockingWhileScrollingTimeout; // ivar: _blockingWhileScrollingTimeout
@property (nonatomic) CGFloat blockingWhileScrubbingTimeout; // ivar: _blockingWhileScrubbingTimeout
@property (nonatomic) CGFloat cameraZoomFactor; // ivar: _cameraZoomFactor
@property (nonatomic) BOOL colorCachedThumbnails; // ivar: _colorCachedThumbnails
@property (nonatomic) BOOL colorCopiedImages; // ivar: _colorCopiedImages
@property (nonatomic) BOOL debugColorTransform; // ivar: _debugColorTransform
@property (nonatomic) BOOL debugExtendedColorRange; // ivar: _debugExtendedColorRange
@property (nonatomic) BOOL debugOpaque; // ivar: _debugOpaque
@property (nonatomic) BOOL debugResolution; // ivar: _debugResolution
@property (nonatomic) BOOL debugSharedTextures; // ivar: _debugSharedTextures
@property (nonatomic) BOOL disableLowResThumbnails; // ivar: _disableLowResThumbnails
@property (nonatomic) BOOL enableAnchoringRectDiagnostics; // ivar: _enableAnchoringRectDiagnostics
@property (nonatomic) BOOL enableAssetsRectDiagnostics; // ivar: _enableAssetsRectDiagnostics
@property (nonatomic) BOOL enableColorMatching; // ivar: _enableColorMatching
@property (nonatomic) BOOL enableCurrentFocusRectDiagnostics; // ivar: _enableCurrentFocusRectDiagnostics
@property (nonatomic) BOOL enableFocusRectDiagnostics; // ivar: _enableFocusRectDiagnostics
@property (nonatomic) BOOL enableLayoutDanglingUpdatesAssertions; // ivar: _enableLayoutDanglingUpdatesAssertions
@property (nonatomic) BOOL enableMetalRenderer; // ivar: _enableMetalRenderer
@property (nonatomic) BOOL enableRectDiagnosticsForDecorationSprites; // ivar: _enableRectDiagnosticsForDecorationSprites
@property (nonatomic) BOOL enableRectDiagnosticsForDisplayAssetSprites; // ivar: _enableRectDiagnosticsForDisplayAssetSprites
@property (nonatomic) BOOL enableRectDiagnosticsForGradientSprites; // ivar: _enableRectDiagnosticsForGradientSprites
@property (nonatomic) BOOL enableRectDiagnosticsForNamedImageSprites; // ivar: _enableRectDiagnosticsForNamedImageSprites
@property (nonatomic) BOOL enableRectDiagnosticsForPathSprites; // ivar: _enableRectDiagnosticsForPathSprites
@property (nonatomic) BOOL enableRectDiagnosticsForShadowSprites; // ivar: _enableRectDiagnosticsForShadowSprites
@property (nonatomic) BOOL enableRectDiagnosticsForSolidColorSprites; // ivar: _enableRectDiagnosticsForSolidColorSprites
@property (nonatomic) BOOL enableRectDiagnosticsForTextSprites; // ivar: _enableRectDiagnosticsForTextSprites
@property (nonatomic) BOOL enableRectDiagnosticsForTitleSubtitleSprites; // ivar: _enableRectDiagnosticsForTitleSubtitleSprites
@property (nonatomic) BOOL enableRectDiagnosticsForUndefinedSprites; // ivar: _enableRectDiagnosticsForUndefinedSprites
@property (nonatomic) BOOL enableRectDiagnosticsForViewSprites; // ivar: _enableRectDiagnosticsForViewSprites
@property (nonatomic) BOOL enableRenderTextureCache; // ivar: _enableRenderTextureCache
@property (nonatomic) BOOL enableRoundedCorners; // ivar: _enableRoundedCorners
@property (nonatomic) BOOL enableSublayoutUpdateCycleAssertions; // ivar: _enableSublayoutUpdateCycleAssertions
@property (nonatomic) BOOL enableViewRenderer; // ivar: _enableViewRenderer
@property (nonatomic) BOOL enableXcodeCustomDebugHierarchy; // ivar: _enableXcodeCustomDebugHierarchy
@property (nonatomic) BOOL inLowMemoryModePreferMasterThumb; // ivar: _inLowMemoryModePreferMasterThumb
@property (nonatomic) CGFloat inactivityTimeout; // ivar: _inactivityTimeout
@property (nonatomic) BOOL includeLayoutsLocalSpritesInDebugHierarchy; // ivar: _includeLayoutsLocalSpritesInDebugHierarchy
@property (nonatomic) CGFloat livePhotoInitialCrossfadeDuration; // ivar: _livePhotoInitialCrossfadeDuration
@property (nonatomic) BOOL loadThumbnailsAsync; // ivar: _loadThumbnailsAsync
@property (nonatomic) BOOL lowLatency; // ivar: _lowLatency
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (nonatomic) NSInteger lowSpecProcessorCountLimit; // ivar: _lowSpecProcessorCountLimit
@property (nonatomic) CGFloat maxCornerRadius; // ivar: _maxCornerRadius
@property (nonatomic) CGFloat offscreenTextureMaximumLifeTime; // ivar: _offscreenTextureMaximumLifeTime
@property (nonatomic) CGFloat opportunisticPreheatRequiredIdleTime; // ivar: _opportunisticPreheatRequiredIdleTime
@property (nonatomic) CGFloat perspectiveAngle; // ivar: _perspectiveAngle
@property (nonatomic) CGFloat renderTextureCacheAgeLimit; // ivar: _renderTextureCacheAgeLimit
@property (nonatomic) NSUInteger renderTextureCacheCapacity; // ivar: _renderTextureCacheCapacity
@property (nonatomic) NSUInteger renderTextureCacheSizeLimitMB; // ivar: _renderTextureCacheSizeLimitMB
@property (nonatomic) BOOL requestMasterThumbsOnly; // ivar: _requestMasterThumbsOnly
@property (nonatomic) BOOL requestThumbnailsOnly; // ivar: _requestThumbnailsOnly
@property (nonatomic) NSInteger sampleCount; // ivar: _sampleCount
@property (nonatomic) BOOL shouldShowBoundariesOfTextTextures; // ivar: _shouldShowBoundariesOfTextTextures
@property (nonatomic) BOOL simulateMissingMetalDevice; // ivar: _simulateMissingMetalDevice
@property (nonatomic) BOOL simulateSomeAssetsInCloud; // ivar: _simulateSomeAssetsInCloud
@property (nonatomic) CGFloat slowAnimationsSpeed; // ivar: _slowAnimationsSpeed
@property (nonatomic) CGFloat slowLayoutUpdateThreshold; // ivar: _slowLayoutUpdateThreshold
@property (nonatomic) BOOL sortSpritesInXcodeCustomDebugHierarchy; // ivar: _sortSpritesInXcodeCustomDebugHierarchy
@property (nonatomic) CGFloat textLegibilityDimmingStrength; // ivar: _textLegibilityDimmingStrength
@property (nonatomic) NSUInteger textLegibilityDimmingType; // ivar: _textLegibilityDimmingType
@property (nonatomic) NSInteger thumbnailCacheSize; // ivar: _thumbnailCacheSize
@property (nonatomic) NSInteger videoAllowedAtOrBelowSpeed; // ivar: _videoAllowedAtOrBelowSpeed
@property (nonatomic) NSInteger videoAllowedAtOrBelowSpeedForLowSpec; // ivar: _videoAllowedAtOrBelowSpeedForLowSpec
@property (nonatomic) BOOL wantsOrthogonalProjection; // ivar: _wantsOrthogonalProjection
@property (nonatomic) BOOL wantsPerspectiveDebug; // ivar: _wantsPerspectiveDebug
@property (nonatomic) BOOL wantsRectDiagnosticsDebugHUD; // ivar: _wantsRectDiagnosticsDebugHUD
@property (nonatomic) BOOL wantsStatsDebugHUD; // ivar: _wantsStatsDebugHUD


+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)anySpritesRectDiagnosticsEnabled;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif