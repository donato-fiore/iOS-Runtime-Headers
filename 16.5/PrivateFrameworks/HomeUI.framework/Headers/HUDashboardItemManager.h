// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDITEMMANAGER_H
#define HUDASHBOARDITEMMANAGER_H

@class HFItemManager, HFAccessoryLikeItemProvider, HFReorderableHomeKitItemList, NSMutableDictionary, HFFakeMediaAccessoryItemProvider, NSSet, HFProgrammableSwitchItemProvider;
@protocol HUDashboardItemManagerDelegate;


#import "HUDashboardAccessoryTransformItemProvider.h"
#import "HUDashboardActionSetItemModule.h"
#import "HUBannerItemModule.h"
#import "HUDashboardCameraItemModule.h"
#import "HUDashboardContext.h"
#import "HUServicePlaceholderItemModule.h"
#import "HUStatusItemModule.h"
#import "HUDashboardTipModule.h"

@interface HUDashboardItemManager : HFItemManager

@property (retain, nonatomic) HFAccessoryLikeItemProvider *accessoryLikeItemProvider; // ivar: _accessoryLikeItemProvider
@property (retain, nonatomic) HUDashboardAccessoryTransformItemProvider *accessoryTransformItemProvider; // ivar: _accessoryTransformItemProvider
@property (retain, nonatomic) HUDashboardActionSetItemModule *actionSetItemModule; // ivar: _actionSetItemModule
@property (retain, nonatomic) HUBannerItemModule *bannerItemModule; // ivar: _bannerItemModule
@property (retain, nonatomic) HUDashboardCameraItemModule *cameraItemModule; // ivar: _cameraItemModule
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableFavoritesList; // ivar: _clientReorderableFavoritesList
@property (retain, nonatomic) NSMutableDictionary *clientReorderableServiceByTypeList; // ivar: _clientReorderableServiceByTypeList
@property (retain, nonatomic) NSMutableDictionary *clientReorderableServiceListByRoom; // ivar: _clientReorderableServiceListByRoom
@property (readonly, nonatomic) HUDashboardContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<HUDashboardItemManagerDelegate> *dashboardDelegate; // ivar: _dashboardDelegate
@property (retain, nonatomic) HFFakeMediaAccessoryItemProvider *fakeSpeakersAndTVsItemProvider; // ivar: _fakeSpeakersAndTVsItemProvider
@property (retain, nonatomic) HFAccessoryLikeItemProvider *favoritesItemProvider; // ivar: _favoritesItemProvider
@property (readonly, nonatomic) NSSet *homeMenuStatusItems;
@property (readonly, nonatomic) BOOL isEmptyDashboard;
@property (retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider; // ivar: _programmableSwitchItemProvider
@property (retain, nonatomic) HUServicePlaceholderItemModule *servicePlaceholderItemModule; // ivar: _servicePlaceholderItemModule
@property (retain, nonatomic) HFAccessoryLikeItemProvider *speakersAndTVsItemProvider; // ivar: _speakersAndTVsItemProvider
@property (retain, nonatomic) HUStatusItemModule *statusItemModule; // ivar: _statusItemModule
@property (retain, nonatomic) HUDashboardTipModule *tipItemModule; // ivar: _tipItemModule


-(BOOL)isHomeMenuStatusItem:(id)arg0 ;
-(id)_buildAccessoryCategorySectionsWithItems:(id)arg0 ;
-(id)_buildFavoritesSectionWithFavoriteItems:(id)arg0 ;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildNowPlayingSectionWithItems:(id)arg0 forRouteIdentifier:(id)arg1 ;
-(id)_buildRoomSectionsWithItems:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_buildStaticItemsForHome:(id)arg0 ;
-(id)_itemForSorting;
-(id)_itemSectionForRoom:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_itemsToUpdateWhenApplicationDidBecomeActive;
-(id)_sortedAccessoryTypeGroups;
-(id)buildItemForHomeKitObject:(id)arg0 ;
-(id)createRoomSectionsWithItems:(id)arg0 sectionIdentifierBlock:(id)arg1 ;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)itemModuleForSectionIdentifier:(id)arg0 ;
-(id)matchingItemForHomeKitObject:(id)arg0 ;
-(id)reorderableFavoritesList;
-(id)reorderableServiceListForRoom:(id)arg0 ;
-(id)reorderableServiceListForType:(id)arg0 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)homeDidUpdateApplicationData:(id)arg0 ;
-(void)setHome:(id)arg0 ;
-(void)setReorderableFavoritesList:(id)arg0 ;
-(void)setReorderableServiceList:(id)arg0 forRoom:(id)arg1 ;
-(void)setReorderableServiceList:(id)arg0 forType:(id)arg1 ;
-(void)updateItemSectionHeaderTitleForRoom:(id)arg0 ;


@end


#endif