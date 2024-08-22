// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUROOMACTIONSETLISTITEMMANAGER_H
#define HUROOMACTIONSETLISTITEMMANAGER_H

@class HFItemManager, NSArray;



@interface HURoomActionSetListItemManager : HFItemManager

@property (retain, nonatomic) NSArray *cachedSortedRooms; // ivar: _cachedSortedRooms


-(NSInteger)sectionIndexForRoomIdentifier:(id)arg0 ;
-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_currentSectionIdentifiers;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_roomComparator:(SEL)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_sortedRooms;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiersSnapshot;
-(void)_willUpdateSections;


@end


#endif