// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBACCESSORYLISTITEMMANAGER_H
#define HUHOMEHUBACCESSORYLISTITEMMANAGER_H

@class HFItemManager, NSSet;



@interface HUHomeHubAccessoryListItemManager : HFItemManager

@property (retain, nonatomic) NSSet *accessories; // ivar: _accessories


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemForAccessory:(id)arg0 ;
-(id)initWithAccessories:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif