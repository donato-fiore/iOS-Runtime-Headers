// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYNOWPLAYINGVIEWCONTROLLER_H
#define MRUACTIVITYNOWPLAYINGVIEWCONTROLLER_H

@class UIViewController, NSString, UIView<SBUISystemApertureAccessoryView>, MSVTimer, UIColor, BSAction, UITapGestureRecognizer, NSURL, MPMediaControls, UIViewController<SBUISystemApertureElement>;
@protocol MRUNowPlayingControllerObserver, MRUNowPlayingTransportControlsViewDelegate, MRUArtworkViewObserver, SBUISystemApertureElement, SBUISystemApertureElementProviding, BSInvalidatable;


#import "MRUNowPlayingController.h"
#import "MRUActivityNowPlayingView.h"
#import "MRUWaveformController.h"
#import "MRUWaveformViewController.h"

@interface MRUActivityNowPlayingViewController : UIViewController <MRUNowPlayingControllerObserver, MRUNowPlayingTransportControlsViewDelegate, MRUArtworkViewObserver, SBUISystemApertureElement, SBUISystemApertureElementProviding>



@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) NSInteger contentRole;
@property (retain, nonatomic) MRUNowPlayingController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (retain, nonatomic) NSObject<BSInvalidatable> *hardwareVolumeControlAssertion; // ivar: _hardwareVolumeControlAssertion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MSVTimer *inactiveTransitionTimer; // ivar: _inactiveTransitionTimer
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) BSAction *launchAction;
@property (retain, nonatomic) UITapGestureRecognizer *launchNowPlayingGestureRecognizer; // ivar: _launchNowPlayingGestureRecognizer
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) NSInteger maximumLayoutMode; // ivar: _maximumLayoutMode
@property (retain, nonatomic) MPMediaControls *mediaControls; // ivar: _mediaControls
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (readonly, nonatomic) NSInteger minimumLayoutMode;
@property (readonly, nonatomic) CGSize preferredCustomAspectRatio;
@property (readonly, nonatomic) NSInteger preferredCustomLayout;
@property (readonly, nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (readonly, nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly, nonatomic) NSUInteger presentationBehaviors;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SBUISystemApertureElement> *systemApertureElement;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (retain, nonatomic) MRUActivityNowPlayingView *view;
@property (retain, nonatomic) MRUActivityNowPlayingView *viewIfLoaded;
@property (nonatomic) BOOL wasPlayingDuringLastPreferredLayoutUpdate; // ivar: _wasPlayingDuringLastPreferredLayoutUpdate
@property (retain, nonatomic) MRUWaveformController *waveformController; // ivar: _waveformController
@property (retain, nonatomic) MRUWaveformViewController *waveformViewController; // ivar: _waveformViewController


-(BOOL)_canShowWhileLocked;
-(BOOL)isExpanded;
-(BOOL)isOnScreen;
-(BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)artworkView:(id)arg0 didChangeArtworkImage:(id)arg1 ;
-(void)didSelectArtworkView:(id)arg0 ;
-(void)didSelectLabelView:(id)arg0 ;
-(void)didSelectLaunchNowPlaying:(id)arg0 ;
-(void)loadView;
-(void)nowPlayingController:(id)arg0 endpointController:(id)arg1 didChangeRoute:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeArtwork:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeBundleID:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeTimeControls:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeTransportControls:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 tvRemoteController:(id)arg1 didChangeShowTVRemote:(BOOL)arg2 ;
-(void)transportControlsView:(id)arg0 didSelectRoutingButton:(id)arg1 ;
-(void)transportControlsView:(id)arg0 didSelectTVRemoteButton:(id)arg1 ;
-(void)updateArtwork;
-(void)updateBundleID;
-(void)updateEverything;
-(void)updateLayout;
-(void)updateLayoutModesPreferringImmediateTransition:(BOOL)arg0 deferInCustomLayout:(BOOL)arg1 reason:(id)arg2 ;
-(void)updateNowPlayingInfo;
-(void)updateRouteLabel;
-(void)updateRoutingButton;
-(void)updateTimeControls;
-(void)updateTransportControls;
-(void)updateVolumeControls;
-(void)updateWaveformVisibility;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif