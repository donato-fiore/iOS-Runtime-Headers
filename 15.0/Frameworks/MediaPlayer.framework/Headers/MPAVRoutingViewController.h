// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVROUTINGVIEWCONTROLLER_H
#define MPAVROUTINGVIEWCONTROLLER_H

@class UIViewController, NSArray, NSDictionary, NSMutableSet, UIColor, CARSessionStatus, UITableView, NSString, NSNumber, NSMapTable;
@protocol CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;


#import "MPAVClippingTableView.h"
#import "MPAVRoutingViewControllerUpdate.h"
#import "MPAVRoute.h"
#import "MPSectionedCollection.h"
#import "MPWeakTimer.h"
#import "MPAVRoutingController.h"
#import "MPAVEndpointRoute.h"
#import "MPVolumeGroupSliderCoordinator.h"

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate>

 {
    MPAVClippingTableView *_tableView;
    MPAVRoutingViewControllerUpdate *_pendingUpdate;
    MPAVRoutingViewControllerUpdate *_optimisticUpdate;
    BOOL _isAnimatingUpdate;
    MPAVRoute *_displayedEndpointRoute;
    MPSectionedCollection *_routingViewItems;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedDisplayableAvailableRoutes;
    NSArray *_cachedPendingPickedRoutes;
    NSArray *_cachedDisplayAsPickedRoutes;
    NSArray *_cachedVolumeCapableRoutes;
    NSDictionary *_cachedRouteGrouping;
    NSMutableSet *_expandedGroupUIDs;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    NSInteger _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _needsDisplayedRoutesUpdate;
    BOOL _suspendedDiscoveryModeDueToApplicationState;
    BOOL _shouldAutomaticallyUpdateRoutesList;
    BOOL _shouldPickRouteOnSelection;
    BOOL _onScreen;
    BOOL _hasUserSelections;
    CARSessionStatus *_carPlayStatus;
    NSUInteger _updatesSincePresentation;
    NSInteger _discoveryModeBeforeEnteringBackground;
}


@property (readonly, nonatomic) CGFloat _expandedCellHeight;
@property (readonly, nonatomic) CGFloat _normalCellHeight;
@property (readonly, nonatomic) MPAVRoutingController *_routingController;
@property (nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) BOOL _shouldAutomaticallyUpdateRoutesList;
@property (nonatomic, setter=_setShouldPickRouteOnSelection:) BOOL _shouldPickRouteOnSelection;
@property (retain, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property (retain, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property (readonly, nonatomic) UITableView *_tableView;
@property (nonatomic) BOOL allowMirroring;
@property (nonatomic, setter=setAVItemType:) NSInteger avItemType; // ivar: _avItemType
@property (nonatomic, getter=_continuousCornerRadius, setter=_setContinuousCornerRadius:) CGFloat continuousCornerRadius; // ivar: _continuousCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPAVRoutingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *discoveryModeOverride; // ivar: _discoveryModeOverride
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute; // ivar: _endpointRoute
@property (retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // ivar: _groupSliderCoordinator
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iconStyle; // ivar: _iconStyle
@property (readonly, nonatomic, getter=isInCarPlay) BOOL inCarPlay;
@property (nonatomic) NSUInteger mirroringStyle; // ivar: _mirroringStyle
@property (retain, nonatomic) NSMapTable *outputDeviceVolumeSliders; // ivar: _outputDeviceVolumeSliders
@property (nonatomic) BOOL sortByIsVideoRoute; // ivar: _sortByIsVideoRoute
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MPAVRoutingViewControllerThemeDelegate> *themeDelegate; // ivar: _themeDelegate


-(BOOL)_operationRequiresOptimisticState:(NSInteger)arg0 routes:(id)arg1 ;
-(BOOL)_shouldDisplayRouteAsPicked:(id)arg0 ;
-(BOOL)_wouldShareAudioForPickedRoute:(id)arg0 operation:(NSInteger)arg1 pickedRoutes:(id)arg2 ;
-(BOOL)hasCarKitRoute;
-(BOOL)isInVehicle;
-(BOOL)shouldGroupRoutingViewItems;
-(BOOL)shouldOverrideContentSizeCategory:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createRefreshUpdate;
-(id)_createReloadUpdate;
-(id)_createRoutingViewItemsForRoutes:(id)arg0 ;
-(id)_createSectionedCollection:(id)arg0 withPickedRoutes:(id)arg1 ;
-(id)_createVolumeSlider;
-(id)_displayAsPickedRoutesInRoutes:(id)arg0 ;
-(id)_displayableRoutesInRoutes:(id)arg0 ;
-(id)_stateDumpObject;
-(id)_volumeCapableRoutesInRoutes:(id)arg0 ;
-(id)endpointGroupUID;
-(id)groupUIDForRoute:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 routingController:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_applyUpdate:(id)arg0 ;
-(void)_beginRouteDiscovery;
-(void)_collapseAllGroups;
-(void)_configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_createUpdateWithCompletion:(id)arg0 ;
-(void)_diplayShareAudioDisabledAlertForReason:(id)arg0 ;
-(void)_endRouteDiscovery;
-(void)_endUpdates;
-(void)_enqueueUpdate:(id)arg0 ;
-(void)_initWithStyle:(NSUInteger)arg0 routingController:(id)arg1 ;
-(void)_registerCarPlayObserver;
-(void)_registerNotifications;
-(void)_setNeedsDisplayedRoutesUpdate;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setRouteDiscoveryMode:(NSInteger)arg0 ;
-(void)_setupUpdateTimerIfNecessary;
-(void)_unregisterNotifications;
-(void)_updateDisplayedRoutes;
-(void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)enqueueRefreshUpdate;
-(void)registerTableViewCells;
-(void)resetDisplayedRoutes;
-(void)resetScrollPosition;
-(void)routingCell:(id)arg0 mirroringSwitchValueDidChange:(BOOL)arg1 ;
-(void)routingCellDidTapToExpand:(id)arg0 ;
-(void)routingController:(id)arg0 didFailToPickRouteWithError:(id)arg1 ;
-(void)routingController:(id)arg0 pickedRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg0 shouldHijackRoute:(id)arg1 alertStyle:(NSInteger)arg2 busyRouteName:(id)arg3 presentingAppName:(id)arg4 completion:(id)arg5 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)setOptimisticUpdate:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateExpandedGroups;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif