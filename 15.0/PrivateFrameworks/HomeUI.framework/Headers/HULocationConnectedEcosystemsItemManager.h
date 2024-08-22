// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONCONNECTEDECOSYSTEMSITEMMANAGER_H
#define HULOCATIONCONNECTEDECOSYSTEMSITEMMANAGER_H

@class HFItemManager, HFItem, HMHome;


#import "HULocationConnectedEcosystemsItemProvider.h"

@interface HULocationConnectedEcosystemsItemManager : HFItemManager

@property (retain, nonatomic) HULocationConnectedEcosystemsItemProvider *connectedEcosystemsItemProvider; // ivar: _connectedEcosystemsItemProvider
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome


+(id)connectedEcosystemsItemComparator:(SEL)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;


@end


#endif