// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNETWORKCONFIGURATIONSETTINGSITEMMANAGER_H
#define HUNETWORKCONFIGURATIONSETTINGSITEMMANAGER_H

@class HFItemManager, HFNetworkConfigurationGroupItem;


#import "HUNetworkConfigurationSettingsModule.h"

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager

@property (retain, nonatomic) HUNetworkConfigurationSettingsModule *networkConfigurationSettingsModule; // ivar: _networkConfigurationSettingsModule
@property (readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceNetworkConfigurationGroupItem;


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 networkConfigurationGroupItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif