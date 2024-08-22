// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERACCESSORYCONNECTEDECOSYSTEMITEMPROVIDER_H
#define HUMATTERACCESSORYCONNECTEDECOSYSTEMITEMPROVIDER_H

@class HMAccessory, NAFuture, NSMutableSet;


#import "HUMatterConnectedEcosystemItemProvider.h"
#import "HUMatterConnectedHomeItemProvider.h"

@interface HUMatterAccessoryConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NAFuture *accessoryConnectedEcosystemToCHIPAccessoryPairingsFuture; // ivar: _accessoryConnectedEcosystemToCHIPAccessoryPairingsFuture
@property (retain, nonatomic) NSMutableSet *connectedEcosystemItems; // ivar: _connectedEcosystemItems
@property (readonly, nonatomic) NAFuture *connectedEcosystemsFuture;
@property (retain, nonatomic) HUMatterConnectedHomeItemProvider *connectedHomeItemProvider; // ivar: _connectedHomeItemProvider


-(id)initWithAccessory:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif