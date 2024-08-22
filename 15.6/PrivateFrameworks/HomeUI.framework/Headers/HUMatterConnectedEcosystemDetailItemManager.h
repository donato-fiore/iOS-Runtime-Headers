// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMATTERCONNECTEDECOSYSTEMDETAILITEMMANAGER_H
#define HUMATTERCONNECTEDECOSYSTEMDETAILITEMMANAGER_H

@class HFItemManager, HMCHIPEcosystem, HFTransformItemProvider, HFItem;


#import "HUMatterConnectedEcosystemItemProvider.h"

@interface HUMatterConnectedEcosystemDetailItemManager : HFItemManager

@property (readonly, nonatomic) HMCHIPEcosystem *connectedEcosystem; // ivar: _connectedEcosystem
@property (retain, nonatomic) HFTransformItemProvider *connectedEcosystemAccessoryItemProvider; // ivar: _connectedEcosystemAccessoryItemProvider
@property (readonly, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedEcosystemItemProvider; // ivar: _connectedEcosystemItemProvider
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_roomForItem:(id)arg0 ;
-(id)initWithConnectedEcosystem:(id)arg0 connectedEcosystemItemProvider:(id)arg1 delegate:(id)arg2 ;


@end


#endif