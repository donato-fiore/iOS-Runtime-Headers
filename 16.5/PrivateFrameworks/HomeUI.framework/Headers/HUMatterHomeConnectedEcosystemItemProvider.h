// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERHOMECONNECTEDECOSYSTEMITEMPROVIDER_H
#define HUMATTERHOMECONNECTEDECOSYSTEMITEMPROVIDER_H

@class NSMutableSet, NAFuture, HMHome;


#import "HUMatterConnectedEcosystemItemProvider.h"

@interface HUMatterHomeConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider

@property (retain, nonatomic) NSMutableSet *connectedEcosystemItems; // ivar: _connectedEcosystemItems
@property (readonly, nonatomic) NAFuture *ecosystemAccessoryUUIDMapFuture; // ivar: _ecosystemAccessoryUUIDMapFuture
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)initWithHome:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif