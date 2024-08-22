// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONCONNECTEDECOSYSTEMDETAILITEMPROVIDER_H
#define HULOCATIONCONNECTEDECOSYSTEMDETAILITEMPROVIDER_H

@class HFItemProvider, NSMutableSet, HMCHIPHome, HMHome;



@interface HULocationConnectedEcosystemDetailItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems; // ivar: _allItems
@property (retain, nonatomic) HMCHIPHome *connectedEcosystemHome; // ivar: _connectedEcosystemHome
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)init;
-(id)initWithConnectedEcosystemHome:(id)arg0 home:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif