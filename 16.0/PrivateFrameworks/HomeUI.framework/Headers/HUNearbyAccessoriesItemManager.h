// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNEARBYACCESSORIESITEMMANAGER_H
#define HUNEARBYACCESSORIESITEMMANAGER_H

@class HFItemManager, NSDictionary, HMAccessory;



@interface HUNearbyAccessoriesItemManager : HFItemManager

@property (retain, nonatomic) NSDictionary *customNearbyAccessories; // ivar: _customNearbyAccessories
@property (retain, nonatomic) HMAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (nonatomic) BOOL supportsQuickControls; // ivar: _supportsQuickControls


+(id)itemProvidersForPrimaryAccessory:(id)arg0 inHome:(id)arg1 ;
-(BOOL)_isAPreferredServiceType:(id)arg0 ;
-(BOOL)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg0 ;
-(BOOL)hasCustomNearbyAccessories;
-(BOOL)hasEmptyNearbyAccessories;
-(BOOL)shouldHideItem:(id)arg0 ;
-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceProfileItem:(id)arg1 supportsQuickControls:(BOOL)arg2 ;
-(id)userFilteredIdentifiers;


@end


#endif