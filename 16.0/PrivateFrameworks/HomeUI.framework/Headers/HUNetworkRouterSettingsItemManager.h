// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNETWORKROUTERSETTINGSITEMMANAGER_H
#define HUNETWORKROUTERSETTINGSITEMMANAGER_H

@class HFItemManager, HFItem, HFNetworkRouterItemProvider, HMHome;


#import "HUNetworkConfigurationItemListModule.h"

@interface HUNetworkRouterSettingsItemManager : HFItemManager

@property (retain, nonatomic) HFItem *homeProtectionItem; // ivar: _homeProtectionItem
@property (retain, nonatomic) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule; // ivar: _networkConfigurationItemListModule
@property (retain, nonatomic) HFNetworkRouterItemProvider *networkRouterItemProvider; // ivar: _networkRouterItemProvider
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome


+(id)_networkRouterItemComparator:(SEL)arg0 ;
-(BOOL)isItemNetworkRouterItem:(id)arg0 ;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;
-(id)networkRouterItemForProfile:(id)arg0 ;


@end


#endif