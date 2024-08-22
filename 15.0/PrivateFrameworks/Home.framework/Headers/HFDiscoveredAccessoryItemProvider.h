// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFDISCOVEREDACCESSORYITEMPROVIDER_H
#define HFDISCOVEREDACCESSORYITEMPROVIDER_H

@class NSMutableSet;


#import "HFItemProvider.h"
#import "HFAccessoryBrowsingManager.h"

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider

@property (readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // ivar: _accessoryBrowsingManager
@property (retain, nonatomic) NSMutableSet *discoveredAccessoryItems; // ivar: _discoveredAccessoryItems
@property (copy, nonatomic) id *filter; // ivar: _filter


-(id)init;
-(id)initWithAccessoryBrowsingManager:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif