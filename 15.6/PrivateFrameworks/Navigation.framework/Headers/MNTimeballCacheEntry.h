// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTIMEBALLCACHEENTRY_H
#define MNTIMEBALLCACHEENTRY_H

@class NSString, NSDate;
@protocol MNJSONOutput;

#import <Foundation/Foundation.h>

#import "MNPlannedDestination.h"
#import "MNRouteUpdate.h"

@interface MNTimeballCacheEntry : NSObject <MNJSONOutput>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MNPlannedDestination *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastUpdate; // ivar: _lastUpdate
@property (retain, nonatomic) NSDate *nextUpdate; // ivar: _nextUpdate
@property (retain, nonatomic) MNRouteUpdate *routeUpdate; // ivar: _routeUpdate
@property (readonly) Class superclass;


-(id)jsonDictionary;


@end


#endif