// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUROUTINGVIEWCONTROLLER_H
#define MRUROUTINGVIEWCONTROLLER_H

@class UIViewController, MPAVRoute, MPSectionedCollection, NSArray, NSDictionary, MPWeakTimer, CARSessionStatus, NSTimer, NSString, MPAVEndpointRoute, NSMutableSet, MPVolumeGroupSliderCoordinator, NSMapTable, NSNumberFormatter, MPAVRoutingController;
@protocol UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MPAVRoutingControllerDelegate, MRURoutingTableViewCellDelegate, MRUEndpointMetadataControllerObserver, CARSessionObserving, UIGestureRecognizerDelegate, MRURoutingViewControllerDelegate;


#import "MRURoutingViewControllerUpdate.h"
#import "MRUVisualStylingProvider.h"
#import "MRURoutingView.h"

@interface MRURoutingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MPAVRoutingControllerDelegate, MRURoutingTableViewCellDelegate, MRUEndpointMetadataControllerObserver, CARSessionObserving, UIGestureRecognizerDelegate>

 {
    MRURoutingViewControllerUpdate *_pendingUpdate;
    MRURoutingViewControllerUpdate *_optimisticUpdate;
    BOOL _isAnimatingUpdate;
    MPAVRoute *_displayedEndpointRoute;
    MPSectionedCollection *_routingViewItems;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedDisplayableAvailableRoutes;
    NSArray *_cachedPendingPickedRoutes;
    NSArray *_cachedDisplayAsPickedRoutes;
    NSArray *_cachedVolumeCapableRoutes;
    NSDictionary *_cachedRouteGrouping;
    MPWeakTimer *_updateTimer;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _hasUserSelections;
    NSUInteger _updatesSincePresentation;
}


@property (retain, nonatomic) CARSessionStatus *carPlaySessionStatus; // ivar: _carPlaySessionStatus
@property (retain, nonatomic) NSTimer *collapseTimer; // ivar: _collapseTimer
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRURoutingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger discoveryMode; // ivar: _discoveryMode
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute; // ivar: _endpointRoute
@property (retain, nonatomic) NSMutableSet *expandedGroupUIDs; // ivar: _expandedGroupUIDs
@property (retain, nonatomic) NSMutableSet *expandedItemUIDs; // ivar: _expandedItemUIDs
@property (retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // ivar: _groupSliderCoordinator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInCarPlay) BOOL inCarPlay;
@property (retain, nonatomic) NSDictionary *indexedMetadataControllers; // ivar: _indexedMetadataControllers
@property (retain, nonatomic) NSArray *metadataControllers; // ivar: _metadataControllers
@property (nonatomic) BOOL needsDisplayedRoutesUpdate; // ivar: _needsDisplayedRoutesUpdate
@property (nonatomic) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) NSMapTable *outputDeviceVolumeSliders; // ivar: _outputDeviceVolumeSliders
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter
@property (readonly, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (nonatomic) UIEdgeInsets scrollIndicatorInsets; // ivar: _scrollIndicatorInsets
@property (nonatomic) BOOL showMetadataForEndpointRoute; // ivar: _showMetadataForEndpointRoute
@property (nonatomic) BOOL sortByIsVideoRoute; // ivar: _sortByIsVideoRoute
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) MPWeakTimer *subtitleUpdateTimer; // ivar: _subtitleUpdateTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) MRURoutingView *view;
@property (retain, nonatomic) MRURoutingView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)_operationRequiresOptimisticState:(NSInteger)arg0 routes:(id)arg1 ;
-(BOOL)_wouldShareAudioForPickedRoute:(id)arg0 operation:(NSInteger)arg1 pickedRoutes:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)hasCarKitRoute;
-(BOOL)isInVehicle;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg0 ;
-(BOOL)routesContainAirPlayGroupableRoute:(id)arg0 ;
-(BOOL)routesContainMultipleBuiltIn:(id)arg0 ;
-(BOOL)routesContainSplitterCapableRoute:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)subtitleAccessoryForItem:(id)arg0 metadataController:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createRefreshUpdate;
-(id)_createReloadUpdate;
-(id)_createRoutingViewItemsForRoutes:(id)arg0 ;
-(id)_createSectionedCollection:(id)arg0 withPickedRoutes:(id)arg1 ;
-(id)_displayAsPickedRoutesInRoutes:(id)arg0 ;
-(id)_displayableRoutesInRoutes:(id)arg0 ;
-(id)_fullStateDumpObject;
-(id)_stateDumpObject;
-(id)endpointGroupUID;
-(id)groupUIDForRoute:(id)arg0 ;
-(id)init;
-(id)initWithRoutingController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_applyUpdate:(id)arg0 ;
-(void)_collapseAllGroups;
-(void)_collapseAllGroupsAfterDelay;
-(void)_createUpdateWithCompletion:(id)arg0 ;
-(void)_diplayShareAudioDisabledAlertForReason:(id)arg0 ;
-(void)_enqueueUpdate:(id)arg0 ;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setupUpdateTimerIfNecessary;
-(void)_updateDisplayedRoutes;
-(void)dealloc;
-(void)didReceiveInteraction:(id)arg0 ;
-(void)enqueueRefreshUpdate;
-(void)loadView;
-(void)metadataController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)metadataControllerRouteDidUpdate:(id)arg0 ;
-(void)resetDisplayedRoutes;
-(void)routingCellDidTapToExpand:(id)arg0 ;
-(void)routingController:(id)arg0 didFailToPickRouteWithError:(id)arg1 ;
-(void)routingController:(id)arg0 pickedRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg0 shouldHijackRoute:(id)arg1 alertStyle:(NSInteger)arg2 busyRouteName:(id)arg3 presentingAppName:(id)arg4 completion:(id)arg5 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)setOptimisticUpdate:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)updateExpandedGroups;
-(void)updateHeaderView:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)updateMetadata;
-(void)updateMetadataControllersForRoutes:(id)arg0 ;
-(void)updateMetadataForController:(id)arg0 ;
-(void)updateSubtitle;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg0 ;


@end


#endif