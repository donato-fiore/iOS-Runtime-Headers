// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONCONNECTEDECOSYSTEMDETAILITEMMANAGER_H
#define HULOCATIONCONNECTEDECOSYSTEMDETAILITEMMANAGER_H

@class HFItemManager, HMCHIPHome, HFItem, HMHome;


#import "HULocationConnectedEcosystemDetailItemProvider.h"

@interface HULocationConnectedEcosystemDetailItemManager : HFItemManager

@property (readonly, nonatomic) HMCHIPHome *connectedEcosystemHome; // ivar: _connectedEcosystemHome
@property (retain, nonatomic) HULocationConnectedEcosystemDetailItemProvider *connectedEcosystemItemProvider; // ivar: _connectedEcosystemItemProvider
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_roomForItem:(id)arg0 ;
-(id)accessoryItemComparator:(SEL)arg0 ;
-(id)initWithConnectedEcosystemHome:(id)arg0 home:(id)arg1 delegate:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif