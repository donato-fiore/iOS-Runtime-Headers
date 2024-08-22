// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPFEATUREINTERSECTEDROADFINDER_H
#define GEOMAPFEATUREINTERSECTEDROADFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOMapFeatureMultiSegmentRoadFinder.h"

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;
}


@property (nonatomic) BOOL joinAllRoadsByMuid; // ivar: _joinAllRoadsByMuid


// -(id)_findRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 muid:(NSUInteger)arg2 featureToIgnore:(id)arg3 handler:(id)arg4 completionHandler:(unk)arg5  ;
// -(id)findRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsAtNextIntersectionOf:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsAtPreviousIntersectionOf:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findUnjoinedRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 muid:(NSUInteger)arg2 requireExactMuidMatch:(BOOL)arg3 featureToIgnore:(id)arg4 handler:(id)arg5 completionHandler:(unk)arg6  ;
-(void)_tilesBorderingTile:(struct _GEOTileKey )arg0 atPoint:(struct GeoCodecsVectorTilePoint )arg1 withHandler:(id)arg2 ;


@end


#endif