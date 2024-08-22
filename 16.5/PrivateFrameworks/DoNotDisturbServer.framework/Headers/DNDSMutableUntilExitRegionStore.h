// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMUTABLEUNTILEXITREGIONSTORE_H
#define DNDSMUTABLEUNTILEXITREGIONSTORE_H

@class NSArray, CLRegion, NSNumber;


#import "DNDSUntilExitRegionStore.h"

@interface DNDSMutableUntilExitRegionStore : DNDSUntilExitRegionStore

@property (copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (copy, nonatomic) CLRegion *currentRegion;
@property (copy, nonatomic) NSNumber *hasActiveLifetimes;
@property (copy, nonatomic) NSNumber *regionEntered;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif