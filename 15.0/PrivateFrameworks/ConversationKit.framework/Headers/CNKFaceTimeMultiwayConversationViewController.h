// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    ? viewContent;
    ? effectsLayoutController;
    ? pipZoomControl;
    ? shouldShowZoomControls;
    ? screenShareCountdownAlertView;
    ? hideOneToOneLivePhotoAlertViewTimer;
    ? didNotifyMutedCaller;
    ? cachedPresentationSize;
    ? mutedBannerViewController;
    ? defaults;
    ? stoppedSendingVideoDueToOffscreen;
    ? $__lazy_storage_$_flashView;
    ? $__lazy_storage_$_insulatingView;
    ? cachedMediaPipSafeAreaFrame;
    ? mediaPipInfo;
}


@property (nonatomic, weak) CNKBannerPresentationManager *bannerPresentationManager; // ivar: bannerPresentationManager
@property (nonatomic, readonly) TUCall *call;
@property (nonatomic, weak) NSObject<CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) NSInteger deviceOrientation; // ivar: deviceOrientation
@property (nonatomic) BOOL effectsEnabled; // ivar: effectsEnabled
@property (nonatomic, readonly) NSInteger fullScreenFocusedParticipantOrientation;
@property (nonatomic) BOOL hasParticipantVideo; // ivar: hasParticipantVideo
@property (nonatomic, weak) NSObject<CNKFaceTimeMultiwayViewControllerIOSDelegate> *iOSDelegate; // ivar: iOSDelegate
@property (nonatomic, retain) NSTimer *inCallControlsDismissTimer; // ivar: inCallControlsDismissTimer
@property (nonatomic) BOOL isDisplayedInBanner; // ivar: isDisplayedInBanner
@property (nonatomic) BOOL isOnScreen; // ivar: isOnScreen
@property (nonatomic, readonly) BOOL isOneToOneModeEnabled;
@property (nonatomic) BOOL isPipped; // ivar: isPipped
@property (nonatomic, readonly) BOOL isShownAboveCoverSheet;
@property (nonatomic) CGRect mediaPipFrameInWindowScene; // ivar: mediaPipFrameInWindowScene
@property (nonatomic, readonly) UIViewController *pipViewController;
@property (nonatomic, readonly) CGSize preferredPIPContentAspectRatio;
@property (nonatomic, readonly) BOOL shouldDisconnectOnDismissal;
@property (nonatomic) NSInteger supportedDeviceOrientations; // ivar: supportedDeviceOrientations
@property (nonatomic, readonly) BOOL wantsApplicationDismissalStyle;


-(BOOL)_canShowWhileLocked;
-(id)accessibilityConstraintController;
-(id)initWithActiveCall:(id)arg0 bannerPresentationManager:(id)arg1 ;
-(id)initWithActiveCall:(id)arg0 stagingAreaViewController:(id)arg1 bannerPresentationManager:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)hideEffectsBrowser;
-(void)muteVideo;
-(void)openMessagesConversation;
-(void)restartAutoHideInCallControlsTimer;
-(void)stopScreenSharingForDeviceLock;
-(void)toggleAudioMute;
-(void)toggleCinematicFraming;
-(void)toggleVideoMuteWithShouldPauseIfStopped:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif