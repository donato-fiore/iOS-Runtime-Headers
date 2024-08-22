// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERCONNECTEDSERVICESITEMMANAGER_H
#define HUMATTERCONNECTEDSERVICESITEMMANAGER_H

@class HFItemManager, HMAccessory, HFItem;


#import "HUMatterHomeConnectedEcosystemItemProvider.h"
#import "HUMatterConnectedEcosystemItemProvider.h"

@interface HUMatterConnectedServicesItemManager : HFItemManager

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HUMatterHomeConnectedEcosystemItemProvider *connectedHomeEcosystemItemProvider;
@property (retain, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedServicesItemProvider; // ivar: _connectedServicesItemProvider
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem


+(id)connectedServicesItemComparator:(SEL)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)connectedAccessoryEcosystemItemProvider;
-(id)initWithConnectedServicesItemProvider:(id)arg0 delegate:(id)arg1 ;


@end


#endif