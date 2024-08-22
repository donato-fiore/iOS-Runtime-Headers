// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSIRISETTINGSDETAILSITEMMANAGER_H
#define HUSIRISETTINGSDETAILSITEMMANAGER_H

@class HFItemManager, NSString, NSArray, HMAccessorySettingsController, HFHomeKitAccessorySettingsItemProvider;
@protocol HFHomeKitAccessorySettingsDataSourceDelegate;


#import "HUHomeKitAccessorySettingsItemModule.h"

@interface HUSiriSettingsDetailsItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsModules; // ivar: _homeKitAccessorySettingsModules
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *module; // ivar: _module
@property (retain, nonatomic) NSString *settingGroupKeyPath; // ivar: _settingGroupKeyPath
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (retain, nonatomic) HFHomeKitAccessorySettingsItemProvider *siriSettingsItemProvider; // ivar: _siriSettingsItemProvider
@property (readonly) Class superclass;


-(BOOL)_shouldSkipModuleCreationForGroupKeyPath:(id)arg0 ;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 module:(id)arg1 ;
-(id)updateSettingItem:(id)arg0 withValue:(id)arg1 ;


@end


#endif