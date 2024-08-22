// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHTIMEANDPLACEAFFINITYGROUP_H
#define SHTIMEANDPLACEAFFINITYGROUP_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "SHAffinityGroup.h"

@interface SHTimeAndPlaceAffinityGroup : NSObject

@property (readonly, nonatomic) SHAffinityGroup *affinityGroup; // ivar: _affinityGroup
@property (readonly, nonatomic) NSDictionary *geohashKeyedRegions; // ivar: _geohashKeyedRegions
@property (readonly, nonatomic) NSArray *regions; // ivar: _regions


-(id)initWithRegions:(id)arg0 affinityGroup:(id)arg1 ;
-(id)regionsForGeohash:(id)arg0 ;


@end


#endif