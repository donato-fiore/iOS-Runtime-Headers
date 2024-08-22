// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMATTERCONNECTEDECOSYSTEMITEMPROVIDER_H
#define HUMATTERCONNECTEDECOSYSTEMITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, HMHome, NAFuture;



@interface HUMatterConnectedEcosystemItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *connectedEcosystemItems; // ivar: _connectedEcosystemItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NAFuture *partnerEcosystemAccessoryUUIDMapFuture; // ivar: _partnerEcosystemAccessoryUUIDMapFuture


-(id)initWithHome:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif