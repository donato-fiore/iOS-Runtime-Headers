// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNETWORKROUTERMANUALRECONFIGURATIONITEMMANAGER_H
#define HUNETWORKROUTERMANUALRECONFIGURATIONITEMMANAGER_H

@class HFItemManager, HFNetworkConfigurationItemProvider, HMHome;



@interface HUNetworkRouterManualReconfigurationItemManager : HFItemManager

@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider; // ivar: _networkConfigurationItemProvider
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome


-(BOOL)isItemNetworkConfigurationItem:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;
-(id)networkConfigurationItemForProfile:(id)arg0 ;


@end


#endif