// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHOMEKITACCESSORYSETTINGSITEMPROVIDER_H
#define HFHOMEKITACCESSORYSETTINGSITEMPROVIDER_H

@class NSUUID, NSArray, NSString, HMHomeManager, NSDictionary, NSMutableSet, HMAccessorySettingsController, HFItem<HFServiceLikeItem>;
@protocol HFHomeKitSettingItemProviderProtocol;


#import "HFItemProvider.h"

@interface HFHomeKitAccessorySettingsItemProvider : HFItemProvider <HFHomeKitSettingItemProviderProtocol>



@property (retain, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) NSArray *allKeyPaths; // ivar: _allKeyPaths
@property (copy, nonatomic) NSString *groupKeyPath; // ivar: _groupKeyPath
@property (retain, nonatomic) NSArray *homeKitKeyPaths; // ivar: _homeKitKeyPaths
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSArray *moduleSettings; // ivar: _moduleSettings
@property (retain, nonatomic) NSDictionary *nonHomeKitSettingsDictionary; // ivar: _nonHomeKitSettingsDictionary
@property (retain, nonatomic) NSMutableSet *settingItems; // ivar: _settingItems
@property (nonatomic) BOOL settingsAlreadyFetched; // ivar: _settingsAlreadyFetched
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceItem; // ivar: _sourceItem
@property (retain, nonatomic) NSDictionary *splitSettingsDictionary; // ivar: _splitSettingsDictionary
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


-(BOOL)shouldUpdateForKeyPaths:(id)arg0 ;
-(BOOL)updateSettings:(id)arg0 ;
-(id)_fetchSettingsAndReloadItems;
-(id)_generateAccessorySettingItemForSettings:(id)arg0 homeKitSettings:(id)arg1 keyPaths:(id)arg2 ;
-(id)_generateAccessorySettingItemForSettings:(id)arg0 keyPaths:(id)arg1 ;
-(id)_reloadItemsFromSettings:(id)arg0 performInitialUpdateOnItems:(BOOL)arg1 ;
-(id)initWithSettingsController:(id)arg0 sourceItem:(id)arg1 settingGroupKeyPath:(id)arg2 moduleSettings:(id)arg3 usageOptions:(id)arg4 ;
-(id)items;
-(id)reloadItems;
-(void)_subscribeToAccessorySettings:(id)arg0 ;
-(void)updateSettingValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif