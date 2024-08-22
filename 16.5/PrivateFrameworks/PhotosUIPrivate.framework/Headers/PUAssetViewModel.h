// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETVIEWMODEL_H
#define PUASSETVIEWMODEL_H

@class NSNumber, UIImage, NSString, NSHashTable, NSProgress, UIButton, UIView;
@protocol PUBrowsingIrisPlayerChangeObserver, PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingAnimatedImagePlayerChangeObserver, PUDisplayAsset, OS_dispatch_group, PUVideoLayerSource, PXVKImageAnalysis, PXVKImageAnalysisInteraction, PXVKImageAnalysisInteractionResultInfo;


#import "PUViewModel.h"
#import "PUBrowsingIrisPlayer.h"
#import "PUBrowsingAnimatedImagePlayer.h"
#import "PUAssetReference.h"
#import "PUAssetSharedViewModel.h"
#import "PUBadgeInfoPromise.h"
#import "PUAssetViewModelChange.h"
#import "PUOperationStatus.h"
#import "PUMediaProvider.h"
#import "PUModelTileTransform.h"
#import "PUBrowsingVideoPlayer.h"

@interface PUAssetViewModel : PUViewModel <PUBrowsingIrisPlayerChangeObserver, PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingAnimatedImagePlayerChangeObserver>

 {
    PUBrowsingIrisPlayer *_irisPlayer;
    PUBrowsingAnimatedImagePlayer *_animatedImagePlayer;
    ? _isValid;
}


@property (nonatomic, setter=_setCurrentFavoriteOverrideRequest:) NSInteger _currentFavoriteOverrideRequest; // ivar: __currentFavoriteOverrideRequest
@property (nonatomic, setter=_setNeedsUpdateVideoPlayers:) BOOL _needsUpdateVideoPlayers; // ivar: __needsUpdateVideoPlayers
@property (nonatomic, getter=isAccessoryViewVisible) BOOL accessoryViewVisible; // ivar: _accessoryViewVisible
@property (readonly, nonatomic) PUBrowsingAnimatedImagePlayer *animatedImagePlayer;
@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (retain, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // ivar: _assetSharedViewModel
@property (copy, nonatomic) NSNumber *assetSyndicationStateOverride; // ivar: _assetSyndicationStateOverride
@property (copy, nonatomic) PUBadgeInfoPromise *badgeInfoPromise; // ivar: _badgeInfoPromise
@property (weak, nonatomic) UIImage *bestImage; // ivar: _bestImage
@property (readonly, nonatomic) CGPoint contentOffset;
@property (nonatomic) CGFloat contentOffsetOverrideFactor; // ivar: _contentOffsetOverrideFactor
@property (readonly, nonatomic) PUAssetViewModelChange *currentChange;
@property (readonly, nonatomic) PUAssetViewModelChange *currentChangeIfExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayedContentUpdateCount; // ivar: _displayedContentUpdateCount
@property (retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup; // ivar: _displayedContentUpdateGroup
@property (readonly, nonatomic) NSInteger editStyle; // ivar: _editStyle
@property (nonatomic) NSInteger fetchAssetSyndicationState; // ivar: _assetSyndicationState
@property (nonatomic) NSInteger flippingFullSizeRenderState; // ivar: _flippingFullSizeRenderState
@property (nonatomic) CGFloat focusValue; // ivar: _focusValue
@property (nonatomic) CGFloat focusValueAtZeroTimestamp; // ivar: _focusValueAtZeroTimestamp
@property (nonatomic) BOOL forceBadgesVisible; // ivar: _forceBadgesVisible
@property (nonatomic) BOOL hasVisualAnalysisFailed; // ivar: _hasVisualAnalysisFailed
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger importState; // ivar: _importState
@property (readonly, nonatomic) PUBrowsingIrisPlayer *irisPlayer;
@property (nonatomic) BOOL isAccessoryViewDoneAnimatingIn; // ivar: _isAccessoryViewDoneAnimatingIn
@property (nonatomic) BOOL isBeingDismissed; // ivar: _isBeingDismissed
@property (nonatomic, setter=_setFavorite:) BOOL isFavorite; // ivar: _isFavorite
@property (copy, nonatomic) NSNumber *isFavoriteOverride; // ivar: _isFavoriteOverride
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL isIrisPlaying; // ivar: _isIrisPlaying
@property (readonly, nonatomic) BOOL isLastAccessoryViewVisibilityChangeReasonUserAction;
@property (nonatomic) BOOL isPresentedForPreview; // ivar: _isPresentedForPreview
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (nonatomic) BOOL isUpdatingDisplayedContent; // ivar: _isUpdatingDisplayedContent
@property (nonatomic, setter=setUserTransformingTile:) BOOL isUserTransformingTile; // ivar: _isUserTransformingTile
@property (nonatomic) BOOL isVisualSearchCardShowing; // ivar: _isVisualSearchCardShowing
@property (nonatomic, setter=_setLastAccessoryViewVisibilityChangeReason:) NSInteger lastAccessoryViewVisibilityChangeReason; // ivar: _lastAccessoryViewVisibilityChangeReason
@property (nonatomic, setter=_setLastContentOffsetChangeReason:) NSInteger lastContentOffsetChangeReason; // ivar: _lastContentOffsetChangeReason
@property (readonly, nonatomic) NSInteger lastEditStyleChangeReason; // ivar: _lastEditStyleChangeReason
@property (copy, nonatomic) PUOperationStatus *loadingStatus; // ivar: _loadingStatus
@property (readonly, nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (retain, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) PUModelTileTransform *modelTileTransform; // ivar: _modelTileTransform
@property (nonatomic) BOOL needsVisualImageAnalysis; // ivar: _needsVisualImageAnalysis
@property (nonatomic) CGPoint overridingContentOffset; // ivar: _overridingContentOffset
@property (nonatomic) CGPoint preferredContentOffset; // ivar: _preferredContentOffset
@property (readonly, nonatomic) NSObject<PUVideoLayerSource> *primaryVideoLayerSource;
@property (retain, nonatomic) NSHashTable *registeredVideoLayerSources; // ivar: _registeredVideoLayerSources
@property (nonatomic) BOOL revealsGainMapImage; // ivar: _revealsGainMapImage
@property (retain, nonatomic) NSProgress *saveProgress; // ivar: _saveProgress
@property (readonly, nonatomic) NSInteger saveState; // ivar: _saveState
@property (nonatomic) BOOL shouldHideVisualIntelligenceOverlay; // ivar: _shouldHideVisualIntelligenceOverlay
@property (readonly) Class superclass;
@property (nonatomic) BOOL toggleCTM; // ivar: _toggleCTM
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // ivar: _videoPlayer
@property (retain, nonatomic) NSObject<PXVKImageAnalysis> *visualImageAnalysis; // ivar: _visualImageAnalysis
@property (weak, nonatomic) UIButton *visualIntelligenceAnalysisButton; // ivar: _visualIntelligenceAnalysisButton
@property (nonatomic) int visualIntelligenceAnalyzeRequestID; // ivar: _visualIntelligenceAnalyzeRequestID
@property (weak, nonatomic) UIView *visualSearchCornerView; // ivar: _visualSearchCornerView
@property (weak, nonatomic) NSObject<PXVKImageAnalysisInteraction> *visualSearchImageAnalysisInteraction; // ivar: _visualSearchImageAnalysisInteraction
@property (retain, nonatomic) NSObject<PXVKImageAnalysisInteractionResultInfo> *visualSearchLookupTopItem; // ivar: _visualSearchLookupTopItem


-(BOOL)_shouldPauseAndRewindVideo;
-(id)debugDetailedDescription;
-(id)init;
-(id)initWithLowMemoryMode:(BOOL)arg0 ;
-(id)newViewModelChange;
-(void)_handleAssetSharedViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingAnimatedImage:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingIrisPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingVideoPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_handleDidEndScrubbing;
-(void)_invalidateVideoPlayers;
-(void)_pauseAndRewindVideoIfNeeded;
-(void)_updateFavoriteState;
-(void)_updatePropertiesFromAssetSharedViewModel;
-(void)_updateVideoPlayersIfNeeded;
-(void)_updateVideoPlayersLoadingAllowedIfNeeded;
-(void)dealloc;
-(void)didPerformChanges;
-(void)didUpdateDisplayedContent;
-(void)registerChangeObserver:(id)arg0 ;
-(void)registerVideoLayerSource:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)unregisterVideoLayerSource:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)willUpdateDisplayedContent;


@end


#endif