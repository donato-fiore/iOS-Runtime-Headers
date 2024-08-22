// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMATTERCONNECTEDHOMEITEMPROVIDER_H
#define HUMATTERCONNECTEDHOMEITEMPROVIDER_H

@class HFItemProvider, HMAccessory, NAFuture, NSMutableSet;



@interface HUMatterConnectedHomeItemProvider : HFItemProvider

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NAFuture *accessoryConnectedHomeToCHIPAccessoryPairingFuture; // ivar: _accessoryConnectedHomeToCHIPAccessoryPairingFuture
@property (retain, nonatomic) NSMutableSet *connectedHomeItems; // ivar: _connectedHomeItems
@property (readonly, nonatomic) NAFuture *connectedHomesFuture;


-(id)initWithAccessory:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif