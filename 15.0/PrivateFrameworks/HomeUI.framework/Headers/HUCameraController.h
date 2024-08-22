// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERACONTROLLER_H
#define HUCAMERACONTROLLER_H

@class NSLayoutConstraint, UIAlertController, NAUILayoutConstraintSet, HFCameraItem, UIButton, UILabel, NSString, AVQueuePlayer, HFItem, HFItemManager, HFCameraAnalyticsCameraPlayerLaunchEvent, NSTimer, UIView, AVPlayerLooper, AVHomeLoadingButtonControlItem, HFCameraPlaybackEngine, AVPlayerViewController, UICollectionView, NAFuture, NSArray, AVPlayerLayer;
@protocol AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate, HUPresentationDelegate, HUItemPresentationContainer, HUPresentationDelegateHost, HUCameraControllerDelegate;

#import <Foundation/Foundation.h>

#import "HUCameraPlayerAccessoryViewController.h"
#import "HUCameraPlayerAVBehavior.h"
#import "HUCameraBlurViewController.h"
#import "HUCalendarScrubberContainerViewController.h"
#import "HUCameraStatusOverlayView.h"
#import "HUClipScrubberViewController.h"
#import "HUCameraDateDisplayController.h"
#import "HUCameraRecordingPlayerView.h"
#import "HUDiagnosticsCameraPlayerController.h"
#import "HUCameraPlayerFooterViewController.h"
#import "HUCameraMicrophoneControl.h"
#import "HUCameraPlayerLiveContentViewController.h"
#import "HUCameraPlayerPlaceholderContentViewController.h"
#import "HUCameraPlayerConfiguration.h"
#import "HUCameraTimelapseController.h"

@interface HUCameraController : NSObject <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate, HUPresentationDelegate, HUItemPresentationContainer, HUPresentationDelegateHost>



@property (retain, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController; // ivar: _accessoryViewController
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // ivar: _accessoryViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // ivar: _accessoryViewWidthConstraint
@property (weak, nonatomic) UIAlertController *airplaneAlertController; // ivar: _airplaneAlertController
@property (nonatomic) BOOL applicationIsActive; // ivar: _applicationIsActive
@property (retain, nonatomic) HUCameraPlayerAVBehavior *behavior; // ivar: _behavior
@property (retain, nonatomic) HUCameraBlurViewController *blurViewController; // ivar: _blurViewController
@property (retain, nonatomic) NAUILayoutConstraintSet *calendarConstraintSet; // ivar: _calendarConstraintSet
@property (retain, nonatomic) HUCalendarScrubberContainerViewController *calendarContainerViewController; // ivar: _calendarContainerViewController
@property (weak, nonatomic) NSObject<HUCameraControllerDelegate> *cameraDelegate; // ivar: _cameraDelegate
@property (retain, nonatomic) HFCameraItem *cameraItem; // ivar: _cameraItem
@property (retain, nonatomic) UIButton *cameraPickerButton; // ivar: _cameraPickerButton
@property (retain, nonatomic) HUCameraStatusOverlayView *cameraStatusView; // ivar: _cameraStatusView
@property (retain, nonatomic) NAUILayoutConstraintSet *cameraStatusViewConstraintSet; // ivar: _cameraStatusViewConstraintSet
@property (retain, nonatomic) NSLayoutConstraint *cameraStatusViewTopConstraint; // ivar: _cameraStatusViewTopConstraint
@property (retain, nonatomic) HUClipScrubberViewController *clipScrubberViewController; // ivar: _clipScrubberViewController
@property (retain, nonatomic) HUCameraDateDisplayController *dateDisplayController; // ivar: _dateDisplayController
@property (retain, nonatomic) UILabel *dayLabel; // ivar: _dayLabel
@property (retain, nonatomic) NSLayoutConstraint *dayLabelTopConstraint; // ivar: _dayLabelTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AVQueuePlayer *demoModeQueuePlayer; // ivar: _demoModeQueuePlayer
@property (retain, nonatomic) HUCameraRecordingPlayerView *demoPlayerView; // ivar: _demoPlayerView
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUDiagnosticsCameraPlayerController *diagnosticsController; // ivar: _diagnosticsController
@property (nonatomic) BOOL displayingDetailsViewController; // ivar: _displayingDetailsViewController
@property (nonatomic, getter=isEnteringFullScreen) BOOL enteringFullScreen; // ivar: _enteringFullScreen
@property (nonatomic) BOOL finishedFetchingCameraEvents; // ivar: _finishedFetchingCameraEvents
@property (retain, nonatomic) HUCameraPlayerFooterViewController *footerViewController; // ivar: _footerViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hu_playbackControlsAreVisible; // ivar: _hu_playbackControlsAreVisible
@property (readonly, nonatomic) HFItem *hu_presentedItem;
@property (nonatomic) BOOL isDismissingViewController; // ivar: _isDismissingViewController
@property (retain, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (retain, nonatomic) NAUILayoutConstraintSet *landscapeMicrophoneConstraintSet; // ivar: _landscapeMicrophoneConstraintSet
@property (retain, nonatomic) HUCameraMicrophoneControl *landscapeMicrophoneControl; // ivar: _landscapeMicrophoneControl
@property (nonatomic) NSUInteger lastTimeControlStatusPriorToCameraSwap; // ivar: _lastTimeControlStatusPriorToCameraSwap
@property (retain, nonatomic) HFCameraAnalyticsCameraPlayerLaunchEvent *launchEvent; // ivar: _launchEvent
@property (retain, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController; // ivar: _liveContentViewController
@property (retain, nonatomic) NSTimer *liveTimer; // ivar: _liveTimer
@property (retain, nonatomic) UIView *loadingOverlayView; // ivar: _loadingOverlayView
@property (retain, nonatomic) AVPlayerLooper *looper; // ivar: _looper
@property (nonatomic) BOOL needsToFetchClip; // ivar: _needsToFetchClip
@property (retain, nonatomic) AVHomeLoadingButtonControlItem *nextControlItem; // ivar: _nextControlItem
@property (nonatomic, getter=isObservingReadyForDisplay) BOOL observingReadyForDisplay; // ivar: _observingReadyForDisplay
@property (retain, nonatomic) HUCameraPlayerPlaceholderContentViewController *placeholderContentViewController; // ivar: _placeholderContentViewController
@property (retain, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) HUCameraPlayerConfiguration *playerConfiguration; // ivar: _playerConfiguration
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (retain, nonatomic) NAUILayoutConstraintSet *portraitMicrophoneConstraintSet; // ivar: _portraitMicrophoneConstraintSet
@property (retain, nonatomic) HUCameraMicrophoneControl *portraitMicrophoneControl; // ivar: _portraitMicrophoneControl
@property (readonly, nonatomic) UICollectionView *ppt_clipCollectionView;
@property (retain, nonatomic) NAFuture *ppt_clipsLoadedFuture; // ivar: _ppt_clipsLoadedFuture
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (nonatomic) BOOL recordedClipInterfaceAvailable; // ivar: _recordedClipInterfaceAvailable
@property (retain, nonatomic) NSArray *savedControlItems; // ivar: _savedControlItems
@property (retain, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet; // ivar: _scrubberConstraintSet
@property (nonatomic) BOOL shouldResumePlaying; // ivar: _shouldResumePlaying
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) HUCameraTimelapseController *timelapseController; // ivar: _timelapseController
@property (retain, nonatomic) AVPlayerLayer *timelapsePlayerLayer; // ivar: _timelapsePlayerLayer
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // ivar: _viewVisible
@property (readonly, nonatomic) UIView *volumeControlView;


-(BOOL)_shouldAutoPlayOnViewAppearance;
-(BOOL)hasRecordedClips;
-(BOOL)homeHasMultipleCameraProfiles;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg0 ;
-(BOOL)shouldAutoPlayOnViewAppearance;
-(BOOL)shouldDisableLiveStreamAfterCameraStatusChange;
-(BOOL)shouldDisplayLandscapeMicrophoneInLine;
-(BOOL)shouldDisplayMicrophoneControl;
-(CGFloat)currentScrubberResolutionForBehavior:(id)arg0 ;
-(CGFloat)portraitMicrophoneOverlapOffset;
-(id)cameraPickerMenu;
-(id)cameraProfile;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)home;
-(id)initWithConfiguration:(id)arg0 cameraDelegate:(id)arg1 ;
-(id)playerViewController:(id)arg0 targetViewForDismissalAnimationWithProposedTargetView:(id)arg1 ;
-(void)_updateCanShowOverlayState;
-(void)addCameraStatusOverlayAndPicker;
-(void)addFooterConstraints;
-(void)addFooterViewController;
-(void)cancelAnyPendingLaunchEventAnalytics;
-(void)cancelLiveTimer;
-(void)cleanUpConstraintSets;
-(void)cleanUpIdleTimerState;
-(void)configureCalendarContainerViewControllerIfNeeded;
-(void)configureClipScrubberViewController;
-(void)configureClipScrubberViewControllerIfNeeded;
-(void)dealloc;
-(void)disableAudioSession;
-(void)dismissEditInterface;
-(void)displayAirplaneModeAlert;
-(void)displayCurrentTimeAndDate;
-(void)displayPlaybackUIWithUpdate:(BOOL)arg0 ;
-(void)displayTimelineForClipUUID:(id)arg0 ;
-(void)enableAudioSession;
-(void)fetchRequestedClipUsingConfiguration;
-(void)handleSceneDidActivate;
-(void)handleSceneWillDeactivate;
-(void)handleShouldDifferentiateWithoutColorDidChange;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)loadAccessoryViewControllersOnInit;
-(void)loadAuxilliaryViews;
-(void)loadControlItemsOnInit;
-(void)loadDependentViewControllers;
-(void)loadTimelapsePlayer;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseEngineIfNeeded;
-(void)pictureInPictureDidToggleMicrophone;
-(void)playbackControlsDidChangePlayerVolume:(float)arg0 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg0 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg0 ;
-(void)playbackEngine:(id)arg0 didRemoveEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateClipPlayer:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateLiveCameraSource:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateMicrophoneEnabled:(BOOL)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackError:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateScrubbingStatus:(BOOL)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimeControlStatus:(NSUInteger)arg1 ;
-(void)playerViewController:(id)arg0 contentViewWillTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1 ;
-(void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg0 ;
-(void)presentInternalViewController:(id)arg0 ;
-(void)presentNearbyAccessoriesViewController;
-(void)presentSettingsViewController;
-(void)reloadClipsWithUpdate:(BOOL)arg0 ;
-(void)removePlaybackHistoryUI;
-(void)setupConstraintSets;
-(void)setupPlaybackEngine;
-(void)showCamera:(id)arg0 ;
-(void)startLiveTimer;
-(void)toggleDemoModeLiveStreamVideo:(BOOL)arg0 ;
-(void)toggleMicrophoneState;
-(void)updateCalendarContainerVisibility:(BOOL)arg0 ;
-(void)updateCameraPlayerForEventPlaybackPosition:(id)arg0 ;
-(void)updateCameraStatus;
-(void)updateCanShowOverlayState;
-(void)updateIdleTimer;
-(void)updateIndicatorColor;
-(void)updateLivePreviewAspectRatio;
-(void)updateMicrophoneAndSpeakerStatus;
-(void)updateMicrophoneControlVisibility;
-(void)updateMicrophoneControls;
-(void)updatePIPBehaviorForDeviceAndConfiguration;
-(void)updatePlaceholderContent;
-(void)updatePlayerVolumeSliderState;
-(void)updateStateForPlaybackPosition:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateStateForScrubbingStatus:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)updateVolumeControlVisibility;
-(void)updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)arg0 ;


@end


#endif