// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNETWORKCONFIGURATIONMISMATCHITEMMANAGER_H
#define HUNETWORKCONFIGURATIONMISMATCHITEMMANAGER_H

@class HFItemManager, HFNetworkConfigurationItemProvider, HMHome, NSSet;



@interface HUNetworkConfigurationMismatchItemManager : HFItemManager

@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider; // ivar: _networkConfigurationItemProvider
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (readonly, nonatomic) NSSet *profiles; // ivar: _profiles


-(BOOL)isItemNetworkConfigurationItem:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithProfiles:(id)arg0 delegate:(id)arg1 ;
-(id)networkConfigurationItemForProfile:(id)arg0 ;


@end


#endif