// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDACTIONSETITEMMANAGER_H
#define HUGRIDACTIONSETITEMMANAGER_H

@class HFItemManager, HFActionSetItemProvider, HFStaticItem, HFStaticItemProvider, HFReorderableHomeKitItemList, HMRoom;



@interface HUGridActionSetItemManager : HFItemManager

@property (retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider; // ivar: _actionSetItemProvider
@property (retain, nonatomic) HFStaticItem *actionSetPlaceholderItem; // ivar: _actionSetPlaceholderItem
@property (retain, nonatomic) HFStaticItemProvider *actionSetPlaceholderItemProvider; // ivar: _actionSetPlaceholderItemProvider
@property (readonly, nonatomic) NSUInteger actionSetStyle; // ivar: _actionSetStyle
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableActionSetList; // ivar: _clientReorderableActionSetList
@property (nonatomic) BOOL hideActionSetPlaceholderItem; // ivar: _hideActionSetPlaceholderItem
@property (nonatomic) BOOL onlyShowsFavorites; // ivar: _onlyShowsFavorites
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableActionSetList;
@property (retain, nonatomic) HMRoom *room; // ivar: _room


-(BOOL)_requiresNotificationsForCharacteristic:(id)arg0 ;
-(BOOL)isItemReorderableAtIndex:(id)arg0 ;
-(BOOL)shouldPerformInitialLoadOnMainThread;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_itemForSorting;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)actionSetItemAssociatedWithActionSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 actionSetStyle:(NSUInteger)arg1 room:(id)arg2 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_updateFilters;


@end


#endif