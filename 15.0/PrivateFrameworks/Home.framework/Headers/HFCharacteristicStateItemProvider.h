// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHARACTERISTICSTATEITEMPROVIDER_H
#define HFCHARACTERISTICSTATEITEMPROVIDER_H

@class HMAccessory, NSSet, HMService;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFCharacteristicStateItemProvider : HFItemProvider

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSSet *batteryItems; // ivar: _batteryItems
@property (retain, nonatomic) NSSet *characteristicStateItems; // ivar: _characteristicStateItems
@property (readonly, nonatomic) HMService *service; // ivar: _service
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)_createBatteryItemWithSourceItem:(id)arg0 characteristicType:(id)arg1 valueFormatBlock:(id)arg2 ;
+(id)_setupCharacteristicStateItemForCharacteristic:(id)arg0 valueSource:(id)arg1 serviceType:(id)arg2 ;
+(id)standardCharacteristicTypes;
-(id)_reloadBatteryItems;
-(id)_reloadCharacteristicStateItems;
-(id)characteristicStateItemComparator:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithValueSource:(id)arg0 accessory:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 accessory:(id)arg1 service:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 service:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif