// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSENDPOINTSVIEWCONTROLLER_H
#define MEDIACONTROLSENDPOINTSVIEWCONTROLLER_H

@class MPAVOutputDeviceRoutingDataSource, MPMediaControlsConfiguration, UIViewPropertyAnimator, NSString, AVExternalPlaybackMonitor, MPAVRoutingViewController, MPAVEndpointRoute;
@protocol MRPlatterViewControllerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate, MediaControlsEndpointsManagerDelegate, CCUIContentModuleContentViewController;


#import "MediaControlsCollectionViewController.h"
#import "MediaControlsEndpointsManager.h"

@interface MediaControlsEndpointsViewController : MediaControlsCollectionViewController <MRPlatterViewControllerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate, MediaControlsEndpointsManagerDelegate, CCUIContentModuleContentViewController>

 {
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;
    NSInteger _lastSelectedModeForActivePlatterViewController;
    BOOL _didRetrieveActiveSystemRouteOnce;
    BOOL _shouldReselectActiveSystemRoute;
    BOOL _prewarming;
    BOOL _shouldTransitionToVisibleWhenReady;
    BOOL _didTransitionToVisible;
}


@property (retain, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDismissing) BOOL dismissing; // ivar: _dismissing
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // ivar: _endpointsManager
@property (retain, nonatomic) AVExternalPlaybackMonitor *externalPlaybackMonitor; // ivar: _externalPlaybackMonitor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *homeGestureDismissalAllowedBlock; // ivar: _homeGestureDismissalAllowedBlock
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (copy, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID
@property (copy, nonatomic) id *routingCornerViewTappedBlock; // ivar: _routingCornerViewTappedBlock
@property (retain, nonatomic) MPAVRoutingViewController *routingViewController; // ivar: _routingViewController
@property (retain, nonatomic) MPAVEndpointRoute *selectedRoute; // ivar: _selectedRoute
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (nonatomic) BOOL shouldPresentUsingViewService; // ivar: _shouldPresentUsingViewService
@property (readonly) Class superclass;


+(BOOL)_shouldTransitionEarlyOnSystemRoute;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isReadyForAppearanceTransition;
-(BOOL)_isSelectedRouteInRoutes;
-(BOOL)canDismissPresentedContent;
-(BOOL)mediaControlsCollectionViewController:(id)arg0 canSelectItemAtIndex:(NSInteger)arg1 ;
-(BOOL)shouldExpandModuleOnTouch:(id)arg0 ;
-(BOOL)shouldPresentUsingViewServicePlatterViewController:(id)arg0 ;
-(CGFloat)preferredItemHeight;
-(CGFloat)preferredItemHeightGivenWidth:(CGFloat)arg0 ;
-(NSInteger)defaultSelectedItemIndexForCollectionViewController:(id)arg0 ;
-(NSInteger)numberOfItemsInCollectionViewController:(id)arg0 ;
-(id)init;
-(id)mediaControlsCollectionViewController:(id)arg0 viewControllerForItemAtIndex:(NSInteger)arg1 ;
-(id)platterViewController:(id)arg0 presentingViewForPresentedViewController:(id)arg1 ;
-(void)_assignRouteViewControllerToSelectedPanelViewController;
-(void)_routeDidChangeNotification:(id)arg0 ;
-(void)_selectActiveSystemRouteIfNeeded;
-(void)_setupEndpointsManager;
-(void)_setupRoutingViewController;
-(void)_supportedModesForSelectedRoute:(*NSUInteger)arg0 selectedMode:(*NSInteger)arg1 ;
-(void)_transitionToVisible:(BOOL)arg0 ;
-(void)_transitionToVisibleIfNeeded;
-(void)_updateDiscoveryMode;
-(void)_updateEndpointRouteForOutputDeviceDataSource:(id)arg0 ;
-(void)_updateModesForSelectedPlatterViewController;
-(void)_updateSupportedModesForSelectedPlatterViewController;
-(void)dealloc;
-(void)didSelectEndpoint:(id)arg0 ;
-(void)dismissPlatterViewController:(id)arg0 completion:(id)arg1 ;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)endUpdates;
-(void)endpointsManager:(id)arg0 activeSystemRouteDidChange:(id)arg1 ;
-(void)endpointsManager:(id)arg0 defersRoutesReplacement:(id)arg1 ;
-(void)homeObserverDidUpdateKnownUIDs:(id)arg0 ;
-(void)mediaControlsCollectionViewController:(id)arg0 didDisplayViewController:(id)arg1 forItemAtIndex:(NSInteger)arg2 ;
-(void)mediaControlsCollectionViewController:(id)arg0 didEndDisplayingViewController:(id)arg1 forItemAtIndex:(NSInteger)arg2 ;
-(void)mediaControlsCollectionViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 withReason:(NSInteger)arg2 ;
-(void)mediaControlsCollectionViewController:(id)arg0 willDisplayViewController:(id)arg1 forItemAtIndex:(NSInteger)arg2 ;
-(void)mediaControlsCollectionViewController:(id)arg0 willSelectItemAtIndex:(NSInteger)arg1 withReason:(NSInteger)arg2 ;
-(void)platterViewController:(id)arg0 didPickRoute:(id)arg1 ;
-(void)platterViewController:(id)arg0 didToggleRoutingPicker:(BOOL)arg1 ;
-(void)platterViewController:(id)arg0 homeGestureDismisalAllowedDidChange:(BOOL)arg1 ;
-(void)platterViewController:(id)arg0 willToggleRoutingPicker:(BOOL)arg1 ;
-(void)reloadData;
-(void)setDisplayMode:(NSInteger)arg0 ;
-(void)startPrewarming;
-(void)stopPrewarming;
-(void)updateContentInsets;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif