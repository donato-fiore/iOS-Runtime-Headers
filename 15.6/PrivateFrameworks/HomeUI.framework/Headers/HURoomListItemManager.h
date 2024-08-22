// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUROOMLISTITEMMANAGER_H
#define HUROOMLISTITEMMANAGER_H

@class HFItemManager, HFItem, HFReorderableHomeKitItemList;



@interface HURoomListItemManager : HFItemManager

@property (retain, nonatomic) HFItem *addRoomItem; // ivar: _addRoomItem
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableRoomList; // ivar: _clientReorderableRoomList
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList;
@property (readonly, nonatomic) NSInteger roomsSection;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;


@end


#endif