// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYVIEWMODEL_H
#define PXSTORYVIEWMODEL_H

@class NSString, NSMapTable, NSAttributedString, NSError, NSDate, NSDateFormatter, NSMutableSet, NSArray, UIImpactFeedbackGenerator;
@protocol PXTapToRadarDiagnosticProvider, PXVisualDiagnosticsProvider, PXStoryDiagnosticHUDContentProvider, PXStoryMutableViewModel, PXChangeObserver, PXSettingsKeyObserver, PXInfoProvider, PXInfoUpdaterObserver, PXNetworkStatusObserver, PXStoryQueueParticipant, PXStoryDiagnosticHUDDataSource, PXStoryViewActionPerformer, PXStoryErrorReporter, PXDisplayAsset, PXDisplayAssetCollection, OS_dispatch_queue, PXAnonymousViewController, PXStoryPacingTimeSource, PXUserDefaultsDataSource, PXStoryViewLayoutSpec;


#import "PXObservable.h"
#import "PXStoryViewAccessibilityHUDContentProvider.h"
#import "PXStoryRelatedController.h"
#import "PXStoryModel.h"
#import "PXStoryAudioSessionController.h"
#import "PXStoryViewBufferingController.h"
#import "PXStoryErrorRepository.h"
#import "PXExtendedTraitCollection.h"
#import "PXStoryPausableLoadingCoordinator.h"
#import "PXInfoUpdater.h"
#import "PXStoryConfiguration.h"
#import "PXMediaProvider.h"
#import "PXStoryMusicPlayer.h"
#import "PXStoryMuteStateController.h"
#import "PXStoryOverlayController.h"
#import "PXStoryPacingController.h"
#import "PXStoryPersistenceController.h"
#import "PXPhotosViewInteraction.h"
#import "PXPhotosViewModel.h"
#import "PXStoryViewResourcesPreloadingController.h"
#import "PXStoryResourcesPreloadingCoordinator.h"
#import "PXStorySongController.h"
#import "PXUpdater.h"
#import "PXStoryValidationController.h"
#import "PXStoryItemPlacement.h"
#import "PXStoryViewLayoutSpecManager.h"
#import "PXStoryViewModeTransition.h"
#import "PXVolumeController.h"

@interface PXStoryViewModel : PXObservable <PXTapToRadarDiagnosticProvider, PXVisualDiagnosticsProvider, PXStoryDiagnosticHUDContentProvider, PXStoryMutableViewModel, PXChangeObserver, PXSettingsKeyObserver, PXInfoProvider, PXInfoUpdaterObserver, PXNetworkStatusObserver, PXStoryQueueParticipant, PXStoryDiagnosticHUDDataSource>

 {
    BOOL _hasBeenActiveOnce;
    NSInteger _axStoredPlayStateLastViewModeOnUpdate;
    BOOL _axStoredPlayStateHasStoredPlayState;
    NSInteger _axStoredPlayState;
    PXStoryViewAccessibilityHUDContentProvider *_accessibilityHUDContentProvider;
}


@property (readonly, nonatomic) NSUInteger HUDContentChangeDescriptor;
@property (readonly, nonatomic) PXObservable *HUDObservable;
@property (readonly, nonatomic) PXStoryRelatedController *HUDRelatedController;
@property (readonly, nonatomic) PXStoryModel *HUDStoryModel;
@property (readonly, nonatomic) NSUInteger HUDStoryModelChangeDescriptor;
@property (readonly, nonatomic) NSUInteger HUDVisibiltyChangeDescriptor;
@property (readonly, weak, nonatomic) NSObject<PXStoryViewActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, nonatomic) BOOL allowsRelated;
@property (readonly, nonatomic) PXStoryAudioSessionController *audioSessionController; // ivar: _audioSessionController
@property (readonly, nonatomic) CGFloat bottomGradientLegibilityOverlayOpacity; // ivar: _bottomGradientLegibilityOverlayOpacity
@property (readonly, nonatomic) PXStoryViewBufferingController *bufferingController; // ivar: _bufferingController
@property (readonly, nonatomic) CGFloat bufferingIndicatorVisibilityFraction; // ivar: _bufferingIndicatorVisibilityFraction
@property (readonly, nonatomic) BOOL canShowMuteToggleButtonWhenChromeIsHidden; // ivar: _canShowMuteToggleButtonWhenChromeIsHidden
@property (readonly, nonatomic) BOOL canToggleSelectMode; // ivar: _canToggleSelectMode
@property (readonly, nonatomic) NSUInteger chromeItems; // ivar: _chromeItems
@property (readonly, nonatomic) CGFloat chromeVisibilityFraction; // ivar: _chromeVisibilityFraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (readonly, nonatomic) NSString *diagnosticDescriptionForAllHUDTypes;
@property (readonly, nonatomic) NSMapTable *diagnosticHUDContentProvidersByType; // ivar: _diagnosticHUDContentProvidersByType
@property (nonatomic) NSInteger diagnosticHUDType; // ivar: _diagnosticHUDType
@property (readonly, nonatomic) BOOL didSelectAnyRelated; // ivar: _didSelectAnyRelated
@property (retain, nonatomic) NSAttributedString *displaySubtitle; // ivar: _displaySubtitle
@property (retain, nonatomic) NSAttributedString *displayTitle; // ivar: _displayTitle
@property (readonly, nonatomic) NSError *displayedError; // ivar: _displayedError
@property (readonly, nonatomic) NSUInteger edgeToHighlight; // ivar: _edgeToHighlight
@property (readonly, nonatomic) NSUInteger endBehavior;
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) PXStoryErrorRepository *errorRepository; // ivar: _errorRepository
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) CGFloat fadeOutOverlayVisibilityFraction; // ivar: _fadeOutOverlayVisibilityFraction
@property (nonatomic) BOOL hasAnyError; // ivar: _hasAnyError
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger highlightedRelatedIndex; // ivar: _highlightedRelatedIndex
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isActionMenuOpen; // ivar: _isActionMenuOpen
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isAnyMenuOpen; // ivar: _isAnyMenuOpen
@property (readonly, nonatomic) BOOL isAtPlaybackEnd; // ivar: _isAtPlaybackEnd
@property (nonatomic) BOOL isAtPlaybackStart; // ivar: _isAtPlaybackStart
@property (nonatomic) BOOL isHUDVisible; // ivar: _isHUDVisible
@property (readonly, nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (readonly, nonatomic) BOOL isMuted; // ivar: _isMuted
@property (nonatomic) BOOL isPerformingCrossfadeTransitionToRelated; // ivar: _isPerformingCrossfadeTransitionToRelated
@property (readonly, nonatomic) BOOL isPerformingViewControllerTransition; // ivar: _isPerformingViewControllerTransition
@property (readonly, nonatomic) BOOL isReadingFromPhotosGridViewModel; // ivar: _isReadingFromPhotosGridViewModel
@property (readonly, nonatomic) BOOL isRelatedOverlayScrolledIntoView; // ivar: _isRelatedOverlayScrolledIntoView
@property (readonly, nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (readonly, nonatomic) BOOL isUserPerformingRemoteGesture; // ivar: _isUserPerformingRemoteGesture
@property (retain, nonatomic) NSDate *lastMainModelChangeDate; // ivar: _lastMainModelChangeDate
@property (readonly, nonatomic) NSInteger lastMutedChangeReason; // ivar: _lastMutedChangeReason
@property (readonly, nonatomic) NSDate *lastSkipSegmentActionDate; // ivar: _lastSkipSegmentActionDate
@property (readonly, nonatomic) PXStoryPausableLoadingCoordinator *loadingCoordinator; // ivar: _loadingCoordinator
@property (retain, nonatomic) NSObject<PXDisplayAsset> *mainAsset; // ivar: _mainAsset
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *mainAssetCollection; // ivar: _mainAssetCollection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mainAssetInfoUpdateQueue; // ivar: _mainAssetInfoUpdateQueue
@property (readonly, nonatomic) NSDateFormatter *mainAssetInfoUpdateQueue_titleDateFormatter; // ivar: _mainAssetInfoUpdateQueue_titleDateFormatter
@property (readonly, nonatomic) PXInfoUpdater *mainAssetInfoUpdater; // ivar: _mainAssetInfoUpdater
@property (readonly, nonatomic) PXStoryConfiguration *mainConfiguration; // ivar: _mainConfiguration
@property (readonly, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (readonly, nonatomic) CGFloat maximumIndividualTopChromeItemVisibilityFraction; // ivar: _maximumIndividualTopChromeItemVisibilityFraction
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) id *modelChangeOrigin; // ivar: _modelChangeOrigin
@property (weak, nonatomic) PXStoryModel *modelCoveredByRelated; // ivar: _modelCoveredByRelated
@property (readonly, nonatomic) PXStoryMusicPlayer *musicPlayer; // ivar: _musicPlayer
@property (readonly, nonatomic) PXStoryMuteStateController *muteStateController; // ivar: _muteStateController
@property (readonly, nonatomic) CGFloat muteToggleButtonVisibilityFraction; // ivar: _muteToggleButtonVisibilityFraction
@property (readonly, nonatomic) BOOL needsStatusBarVisible; // ivar: _needsStatusBarVisible
@property (readonly, nonatomic) CGFloat outroFractionCompleted; // ivar: _outroFractionCompleted
@property (readonly, nonatomic) PXStoryOverlayController *overlayController; // ivar: _overlayController
@property (readonly, nonatomic) PXStoryPacingController *pacingController; // ivar: _pacingController
@property (nonatomic) BOOL pausingPlaybackShowsChrome; // ivar: _pausingPlaybackShowsChrome
@property (readonly, nonatomic) PXStoryPersistenceController *persistenceController; // ivar: _persistenceController
@property (retain, nonatomic) PXPhotosViewInteraction *photosGridViewInteraction; // ivar: _photosGridViewInteraction
@property (readonly, nonatomic) PXPhotosViewModel *photosGridViewModel; // ivar: _photosGridViewModel
@property (readonly, nonatomic) CGFloat playbackEndDarkening; // ivar: _playbackEndDarkening
@property (readonly, nonatomic) CGFloat playbackFractionCompleted; // ivar: _playbackFractionCompleted
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) NSMutableSet *recentlyUsedAppleMusicSongIDs; // ivar: _recentlyUsedAppleMusicSongIDs
@property (readonly, nonatomic) NSMutableSet *recentlyUsedFlexSongIDs; // ivar: _recentlyUsedFlexSongIDs
@property (readonly, copy, nonatomic) NSArray *relatedConfigurations; // ivar: _relatedConfigurations
@property (readonly, nonatomic) PXStoryRelatedController *relatedController; // ivar: _relatedController
@property (readonly, copy, nonatomic) NSArray *relatedModels; // ivar: _relatedModels
@property (readonly, nonatomic) CGFloat relatedOverlayVisibilityFraction; // ivar: _relatedOverlayVisibilityFraction
@property (readonly, nonatomic) PXStoryViewResourcesPreloadingController *resourcesPreloadingController; // ivar: _resourcesPreloadingController
@property (readonly, nonatomic) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator; // ivar: _resourcesPreloadingCoordinator
@property (readonly, nonatomic) UIImpactFeedbackGenerator *scrubberFeedbackGenerator; // ivar: _scrubberFeedbackGenerator
@property (readonly, nonatomic) ? scrubberPosition; // ivar: _scrubberPosition
@property (readonly, nonatomic) CGFloat scrubberVisibilityFraction; // ivar: _scrubberVisibilityFraction
@property (readonly, nonatomic) NSInteger selectedRelatedIndex; // ivar: _selectedRelatedIndex
@property (readonly, nonatomic) BOOL shouldAutoHideChrome; // ivar: _shouldAutoHideChrome
@property (nonatomic) BOOL shouldAutoHideMuteToggleButton; // ivar: _shouldAutoHideMuteToggleButton
@property (readonly, nonatomic) BOOL shouldCountDownToUpNext; // ivar: _shouldCountDownToUpNext
@property (readonly, nonatomic) BOOL shouldPreventDisplaySleep; // ivar: _shouldPreventDisplaySleep
@property (readonly, nonatomic) BOOL shouldShowErrorIndicator; // ivar: _shouldShowErrorIndicator
@property (readonly, nonatomic) BOOL shouldSimplifyUIForAccessibility; // ivar: _shouldSimplifyUIForAccessibility
@property (readonly, nonatomic) BOOL showSongInTitleWhenPaused; // ivar: _showSongInTitleWhenPaused
@property (nonatomic) CGFloat solidLegibilityOverlayOpacity; // ivar: _solidLegibilityOverlayOpacity
@property (readonly, nonatomic) PXStorySongController *songController; // ivar: _songController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly, nonatomic) CGFloat styleSwitcherVisibilityFraction; // ivar: _styleSwitcherVisibilityFraction
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL swipeDownDismissalPreviewEnabled; // ivar: _swipeDownDismissalPreviewEnabled
@property (readonly, nonatomic) CGFloat swipeDownDismissalPreviewFraction; // ivar: _swipeDownDismissalPreviewFraction
@property (readonly, nonatomic) ? swipeDownInteractionState; // ivar: _swipeDownInteractionState
@property (readonly, nonatomic) BOOL swipeDownTriggeringDismissal; // ivar: _swipeDownTriggeringDismissal
@property (readonly, nonatomic) NSObject<PXStoryPacingTimeSource> *timeSource; // ivar: _timeSource
@property (readonly, nonatomic) CGFloat topGradientLegibilityOverlayOpacity; // ivar: _topGradientLegibilityOverlayOpacity
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) NSObject<PXUserDefaultsDataSource> *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) PXStoryValidationController *validationController; // ivar: _validationController
@property (readonly, copy, nonatomic) PXStoryItemPlacement *viewControllerDismissalTargetPlacement; // ivar: _viewControllerDismissalTargetPlacement
@property (readonly, nonatomic) NSObject<PXStoryViewLayoutSpec> *viewLayoutSpec; // ivar: _viewLayoutSpec
@property (readonly, nonatomic) PXStoryViewLayoutSpecManager *viewLayoutSpecManager; // ivar: _viewLayoutSpecManager
@property (readonly, nonatomic) NSInteger viewMode; // ivar: _viewMode
@property (retain, nonatomic) PXStoryViewModeTransition *viewModeTransition; // ivar: _viewModeTransition
@property (readonly, nonatomic) CGFloat volume; // ivar: _volume
@property (readonly, nonatomic) PXVolumeController *volumeController; // ivar: _volumeController
@property (readonly, nonatomic) BOOL wantsChromeVisible; // ivar: _wantsChromeVisible
@property (readonly, nonatomic) BOOL wantsPlaybackEndDarkening; // ivar: _wantsPlaybackEndDarkening
@property (readonly, nonatomic) BOOL wantsRelatedOverlayNavigationButtonsVisible; // ivar: _wantsRelatedOverlayNavigationButtonsVisible
@property (readonly, nonatomic) BOOL wantsRelatedOverlayScrollable; // ivar: _wantsRelatedOverlayScrollable
@property (readonly, nonatomic) BOOL wantsRelatedOverlayVisible; // ivar: _wantsRelatedOverlayVisible
@property (readonly, nonatomic) BOOL wantsScrubberVisible; // ivar: _wantsScrubberVisible


+(void)registerViewModelDesiringPlayback:(id)arg0 ;
+(void)unregisterViewModelDesiringPlayback:(id)arg0 ;
-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(BOOL)checkIfShouldPreventAdvancingAndReturnReason:(*id)arg0 ;
-(BOOL)skipToBeginningOfSegmentWithIdentifier:(NSInteger)arg0 ;
-(BOOL)skipToSegmentWithOffset:(NSInteger)arg0 ;
-(BOOL)skipToSegmentWithOffset:(NSInteger)arg0 byTappingEdge:(BOOL)arg1 ;
-(id)_gridEffectForAsset:(id)arg0 colorGradingEffect:(id)arg1 entityManager:(id)arg2 ;
-(id)_internalRecoveryOptions;
-(id)_mainAssetInfoUpdateQueue_infoForAsset:(id)arg0 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticHUDContentProviderForType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 extendedTraitCollection:(id)arg1 timeSource:(id)arg2 mediaProvider:(id)arg3 ;
-(id)memoryDebugInfo;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(void)_accessibilityStatusDidChange;
-(void)_attachAccessibilityHUDIfNeeded;
-(void)_autoHideChrome;
-(void)_autoHideMuteToggleButton;
-(void)_cancelMuteToggleButtonAutoHide;
-(void)_changeMainModelToRelatedAtIndex:(NSInteger)arg0 changeOrigin:(NSUInteger)arg1 ;
-(void)_invalidateAXStoredPlayState;
-(void)_invalidateCanToggleSelectMode;
-(void)_invalidateControllersActiveness;
-(void)_invalidateDesiredPlayState;
-(void)_invalidateDiagnosticHUDState;
-(void)_invalidateDisplayTitleAndSubtitle;
-(void)_invalidateErrorIndicator;
-(void)_invalidateHUDSettings;
-(void)_invalidateIsAnyMenuOpen;
-(void)_invalidateIsInSelectMode;
-(void)_invalidateLegibilityOverlayOpacity;
-(void)_invalidateMainAsset;
-(void)_invalidateMainAssetCollection;
-(void)_invalidateMainModelControllers;
-(void)_invalidateMainModelProperties;
-(void)_invalidateOutroFractionCompleted;
-(void)_invalidatePhotosGridEffectProvider;
-(void)_invalidatePlaybackFractionCompleted;
-(void)_invalidateRecentlyUsedSongs;
-(void)_invalidateShouldAutoHideChrome;
-(void)_invalidateShouldAutoHideMuteToggleButton;
-(void)_invalidateShouldPreventDisplaySleep;
-(void)_invalidateSpecManager;
-(void)_invalidateViewLayoutSpec;
-(void)_invalidateViewMode;
-(void)_invalidateViewModeTransition;
-(void)_invalidateViewModelControllers;
-(void)_invalidateWantsRelatedOverlayScrollable;
-(void)_readFromPhotosGridViewModel:(id)arg0 ;
-(void)_registerForAccessibilityEvents;
-(void)_replayMusic;
-(void)_scheduleMuteToggleButtonAutoHide;
-(void)_setNeedsUpdate;
-(void)_unregisterForAccessibilityEvents;
-(void)_updateAXStoredPlayState;
-(void)_updateCanToggleSelectMode;
-(void)_updateControllersActiveness;
-(void)_updateDesiredPlayState;
-(void)_updateDiagnosticHUDState;
-(void)_updateDisplayTitleAndSubtitle;
-(void)_updateErrorIndicator;
-(void)_updateHUDSettings;
-(void)_updateIsAnyMenuOpen;
-(void)_updateIsInSelectMode;
-(void)_updateLegibilityOverlayOpacity;
-(void)_updateMainAsset;
-(void)_updateMainAssetCollection;
-(void)_updateMainModelControllers;
-(void)_updateMainModelProperties;
-(void)_updateOutroFractionCompleted;
-(void)_updatePhotosGridEffectProvider;
-(void)_updatePlaybackFractionCompleted;
-(void)_updateRecentlyUsedSongs;
-(void)_updateScrubberFeedbackGeneratorWithShouldImpact:(BOOL)arg0 shouldPrepare:(BOOL)arg1 ;
-(void)_updateShouldAutoHideChrome;
-(void)_updateShouldAutoHideMuteToggleButton;
-(void)_updateShouldPreventDisplaySleep;
-(void)_updateSpecManager;
-(void)_updateViewLayoutSpec;
-(void)_updateViewMode;
-(void)_updateViewModeTransition;
-(void)_updateViewModelControllers;
-(void)_updateWantsRelatedOverlayScrollable;
-(void)addVisualDiagnosticsToContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)autoPlayUpNext;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)cycleHUDType;
-(void)dealloc;
-(void)deselectAllGridItems;
-(void)didPerformChanges;
-(void)hideMuteToggleButtonWhenChromeIsHidden;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)liveResizeDidEnd;
-(void)liveResizeWillStart;
-(void)networkStatusMonitor:(id)arg0 didChangeBestAvailableNetworkType:(struct ? )arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)rewindToBeginning:(BOOL)arg0 ;
-(void)rewindToBeginning:(BOOL)arg0 rewindMusic:(BOOL)arg1 ;
-(void)selectAllGridItems;
-(void)selectRelatedAtIndex:(NSInteger)arg0 ;
-(void)setDiagnosticHUDContentProvider:(id)arg0 forType:(NSInteger)arg1 ;
-(void)setMuted:(BOOL)arg0 reason:(NSInteger)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)temporarilyShowMuteToggleButtonWhenChromeIsHidden;
-(void)toggleChrome;
-(void)toggleHUD;
-(void)togglePlayback;


@end


#endif