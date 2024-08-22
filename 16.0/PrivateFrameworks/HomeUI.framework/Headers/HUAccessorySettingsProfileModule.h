// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYSETTINGSPROFILEMODULE_H
#define HUACCESSORYSETTINGSPROFILEMODULE_H

@class HFItemModule, HFAccessorySettingManagedConfigurationAdapter, NSString, HFAccessorySettingGroupItem;
@protocol HFAccessorySettingManagedConfigurationAdapterObserver, HUAccessorySettingsProfileModuleDelegate;


#import "HUAccessorySettingsProfileItemProvider.h"

@interface HUAccessorySettingsProfileModule : HFItemModule <HFAccessorySettingManagedConfigurationAdapterObserver>



@property (readonly, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter; // ivar: _adapter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAccessorySettingsProfileModuleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAccessorySettingsProfileItemProvider *profileItemProvider; // ivar: _profileItemProvider
@property (readonly, nonatomic) HFAccessorySettingGroupItem *settingGroupItem; // ivar: _settingGroupItem
@property (readonly) Class superclass;


-(id)_actuallyRemoveProfileItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 settingGroupItem:(id)arg1 ;
-(id)itemProviders;
-(id)promptForRemoveProfileItem:(id)arg0 ;
-(void)managedConfigurationAdapterSettingsWereUpdated:(id)arg0 ;


@end


#endif