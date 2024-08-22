// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONCONNECTEDECOSYSTEMSITEMPROVIDER_H
#define HULOCATIONCONNECTEDECOSYSTEMSITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, HMHome;



@interface HULocationConnectedEcosystemsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *connectedEcosystemsItems; // ivar: _connectedEcosystemsItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif