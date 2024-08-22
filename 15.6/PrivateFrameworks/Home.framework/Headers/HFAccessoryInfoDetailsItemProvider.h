// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYINFODETAILSITEMPROVIDER_H
#define HFACCESSORYINFODETAILSITEMPROVIDER_H

@class HMAccessory, NSMutableSet, HMHome;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"
#import "HFAccessoryInfoItem.h"
#import "HFAccessoryNetworkInfoItem.h"

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider

@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSMutableSet *accessoryInfoDetailItems; // ivar: _accessoryInfoDetailItems
@property (readonly, nonatomic) HFAccessoryInfoItem *firmwareItem; // ivar: _firmwareItem
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFAccessoryNetworkInfoItem *networkItem; // ivar: _networkItem
@property (readonly, nonatomic) HFAccessoryInfoItem *softwareItem; // ivar: _softwareItem
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)_displayValueForCachedValue:(id)arg0 characteristicType:(id)arg1 accessoryInfoService:(id)arg2 ;
+(id)preferredCharacteristicOrderArray;
-(BOOL)canToggleAccessoryInfoItem:(id)arg0 ;
-(BOOL)supportsWiFiStrengthDisplay:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 accessory:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
-(void)toggleAccessoryInfoItem:(id)arg0 ;


@end


#endif