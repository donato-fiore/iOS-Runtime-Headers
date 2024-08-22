// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREINTERSECTEDROADFINDER_H
#define GEOMAPFEATUREINTERSECTEDROADFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOMapFeatureMultiSegmentRoadFinder.h"

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;
}




// -(id)_findRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 muid:(NSUInteger)arg2 featuresToIgnore:(id)arg3 handler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)_intersectedRoadsInAdjacentTile:(id)arg0 tileBorderPoint:(struct GeoCodecsVectorTilePoint )arg1 junction:(id)arg2 desiredRoadDirectionality:(NSUInteger)arg3 muid:(NSUInteger)arg4 requireExactMuidMatch:(BOOL)arg5 featuresToIgnore:(id)arg6 shouldStop:(*BOOL)arg7 ;
-(id)_old_intersectedRoadsInAdjacentTile:(id)arg0 tileBorderPoint:(struct GeoCodecsVectorTilePoint )arg1 junction:(id)arg2 desiredRoadDirectionality:(NSUInteger)arg3 featuresToIgnore:(id)arg4 ;
// -(id)findRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsAtNextIntersectionOf:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsAtPreviousIntersectionOf:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findUnjoinedRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 muid:(NSUInteger)arg2 requireExactMuidMatch:(BOOL)arg3 featuresToIgnore:(id)arg4 handler:(id)arg5 completionHandler:(unk)arg6  ;
-(void)_tilesBorderingTile:(struct _GEOTileKey )arg0 atPoint:(struct GeoCodecsVectorTilePoint )arg1 withHandler:(id)arg2 ;


@end


#endif