// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKVENUEBUILDINGFEATUREMARKER_H
#define VKVENUEBUILDINGFEATUREMARKER_H

@class NSDictionary, NSArray;


#import "VKMarker.h"

@interface VKVenueBuildingFeatureMarker : VKMarker {
    BOOL _localize;
}


@property (readonly, nonatomic) NSUInteger buildingId;
@property (readonly, nonatomic) NSUInteger businessId;
@property (readonly, nonatomic) NSDictionary *floorNames;
@property (readonly, nonatomic) NSArray *floorOrdinals;
@property (readonly, nonatomic) NSDictionary *shortFloorNames;


-(*void)venueBuildingFeatureMarker;
-(id)initWithVenueBuilding:(*void)arg0 localize:(BOOL)arg1 ;
-(struct ? )nearestFramingPositionToLocation:(struct ? )arg0 ;


@end


#endif