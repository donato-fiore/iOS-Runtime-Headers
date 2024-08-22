// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNETWORKPROTECTIONMODEOPTIONITEMPROVIDER_H
#define HUNETWORKPROTECTIONMODEOPTIONITEMPROVIDER_H

@class HFItemProvider, HMAccessoryNetworkProtectionGroup, NSMutableSet;



@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider

@property (readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group; // ivar: _group
@property (retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems; // ivar: _networkProtectionModeOptionItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithGroup:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif