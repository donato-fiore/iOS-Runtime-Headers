// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUNOWPLAYINGVIEWCONTROLLER_H
#define MRUNOWPLAYINGVIEWCONTROLLER_H

@class UIViewController, NSString, MPMediaControls, NSNumber, NSArray;
@protocol MRUNowPlayingControllerObserver, MRUMediaSuggestionsViewControllerDelegate, MRURoutingViewControllerDelegate, MRUNowPlayingTransportControlsViewDelegate, MRUVolumeControllerDelegate, MRUCallMonitorObserver, _MCStateDumpPropertyListTransformable, MRUArtworkViewObserver, MRUNowPlayingViewControllerDelegate, BSInvalidatable, MPAVOutputDevicePlaybackDataSource;


#import "MRUArtworkView.h"
#import "MRUNowPlayingController.h"
#import "MRUVisualStylingProvider.h"
#import "MRURoutingViewController.h"
#import "MRUMediaSuggestionsViewController.h"
#import "MRUNowPlayingView.h"
#import "MRUVolumeGroupCoordinator.h"
#import "MRUWaveformController.h"
#import "MRUWaveformViewController.h"

@interface MRUNowPlayingViewController : UIViewController <MRUNowPlayingControllerObserver, MRUMediaSuggestionsViewControllerDelegate, MRURoutingViewControllerDelegate, MRUNowPlayingTransportControlsViewDelegate, MRUVolumeControllerDelegate, MRUCallMonitorObserver, _MCStateDumpPropertyListTransformable, MRUArtworkViewObserver>



@property (readonly, nonatomic) MRUArtworkView *artworkView;
@property (copy, nonatomic) id *configureRoutingButton; // ivar: _configureRoutingButton
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) MRUNowPlayingController *controller; // ivar: _controller
@property (copy, nonatomic) id *coordinatedDismissalBlock; // ivar: _coordinatedDismissalBlock
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUNowPlayingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (retain, nonatomic) NSObject<BSInvalidatable> *hardwareVolumeControlAssertion; // ivar: _hardwareVolumeControlAssertion
@property (nonatomic) BOOL hasPendingTraitCollectionUpdates; // ivar: _hasPendingTraitCollectionUpdates
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isShowingMediaSuggestions;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) MPMediaControls *mediaControls; // ivar: _mediaControls
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) NSNumber *pendingDimmed; // ivar: _pendingDimmed
@property (nonatomic) BOOL pendingTimelineInvalidation; // ivar: _pendingTimelineInvalidation
@property (retain, nonatomic) MRUVisualStylingProvider *pendingVisualStylingProvider; // ivar: _pendingVisualStylingProvider
@property (weak, nonatomic) NSObject<MPAVOutputDevicePlaybackDataSource> *playbackDataSource; // ivar: _playbackDataSource
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly, nonatomic) NSArray *restrictedRects;
@property (readonly, nonatomic) NSInteger routeControlsPresentation; // ivar: _routeControlsPresentation
@property (readonly, nonatomic) MRURoutingViewController *routingViewController; // ivar: _routingViewController
@property (readonly, nonatomic) BOOL shouldShowMediaSuggestions;
@property (nonatomic) BOOL showArtworkView; // ivar: _showArtworkView
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) MRUMediaSuggestionsViewController *suggestionsViewController; // ivar: _suggestionsViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout
@property (retain, nonatomic) MRUNowPlayingView *view;
@property (retain, nonatomic) MRUNowPlayingView *viewIfLoaded;
@property (retain, nonatomic) MRUVolumeGroupCoordinator *volumeGroupCoordinator; // ivar: _volumeGroupCoordinator
@property (retain, nonatomic) MRUWaveformController *waveformController; // ivar: _waveformController
@property (retain, nonatomic) MRUWaveformViewController *waveformViewController; // ivar: _waveformViewController


-(BOOL)_canShowWhileLocked;
-(BOOL)lockScreenPresentsOverrideRoutePicker;
-(BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)showRouteLabel;
-(NSInteger)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(NSInteger)arg0 ;
-(id)_stateDumpObject;
-(id)_timelinesForDateInterval:(id)arg0 ;
-(id)backlightSceneEnvironment;
-(id)destination;
-(id)initWithController:(id)arg0 routeControlsPresentation:(NSInteger)arg1 ;
-(id)initWithRouteUID:(id)arg0 ;
-(id)initWithRouteUID:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(void)_updateWithFrameSpecifier:(id)arg0 ;
-(void)artworkView:(id)arg0 didChangeArtworkImage:(id)arg1 ;
-(void)callMonitorDidUpdateOnCall:(id)arg0 isOnCall:(BOOL)arg1 ;
-(void)createRoutingViewController;
-(void)createSuggestionsViewController;
-(void)dealloc;
-(void)didSelectArtworkView:(id)arg0 ;
-(void)didSelectLabelView:(id)arg0 ;
-(void)didSelectQuickControl:(id)arg0 ;
-(void)didSelectRoutingButton:(id)arg0 ;
-(void)initiateQueueHandoffTansitionWithCoordinator:(id)arg0 ;
-(void)invalidateAllTimelinesForReason:(id)arg0 ;
-(void)launchNowPlayingApp;
-(void)loadView;
-(void)mediaSuggestionsViewController:(id)arg0 didSelectSuggestion:(id)arg1 completion:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 didChangeQuickControlItem:(id)arg1 ;
-(void)nowPlayingController:(id)arg0 endpointController:(id)arg1 didChangeRoute:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 mediaSuggestionsController:(id)arg1 didChangeMediaSuggestions:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeArtwork:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeBundleID:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeTimeControls:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeTransportControls:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 queueHandoffCoordinator:(id)arg1 didChangeState:(NSInteger)arg2 ;
-(void)nowPlayingController:(id)arg0 tvRemoteController:(id)arg1 didChangeShowTVRemote:(BOOL)arg2 ;
-(void)presentRoutingControlsFromSourceView:(id)arg0 ;
-(void)routingViewController:(id)arg0 didSelectRoutingViewItem:(id)arg1 ;
-(void)routingViewControllerDidUpdateItems:(id)arg0 ;
-(void)schedulePendingTraitCollectionUpdates;
-(void)trackStartedShowingMediaSuggestions;
-(void)trackSuggestionSelected:(id)arg0 atIndex:(NSUInteger)arg1 error:(id)arg2 ;
-(void)trackSuggestionsDisplayed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transportControlsView:(id)arg0 didSelectRoutingButton:(id)arg1 ;
-(void)transportControlsView:(id)arg0 didSelectTVRemoteButton:(id)arg1 ;
-(void)updateArtwork;
// -(void)updateContentAnimated:(id)arg0 completion:(unk)arg1  ;
-(void)updateDimmed;
-(void)updateLayout;
-(void)updateNowPlayingInfo;
-(void)updateQuickControl;
-(void)updateRouteLabel;
-(void)updateRoutingButton;
-(void)updateRoutingButtonAnimated:(BOOL)arg0 ;
-(void)updateRoutingContentEdgeInsets;
-(void)updateRoutingDiscoveryMode;
-(void)updateSuggestionContext;
-(void)updateSuggestions;
-(void)updateTimeControls;
-(void)updateTimeControlsForPresentationInterval:(id)arg0 ;
-(void)updateTransportControls;
-(void)updateVisibility;
-(void)updateVolumeControls;
-(void)updateWaveformVisibility;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif