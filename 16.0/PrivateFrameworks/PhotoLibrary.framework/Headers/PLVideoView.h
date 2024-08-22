// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLVIDEOVIEW_H
#define PLVIDEOVIEW_H

@class UIView, PLManagedAsset, NSString, NSURL, UIImage, NSTimer, NSDictionary, PLPhotoBakedThumbnails, AVAssetExportSession, NSArray, NSLock, NSMutableArray, UIMovieScrubber, NSMutableDictionary, UIActivityIndicatorView, UIView<PLVideoOverlayButton>, PFVideoAdjustments, PFVideoAVObjectBuilder, UIImageView, PLProgressStack;
@protocol UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate, PLVideoViewDelegate, OS_dispatch_queue;


#import "PLPhotoTileViewController.h"
#import "PLVideoEditingOverlayView.h"
#import "PLMoviePlayerController.h"
#import "PLSlalomRegionEditor.h"
#import "PLVideoPosterFrameView.h"

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate>

 {
    PLManagedAsset *_videoCameraImage;
    NSString *_pathToOriginalVideo;
    NSURL *_videoURL;
    PLPhotoTileViewController *_imageTile;
    UIView *_videoOverlayBackgroundView;
    PLVideoEditingOverlayView *_trimMessageView;
    UIImage *_posterFrameImage;
    UIImage *_snapshotImage;
    NSInteger _scaleMode;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    CGSize _thumbnailSize;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    AVAssetExportSession *_exportSession;
    CGFloat _remakerStartTime;
    CGFloat _remakerEndTime;
    NSString *_trimmedPath;
    NSString *_videoPathAfterTrim;
    NSTimer *_trimProgressTimer;
    PLManagedAsset *_trimmedVideoClip;
    float _progress;
    PLMoviePlayerController *_moviePlayer;
    id<PLVideoViewDelegate> *_delegate;
    CGFloat _maximumTrimLength;
    CGFloat _lastScrubbedValue;
    CGFloat _lastActualValue;
    CGFloat _duration;
    CGFloat _cachedCurrentPlaybackTime;
    NSArray *_imageGenerators;
    NSLock *_thumbnailReqlock;
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;
    AVAssetExportSession *_airplayExportSession;
    BOOL _isAirPlay;
    BOOL _showsPlayButton;
    BOOL _showsScrubber;
    BOOL _canEdit;
    BOOL _loadMediaImmediately;
    BOOL _scrubberIsSubview;
    BOOL _viewWillAppear;
    BOOL _didLayout;
    BOOL _wasPlayingBeforeScrub;
    BOOL _playFromBeginning;
    BOOL _needsReloadScrubberThumbnails;
    BOOL _playing;
    BOOL _editing;
    BOOL _disableEditAfterTrim;
    BOOL _scrubbing;
    BOOL _scrubbingToRight;
    BOOL _deleteOriginalFile;
    BOOL _passthroughTrimming;
    BOOL _preparingMoviePlayer;
    BOOL _preparedMoviePlayer;
    BOOL _isMoviePlayerActive;
    BOOL _moviePlayerIsReady;
    BOOL _moviePlayerIsReadyForDisplay;
    BOOL _moviePlayerDidBuffer;
    BOOL _showingOverlay;
    BOOL _showingScrubber;
    BOOL _showScrubberWhenMovieIsReady;
    BOOL _playbackDidBegin;
    BOOL _loadScrubberThumbnails;
    BOOL _videoIsLandscape;
    BOOL _canCreateMetadata;
    BOOL _createPreviewPosterFrame;
    BOOL _isTrimming;
    BOOL _wasTrimmedInPlace;
    BOOL _remakingFailed;
    NSMutableArray *_summaryThumbnailRequestTimestamps;
    NSMutableArray *_detailThumbnailRequestTimestamps;
    UIMovieScrubber *_scrubber;
    PLSlalomRegionEditor *_slalomRegionEditor;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIActivityIndicatorView *_spinner;
    UIActivityIndicatorView *_shadowSpinner;
    UIView<PLVideoOverlayButton> *_videoOverlayPlayButton;
    BOOL _useLandscapeCache;
    CGFloat _videoStreamingStartTime;
}


@property (readonly, nonatomic) PFVideoAdjustments *_adjustmentsToCommit; // ivar: __adjustmentsToCommit
@property (nonatomic, setter=_setAttemptFetchingVideoDerivative:) BOOL _attemptFetchingVideoDerivative; // ivar: __attemptFetchingVideoDerivative
@property (nonatomic, setter=_setCanAttemptFetchingVideoDerivative:) BOOL _canAttemptFetchingVideoDerivative; // ivar: __canAttemptFetchingVideoDerivative
@property (nonatomic, setter=_setDidEditSlalom:) BOOL _didEditSlalom; // ivar: __didEditSlalom
@property (nonatomic) BOOL _didInsertMoviePlayerView; // ivar: __didInsertMoviePlayerView
@property (readonly, nonatomic) BOOL _didSetPhotoData;
@property (readonly, nonatomic) NSInteger _expectedNotificationsCount; // ivar: __expectedNotificationsCount
@property (readonly, nonatomic) BOOL _isFetchingVideo; // ivar: __isFetchingVideo
@property (nonatomic, setter=_setLocalVideoUnavailable:) BOOL _localVideoUnavailable; // ivar: __localVideoUnavailable
@property (readonly, nonatomic) BOOL _mediaIsPlayable;
@property (readonly, retain, nonatomic) NSString *_pathForPrebakedLandscapeScrubberThumbnails;
@property (readonly, retain, nonatomic) NSString *_pathForPrebakedPortraitScrubberThumbnails;
@property (readonly, retain, nonatomic) NSString *_pathForVideoPreviewFile;
@property (readonly, nonatomic) BOOL _slalomRegionEditorCreatedForScrubber; // ivar: __slalomRegionEditorCreatedForScrubber
@property (readonly, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // ivar: __videoAVObjectBuilder
@property (nonatomic) BOOL allowSlalomEditor; // ivar: _allowSlalomEditor
@property (nonatomic) BOOL canEdit;
@property (nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<PLVideoViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) CGFloat endTime;
@property (readonly) NSUInteger hash;
@property (nonatomic) PLPhotoTileViewController *imageTile;
@property (nonatomic) BOOL loadMediaImmediately;
@property (readonly, retain, nonatomic) NSString *pathForVideoFile;
@property (readonly, nonatomic) UIImage *posterFrameImage;
@property (readonly, retain, nonatomic) PLVideoPosterFrameView *posterFrameView; // ivar: _posterFrameView
@property (nonatomic) BOOL prepareMoviePlayerForScrubberAutomatically; // ivar: _prepareMoviePlayerForScrubberAutomatically
@property (readonly, nonatomic) UIImageView *previewImageView;
@property (readonly, nonatomic) UIView *scrubberBackgroundView; // ivar: _scrubberBackgroundView
@property (nonatomic) BOOL scrubberIsSubview;
@property (nonatomic) CGFloat scrubberWidth; // ivar: _scrubberWidth
@property (nonatomic) BOOL shouldPlayVideoWhenViewAppears; // ivar: _shouldPlayVideoWhenViewAppears
@property (nonatomic) BOOL showsPlayOverlay;
@property (nonatomic) BOOL showsScrubber;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLProgressStack *trimProgressStack; // ivar: _trimProgressStack
@property (retain, nonatomic) PLManagedAsset *trimmedVideoClip;
@property (readonly, nonatomic) PLManagedAsset *videoCameraImage;
@property (readonly, nonatomic) NSString *videoPathAfterTrim;


+(id)_dequeueOverlayPlayButton;
+(id)videoViewForVideoFileAtURL:(id)arg0 ;
+(void)_enqueueOverlayPlayButton:(id)arg0 ;
-(BOOL)_canAccessVideo;
-(BOOL)_canAirPlayCurrentVideo;
-(BOOL)_canCreateMetadata;
-(BOOL)_canEditDuration:(CGFloat)arg0 ;
-(BOOL)_canHandleAdjustmentData:(id)arg0 ;
-(BOOL)_canPlayCloudSharedStreamedVideoWithLocalVideo;
-(BOOL)_isFlattenedVideoUpToDate;
-(BOOL)_mediaIsCloudSharedStreamedVideo;
-(BOOL)_mediaIsVideo;
-(BOOL)_playerIsAirplay;
-(BOOL)_prepareMoviePlayerIfNeeded;
-(BOOL)_scrubberTimeNeedsMapping;
-(BOOL)_shouldPlayFlattenedVideo;
-(BOOL)_shouldShowSlalomEditor;
-(BOOL)_shouldStreamCloudPhotoLibraryVideo;
-(BOOL)_shouldStreamVideo;
-(BOOL)isPlaying;
-(BOOL)isTrimming;
-(BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)arg0 ;
-(BOOL)moviePlayerExitRequest:(id)arg0 exitReason:(int)arg1 ;
-(BOOL)moviePlayerShouldNotifyOnPreparationError:(id)arg0 ;
-(BOOL)playingToAirTunes;
-(BOOL)playingToVideoOut;
-(BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint )arg0 ;
-(BOOL)slalomRegionEditorRequestForceZoom:(id)arg0 ;
-(CGFloat)_movieScrubberDuration;
-(CGFloat)_movieTimeFromScrubberTime:(CGFloat)arg0 ;
-(CGFloat)_scrubberBackgroundHeight;
-(CGFloat)_scrubberStartTime;
-(CGFloat)_scrubberTimeFromMovieTime:(CGFloat)arg0 ;
-(CGFloat)_thumbnailTimeFromScrubberTime:(CGFloat)arg0 ;
-(CGFloat)movieScrubberDuration:(id)arg0 ;
-(CGFloat)movieScrubberThumbnailAspectRatio:(id)arg0 ;
-(id)_assetForVideoPath:(id)arg0 ;
-(id)_assetForVideoURL:(id)arg0 ;
-(id)_filePathForFlattenedVideo;
-(id)_filePathForFlattenedVideoMetadata;
-(id)_initWithFrame:(struct CGRect )arg0 videoCameraImage:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)_loadThumbnailsIntoDictionary:(id)arg0 isLandscape:(BOOL)arg1 aspectRatio:(float)arg2 ;
-(id)_metadataForFlattenedVideo;
-(id)_moviePlayer;
-(id)_optionsForAVURLAsset;
-(id)_pathForOriginalFile;
-(id)_readMetadataFromPath:(id)arg0 ;
-(id)_thumbnailSourceAsset;
-(id)_videoSnapshot;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 videoCameraImage:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)moviePlayerRequestsPickedAirplayRoute:(id)arg0 ;
-(id)movieScrubber:(id)arg0 evenlySpacedTimestamps:(int)arg1 startingAt:(id)arg2 endingAt:(id)arg3 ;
-(id)movieScrubber:(id)arg0 timestampsStartingAt:(id)arg1 endingAt:(id)arg2 maxCount:(int)arg3 ;
-(id)newPreviewImageData:(*id)arg0 ;
-(id)slalomRegionEditor;
-(id)videoOverlayPlayButton;
-(id)videoScrubber;
-(void)_addThumbnailRequestForTimestamp:(id)arg0 isSummaryThumbnail:(BOOL)arg1 ;
-(void)_cancelAirplayExportSession;
-(void)_cancelDelayedCommitPendingAdjustmentsUpdate;
-(void)_cancelRemaking:(id)arg0 ;
-(void)_clearImageGenerators;
-(void)_commitPendingAdjustmentsUpdate;
-(void)_commitPendingAdjustmentsUpdateAndWait:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_configureImageGenerator:(id)arg0 thumbnailSize:(struct CGSize )arg1 forSummaryThumbnails:(BOOL)arg2 ;
-(void)_configurePlayerForStreamedVideoIfNecessary;
-(void)_createScrubberIfNeeded;
-(void)_deleteFileAtPath:(id)arg0 ;
-(void)_didBeginPlayback;
-(void)_didScrubToValue:(CGFloat)arg0 withHandle:(int)arg1 ;
-(void)_displayPlaySpinner;
-(void)_enqueueAdjustmentsForCommit;
-(void)_exportCompletedWithSuccess:(BOOL)arg0 ;
-(void)_fetchLocalContentEditingInput;
-(void)_fetchNonlocalVideo;
-(void)_flattenVideoWithCompletionHandler:(id)arg0 ;
-(void)_handleScreenConnectionChange:(BOOL)arg0 ;
-(void)_hideTrimMessageView:(BOOL)arg0 ;
-(void)_hideVideoOverlay:(BOOL)arg0 ;
-(void)_informDelegateAboutProgressChange:(float)arg0 ;
-(void)_insertMoviePlayerViewIfNecessary;
-(void)_invalidateSnapshotImage;
-(void)_networkReachabilityDidChange:(id)arg0 ;
-(void)_playbackFinished;
-(void)_prepareAndResumePlayback;
-(void)_reloadScrubberThumbnailsIfNeeded;
-(void)_removePlaySpinner;
-(void)_removeScrubber;
-(void)_removeScrubberUpdateTimer;
-(void)_removeTrimProgressTimer;
-(void)_requestPreviewPosterFrameForVideoSize:(struct CGSize )arg0 ;
-(void)_reset;
-(void)_resetScrubberUpdateTimer;
-(void)_resetTrimProgressTimer;
-(void)_saveCachedThumbnailsIfNecessary;
-(void)_savePreviewPosterFrameImage:(struct CGImage *)arg0 ;
-(void)_screenDidConnect:(id)arg0 ;
-(void)_screenDidDisconnect:(id)arg0 ;
-(void)_scrubToMovieTime:(CGFloat)arg0 ;
-(void)_scrubToSlalomRegionEditorStartHandle:(BOOL)arg0 ;
-(void)_scrubberAnimationFinished;
-(void)_serviceImageGenerationRequests;
-(void)_setMoviePlayerActive:(BOOL)arg0 ;
-(void)_setNeedsReloadScrubberThumbnails:(BOOL)arg0 ;
-(void)_setPlaybackDidBegin:(BOOL)arg0 ;
-(void)_setPlaying:(BOOL)arg0 ;
-(void)_setupMoviePlayerIfNecessary;
-(void)_showVideoOverlay;
-(void)_tearDownMoviePlayer;
-(void)_thumbnailsWereRegenerated:(id)arg0 error:(id)arg1 contextInfo:(*void)arg2 ;
-(void)_updateForEditing;
-(void)_updatePosterFrameVisibility;
-(void)_updatePosterImageView;
-(void)_updateScaleModeForSize:(struct CGSize )arg0 ;
-(void)_updateScrubberForSlowMotion;
-(void)_updateScrubberFrame;
-(void)_updateScrubberValue;
-(void)_updateScrubberVisibilityWithDuration:(CGFloat)arg0 ;
-(void)_updateSlalomRegionEditorRange;
-(void)_updateSlalomRegionEditorState;
-(void)_updateSnapshotImage;
-(void)_updateTrimProgress;
-(void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)arg0 ;
-(void)_verifyOrRestartPlayback;
-(void)_videoOverlayFadeOutDidFinish;
-(void)_writeMetadata:(id)arg0 toPath:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillResignActive;
-(void)cancelTrim;
-(void)commitPendingUpdatesWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)forceStop;
-(void)handleDoubleTap;
-(void)hideTrimMessage;
-(void)importerFinishedProcessingTrimmedVideo:(id)arg0 ;
-(void)layoutSubviews;
-(void)moviePlayerBufferingStateDidChange:(id)arg0 ;
-(void)moviePlayerControllerDidBecomeActiveController:(id)arg0 ;
-(void)moviePlayerControllerWillResignAsActiveController:(id)arg0 ;
-(void)moviePlayerDidChangeExternalPlaybackType:(id)arg0 ;
-(void)moviePlayerDurationAvailable:(id)arg0 ;
-(void)moviePlayerEncounteredAuthenticationError:(id)arg0 ;
-(void)moviePlayerHeadsetNextTrackPressed:(id)arg0 ;
-(void)moviePlayerHeadsetPlayPausePressed:(id)arg0 ;
-(void)moviePlayerHeadsetPreviousTrackPressed:(id)arg0 ;
-(void)moviePlayerPlaybackDidEnd:(id)arg0 ;
-(void)moviePlayerPlaybackRateDidChange:(id)arg0 ;
-(void)moviePlayerPlaybackStateDidChange:(id)arg0 fromPlaybackState:(NSUInteger)arg1 ;
-(void)moviePlayerReadyToDisplay:(id)arg0 ;
-(void)moviePlayerReadyToPlay:(id)arg0 ;
-(void)moviePlayerUpdatedDestinationPlaceholder:(id)arg0 ;
-(void)moviePlayerWasSuspendedDuringPlayback:(id)arg0 ;
-(void)movieScrubber:(id)arg0 editingEndValueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 editingStartValueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 requestThumbnailImageForTimestamp:(id)arg1 ;
-(void)movieScrubber:(id)arg0 requestThumbnailImageForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2 ;
-(void)movieScrubber:(id)arg0 valueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 widthDelta:(float)arg1 originXDelta:(float)arg2 ;
-(void)movieScrubber:(id)arg0 willZoomToMinimumValue:(CGFloat)arg1 maximumValue:(CGFloat)arg2 ;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg0 ;
-(void)movieScrubberDidBeginEditing:(id)arg0 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg0 withHandle:(int)arg1 ;
-(void)movieScrubberDidCancelEditing:(id)arg0 ;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg0 ;
-(void)movieScrubberDidEndScrubbing:(id)arg0 withHandle:(int)arg1 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg0 ;
-(void)movieScrubberEditingAnimationFinished:(id)arg0 ;
-(void)movieScrubberWillBeginEditing:(id)arg0 ;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg0 ;
-(void)notifyOfChange:(id)arg0 shouldReloadBlock:(id)arg1 ;
-(void)notifyRequiredResourcesDownloaded;
-(void)pause;
-(void)play;
-(void)playButtonClicked:(id)arg0 ;
-(void)prepareMoviePlayer;
-(void)removeVideoOverlay;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMaximumTrimLength:(CGFloat)arg0 ;
-(void)setProgress:(id)arg0 ;
-(void)showTrimMessage:(id)arg0 withBottomY:(float)arg1 ;
-(void)slalomRegionEditorDidBeginEditing:(id)arg0 withStartHandle:(BOOL)arg1 ;
-(void)slalomRegionEditorDidEndEditing:(id)arg0 ;
-(void)slalomRegionEditorEndValueChanged:(id)arg0 ;
-(void)slalomRegionEditorRequestForceUnzoom:(id)arg0 ;
-(void)slalomRegionEditorStartValueChanged:(id)arg0 ;
-(void)stop;
-(void)toggleScaleMode:(float)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateForRotationWithDuration:(CGFloat)arg0 isLandscape:(BOOL)arg1 ;
-(void)updateScaleMode;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif