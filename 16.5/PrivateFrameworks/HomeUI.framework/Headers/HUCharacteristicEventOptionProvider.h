// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHARACTERISTICEVENTOPTIONPROVIDER_H
#define HUCHARACTERISTICEVENTOPTIONPROVIDER_H

@class HFItemProvider, HFCharacteristicEventBuilderItem, HMHome, NSMutableSet, HFItem<HFServiceVendor>;
@protocol HFCharacteristicValueSource;



@interface HUCharacteristicEventOptionProvider : HFItemProvider

@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *optionItems; // ivar: _optionItems
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *overrideValueSource; // ivar: _overrideValueSource
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem; // ivar: _serviceVendingItem


+(BOOL)hasOptionsForAnyServiceInHome:(id)arg0 ;
+(BOOL)hasOptionsForAnyServiceInHome:(id)arg0 allowingSensors:(BOOL)arg1 ;
+(BOOL)hasOptionsForServiceVendingItem:(id)arg0 outCharacteristicType:(*id)arg1 ;
+(BOOL)hasOptionsForServices:(id)arg0 outCharacteristicType:(*id)arg1 ;
+(BOOL)hasOptionsForServices:(id)arg0 outCharacteristicType:(*id)arg1 allowingSensors:(BOOL)arg2 ;
+(BOOL)homeHubUpdateRequiredForServices:(id)arg0 forHome:(id)arg1 ;
+(id)_characteristicTypesRequiringUpdatedHomeHubs;
+(id)_supportedCharacteristicTypes;
+(id)characteristicTypeWithOptionsForServices:(id)arg0 ;
-(id)_notifyingCharacteristicsKeyedByTypeForServices:(id)arg0 ;
-(id)_optionsForCharacteristicType:(id)arg0 characteristics:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithServiceVendingItem:(id)arg0 home:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
-(id)valueSource;
-(void)setValueSource:(id)arg0 ;


@end


#endif