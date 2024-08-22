// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSETTINGSPROFILEITEMPROVIDER_H
#define HUACCESSORYSETTINGSPROFILEITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, HFAccessorySettingManagedConfigurationAdapter, HMSettingGroup;



@interface HUAccessorySettingsProfileItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessorySettingsProfileItems; // ivar: _accessorySettingsProfileItems
@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter; // ivar: _adapter
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) HMSettingGroup *settingGroup; // ivar: _settingGroup


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAdapter:(id)arg0 settingGroup:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif