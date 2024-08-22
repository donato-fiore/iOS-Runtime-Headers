// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKFACETIMEINCALLCONTROLSVIEWCONTROLLER_H
#define CNKFACETIMEINCALLCONTROLSVIEWCONTROLLER_H

@class UIViewController, UIView, NSString;
@protocol CNKFaceTimeInCallControlsViewControllerDelegate;



@interface CNKFaceTimeInCallControlsViewController : UIViewController {
    ? groupName;
    ? representedLegacyCallIdentifier;
    ? controlsButtonRowCount;
    ? tableViewSeparator;
    ? collectionViewController;
    ? localParticipant;
    ? viewContent;
    ? mode;
    ? gridLayoutStyle;
    ? topInset;
    ? participantDelegate;
    ? participantsViewControllerDelegate;
    ? menuHostViewController;
}


@property (nonatomic, readonly) UIView *audioButton;
@property (nonatomic) BOOL audioIsEnabled; // ivar: audioIsEnabled
@property (nonatomic) BOOL cinematicFramingIsAvailable; // ivar: cinematicFramingIsAvailable
@property (nonatomic) BOOL cinematicFramingIsEnabled; // ivar: cinematicFramingIsEnabled
@property (nonatomic, weak) NSObject<CNKFaceTimeInCallControlsViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) BOOL effectsAreAvailable; // ivar: effectsAreAvailable
@property (nonatomic) BOOL effectsAreEnabled; // ivar: effectsAreEnabled
@property (nonatomic) BOOL isExpanded; // ivar: isExpanded
@property (nonatomic) BOOL isScreenSharing; // ivar: isScreenSharing
@property (nonatomic) BOOL shouldShowLeaveButton; // ivar: shouldShowLeaveButton
@property (nonatomic) BOOL videoIsEnabled; // ivar: videoIsEnabled


-(BOOL)_canShowWhileLocked;
-(id)accessibilityCameraButton;
-(id)accessibilityCameraLabel;
-(id)accessibilityDisableVideoButton;
-(id)accessibilityDisableVideoLabel;
-(id)accessibilityEffectsButton;
-(id)accessibilityEffectsLabel;
-(id)accessibilityHotdog;
-(id)accessibilityJoinLeaveButton;
-(id)accessibilityMuteAudioButton;
-(id)accessibilityMuteAudioLabel;
-(id)accessibilityRouteButton;
-(id)accessibilityRouteLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didTapEffectsButton:(id)arg0 ;
-(void)didTapFlipCameraButton:(id)arg0 ;
-(void)didTapJoinLeaveButton:(id)arg0 ;
-(void)didTapMuteButton:(id)arg0 ;
-(void)didTapScreenShareButton:(id)arg0 ;
-(void)didTapToggleCameraButton:(id)arg0 ;
-(void)didTapToggleCinematicFramingButton:(id)arg0 ;
-(void)embedEffectsBrowserViewController:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAudioRouteButtonFor:(id)arg0 ;
-(void)updateControlsVisibilityForExpandedState:(BOOL)arg0 ;
-(void)updateToRepresentLegacyCall:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif