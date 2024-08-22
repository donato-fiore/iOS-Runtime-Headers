// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEGRIDITEMMANAGER_H
#define HUSERVICEGRIDITEMMANAGER_H

@class HFItemManager;



@interface HUServiceGridItemManager : HFItemManager

@property (nonatomic) NSInteger actionSetSectionIndex; // ivar: _actionSetSectionIndex
@property (copy, nonatomic) id *itemProvidersCreator; // ivar: _itemProvidersCreator
@property (nonatomic) BOOL shouldGroupByRoom; // ivar: _shouldGroupByRoom
@property (nonatomic) BOOL shouldShowSectionHeaders; // ivar: _shouldShowSectionHeaders


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_roomComparator:(SEL)arg0 ;
-(id)_roomForItem:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 shouldGroupByRoom:(BOOL)arg1 itemProvidersCreator:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 shouldGroupByRoom:(BOOL)arg1 shouldShowSectionHeaders:(BOOL)arg2 itemProvidersCreator:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(id)arg4 ;


@end


#endif