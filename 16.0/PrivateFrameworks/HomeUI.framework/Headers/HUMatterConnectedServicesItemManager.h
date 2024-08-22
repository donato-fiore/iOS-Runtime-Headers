// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMATTERCONNECTEDSERVICESITEMMANAGER_H
#define HUMATTERCONNECTEDSERVICESITEMMANAGER_H

@class HFItemManager, HMAccessory, HFItemProvider, HFItem;


#import "HUMatterConnectedEcosystemItemProvider.h"

@interface HUMatterConnectedServicesItemManager : HFItemManager

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedEcosystemItemProvider;
@property (retain, nonatomic) HFItemProvider *connectedServicesItemProvider; // ivar: _connectedServicesItemProvider
@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem


+(id)connectedServicesItemComparator:(SEL)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)connectedHomeItemProvider;
-(id)initWithConnectedServicesItemProvider:(id)arg0 delegate:(id)arg1 ;


@end


#endif