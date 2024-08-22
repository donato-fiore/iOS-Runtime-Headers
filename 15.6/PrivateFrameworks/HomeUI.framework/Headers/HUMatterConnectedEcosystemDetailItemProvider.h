// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMATTERCONNECTEDECOSYSTEMDETAILITEMPROVIDER_H
#define HUMATTERCONNECTEDECOSYSTEMDETAILITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, HMCHIPEcosystem, HMHome;


#import "HUMatterConnectedEcosystemItemProvider.h"

@interface HUMatterConnectedEcosystemDetailItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems; // ivar: _allItems
@property (retain, nonatomic) HMCHIPEcosystem *connectedEcosystem; // ivar: _connectedEcosystem
@property (retain, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedEcosystemItemProvider; // ivar: _connectedEcosystemItemProvider
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)initWithConnectedEcosystem:(id)arg0 connectedEcosystemItemProvider:(id)arg1 home:(id)arg2 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif