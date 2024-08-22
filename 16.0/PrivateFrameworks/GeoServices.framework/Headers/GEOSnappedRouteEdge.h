// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSNAPPEDROUTEEDGE_H
#define GEOSNAPPEDROUTEEDGE_H


#import <Foundation/Foundation.h>

#import "GEOMultiSectionFeature.h"

@interface GEOSnappedRouteEdge : NSObject {
    ? _localBounds;
    vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> _routeOffsets;
    vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> _points;
}


@property (readonly, nonatomic) BOOL clippedBack; // ivar: _clippedBack
@property (readonly, nonatomic) BOOL clippedFront; // ivar: _clippedFront
@property (readonly, nonatomic) GEOMultiSectionFeature *feature;
@property (readonly, nonatomic) shared_ptr<geo::MapEdgeRoad> mapEdge; // ivar: _mapEdge
@property (readonly, nonatomic) NSUInteger mapEdgeOffset; // ivar: _mapEdgeOffset
@property (readonly, nonatomic) NSUInteger pointCount;
@property (readonly, nonatomic) *GeoCodecsVectorTilePoint points;
@property (readonly, nonatomic) PolylineCoordinate routeOffsetA;
@property (readonly, nonatomic) PolylineCoordinate routeOffsetB;
@property (readonly, nonatomic) *PolylineCoordinate routeOffsets;


-(id)description;
-(id)initWithRoadPath:(*void)arg0 sectionRect:(struct ? *)arg1 ;
-(void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate )arg0 andB:(struct PolylineCoordinate )arg1 overLength:(float)arg2 onRoute:(id)arg3 ;


@end


#endif