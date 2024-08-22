// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WGWIDGETDISCOVERYCONTROLLER_H
#define WGWIDGETDISCOVERYCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSArray, NSPointerArray, NSString;
@protocol WGWidgetDataSourceObserver, WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate, LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue, WGWidgetDebugging, WGWidgetDiscoveryControllerDelegate;

#import <Foundation/Foundation.h>

#import "WGWidgetPersistentStateController.h"
#import "WGWidgetStatsController.h"
#import "WGWidgetListEditViewController.h"

@interface WGWidgetDiscoveryController : NSObject <WGWidgetDataSourceObserver, WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate, LSApplicationWorkspaceObserverProtocol>

 {
    NSMutableDictionary *_archive;
    NSObject<OS_dispatch_queue> *_archiveWriteQueue;
    NSMutableSet *_defaultEnabledIDs;
    NSMutableDictionary *_identifiersToDataSources;
    NSMutableDictionary *_identifiersToDatums;
    NSMutableDictionary *_dataSourceIdentifiersToDatumIdentifiers;
    NSMutableDictionary *_identifiersToWidgetInfos;
    NSMutableArray *_orderedEnabledTodayIdentifiers;
    NSArray *_orderedVisibleTodayIdentifiers;
    NSMutableArray *_orderedEnabledWidgetsIdentifiers;
    NSArray *_orderedVisibleWidgetsIdentifiers;
    NSPointerArray *_observers;
    WGWidgetPersistentStateController *_persistentStateController;
    WGWidgetStatsController *_statsController;
    NSObject<OS_dispatch_queue> *_newWidgetsCountPostQueue;
    BOOL _shouldPurgeNonCAMLSnapshots;
    BOOL _shouldPurgeNonASTCSnapshots;
}


@property (nonatomic) BOOL bootstrapFavoriteWidgets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetDebugging> *debuggingHandler; // ivar: _debuggingHandler
@property (weak, nonatomic) NSObject<WGWidgetDiscoveryControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic, setter=_setPresentedEditViewController:) WGWidgetListEditViewController *presentedEditViewController; // ivar: _presentedEditViewController
@property (retain, nonatomic, getter=_presentedEditViewControllerStatusBarAssertion, setter=_setPresentedEditViewControllerStatusBarAssertion:) id *presentedEditViewControllerStatusBarAssertion; // ivar: _presentedEditViewControllerStatusBarAssertion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *widgetIDsToPendingTestCompletions; // ivar: _widgetIDsToPendingTestCompletions
@property (retain, nonatomic) NSMutableDictionary *widgetIDsToPendingTestTearDowns; // ivar: _widgetIDsToPendingTestTearDowns
@property (readonly, nonatomic, getter=_widgetIDsToWidgets) NSMutableDictionary *widgetIDsToWidgets; // ivar: _widgetIDsToWidgets


+(NSInteger)layoutModeForSize:(struct CGSize )arg0 ;
-(BOOL)_isApplicationLockedOutWithProxy:(id)arg0 ;
-(BOOL)_isElementWithIdentifierEnabled:(id)arg0 ;
-(BOOL)_isElementWithIdentifierFavorited:(id)arg0 ;
-(BOOL)_isElementWithIdentifierKnown:(id)arg0 ;
-(BOOL)_setEnabled:(BOOL)arg0 forElementWithIdentifier:(id)arg1 ;
-(BOOL)alwaysShowsFavoriteWidgets;
-(BOOL)areWidgetsPinned;
-(BOOL)areWidgetsPinnedForWidgetListEditViewController:(id)arg0 ;
-(BOOL)isElementWithIdentifierFavorited:(id)arg0 ;
-(BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg0 ;
-(BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg0 ;
-(BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg0 ;
-(BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg0 ;
-(BOOL)shouldShowWidgetsPinButtonForWidgetListEditViewController:(id)arg0 ;
-(BOOL)shouldShowWidgetsPinningTeachingView;
-(BOOL)widgetListEditViewController:(id)arg0 isItemWithIdentifierEnabled:(id)arg1 ;
-(BOOL)widgetListEditViewController:(id)arg0 isItemWithIdentifierFavorited:(id)arg1 ;
-(BOOL)widgetListEditViewController:(id)arg0 isItemWithIdentifierNew:(id)arg1 ;
-(BOOL)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg0 ;
-(BOOL)widgetListEditViewControllerShouldShowFavorites:(id)arg0 ;
-(NSInteger)_widgetListEditViewControllerStatusBarLegibilityStyle;
-(NSInteger)largestAvailableDisplayModeForWidget:(id)arg0 ;
-(NSInteger)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg0 ;
-(NSInteger)layoutModeForWidgetListEditViewController:(id)arg0 ;
-(NSInteger)userSpecifiedDisplayModeForWidget:(id)arg0 ;
-(NSInteger)userSpecifiedDisplayModeForWidgetWithIdentifier:(id)arg0 ;
-(NSUInteger)visibleWidgetsCount;
-(id)_defaultGroupForWidgetWithIdentifier:(id)arg0 ;
-(id)_disabledIdentifiers;
-(id)_groupForWidgetWithIdentifier:(id)arg0 ;
-(id)_insertWidgetWithIdentifier:(id)arg0 atTop:(BOOL)arg1 ;
-(id)_newWidgetListEditViewController;
-(id)_newWidgetListEditViewControllerStatusBarAssertion;
-(id)_newWidgetWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)_orderedEnabledIdentifiersForGroup:(id)arg0 ;
-(id)_orderedEnabledWidgetIdentifiersForGroup:(id)arg0 includingNoContent:(BOOL)arg1 ;
-(id)_orderedVisibleIdentifiersForGroup:(id)arg0 ;
-(id)_orderedVisibleIdentifiersForTodayGroup;
-(id)_orderedVisibleIdentifiersForWidgetGroup;
-(id)_preferredViewControllerForPresentingFromViewController:(id)arg0 ;
-(id)_updatePublicationStateOfDatumWithIdentifier:(id)arg0 visibilityChanged:(BOOL)arg1 contentStateChanged:(BOOL)arg2 insertAtTop:(BOOL)arg3 notifyingObservers:(BOOL)arg4 ;
-(id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg0 ;
-(id)disabledWidgetIdentifiers;
-(id)enabledWidgetIdentifiersForAllGroups;
-(id)favoriteWidgetIdentifiers;
-(id)groupsForWidgetListEditViewController:(id)arg0 ;
-(id)init;
-(id)todayWidgetIdentifiers;
-(id)visibleWidgetIdentifiersForGroup:(id)arg0 ;
-(id)widgetListEditViewController:(id)arg0 defaultGroupForItemWithIdentifier:(id)arg1 ;
-(id)widgetListEditViewController:(id)arg0 displayNameForItemWithIdentifier:(id)arg1 ;
-(id)widgetListEditViewController:(id)arg0 itemIdentifiersForGroup:(id)arg1 ;
-(id)widgetWithIdentifier:(id)arg0 delegate:(id)arg1 forRequesterWithIdentifier:(id)arg2 ;
-(int)_nextSequenceNumber;
-(void)_addDefaultPinnedWidgets;
-(void)_applicationIconChanged:(id)arg0 ;
-(void)_beginObservingDataSourcesIfNecessary;
-(void)_calculateAndPostNewWidgetsCount;
-(void)_dataSourcesDidChange:(id)arg0 ;
-(void)_externalSourceRequestsInsertionOfWidgetWithIdentifier:(id)arg0 insertAtTop:(BOOL)arg1 ;
-(void)_invalidateVisibleIdentifiersForGroup:(id)arg0 ;
-(void)_invalidateWidgetListEditViewControllerStatusBarAssertion:(id)arg0 ;
-(void)_notifyObserversOfOrderChangeForWidgetIdentifiers:(id)arg0 ;
-(void)_notifyObserversOfSignificantWidgetsChange;
-(void)_notifyObserversOfVisibilityChange:(BOOL)arg0 ofWidgetWithIdentifier:(id)arg1 inGroup:(id)arg2 ;
-(void)_removeWidgetWithIdentifier:(id)arg0 ;
-(void)_requestUnlockWithCompletion:(id)arg0 ;
-(void)_setWidgetsPinned:(BOOL)arg0 ;
-(void)_updateFavoriteWidgetIDs:(id)arg0 ;
-(void)_updateLockedOutStateForWidget:(id)arg0 ;
-(void)_updateLockedOutStateForWidget:(id)arg0 withContainingAppProxy:(id)arg1 ;
-(void)_widget:(id)arg0 withIdentifier:(id)arg1 didRemoveSnapshotAtURL:(id)arg2 ;
-(void)_widgetListEditViewControllerWillDisappear:(id)arg0 ;
-(void)_widgetViewControllerDidRemoveSnapshot:(id)arg0 ;
-(void)_widgetViewControllerRequestsAdd:(id)arg0 ;
-(void)addDiscoveryObserver:(id)arg0 ;
-(void)beginDiscovery;
-(void)debugWidgetWithBundleID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)deviceManagementPolicyDidChange:(id)arg0 ;
-(void)dismissWidgetListEditViewController:(id)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)dismissWidgetListEditViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleWidgetLaunchRecommendation:(id)arg0 completion:(id)arg1 ;
-(void)invalidateVisibleIdentifiers;
-(void)noteWidgetsPinningViewControllerDidDismiss:(BOOL)arg0 ;
-(void)presentWidgetListEditViewControllerFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)registerIdentifierForRefreshEvents:(id)arg0 ;
-(void)remoteViewControllerDidConnectForWidgetViewController:(id)arg0 ;
-(void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg0 ;
-(void)removeDiscoveryObserver:(id)arg0 ;
-(void)removeWidgetIdentifiersFromToday:(id)arg0 ;
-(void)requestRefreshForWidget:(id)arg0 afterDate:(id)arg1 ;
-(void)setHasContent:(BOOL)arg0 forWidgetWithIdentifier:(id)arg1 ;
-(void)setLargestAvailableDisplayMode:(NSInteger)arg0 forWidgetWithIdentifier:(id)arg1 ;
-(void)setUserSpecifiedDisplayMode:(NSInteger)arg0 forWidgetWithIdentifier:(id)arg1 ;
-(void)setWidgetLoggingEnabled:(BOOL)arg0 ;
-(void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg0 ;
-(void)unregisterIdentifierForRefreshEvents:(id)arg0 ;
-(void)widget:(id)arg0 didChangeLargestAvailableDisplayMode:(NSInteger)arg1 ;
-(void)widget:(id)arg0 didChangeUserSpecifiedDisplayMode:(NSInteger)arg1 ;
-(void)widget:(id)arg0 didEncounterProblematicSnapshotAtURL:(id)arg1 ;
-(void)widget:(id)arg0 didRemoveSnapshotAtURL:(id)arg1 ;
-(void)widgetDataSource:(id)arg0 removeDatum:(id)arg1 ;
-(void)widgetDataSource:(id)arg0 replaceWithDatum:(id)arg1 ;
-(void)widgetEditListViewController:(id)arg0 traitCollectionDidChange:(id)arg1 ;
-(void)widgetListEditViewController:(id)arg0 acknowledgeInterfaceItemsWithIdentifiers:(id)arg1 ;
-(void)widgetListEditViewController:(id)arg0 didChangeWidgetsPinning:(BOOL)arg1 ;
-(void)widgetListEditViewController:(id)arg0 didReorderItemsWithIdentifiersInGroups:(id)arg1 ;
-(void)widgetListEditViewController:(id)arg0 requestsIconForItemWithIdentifier:(id)arg1 withHandler:(id)arg2 ;
-(void)widgetListEditViewController:(id)arg0 setEnabled:(BOOL)arg1 forItemsWithIdentifiers:(id)arg2 ;
-(void)widgetListEditViewController:(id)arg0 updateFavoritesToIdentifiers:(id)arg1 ;
-(void)widgetViewControllerNeedsToBeRegisteredForRefreshNotification:(id)arg0 ;
-(void)widgetViewControllerNeedsToBeUnregisteredForRefreshNotification:(id)arg0 ;


@end


#endif