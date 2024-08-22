// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETVIEWMODELCHANGE_H
#define PUASSETVIEWMODELCHANGE_H



#import "PUViewModelChange.h"
#import "PUBrowsingAnimatedImagePlayerChange.h"
#import "PUBrowsingIrisPlayerChange.h"
#import "PUBrowsingVideoPlayerChange.h"

@interface PUAssetViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setAccessoryViewVisibilityChanged:) BOOL accessoryViewVisibilityChanged; // ivar: _accessoryViewVisibilityChanged
@property (retain, nonatomic, setter=_setAnimatedImageChange:) PUBrowsingAnimatedImagePlayerChange *animatedImageChange; // ivar: _animatedImageChange
@property (nonatomic, setter=_setAssetChanged:) BOOL assetChanged; // ivar: _assetChanged
@property (nonatomic, setter=_setAssetContentChanged:) BOOL assetContentChanged; // ivar: _assetContentChanged
@property (nonatomic, setter=_setBadgeInfoChanged:) BOOL badgeInfoChanged; // ivar: _badgeInfoChanged
@property (nonatomic, setter=_setBestImageChanged:) BOOL bestImageChanged; // ivar: _bestImageChanged
@property (nonatomic, setter=_setContentOffsetChanged:) BOOL contentOffsetChanged; // ivar: _contentOffsetChanged
@property (nonatomic, setter=_setFlippingFullSizeRenderStateChanged:) BOOL flippingFullSizeRenderStateChanged; // ivar: _flippingFullSizeRenderStateChanged
@property (nonatomic, setter=_setFocusValueChanged:) BOOL focusValueChanged; // ivar: _focusValueChanged
@property (nonatomic, setter=_setForceBadgesVisibleChanged:) BOOL forceBadgesVisibleChanged; // ivar: _forceBadgesVisibleChanged
@property (nonatomic, setter=_setImportStateChanged:) BOOL importStateChanged; // ivar: _importStateChanged
@property (retain, nonatomic, setter=_setIrisPlayerChange:) PUBrowsingIrisPlayerChange *irisPlayerChange; // ivar: _irisPlayerChange
@property (nonatomic, setter=_setIsAccessoryViewDoneAnimatingInChangedChanged:) BOOL isAccessoryViewDoneAnimatingInChanged; // ivar: _isAccessoryViewDoneAnimatingInChanged
@property (nonatomic, setter=_setIsAssetSyndicationStateChanged:) BOOL isAssetSyndicationStateChanged; // ivar: _isAssetSyndicationStateChanged
@property (nonatomic, setter=_setIsBeingDismissedChanged:) BOOL isBeingDismissedChanged; // ivar: _isBeingDismissedChanged
@property (nonatomic, setter=_setIsFavoriteChanged:) BOOL isFavoriteChanged; // ivar: _isFavoriteChanged
@property (nonatomic, setter=_setIsInEditModeChanged:) BOOL isInEditModeChanged; // ivar: _isInEditModeChanged
@property (nonatomic, setter=_setIsIrisPlayingChanged:) BOOL isIrisPlayingChanged; // ivar: _isIrisPlayingChanged
@property (nonatomic, setter=_setIsPresentedForPreviewChanged:) BOOL isPresentedForPreviewChanged; // ivar: _isPresentedForPreviewChanged
@property (nonatomic, setter=_setIsUpdatingDisplayedContentChanged:) BOOL isUpdatingDisplayedContentChanged; // ivar: _isUpdatingDisplayedContentChanged
@property (nonatomic, setter=_setUserTransformingTileDidChange:) BOOL isUserTransformingTileDidChange; // ivar: _isUserTransformingTileDidChange
@property (nonatomic, setter=_setIsVisualSearchCardShowingChanged:) BOOL isVisualSearchCardShowingChanged; // ivar: _isVisualSearchCardShowingChanged
@property (nonatomic, setter=_setLoadingStatusChanged:) BOOL loadingStatusChanged; // ivar: _loadingStatusChanged
@property (nonatomic, setter=_setModelTileTransformChanged:) BOOL modelTileTransformChanged; // ivar: _modelTileTransformChanged
@property (nonatomic, setter=_setNeedsVisualImageAnalysisChanged:) BOOL needsVisualImageAnalysisChanged; // ivar: _needsVisualImageAnalysisChanged
@property (nonatomic) BOOL revealsGainMapImageChanged; // ivar: _revealsGainMapImageChanged
@property (nonatomic, setter=_setSaveProgressChanged:) BOOL saveProgressChanged; // ivar: _saveProgressChanged
@property (nonatomic, setter=_setSaveStateChanged:) BOOL saveStateChanged; // ivar: _saveStateChanged
@property (nonatomic, setter=_setShouldHideVisualIntelligenceOverlayChanged:) BOOL shouldHideVisualIntelligenceOverlayChanged; // ivar: _shouldHideVisualIntelligenceOverlayChanged
@property (nonatomic, setter=_setToggleCTMChanged:) BOOL toggleCTMChanged; // ivar: _toggleCTMChanged
@property (retain, nonatomic, setter=_setVideoPlayerChange:) PUBrowsingVideoPlayerChange *videoPlayerChange; // ivar: _videoPlayerChange
@property (nonatomic) BOOL videoPlayerDidChange; // ivar: _videoPlayerDidChange
@property (nonatomic, setter=_setVisualImageAnalysisChanged:) BOOL visualImageAnalysisChanged; // ivar: _visualImageAnalysisChanged
@property (nonatomic, setter=_setVisualIntelligenceAnalysisButtonChanged:) BOOL visualIntelligenceAnalysisButtonChanged; // ivar: _visualIntelligenceAnalysisButtonChanged
@property (nonatomic, setter=_setVisualSearchCornerViewChanged:) BOOL visualSearchCornerViewChanged; // ivar: _visualSearchCornerViewChanged
@property (nonatomic, setter=_setVisualSearchLookupTopItemChanged:) BOOL visualSearchLookupTopItemChanged; // ivar: _visualSearchLookupTopItemChanged


-(BOOL)hasChanges;


@end


#endif