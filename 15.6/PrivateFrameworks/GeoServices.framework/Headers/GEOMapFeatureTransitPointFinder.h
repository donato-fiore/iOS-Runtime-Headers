// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATURETRANSITPOINTFINDER_H
#define GEOMAPFEATURETRANSITPOINTFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOTileLoader.h"

@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}




-(id)_geometryTileFinder;
-(id)_tileFinder;
-(id)_transitPointForFeature:(*void)arg0 ;
-(id)findGeometryForTransitPoint:(id)arg0 completionHandler:(id)arg1 ;
// -(id)findParentOfTransitPoint:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTransitAccessPointsForStation:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTransitPointWithID:(NSUInteger)arg0 near:(struct ? )arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitPointsOfType:(NSUInteger)arg0 near:(struct ? )arg1 radius:(CGFloat)arg2 handler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)findTransitPointsWithParent:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)initWithTileLoader:(id)arg0 ;


@end


#endif