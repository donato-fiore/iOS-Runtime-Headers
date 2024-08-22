// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYSETTINGSITEMMODULE_H
#define HUACCESSORYSETTINGSITEMMODULE_H

@class NSSet, HMAccessory, HFAccessorySettingsItemProvider, NATreeNode, NSString, HFAccessorySettingsEntity, HMSettingGroup, HMSettings;
@protocol HFHomeKitSettingsObserver, HFMediaObjectObserver, HFHomeKitSettingsVendor;


#import "HUServiceDetailsItemModule.h"

@interface HUAccessorySettingsItemModule : HUServiceDetailsItemModule <HFHomeKitSettingsObserver, HFMediaObjectObserver>

 {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HFAccessorySettingsItemProvider *accessorySettingsItemProvider; // ivar: _accessorySettingsItemProvider
@property (readonly, nonatomic) NATreeNode *codex; // ivar: _codex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *groupItemsToBeDisplayed; // ivar: _groupItemsToBeDisplayed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (readonly, nonatomic) HFAccessorySettingsEntity *parentEntity; // ivar: _parentEntity
@property (readonly, nonatomic) HMSettingGroup *parentSettingGroup; // ivar: _parentSettingGroup
@property (retain, nonatomic) NSSet *settingItemsToBeDisplayed; // ivar: _settingItemsToBeDisplayed
@property (readonly, nonatomic) HMSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


-(BOOL)checkSoftwareVersionForAccessories:(id)arg0 neededSoftwareVersion:(id)arg1 ;
-(id)_itemSectionForGroup:(id)arg0 entity:(id)arg1 settingItems:(id)arg2 groupItems:(id)arg3 ;
-(id)_itemSectionWithEntity:(id)arg0 items:(id)arg1 ;
-(id)_itemSectionsForGroupKeyPaths:(id)arg0 ;
-(id)_itemSectionsForParentGroupWithItems;
-(id)_itemSectionsForShowInSeperateSectionItems:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)getAllHomePodFromItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithItemUpdater:(id)arg0 homeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg0 mediaAccessoryItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 settingGroupItem:(id)arg1 usageOptions:(id)arg2 ;
-(id)itemProviders;
-(id)updateItem:(id)arg0 withValue:(id)arg1 ;
-(void)_registerForAccessorySettingsUpdates;
-(void)_resetIfNeeded;
-(void)_unregisterForAccessorySettingsUpdates;
-(void)mediaObject:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)settingsDidUpdate:(id)arg0 ;
-(void)unregisterForExternalUpdates;
-(void)updateItems:(id)arg0 ;
-(void)updateItems:(id)arg0 matchingDependency:(id)arg1 ;
-(void)updateItemsForKeyPath:(id)arg0 ;


@end


#endif