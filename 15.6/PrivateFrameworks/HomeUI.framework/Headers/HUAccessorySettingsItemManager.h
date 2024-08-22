// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYSETTINGSITEMMANAGER_H
#define HUACCESSORYSETTINGSITEMMANAGER_H

@class HFItemManager, HFAccessorySettingGroupItem;


#import "HUAccessorySettingsItemModule.h"

@interface HUAccessorySettingsItemManager : HFItemManager

@property (retain, nonatomic) HUAccessorySettingsItemModule *accessorySettingsSectionItemModule; // ivar: _accessorySettingsSectionItemModule
@property (retain, nonatomic) HFAccessorySettingGroupItem *groupItem; // ivar: _groupItem


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 accessoryGroupItem:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif