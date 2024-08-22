// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDASHBOARDLISTITEMMANAGER_H
#define HUDASHBOARDLISTITEMMANAGER_H

@class HFItemManager, HFItem, HFStaticItemProvider, HFRoomItemProvider;



@interface HUDashboardListItemManager : HFItemManager

@property (retain, nonatomic) HFItem *favoritesItem; // ivar: _favoritesItem
@property (retain, nonatomic) HFStaticItemProvider *favoritesItemProvider; // ivar: _favoritesItemProvider
@property (retain, nonatomic) HFRoomItemProvider *roomItemProvider; // ivar: _roomItemProvider


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;


@end


#endif