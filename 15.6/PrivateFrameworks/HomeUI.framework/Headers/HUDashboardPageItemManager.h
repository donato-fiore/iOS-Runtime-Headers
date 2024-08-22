// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDASHBOARDPAGEITEMMANAGER_H
#define HUDASHBOARDPAGEITEMMANAGER_H

@class HFItemManager, HFReorderableHomeKitItemList;



@interface HUDashboardPageItemManager : HFItemManager

@property (readonly, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_itemForSorting;


@end


#endif