// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONNECTEDECOSYSTEMSITEMPROVIDER_H
#define HUCONNECTEDECOSYSTEMSITEMPROVIDER_H

@class HFItemProvider, HMAccessory, NSMutableSet;



@interface HUConnectedEcosystemsItemProvider : HFItemProvider

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSMutableSet *connectedEcosystemsItems; // ivar: _connectedEcosystemsItems


-(id)init;
-(id)initWithAccessory:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif