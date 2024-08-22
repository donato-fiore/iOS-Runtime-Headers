// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKFACETIMEMULTIWAYCONVERSATIONVIEWCONTROLLER_H
#define CNKFACETIMEMULTIWAYCONVERSATIONVIEWCONTROLLER_H

@class UIViewController, TUCall, NSTimer;
@protocol CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate, CNKFaceTimeMultiwayConversationViewControllerDelegate, CNKFaceTimeMultiwayViewControllerIOSDelegate;


#import "CNKBannerPresentationManager.h"

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController <CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate>

 {
    ? conversationController;
    ? mostActiveParticipantsController;
    ? layoutStyle;
    ? avcEffects;
    ? effectsCaptureInfo;
    ? linkShareCoordinator;
    ? _cachedDidExpandActiveVideoCallFromBanner;
    ? viewContent;
    ? callDetailsCoordinator;
    ? effectsLayoutController;
    ? pipZoomControl;
    ? shouldShowZoomControls;
    ? hideOneToOneLivePhotoAlertViewTimer;
    ? didNotifyMutedCaller;
    ? cachedPresentationSize;
    ? cachedGridViewSize;
    ? needsConnectionAnimation;
    ? captionsPausedState;
    ? mutedBannerViewController;
    ? defaults;
    ? features;
    ? _isOnScreen;
    ? stoppedSendingVideoDueToOffscreen;
    ? needsUpdatePresentationContexts;
    ? lastUpdatedMostActiveParticipantViewForPiP;
    ? $__lazy_storage_$_flashView;
    ? $__lazy_storage_$_insulatingView;
    ? hasInitializedMomentsViews;
    ? cachedMediaPipSafeAreaFrame;
    ? mediaPipInfo;
    ? tonePlayer;
}


@property (nonatomic, weak) CNKBannerPresentationManager *bannerPresentationManager; // ivar: bannerPresentationManager
@property (nonatomic, readonly) TUCall *call;
@property (nonatomic, weak) NSObject<CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) NSInteger deviceOrientation; // ivar: deviceOrientation
@property (nonatomic) BOOL didExpandIncomingCallBanner; // ivar: didExpandIncomingCallBanner
@property (nonatomic) BOOL effectsEnabled; // ivar: effectsEnabled
@property (nonatomic) NSInteger frontBoardInterfaceOrientation; // ivar: frontBoardInterfaceOrientation
@property (nonatomic, readonly) NSInteger fullScreenFocusedParticipantOrientation;
@property (nonatomic) BOOL hasParticipantVideo; // ivar: hasParticipantVideo
@property (nonatomic, weak) NSObject<CNKFaceTimeMultiwayViewControllerIOSDelegate> *iOSDelegate; // ivar: iOSDelegate
@property (nonatomic, retain) NSTimer *inCallControlsDismissTimer; // ivar: inCallControlsDismissTimer
@property (nonatomic) BOOL isCaptioningEnabled; // ivar: isCaptioningEnabled
@property (nonatomic) BOOL isDisplayedInBanner; // ivar: isDisplayedInBanner
@property (nonatomic) BOOL isFullScreen; // ivar: isFullScreen
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic, readonly) BOOL isOneToOneModeEnabled;
@property (nonatomic, readonly) BOOL isPipped;
@property (nonatomic, readonly) BOOL isShownAboveCoverSheet;
@property (nonatomic) CGRect mediaPipFrameInWindowScene; // ivar: mediaPipFrameInWindowScene
@property (nonatomic) NSInteger pipState; // ivar: pipState
@property (nonatomic, readonly) UIViewController *pipViewController;
@property (nonatomic, readonly) CGSize preferredPIPContentAspectRatio;
@property (nonatomic, readonly) BOOL shouldDisconnectOnDismissal;
@property (nonatomic) NSInteger supportedDeviceOrientations; // ivar: supportedDeviceOrientations
@property (nonatomic, readonly) BOOL wantsApplicationDismissalStyle;
@property (nonatomic, readonly) BOOL wantsPIPRotationForLocalPreview;


-(BOOL)_canShowWhileLocked;
-(BOOL)axShouldDisableAutoHidingControls;
-(id)accessibilityConstraintController;
-(id)initWithActiveCall:(id)arg0 ;
-(id)initWithActiveCall:(id)arg0 bannerPresentationManager:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)hideEffectsBrowser;
-(void)muteVideo;
-(void)openMessagesConversation;
-(void)toggleAudioMute;
-(void)toggleCinematicFraming;
-(void)toggleVideoMuteWithShouldPauseIfStopped:(BOOL)arg0 ;
-(void)updateVideoState;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif