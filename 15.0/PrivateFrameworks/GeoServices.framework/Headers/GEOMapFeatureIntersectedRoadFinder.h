// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPFEATUREINTERSECTEDROADFINDER_H
#define GEOMAPFEATUREINTERSECTEDROADFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOTileLoader.h"

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}




// -(id)_findRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 featureToIgnore:(id)arg2 handler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)findRoadsAtJunction:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsAtNextIntersectionOf:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsAtPreviousIntersectionOf:(id)arg0 desiredRoadDirectionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)initWithTileLoader:(id)arg0 ;
-(void)_tilesAdjacentToTile:(struct _GEOTileKey )arg0 atPoint:(struct GeoCodecsVectorTilePoint )arg1 withHandler:(id)arg2 ;


@end


#endif