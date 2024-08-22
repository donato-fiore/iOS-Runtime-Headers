// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONNECTEDECOSYSTEMSITEMMANAGER_H
#define HUCONNECTEDECOSYSTEMSITEMMANAGER_H

@class HFItemManager, HMAccessory, HFItem;


#import "HUConnectedEcosystemsItemProvider.h"

@interface HUConnectedEcosystemsItemManager : HFItemManager

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HUConnectedEcosystemsItemProvider *connectedEcosystemsItemProvider; // ivar: _connectedEcosystemsItemProvider
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem


+(id)connectedEcosystemsItemComparator:(SEL)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif