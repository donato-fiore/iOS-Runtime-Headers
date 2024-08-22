// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFNETWORKCONFIGURATIONGROUPITEMPROVIDER_H
#define HFNETWORKCONFIGURATIONGROUPITEMPROVIDER_H

@class NSMutableSet, HMHome;


#import "HFItemProvider.h"

@interface HFNetworkConfigurationGroupItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *groupItems; // ivar: _groupItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif