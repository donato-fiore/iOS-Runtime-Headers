// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNCCAMERAPLAYERVIEWCONTROLLER_H
#define HUNCCAMERAPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController, HFCameraItem, HMCameraProfile, NSUUID, HMCameraClip, NSString, HFItemManager, HFCameraAnalyticsCameraPlayerLaunchEvent, HFCameraPlaybackEngine, NSDate, NAUILayoutConstraintSet;
@protocol AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate;


#import "HUCameraPlayerAccessoryViewController.h"
#import "HUCameraPlayerAVBehavior.h"
#import "HUCameraBlurViewController.h"
#import "HUCameraLiveButtonView.h"
#import "HUCameraPlayerLiveContentViewController.h"
#import "HUNCCameraScrubberViewController.h"
#import "HUNCCameraPlayerPlaceholderContentViewController.h"

@interface HUNCCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate>



@property (retain, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController; // ivar: _accessoryViewController
@property (retain, nonatomic) HUCameraPlayerAVBehavior *behavior; // ivar: _behavior
@property (retain, nonatomic) HUCameraBlurViewController *blurViewController; // ivar: _blurViewController
@property (retain, nonatomic) HFCameraItem *cameraItem; // ivar: _cameraItem
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) NSUUID *clipUUID; // ivar: _clipUUID
@property (weak, nonatomic) HMCameraClip *currentClip; // ivar: _currentClip
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hu_playbackControlsAreVisible; // ivar: _hu_playbackControlsAreVisible
@property (retain, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (retain, nonatomic) HFCameraAnalyticsCameraPlayerLaunchEvent *launchEvent; // ivar: _launchEvent
@property (retain, nonatomic) HUCameraLiveButtonView *liveButtonView; // ivar: _liveButtonView
@property (retain, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController; // ivar: _liveContentViewController
@property (retain, nonatomic) HUNCCameraScrubberViewController *miniScrubberViewController; // ivar: _miniScrubberViewController
@property (retain, nonatomic) NSUUID *notificationUUID; // ivar: _notificationUUID
@property (nonatomic) NSUInteger numberOfAssociatedAccessoriesDisplayed; // ivar: _numberOfAssociatedAccessoriesDisplayed
@property (retain, nonatomic) HUNCCameraPlayerPlaceholderContentViewController *placeholderContentViewController; // ivar: _placeholderContentViewController
@property (retain, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) NSDate *playbackStartDateFromSignificantEvent; // ivar: _playbackStartDateFromSignificantEvent
@property (retain, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet; // ivar: _scrubberConstraintSet
@property (retain, nonatomic) NAUILayoutConstraintSet *staticConstraintSet; // ivar: _staticConstraintSet
@property (readonly) Class superclass;


+(BOOL)usesSecondGenerationControls;
-(BOOL)_shouldAutoPlayOnViewAppearance;
-(BOOL)shouldDisplayMicrophoneControl;
-(CGFloat)currentScrubberResolutionForBehavior:(id)arg0 ;
-(id)home;
-(id)initWithCameraProfile:(id)arg0 notificationUUID:(id)arg1 clipUUID:(id)arg2 imageURL:(id)arg3 ;
-(void)_setupConstraintSets;
-(void)_setupPlaybackEngine;
-(void)_updateCameraStatus;
-(void)_updateLivePreviewAspectRatio;
-(void)_updatePlayerVolumeSliderState;
-(void)_updateStateForPlaybackPosition:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateStateForScrubbingStatus:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)arg0 ;
-(void)addPlaybackEngineObservation;
-(void)dealloc;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)loadCameraClip;
-(void)playbackControlsDidChangePlayerVolume:(float)arg0 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg0 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg0 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateLiveCameraSource:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackError:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateScrubbingStatus:(BOOL)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimeControlStatus:(NSUInteger)arg1 ;
-(void)playerViewController:(id)arg0 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)reloadAfterNotificationUpdate;
-(void)reloadForCurrentClip;
-(void)toggleLive;
-(void)toggleMicrophoneState;
-(void)updateLiveButton;
-(void)updateMicrophone;
-(void)updateMicrophoneVisibility;
-(void)updateViewConstraints;
-(void)updateVolumeControlVisibility;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif