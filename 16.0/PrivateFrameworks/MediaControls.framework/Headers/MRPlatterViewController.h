// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLATTERVIEWCONTROLLER_H
#define MRPLATTERVIEWCONTROLLER_H

@class UIViewController, MTVisualStylingProvider, MPArtworkCatalog, MSVTimer, UIView, NSString, NSArray, FBSDisplayLayoutMonitor, MPVolumeGroupSliderCoordinator, MPMediaControls, MPAVEndpointRoute, MPAVRoutingViewController, NSMutableArray, SFShareAudioViewController;
@protocol MediaControlsEndpointControllerDelegate, MediaControlsActionsDelegate, MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MediaControlsMasterVolumeSliderDelegate, MediaControlsPanelViewControllerDelegate, MTVisualStylingRequiring, _MCStateDumpPropertyListTransformable, UIGestureRecognizerDelegate, MediaControlsCollectionItemViewController, MRPlatterViewControllerDelegate;


#import "MediaControlsEndpointController.h"
#import "MediaControlsLanguageOptionsViewController.h"
#import "MediaControlsHeaderView.h"
#import "MediaControlsParentContainerView.h"
#import "MediaControlsRoutingCornerView.h"
#import "MediaControlsTransitioningDelegate.h"
#import "MRMediaControlsVideoPickerFooterView.h"
#import "MRMediaControlsVideoPickerHeaderView.h"
#import "MediaControlsVolumeContainerView.h"

@interface MRPlatterViewController : UIViewController <MediaControlsEndpointControllerDelegate, MediaControlsActionsDelegate, MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MediaControlsMasterVolumeSliderDelegate, MediaControlsPanelViewControllerDelegate, MTVisualStylingRequiring, _MCStateDumpPropertyListTransformable, UIGestureRecognizerDelegate, MediaControlsCollectionItemViewController>

 {
    NSUInteger _stateHandle;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic, setter=_setContinuousCornerRadius:) CGFloat _continuousCornerRadius; // ivar: __continuousCornerRadius
@property (nonatomic) BOOL allowsNowPlayingAppLaunch; // ivar: _allowsNowPlayingAppLaunch
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (retain, nonatomic) MSVTimer *artworkTimer; // ivar: _artworkTimer
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRPlatterViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (retain, nonatomic) NSArray *displayElements; // ivar: _displayElements
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayMonitor; // ivar: _displayMonitor
@property (readonly, nonatomic) UIView *effectiveFooterView;
@property (readonly, nonatomic) UIView *effectiveHeaderView;
@property (retain, nonatomic) MediaControlsEndpointController *endpointController; // ivar: _endpointController
@property (copy, nonatomic) NSString *explicitString; // ivar: _explicitString
@property (readonly, nonatomic) NSInteger failedArtworkRetryCount; // ivar: _failedArtworkRetryCount
@property (nonatomic) BOOL failedToLoadArtwork; // ivar: _failedToLoadArtwork
@property (retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // ivar: _groupSliderCoordinator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isListeningForResponse; // ivar: _isListeningForResponse
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (weak, nonatomic) MediaControlsLanguageOptionsViewController *languageOptionsViewController; // ivar: _languageOptionsViewController
@property (nonatomic) CGSize lastKnownSize; // ivar: _lastKnownSize
@property (retain, nonatomic) MPMediaControls *mediaControls; // ivar: _mediaControls
@property (retain, nonatomic) MediaControlsHeaderView *nowPlayingHeaderView; // ivar: _nowPlayingHeaderView
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) MediaControlsParentContainerView *parentContainerView; // ivar: _parentContainerView
@property (retain, nonatomic) NSString *placeholderDeviceIdentifier; // ivar: _placeholderDeviceIdentifier
@property (retain, nonatomic) NSString *placeholderString; // ivar: _placeholderString
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (retain, nonatomic) MPAVEndpointRoute *route; // ivar: _route
@property (readonly, nonatomic) NSString *routeName;
@property (readonly, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (retain, nonatomic) MediaControlsRoutingCornerView *routingCornerView; // ivar: _routingCornerView
@property (copy, nonatomic) id *routingCornerViewTappedBlock; // ivar: _routingCornerViewTappedBlock
@property (retain, nonatomic) MPAVRoutingViewController *routingViewController; // ivar: _routingViewController
@property (retain, nonatomic) NSMutableArray *secondaryStringComponents; // ivar: _secondaryStringComponents
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) NSInteger selectedMode; // ivar: _selectedMode
@property (retain, nonatomic) SFShareAudioViewController *shareAudioViewController; // ivar: _shareAudioViewController
@property (readonly, nonatomic) BOOL shouldDisplayPlatter;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedModes; // ivar: _supportedModes
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (retain, nonatomic) MediaControlsTransitioningDelegate *transitioningDelegate; // ivar: _transitioningDelegate
@property (retain, nonatomic) MRMediaControlsVideoPickerFooterView *videoPickerFooterView; // ivar: _videoPickerFooterView
@property (retain, nonatomic) MRMediaControlsVideoPickerHeaderView *videoPickerHeaderView; // ivar: _videoPickerHeaderView
@property (retain, nonatomic) MediaControlsVolumeContainerView *volumeContainerView; // ivar: _volumeContainerView


+(id)coverSheetPlatterViewController;
-(BOOL)_canShowWhileLocked;
-(BOOL)_canToggleRoutingPicker;
-(BOOL)_isExpanded;
-(BOOL)_shouldUseViewServiceToPresentTVRemote;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)lockScreenPresentsOverrideRoutePicker;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldEnableSyncingForSlider:(id)arg0 ;
-(BOOL)shouldShowTVRemoteButton;
-(BOOL)slider:(id)arg0 shouldCancelSnapWithTouch:(id)arg1 ;
-(BOOL)slider:(id)arg0 syncStateWillChangeFromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(NSInteger)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(NSInteger)arg0 ;
-(id)_stateDumpObject;
-(id)_tvAirplayIdentifier;
-(id)_tvMediaRemoteIdentifier;
-(id)initWithActiveRouteType:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRouteUID:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct UIEdgeInsets )contentInsetsForRoutingViewController:(id)arg0 ;
-(void)_dismissShareAudioViewController;
-(void)_platterViewControllerReceivedInteraction:(id)arg0 ;
-(void)_presentRoutingViewControllerFromCoverSheet;
-(void)_prewarmTVRemoteIfNeeded;
-(void)_routingCornerViewReceivedTap:(id)arg0 ;
-(void)_setRoutingPickerVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_showPlaceholderArtwork;
-(void)_showShareAudioViewController;
-(void)_updateConfiguration;
-(void)_updateControlCenterMetadata:(id)arg0 sectionMetadata:(id)arg1 ;
-(void)_updateHeaderUI;
-(void)_updateOnScreenForStyle:(NSInteger)arg0 ;
-(void)_updatePlaceholderArtwork;
-(void)_updateRouteNameLabel;
-(void)_updateRoutingCornerView;
-(void)_updateRoutingIndicators;
-(void)_updateSecondaryStringFormat;
-(void)_updateStyle;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)endpointController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)endpointControllerDidChangeState:(id)arg0 ;
-(void)endpointControllerDidUpdateRoutingAvailability:(id)arg0 ;
-(void)endpointControllerRouteDidUpdate:(id)arg0 ;
-(void)footerViewButtonPressed:(id)arg0 ;
-(void)headerViewButtonPressed:(id)arg0 ;
-(void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg0 ;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)loadView;
-(void)presentLanguageOptions;
-(void)presentRatingActionSheet:(id)arg0 sourceView:(id)arg1 ;
-(void)presentTVRemote;
-(void)routingViewController:(id)arg0 didPickRoute:(id)arg1 ;
-(void)routingViewController:(id)arg0 didSelectRoutingViewItem:(id)arg1 ;
-(void)routingViewController:(id)arg0 willDisplayCell:(id)arg1 ;
-(void)routingViewController:(id)arg0 willDisplayHeaderView:(id)arg1 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withCoordinator:(id)arg1 ;


@end


#endif