// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKSTAGINGAREAVIEWCONTROLLER_H
#define CNKSTAGINGAREAVIEWCONTROLLER_H

@class UIViewController, TUCall;
@protocol CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate, CNKFaceTimeMultiwayConversationViewControllerDelegate, CNKStagingAreaViewControllerDelegate;



@interface CNKStagingAreaViewController : UIViewController <CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate>

 {
    ? participantLabel;
    ? secondaryParticipantLabel;
    ? localPreviewFrontView;
    ? localPreviewBackView;
    ? audioVisualizationView;
    ? controlsViewController;
    ? constraintController;
    ? controlsDragController;
    ? avcEffects;
    ? effectsCaptureInfo;
    ? effectsViewController;
    ? effectsBrowserViewController;
    ? effectsControlsViewController;
    ? effectsLayoutController;
    ? conversationController;
    ? videoDeviceController;
    ? numberFormatter;
    ? scheduledUpdateTimer;
    ? isWaitingToConnect;
}


@property (nonatomic, retain) TUCall *call; // ivar: call
@property (nonatomic, weak) NSObject<CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) NSInteger deviceOrientation; // ivar: deviceOrientation
@property (nonatomic) BOOL effectsEnabled; // ivar: effectsEnabled
@property (nonatomic) BOOL hasJoined; // ivar: hasJoined
@property (nonatomic) BOOL isOnScreen; // ivar: isOnScreen
@property (nonatomic, weak) NSObject<CNKStagingAreaViewControllerDelegate> *stagingAreaDelegate; // ivar: stagingAreaDelegate


-(BOOL)_canShowWhileLocked;
-(id)initWithActiveCall:(id)arg0 ;
-(id)initWithActiveCall:(id)arg0 hasJoined:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapJoinButton;
-(void)didTapLeaveButton;
-(void)didTapSwapLocalParticipantCamera;
-(void)hideEffectsBrowser;
-(void)muteVideo;
-(void)toggleCinematicFraming;
-(void)toggleVideoMute;
-(void)updateViewConstraints;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif