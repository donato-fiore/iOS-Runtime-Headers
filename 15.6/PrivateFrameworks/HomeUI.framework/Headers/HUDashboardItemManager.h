// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDASHBOARDITEMMANAGER_H
#define HUDASHBOARDITEMMANAGER_H

@class HFItemManager, HFAccessoryItemProvider, HFCameraListItem, HFItem, HFReorderableHomeKitItemList, HFDemoModeAccessoryItemProvider, HFGenericAccessoryItemProvider, HFMediaAccessoryItemProvider, HFStaticItem, HFProgrammableSwitchItemProvider, HFActionSetListItem, HFServiceGroupItemProvider, HFServiceItemProvider, HFTargetControlItemProvider;
@protocol HUDashboardItemManagerDelegate;


#import "HUDashboardContext.h"

@interface HUDashboardItemManager : HFItemManager

@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider; // ivar: _accessoryItemProvider
@property (retain, nonatomic) HFCameraListItem *cameraListItem; // ivar: _cameraListItem
@property (retain, nonatomic) HFItem *cameraUpgradeOfferBannerItem; // ivar: _cameraUpgradeOfferBannerItem
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableCameraList; // ivar: _clientReorderableCameraList
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableServiceList; // ivar: _clientReorderableServiceList
@property (retain, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, weak, nonatomic) NSObject<HUDashboardItemManagerDelegate> *dashboardDelegate; // ivar: _dashboardDelegate
@property (retain, nonatomic) HFDemoModeAccessoryItemProvider *demoModeAccessoryItemProvider; // ivar: _demoModeAccessoryItemProvider
@property (nonatomic) BOOL forceHideMultiUserTokenFixBannerItem; // ivar: _forceHideMultiUserTokenFixBannerItem
@property (retain, nonatomic) HFGenericAccessoryItemProvider *genericItemProvider; // ivar: _genericItemProvider
@property (retain, nonatomic) HFItem *headlineItem; // ivar: _headlineItem
@property (retain, nonatomic) id *homeMediaAccount; // ivar: _homeMediaAccount
@property (retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider; // ivar: _mediaAccessoryItemProvider
@property (retain, nonatomic) HFItem *mediaServiceErrorBannerItem; // ivar: _mediaServiceErrorBannerItem
@property (retain, nonatomic) HFItem *multiUserTokenFixBannerItem; // ivar: _multiUserTokenFixBannerItem
@property (retain, nonatomic) HFStaticItem *placeholderSceneListItem; // ivar: _placeholderSceneListItem
@property (retain, nonatomic) HFItem *placeholderServicesListItem; // ivar: _placeholderServicesListItem
@property (retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider; // ivar: _programmableSwitchItemProvider
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableCameraList;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableServiceList;
@property (retain, nonatomic) HFActionSetListItem *sceneListItem; // ivar: _sceneListItem
@property (retain, nonatomic) HFServiceGroupItemProvider *serviceGroupItemProvider; // ivar: _serviceGroupItemProvider
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider; // ivar: _serviceItemProvider
@property (retain, nonatomic) HFItem *statusBannerItem; // ivar: _statusBannerItem
@property (retain, nonatomic) HFItem *statusListItem; // ivar: _statusListItem
@property (retain, nonatomic) HFTargetControlItemProvider *targetControlItemProvider; // ivar: _targetControlItemProvider
@property (retain, nonatomic) HFItem *welcomeUIBannerItem; // ivar: _welcomeUIBannerItem


-(BOOL)_requiresNotificationsForCharacteristic:(id)arg0 ;
-(BOOL)dashboardHasPlaceholderServiceOrSceneItems;
-(BOOL)hasVisibleServiceLikeItems;
-(BOOL)isEmptyDashboard;
-(BOOL)isEmptyHomeDashboard;
-(BOOL)isServiceLikeItemsAndCamerasEmpty;
-(BOOL)isStatusListVisible;
-(BOOL)shouldPerformInitialLoadOnMainThread;
-(NSUInteger)_numberOfSections;
-(NSUInteger)upgradeOfferCount;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildStatusBannerItemsIfNecessaryForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_currentSectionIdentifiers;
-(id)_descriptionBuilder;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_itemForSorting;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_itemsToUpdateWhenApplicationDidBecomeActive;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiersSnapshot;
-(id)description;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)upgradeOfferSheetContinueActionText;
-(id)upgradeOfferSheetMessage;
-(id)upgradeOfferSheetTitle;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_updateContextForHome:(id)arg0 room:(id)arg1 ;
-(void)_updateFilters;
-(void)_willUpdateSections;
-(void)home:(id)arg0 didUpdateWallpaperForRoom:(id)arg1 ;
-(void)homeDidUpdateWallpaper:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;


@end


#endif