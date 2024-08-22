// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUAIRPLAYSETTINGSDETAILSITEMMANAGER_H
#define HUAIRPLAYSETTINGSDETAILSITEMMANAGER_H

@class HFItemManager, NSMutableSet, NSArray, NSString, HMAccessorySettingsController;


#import "HUHomeKitAccessorySettingsItemModule.h"

@interface HUAirPlaySettingsDetailsItemManager : HFItemManager

@property (retain, nonatomic) NSMutableSet *allItemProviders; // ivar: _allItemProviders
@property (retain, nonatomic) NSArray *dependentSettingItems; // ivar: _dependentSettingItems
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsModules; // ivar: _homeKitAccessorySettingsModules
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *module; // ivar: _module
@property (retain, nonatomic) NSString *settingGroupKeyPath; // ivar: _settingGroupKeyPath
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController


-(BOOL)_shouldHideModuleHavingGroupKeyPath:(id)arg0 ;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 module:(id)arg1 ;
-(id)updateSettingItem:(id)arg0 withValue:(id)arg1 ;
-(void)_subscribeToAccessorySettings:(id)arg0 ;


@end


#endif