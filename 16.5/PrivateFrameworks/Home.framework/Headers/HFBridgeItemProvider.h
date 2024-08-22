// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFBRIDGEITEMPROVIDER_H
#define HFBRIDGEITEMPROVIDER_H

@class NSMutableSet, HMHome;


#import "HFItemProvider.h"

@interface HFBridgeItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryItems; // ivar: _accessoryItems
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif