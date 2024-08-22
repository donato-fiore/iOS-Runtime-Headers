// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGVIEWCONTROLLER_H
#define MRUNOWPLAYINGVIEWCONTROLLER_H

@class UIViewController, NSString, MPVolumeGroupSliderCoordinator, MPMediaControls, MTVisualStylingProvider;
@protocol MRUNowPlayingTransportControlsViewDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, MRUNowPlayingVolumeSliderDelegate, MRUMediaSuggestionsViewControllerDelegate, MRULockScreenMonitorDelegate, MRUNowPlayingQueueHandoffCoordinatorDelegate, _MCStateDumpPropertyListTransformable, MRUNowPlayingViewControllerDelegate, MediaControlsInvalidatable, MPAVOutputDevicePlaybackDataSource;


#import "MRUArtworkView.h"
#import "MediaControlsEndpointController.h"
#import "MRULockScreenMonitor.h"
#import "MRUEndpointMetadataController.h"
#import "MRUNowPlayingQueueHandoffCoordinator.h"
#import "MRURoutingViewController.h"
#import "MRUVisualStylingProvider.h"
#import "MRUMediaSuggestionsViewController.h"
#import "MRUNowPlayingView.h"

@interface MRUNowPlayingViewController : UIViewController <MRUNowPlayingTransportControlsViewDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, MRUNowPlayingVolumeSliderDelegate, MRUMediaSuggestionsViewControllerDelegate, MRULockScreenMonitorDelegate, MRUNowPlayingQueueHandoffCoordinatorDelegate, _MCStateDumpPropertyListTransformable>



@property (readonly, nonatomic) MRUArtworkView *artworkView;
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) NSInteger context; // ivar: _context
@property (copy, nonatomic) id *coordinatedDismissalBlock; // ivar: _coordinatedDismissalBlock
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUNowPlayingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController; // ivar: _endpointController
@property (retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // ivar: _groupSliderCoordinator
@property (retain, nonatomic) NSObject<MediaControlsInvalidatable> *hardwareVolumeControlAssertion; // ivar: _hardwareVolumeControlAssertion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isShowingMediaSuggestions;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) MRULockScreenMonitor *lockscreenMonitor; // ivar: _lockscreenMonitor
@property (retain, nonatomic) MPMediaControls *mediaControls; // ivar: _mediaControls
@property (readonly, nonatomic) MRUEndpointMetadataController *metadataController; // ivar: _metadataController
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (weak, nonatomic) NSObject<MPAVOutputDevicePlaybackDataSource> *playbackDataSource; // ivar: _playbackDataSource
@property (retain, nonatomic) MRUNowPlayingQueueHandoffCoordinator *queueHandoffCoordinator; // ivar: _queueHandoffCoordinator
@property (readonly, nonatomic) NSInteger routeControlsPresentation; // ivar: _routeControlsPresentation
@property (readonly, nonatomic) MRURoutingViewController *routingViewController; // ivar: _routingViewController
@property (readonly, nonatomic) BOOL shouldShowMediaSuggestions;
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) MRUMediaSuggestionsViewController *suggestionsViewController; // ivar: _suggestionsViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout
@property (copy, nonatomic) NSString *undiscoveredPlaceholderText;
@property (retain, nonatomic) MRUNowPlayingView *view;
@property (retain, nonatomic) MRUNowPlayingView *viewIfLoaded;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


+(id)coversheetViewController;
-(BOOL)_canShowWhileLocked;
-(BOOL)canShowRoutingControls;
-(BOOL)lockScreenPresentsOverrideRoutePicker;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldEnableSyncingForSlider:(id)arg0 ;
-(BOOL)slider:(id)arg0 shouldCancelSnapWithTouch:(id)arg1 ;
-(BOOL)slider:(id)arg0 syncStateWillChangeFromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(NSInteger)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(NSInteger)arg0 ;
-(id)_stateDumpObject;
-(id)destination;
-(id)initWithEndpointController:(id)arg0 routeControlsPresentation:(NSInteger)arg1 ;
-(id)initWithRouteUID:(id)arg0 ;
-(id)initWithRouteUID:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(id)suggestionContext;
-(void)createGroupSliderCoordinator;
-(void)createLockscreenMonitor;
-(void)createRoutingViewController;
-(void)createSuggestionsViewController;
-(void)dealloc;
-(void)didSelectHeaderView:(id)arg0 ;
-(void)didSelectQuickActionButton:(id)arg0 ;
-(void)didSelectRoutingButton:(id)arg0 ;
-(void)initiateQueueHandoffTansitionWithCoordinator:(id)arg0 ;
-(void)loadView;
-(void)lockscreenMonitor:(id)arg0 didUpdateDeviceLocked:(BOOL)arg1 ;
-(void)mediaSuggestionsViewController:(id)arg0 didSelectSuggestion:(id)arg1 completion:(id)arg2 ;
-(void)metadataController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)metadataController:(id)arg0 didUpdateApplicationIcon:(id)arg1 ;
-(void)metadataController:(id)arg0 didUpdateShowMediaSuggestions:(BOOL)arg1 ;
-(void)metadataControllerDidChangeState:(id)arg0 ;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg0 ;
-(void)metadataControllerRouteDidUpdate:(id)arg0 ;
-(void)nowPlayingQueueHandoffCoordinatorDidBeginTransition:(id)arg0 ;
-(void)nowPlayingQueueHandoffCoordinatorDidCompleteHandoff:(id)arg0 ;
-(void)nowPlayingQueueHandoffCoordinatorDidEndTransition:(id)arg0 ;
-(void)nowPlayingQueueHandoffCoordinatorSetupTransition:(id)arg0 ;
-(void)presentExternalRoutingControlsFromSourceView:(id)arg0 ;
-(void)routingViewController:(id)arg0 didSelectRoutingViewItem:(id)arg1 ;
-(void)routingViewControllerDidUpdateItems:(id)arg0 ;
-(void)trackStartedShowingMediaSuggestions;
-(void)trackSuggestionSelected:(id)arg0 atIndex:(NSUInteger)arg1 error:(id)arg2 ;
-(void)trackSuggestionsDisplayed:(id)arg0 ;
-(void)transportControlsView:(id)arg0 presentActionSheetForItem:(id)arg1 sourceView:(id)arg2 ;
-(void)transportControlsView:(id)arg0 presentLanguageOptionsFromSourceView:(id)arg1 ;
-(void)transportControlsView:(id)arg0 presentTVRemoteFromSourceView:(id)arg1 ;
// -(void)updateContentAnimated:(id)arg0 completion:(unk)arg1  ;
-(void)updateDiscoveryMode;
-(void)updateHardwareVolumeButtons;
-(void)updateLayout;
-(void)updateResponse;
-(void)updateRouteLabel;
-(void)updateRoutingButton;
-(void)updateRoutingViewControllerContentEdgeInsets;
-(void)updateSuggestionContext;
-(void)updateSuggestions;
-(void)updateVisibility;
-(void)updateVolume;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif