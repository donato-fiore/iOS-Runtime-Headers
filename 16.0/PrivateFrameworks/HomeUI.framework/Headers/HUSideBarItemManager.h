// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSIDEBARITEMMANAGER_H
#define HUSIDEBARITEMMANAGER_H

@class HFItemManager, HFAccessoryCategoryStatusItemProvider, NSString, NSDictionary, HFReorderableHomeKitItemList, HFRoomItemProvider, HFStaticItemProvider;
@protocol HFHomeManagerObserver;


#import "HUSideBarStaticItem.h"

@interface HUSideBarItemManager : HFItemManager <HFHomeManagerObserver>



@property (retain, nonatomic) HUSideBarStaticItem *automationItem; // ivar: _automationItem
@property (retain, nonatomic) HFAccessoryCategoryStatusItemProvider *categoryItemProvider; // ivar: _categoryItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *discoverContentAvailabilityDictionary; // ivar: _discoverContentAvailabilityDictionary
@property (retain, nonatomic) HUSideBarStaticItem *discoverItem; // ivar: _discoverItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUSideBarStaticItem *homeItem; // ivar: _homeItem
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList; // ivar: _reorderableRoomList
@property (retain, nonatomic) HFRoomItemProvider *roomItemProvider; // ivar: _roomItemProvider
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)allItems;
-(id)categoryItemForCategory:(id)arg0 ;
-(id)getLearnItemAvailabilityDictionary;
-(id)initWithDelegate:(id)arg0 ;
-(id)roomItemForRoom:(id)arg0 ;
-(id)roomItems;
-(id)sortedCategoryItems;
-(id)sortedRoomItems;


@end


#endif