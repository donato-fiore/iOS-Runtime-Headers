// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHREGIONAFFINITYGROUP_H
#define SHREGIONAFFINITYGROUP_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "SHAffinityGroup.h"

@interface SHRegionAffinityGroup : NSObject

@property (readonly, nonatomic) SHAffinityGroup *affinityGroup; // ivar: _affinityGroup
@property (readonly, nonatomic) NSDictionary *geohashKeyedRegions; // ivar: _geohashKeyedRegions
@property (readonly, nonatomic) NSArray *regions; // ivar: _regions


-(id)initWithRegions:(id)arg0 affinityGroup:(id)arg1 ;
-(id)regionsForGeohash:(id)arg0 ;


@end


#endif