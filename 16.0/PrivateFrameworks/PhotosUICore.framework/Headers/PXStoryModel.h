// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMODEL_H
#define PXSTORYMODEL_H

@class NSMutableSet, NSMutableArray, NSMapTable, AVAudioSession, NSSet, NSString, NSUndoManager, NSHashTable, NSIndexSet;
@protocol PXStoryMutableModel, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXStorySongResource, PXStoryColorGradingRepository, PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXStoryChapter, PXStoryStyle, PXStoryErrorReporter, PXStoryTimeline, PXStoryLayoutSpec, OS_dispatch_queue, PXStoryThumbnailActionPerformer, PXStoryTimelineSpec, NSCopying;


#import "PXObservable.h"
#import "PXStoryAnimationController.h"
#import "PXStoryChapterCollectionManager.h"
#import "PXStoryConfiguration.h"
#import "PXExtendedTraitCollection.h"
#import "PXAssetReference.h"
#import "PXStoryLayoutSpecManager.h"
#import "PXStoryLoadingStatusReporter.h"
#import "PXCoordinatedRect.h"
#import "PXNumberAnimator.h"
#import "PXStoryRecipeManager.h"
#import "PXStoryResourcesDataSourceManager.h"
#import "PXStoryStyleManager.h"
#import "PXStoryTimelineManager.h"
#import "PXUpdater.h"
#import "PXVideoSessionManager.h"
#import "PXStoryViewModeTransition.h"

@interface PXStoryModel : PXObservable <PXStoryMutableModel, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>

 {
    NSMutableSet *_changesOrigins;
    NSMutableArray *_persistenceRequests;
    NSMutableSet *_musicDuckingTokens;
}


@property (readonly, nonatomic) NSMapTable *HUDContentProvidersByType; // ivar: _HUDContentProvidersByType
@property (readonly, nonatomic) NSObject<PXStorySongResource> *activeSongResource; // ivar: _activeSongResource
@property (readonly, nonatomic) BOOL allowsScrolling; // ivar: _allowsScrolling
@property (readonly, nonatomic) PXStoryAnimationController *animationController; // ivar: _animationController
@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) NSInteger bufferingEvents; // ivar: _bufferingEvents
@property (readonly, nonatomic) NSSet *changesOrigins;
@property (readonly, nonatomic) PXStoryChapterCollectionManager *chapterCollectionManager;
@property (readonly, nonatomic) CGFloat chromeVisibilityFraction; // ivar: _chromeVisibilityFraction
@property (nonatomic) NSInteger colorGradeKind; // ivar: _colorGradeKind
@property (readonly, nonatomic) NSObject<PXStoryColorGradingRepository> *colorGradingRepository; // ivar: _colorGradingRepository
@property (readonly, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger contentReadinessStatus; // ivar: _contentReadinessStatus
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *curatedAssets;
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *currentAssetCollection; // ivar: _currentAssetCollection
@property (readonly, nonatomic) BOOL currentAssetCollectionIsFavorite; // ivar: _currentAssetCollectionIsFavorite
@property (readonly, nonatomic) NSObject<PXStoryChapter> *currentChapter;
@property (readonly, nonatomic) BOOL currentChapterTitleIsVisible;
@property (readonly, nonatomic) CGPoint currentGridScrollPosition; // ivar: _currentGridScrollPosition
@property (readonly, nonatomic) ? currentScrollPosition; // ivar: _currentScrollPosition
@property (readonly, nonatomic) NSInteger currentSegmentIdentifier; // ivar: _currentSegmentIdentifier
@property (readonly, nonatomic) NSObject<PXStorySongResource> *currentSongResource;
@property (readonly, nonatomic) NSObject<PXStoryStyle> *currentStyle; // ivar: _currentStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat desiredInfoPanelVisibilityFraction; // ivar: _desiredInfoPanelVisibilityFraction
@property (readonly, nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (readonly, nonatomic) NSInteger diagnosticHUDType; // ivar: _diagnosticHUDType
@property (nonatomic) BOOL didPrerequestPersistencePermission; // ivar: _didPrerequestPersistencePermission
@property (nonatomic) BOOL didReachOutroOnce; // ivar: _didReachOutroOnce
@property (readonly, nonatomic) NSObject<PXStorySongResource> *editorPreviewSong; // ivar: _editorPreviewSong
@property (readonly, nonatomic) ? elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *gridTimeline; // ivar: _gridTimeline
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inLiveResize; // ivar: _inLiveResize
@property (readonly, nonatomic) CGFloat infoPanelVisibilityFraction; // ivar: _infoPanelVisibilityFraction
@property (readonly, nonatomic) BOOL isActuallyPlaying; // ivar: _isActuallyPlaying
@property (readonly, nonatomic) BOOL isAtPlaybackEnd; // ivar: _isAtPlaybackEnd
@property (readonly, nonatomic) BOOL isExporting;
@property (readonly, nonatomic) BOOL isFirstSegmentVisible;
@property (readonly, nonatomic) BOOL isHUDVisible; // ivar: _isHUDVisible
@property (readonly, nonatomic) BOOL isHovering; // ivar: _isHovering
@property (readonly, nonatomic) BOOL isPerformingViewControllerTransition; // ivar: _isPerformingViewControllerTransition
@property (readonly, nonatomic) BOOL isPresentingAnyAlert; // ivar: _isPresentingAnyAlert
@property (readonly, nonatomic) BOOL isPresentingAssetPicker; // ivar: _isPresentingAssetPicker
@property (readonly, nonatomic) BOOL isPresentingColorGradeEditor; // ivar: _isPresentingColorGradeEditor
@property (readonly, nonatomic) BOOL isPresentingMusicEditor; // ivar: _isPresentingMusicEditor
@property (readonly, nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (readonly, nonatomic) BOOL isTouching; // ivar: _isTouching
@property (readonly, copy, nonatomic) PXAssetReference *lastHitAssetReference; // ivar: _lastHitAssetReference
@property (readonly, nonatomic) NSInteger lastHitClipIdentifier; // ivar: _lastHitClipIdentifier
@property (readonly, nonatomic) NSUInteger lastPlaybackTimeChangeSource; // ivar: _lastPlaybackTimeChangeSource
@property (readonly, nonatomic) NSObject<PXStoryLayoutSpec> *layoutSpec; // ivar: _layoutSpec
@property (readonly, nonatomic) PXStoryLayoutSpecManager *layoutSpecManager; // ivar: _layoutSpecManager
@property (readonly, nonatomic) PXStoryLoadingStatusReporter *loadingStatusReporter; // ivar: _loadingStatusReporter
@property (readonly, nonatomic) NSInteger musicReadinessStatus; // ivar: _musicReadinessStatus
@property (readonly, nonatomic) ? nominalPlaybackTime; // ivar: _nominalPlaybackTime
@property (nonatomic) NSInteger numberOfPresentedAlerts; // ivar: _numberOfPresentedAlerts
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) ? outroDuration; // ivar: _outroDuration
@property (nonatomic) CGFloat outroFractionCompleted; // ivar: _outroFractionCompleted
@property (copy, nonatomic) id *overallDurationChangeCompletionHandler; // ivar: _overallDurationChangeCompletionHandler
@property (readonly, nonatomic) NSInteger persistencePermission; // ivar: _persistencePermission
@property (readonly, nonatomic) CGFloat playbackFractionCompleted; // ivar: _playbackFractionCompleted
@property (readonly, nonatomic) CGFloat playbackMaxFractionCompleted; // ivar: _playbackMaxFractionCompleted
@property (readonly, nonatomic) BOOL prefersExportLayoutMatchesPlayback; // ivar: _prefersExportLayoutMatchesPlayback
@property (readonly, nonatomic) PXCoordinatedRect *presentedSubtitleFrame; // ivar: _presentedSubtitleFrame
@property (readonly, nonatomic) PXCoordinatedRect *presentedTitleFrame; // ivar: _presentedTitleFrame
@property (nonatomic) ? pressAnimationInfo; // ivar: _pressAnimationInfo
@property (readonly, nonatomic) PXNumberAnimator *pressedFractionAnimator; // ivar: _pressedFractionAnimator
@property (readonly, nonatomic) NSInteger previousSegmentIdentifier; // ivar: _previousSegmentIdentifier
@property (readonly, nonatomic) NSInteger readinessStatus; // ivar: _readinessStatus
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager; // ivar: _resourcesDataSourceManager
@property (readonly, nonatomic) BOOL shouldAspectFitCurrentSegment; // ivar: _shouldAspectFitCurrentSegment
@property (readonly, nonatomic) BOOL shouldAutoplayThumbnail; // ivar: _shouldAutoplayThumbnail
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly, nonatomic) PXStoryStyleManager *styleManager; // ivar: _styleManager
@property (readonly, nonatomic) CGFloat styleSwitcherVisibilityFraction; // ivar: _styleSwitcherVisibilityFraction
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXStoryThumbnailActionPerformer> *thumbnailActionPerformer; // ivar: _thumbnailActionPerformer
@property (readonly, nonatomic) ? thumbnailAutoplayTimeRange; // ivar: _thumbnailAutoplayTimeRange
@property (readonly, nonatomic) NSInteger thumbnailStyle; // ivar: _thumbnailStyle
@property (readonly, nonatomic) ? timeIntoCurrentSegment; // ivar: _timeIntoCurrentSegment
@property (readonly, nonatomic) ? timeLeftInCurrentSegment; // ivar: _timeLeftInCurrentSegment
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline
@property (readonly, nonatomic) NSUInteger timelineAttributes; // ivar: _timelineAttributes
@property (readonly, nonatomic) PXStoryTimelineManager *timelineManager; // ivar: _timelineManager
@property (readonly, nonatomic) NSObject<PXStoryTimelineSpec> *timelineSpec; // ivar: _timelineSpec
@property (readonly, nonatomic) NSInteger titleAlignment; // ivar: _titleAlignment
@property (readonly, nonatomic) NSString *titleCategory; // ivar: _titleCategory
@property (readonly, nonatomic) CGFloat titleOpacity; // ivar: _titleOpacity
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) NSObject<NSCopying> *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *untruncatedCuratedAssets;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) NSHashTable *videoPresentationControllers; // ivar: _videoPresentationControllers
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager; // ivar: _videoSessionManager
@property (readonly, nonatomic) NSInteger viewMode; // ivar: _viewMode
@property (readonly, nonatomic) PXStoryViewModeTransition *viewModeTransition; // ivar: _viewModeTransition
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *visibleDisplayAssets;
@property (readonly, copy, nonatomic) NSIndexSet *visibleSegmentIdentifiers; // ivar: _visibleSegmentIdentifiers
@property (readonly, nonatomic) CGFloat volume; // ivar: _volume
@property (readonly, nonatomic) float volumeDuringViewControllerTransition; // ivar: _volumeDuringViewControllerTransition
@property (readonly, nonatomic) BOOL wantsMusicDucked; // ivar: _wantsMusicDucked


-(BOOL)checkIfShouldPreventAdvancingAndReturnReason:(*id)arg0 ;
-(BOOL)getMainVisibleClipIdentifier:(*NSInteger)arg0 assetReferece:(*id)arg1 ;
-(BOOL)rewindToBeginningOfCurrentSegment;
-(BOOL)skipToBeginningOfSegmentWithIdentifier:(NSInteger)arg0 ;
-(BOOL)skipToSegmentWithOffset:(NSInteger)arg0 ;
-(id)_appleMusicCapabilitiesDebugInformation;
-(id)_currentAssetCollectionDescriptionForHUDType:(NSInteger)arg0 ;
-(id)_musicCurationDebugInformation;
-(id)assetReferenceForClipIdentifier:(NSInteger)arg0 ;
-(id)beginMusicDucking;
-(id)currentGradeDescription;
-(id)currentSongDescription;
-(id)currentSongPaceDescription;
-(id)currentSongTagsDescription;
-(id)currentTimeDescription;
-(id)diagnosticDescriptionForAllHUDTypes;
-(id)diagnosticHUDContentProviderForType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 extendedTraitCollection:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 extendedTraitCollection:(id)arg1 loadingCoordinator:(id)arg2 paperTrailOptions:(NSUInteger)arg3 ;
-(id)initWithTimelineManager:(id)arg0 layoutSpecManager:(id)arg1 configuration:(id)arg2 ;
-(void)_callCompletionHandlersPendingTimelineChange;
-(void)_clearLastHitAssetClip;
-(void)_completePersistenceRequestsWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_invalidateCurrentAssetCollection;
-(void)_invalidateCurrentStyleAndFocus;
-(void)_invalidateLayoutSpec;
-(void)_invalidateNominalPlaybackTime;
-(void)_invalidateOutroDuration;
-(void)_invalidateOutroFractionCompleted;
-(void)_invalidatePersistencePermission;
-(void)_invalidatePlaybackFractionCompleted;
-(void)_invalidatePressAnimationInfo;
-(void)_invalidatePressedFractionAnimator;
-(void)_invalidateShouldAspectFitCurrentSegment;
-(void)_invalidateTimeline;
-(void)_invalidateTimelineAttributes;
-(void)_invalidateTimelineSpec;
-(void)_invalidateWantsMusicDucked;
-(void)_setNeedsUpdate;
-(void)_updateCurrentAssetCollection;
-(void)_updateCurrentStyle;
-(void)_updateLayoutSpec;
-(void)_updateNominalPlaybackTime;
-(void)_updateOutroDuration;
-(void)_updateOutroFractionCompleted;
-(void)_updatePersistencePermission;
-(void)_updatePlaybackFractionCompleted;
-(void)_updatePressAnimationInfo;
-(void)_updatePressedFractionAnimator;
-(void)_updateShouldAspectFitCurrentSegment;
-(void)_updateTimeline;
-(void)_updateTimelineAttributes;
-(void)_updateTimelineSpec;
-(void)_updateWantsMusicDucked;
-(void)addVideoPresentationController:(id)arg0 ;
-(void)changeOverallDuration:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didEndChangeHandling;
-(void)didEndPresentingAlert;
-(void)didPerformChanges;
-(void)didStartPresentingAlert;
-(void)endMusicDuckingWithToken:(id)arg0 ;
-(void)flickedPastEnd;
-(void)makeAssetKeyPhoto:(id)arg0 ;
-(void)makeCurrentAssetKeyPhoto;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
// -(void)performChanges:(id)arg0 origin:(unk)arg1  ;
-(void)performWithPrerequestedPersistencePermission:(id)arg0 ;
-(void)prerequestPersistencePermission:(id)arg0 ;
-(void)reconfigureWithAssetCollection:(id)arg0 ;
-(void)removeAssetsFromCuration:(id)arg0 ;
-(void)removeVideoPresentationController:(id)arg0 ;
-(void)reportNetworkRelatedPlaybackFailure;
-(void)reportPersistenceFailureWithError:(id)arg0 ;
-(void)requestPersistencePermission:(id)arg0 ;
-(void)requestPersistencePermissionWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)restartPlaybackFromBeginning;
-(void)scrollToPosition:(struct ? )arg0 ;
-(void)setDiagnosticHUDContentProvider:(id)arg0 forType:(NSInteger)arg1 ;


@end


#endif