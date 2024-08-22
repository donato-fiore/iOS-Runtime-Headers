// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEKITACCESSORYSETTINGSITEMMODULE_H
#define HUHOMEKITACCESSORYSETTINGSITEMMODULE_H

@class HFItemModule, NSSet, HFHomeKitAccessorySettingsItemProvider, HMHome, NSString, HMAccessorySettingsController, HFItem<HFServiceLikeItem>;
@protocol HFAccessorySettingsManagerProtocol;



@interface HUHomeKitAccessorySettingsItemModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HFHomeKitAccessorySettingsItemProvider *accessorySettingsItemProvider; // ivar: _accessorySettingsItemProvider
@property (retain, nonatomic) NSObject<HFAccessorySettingsManagerProtocol> *accessorySettingsManager; // ivar: _accessorySettingsManager
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isCollapsed; // ivar: _isCollapsed
@property (copy, nonatomic) NSString *settingGroupKeyPath; // ivar: _settingGroupKeyPath
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceItem; // ivar: _sourceItem


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithSettingsController:(id)arg0 itemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 settingGroupKeyPath:(id)arg4 isCollapsed:(BOOL)arg5 ;
-(id)itemProviders;
-(void)_buildItemProviders;


@end


#endif