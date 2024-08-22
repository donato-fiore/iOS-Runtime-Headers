// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFRESIDENTDEVICEITEMPROVIDER_H
#define HFRESIDENTDEVICEITEMPROVIDER_H

@class HMHome, NSMutableSet;


#import "HFItemProvider.h"

@interface HFResidentDeviceItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *residentDeviceItems; // ivar: _residentDeviceItems


-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif