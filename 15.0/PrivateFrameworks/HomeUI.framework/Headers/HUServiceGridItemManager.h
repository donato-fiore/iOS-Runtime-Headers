// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSERVICEGRIDITEMMANAGER_H
#define HUSERVICEGRIDITEMMANAGER_H

@class HFItemManager, NSArray;



@interface HUServiceGridItemManager : HFItemManager

@property (readonly, nonatomic) NSInteger actionSetSectionIndex;
@property (retain, nonatomic) NSArray *cachedSortedRoomIdentifiers; // ivar: _cachedSortedRoomIdentifiers
@property (retain, nonatomic) NSArray *cachedSortedRooms; // ivar: _cachedSortedRooms
@property (copy, nonatomic) id *itemProvidersCreator; // ivar: _itemProvidersCreator
@property (nonatomic) BOOL shouldGroupByRoom; // ivar: _shouldGroupByRoom
@property (nonatomic) BOOL shouldShowSectionHeaders; // ivar: _shouldShowSectionHeaders


-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_roomComparator:(SEL)arg0 ;
-(id)_roomIdentifierForItem:(id)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_sortedRoomIdentifiers;
-(id)_sortedRooms;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiers;
-(id)currentSectionIdentifiersSnapshot;
-(id)initWithDelegate:(id)arg0 shouldGroupByRoom:(BOOL)arg1 itemProvidersCreator:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 shouldGroupByRoom:(BOOL)arg1 shouldShowSectionHeaders:(BOOL)arg2 itemProvidersCreator:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(id)arg4 ;
-(void)_willUpdateSections;


@end


#endif