// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUROUTINGVIEWCONTROLLER_H
#define MRUROUTINGVIEWCONTROLLER_H

@class UIViewController, MPAVRoute, MPSectionedCollection, NSArray, NSDictionary, MPWeakTimer, CARSessionStatus, NSTimer, NSMutableSet, NSMutableArray, NSString, FBSDisplayMonitor, MPAVEndpointRoute, AVSystemController, NSNumberFormatter, MPAVRoutingController, NSMutableDictionary, NSIndexPath;
@protocol UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MPAVRoutingControllerDelegate, MRURoutingTableViewCellDelegate, MRUNowPlayingControllerObserver, CARSessionObserving, UIGestureRecognizerDelegate, MRUVendorSpecificDeviceManagerDelegate, MRUVendorSpecificTableViewCellDelegate, MRURoutingViewControllerDelegate;


#import "MRURoutingViewControllerUpdate.h"
#import "MRUVisualStylingProvider.h"
#import "MRUVendorSpecificDeviceManager.h"
#import "MRURoutingView.h"
#import "MRUVolumeGroupCoordinator.h"

@interface MRURoutingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MPAVRoutingControllerDelegate, MRURoutingTableViewCellDelegate, MRUNowPlayingControllerObserver, CARSessionObserving, UIGestureRecognizerDelegate, MRUVendorSpecificDeviceManagerDelegate, MRUVendorSpecificTableViewCellDelegate>

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
    NSArray *_cachedAirPlayRoutes;
    NSArray *_cachedNativeRoutes;
    NSArray *_cachedNativeRoutesInVendorSpecificGroup;
    NSArray *_cachedActivatedVendorSpecificDeviceIDs;
    NSArray *_cachedPendingVendorSpecificDeviceIDs;
    MPWeakTimer *_updateTimer;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _hasUserSelections;
    NSUInteger _updatesSincePresentation;
    BOOL _didSelectShowMore;
    BOOL _allRoutesAreUnknown;
    BOOL _someRoutesAreUnknown;
}


@property (readonly, nonatomic) BOOL canUseUncoalescedResults;
@property (retain, nonatomic) CARSessionStatus *carPlaySessionStatus; // ivar: _carPlaySessionStatus
@property (retain, nonatomic) NSTimer *collapseTimer; // ivar: _collapseTimer
@property (retain, nonatomic) NSMutableSet *collapsedVendorSpecificGroupUIDs; // ivar: _collapsedVendorSpecificGroupUIDs
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (copy, nonatomic) NSMutableArray *customRows; // ivar: _customRows
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRURoutingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLastPickNativeRoute; // ivar: _didLastPickNativeRoute
@property (nonatomic) NSInteger discoveryMode; // ivar: _discoveryMode
@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor; // ivar: _displayMonitor
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute; // ivar: _endpointRoute
@property (retain, nonatomic) NSMutableSet *expandedGroupUIDs; // ivar: _expandedGroupUIDs
@property (retain, nonatomic) NSMutableSet *expandedItemUIDs; // ivar: _expandedItemUIDs
@property (retain, nonatomic) NSMutableSet *expandedRouteUIDs; // ivar: _expandedRouteUIDs
@property (retain, nonatomic) NSMutableSet *expandedVendorSpecificGroupUIDs; // ivar: _expandedVendorSpecificGroupUIDs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInCarPlay) BOOL inCarPlay;
@property (retain, nonatomic) NSDictionary *indexedNowPlayingControllers; // ivar: _indexedNowPlayingControllers
@property (retain, nonatomic) AVSystemController *mediaServerController; // ivar: _mediaServerController
@property (retain, nonatomic) NSString *mostRecentlyInteractedVendorSpecificGroupRouteID; // ivar: _mostRecentlyInteractedVendorSpecificGroupRouteID
@property (nonatomic) BOOL needsDisplayedRoutesUpdate; // ivar: _needsDisplayedRoutesUpdate
@property (retain, nonatomic) NSArray *nowPlayingControllers; // ivar: _nowPlayingControllers
@property (nonatomic) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) NSDictionary *outputDeviceVolumeControllers; // ivar: _outputDeviceVolumeControllers
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter
@property (nonatomic) BOOL presentingAppHasActiveAVSession; // ivar: _presentingAppHasActiveAVSession
@property (nonatomic) int presentingAppProcessIdentifier; // ivar: _presentingAppProcessIdentifier
@property (readonly, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (nonatomic) UIEdgeInsets scrollIndicatorInsets; // ivar: _scrollIndicatorInsets
@property (readonly, nonatomic) BOOL shouldSuppressNativeRoutesStatusDisplay;
@property (nonatomic) BOOL showMetadataForEndpointRoute; // ivar: _showMetadataForEndpointRoute
@property (nonatomic) BOOL sortByIsVideoRoute; // ivar: _sortByIsVideoRoute
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (retain, nonatomic) NSMutableArray *staticCustomRowItems; // ivar: _staticCustomRowItems
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) MPWeakTimer *subtitleUpdateTimer; // ivar: _subtitleUpdateTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *vendorSpecificGroupDisplayedSubroutes; // ivar: _vendorSpecificGroupDisplayedSubroutes
@property (retain, nonatomic) NSIndexPath *vendorSpecificGroupThatWasJustExpanded; // ivar: _vendorSpecificGroupThatWasJustExpanded
@property (retain, nonatomic) MRUVendorSpecificDeviceManager *vendorSpecificManager; // ivar: _vendorSpecificManager
@property (retain, nonatomic) MRURoutingView *view;
@property (retain, nonatomic) MRURoutingView *viewIfLoaded;
@property (retain, nonatomic) MRUVolumeGroupCoordinator *volumeGroupCoordinator; // ivar: _volumeGroupCoordinator


-(BOOL)_canShowWhileLocked;
-(BOOL)_operationRequiresOptimisticState:(NSInteger)arg0 routes:(id)arg1 ;
-(BOOL)_shouldShowShowMoreButton;
-(BOOL)_wouldShareAudioForPickedRoute:(id)arg0 operation:(NSInteger)arg1 pickedRoutes:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)hasCarKitRoute;
-(BOOL)isConnectedToExternalDisplay;
-(BOOL)isInVehicle;
-(BOOL)isVendorSpecificGroupStatusRecorded:(id)arg0 ;
-(BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg0 ;
-(BOOL)routesContainAirPlayGroupableRoute:(id)arg0 ;
-(BOOL)routesContainMultipleBuiltIn:(id)arg0 ;
-(BOOL)routesContainSplitterCapableRoute:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)wasVendorSpecificGroupDisplayedAsExpanded:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)subtitleAccessoryForItem:(id)arg0 nowPlayingInfo:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_airPlayRoutesInRoutes:(id)arg0 ;
-(id)_createRefreshUpdate;
-(id)_createRefreshUpdateForCoalesceResult;
-(id)_createReloadUpdate;
-(id)_createRoutingViewItemsForUpdate:(id)arg0 ;
-(id)_createSectionedCollection:(id)arg0 withPickedRoutes:(id)arg1 ;
-(id)_displayAsPickedRoutesInRoutes:(id)arg0 ;
-(id)_displayableRoutesInRoutes:(id)arg0 ;
-(id)_fullStateDumpObject;
-(id)_getNearbyRoutes:(id)arg0 ;
-(id)_mergeRoutes:(id)arg0 withCoalescedResult:(id)arg1 ;
-(id)_stateDumpObject;
-(id)endpointGroupUID;
-(id)groupUIDForRoute:(id)arg0 ;
-(id)init;
-(id)initWithRoutingController:(id)arg0 ;
-(id)symbolNameForVendorSpecificRoute:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_applyUpdate:(id)arg0 ;
-(void)_collapseAllGroups;
-(void)_collapseAllGroupsAfterDelay;
-(void)_configureVolumeForUpdate:(id)arg0 volumeCapableRoutes:(*id)arg1 volumeController:(*id)arg2 ;
-(void)_createUpdateWithCompletion:(id)arg0 ;
-(void)_diplayShareAudioDisabledAlertForReason:(id)arg0 ;
-(void)_enqueueUpdate:(id)arg0 ;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setupUpdateTimerIfNecessary;
-(void)_updateDisplayedRoutes;
-(void)applyVendorSpecificGroupExpandedRecord:(id)arg0 ;
-(void)clearVendorSpecificGroupExpandedRecordFor:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveInteraction:(id)arg0 ;
-(void)enqueueRefreshUpdate;
-(void)ensureVendorSpecificGroupTreeIsVisible:(id)arg0 ;
-(void)loadView;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2 ;
-(void)playingSessionsDidChangeNotification:(id)arg0 ;
-(void)resetDisplayedRoutes;
-(void)routingCellDidTapToExpand:(id)arg0 ;
-(void)routingController:(id)arg0 didFailToPickRouteWithError:(id)arg1 ;
-(void)routingController:(id)arg0 pickedRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg0 shouldHijackRoute:(id)arg1 alertStyle:(NSInteger)arg2 busyRouteName:(id)arg3 presentingAppName:(id)arg4 completion:(id)arg5 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)setOptimisticUpdate:(id)arg0 ;
-(void)showMoreAction;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)updateExpandedGroups;
-(void)updateHeaderView:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)updateMetadata;
-(void)updateMetadataForNowPlayingController:(id)arg0 ;
-(void)updateNowPlayingControllersForRoutes:(id)arg0 ;
-(void)updateSubtitle;
-(void)updateVendorSpecificCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)updateVendorSpecificCustomRowCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)updateVendorSpecificGroupExpandedRecordFor:(id)arg0 ;
-(void)updateVendorSpecificSubRouteCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)vendorSpecificCellDidTapToExpand:(id)arg0 ;
-(void)vendorSpecificManager:(id)arg0 deviceNowPlayingInfoDidChange:(id)arg1 ;
-(void)vendorSpecificManager:(id)arg0 deviceStateDidChange:(id)arg1 ;
-(void)vendorSpecificManagerDeviceListDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif