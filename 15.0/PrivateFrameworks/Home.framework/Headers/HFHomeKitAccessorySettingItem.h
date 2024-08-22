// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFHOMEKITACCESSORYSETTINGITEM_H
#define HFHOMEKITACCESSORYSETTINGITEM_H

@class NSUUID, NSString, HMImmutableSetting, NSDictionary, HMAccessorySettingsController, HFItem<HFServiceLikeItem>;


#import "HFItem.h"

@interface HFHomeKitAccessorySettingItem : HFItem

@property (retain, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) id *cachedSettingValue; // ivar: _cachedSettingValue
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic) NSUInteger displayIndex; // ivar: _displayIndex
@property (retain, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (nonatomic) BOOL isControllable; // ivar: _isControllable
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) HMImmutableSetting *setting; // ivar: _setting
@property (retain, nonatomic) NSDictionary *settingDict; // ivar: _settingDict
@property (copy, nonatomic) NSString *settingKeyPath; // ivar: _settingKeyPath
@property (readonly, nonatomic) id *settingValue;
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceItem; // ivar: _sourceItem
@property (readonly, copy, nonatomic) NSString *targetSettingKeyPath;
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions
@property (nonatomic) NSInteger userInterfaceType; // ivar: _userInterfaceType


-(BOOL)updateSetting:(id)arg0 ;
-(id)_formattedValueForSetting;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDefaultSetting:(id)arg0 localizedTitle:(id)arg1 settingsController:(id)arg2 homeIdentifier:(id)arg3 accessoryIdentifier:(id)arg4 settingDict:(id)arg5 usageOptions:(id)arg6 ;
-(id)initWithSetting:(id)arg0 localizedTitle:(id)arg1 settingsController:(id)arg2 homeIdentifier:(id)arg3 accessoryIdentifier:(id)arg4 settingDict:(id)arg5 usageOptions:(id)arg6 ;
-(id)initWithSettingsController:(id)arg0 localizedTitle:(id)arg1 homeIdentifier:(id)arg2 accessoryIdentifier:(id)arg3 settingDict:(id)arg4 usageOptions:(id)arg5 ;
-(id)initWithSourceItem:(id)arg0 localizedTitle:(id)arg1 settingsController:(id)arg2 homeIdentifier:(id)arg3 accessoryIdentifier:(id)arg4 settingDict:(id)arg5 usageOptions:(id)arg6 ;
-(id)updateValue:(id)arg0 ;
-(void)_decorateOutcomeWithResultKeys:(id)arg0 ;
-(void)updateSettingValue:(id)arg0 ;


@end


#endif