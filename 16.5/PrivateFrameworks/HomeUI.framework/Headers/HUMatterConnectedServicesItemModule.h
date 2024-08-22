// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERCONNECTEDSERVICESITEMMODULE_H
#define HUMATTERCONNECTEDSERVICESITEMMODULE_H

@class HFItemModule, HMAccessory, HFItem, HMHome;


#import "HUMatterConnectedEcosystemItemProvider.h"

@interface HUMatterConnectedServicesItemModule : HFItemModule

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedServicesItemProvider; // ivar: _connectedServicesItemProvider
@property (readonly, nonatomic) HFItem *connectedServicesListItem; // ivar: _connectedServicesListItem
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 accessory:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 accessory:(id)arg1 home:(id)arg2 itemProvider:(id)arg3 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;


@end


#endif