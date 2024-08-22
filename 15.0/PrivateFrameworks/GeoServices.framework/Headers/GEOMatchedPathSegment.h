// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMATCHEDPATHSEGMENT_H
#define GEOMATCHEDPATHSEGMENT_H


#import <Foundation/Foundation.h>

#import "GEOMapFeatureRoad.h"
#import "GEOComposedRoute.h"

@interface GEOMatchedPathSegment : NSObject {
    vector<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> _coordinates;
}


@property (readonly, nonatomic) PolylineCoordinate endRouteCoordinate;
@property (readonly, nonatomic) BOOL isPartialEnd; // ivar: _isPartialEnd
@property (readonly, nonatomic) BOOL isPartialStart; // ivar: _isPartialStart
@property (readonly, nonatomic) NSUInteger pointCount;
@property (readonly, nonatomic) GEOMapFeatureRoad *road; // ivar: _road
@property (readonly, nonatomic) GEOPolylineCoordinateRange roadRange; // ivar: _roadRange
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (readonly, nonatomic) PolylineCoordinate startRouteCoordinate;


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initForFailedMatchWithRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 ;
-(id)initWithRoute:(id)arg0 road:(id)arg1 coordinates:(*void)arg2 roadRange:(struct GEOPolylineCoordinateRange )arg3 ;
-(id)trimmedSegmentWithinRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(struct ? )locationCoordinateAt:(NSUInteger)arg0 ;
-(struct PolylineCoordinate )_roadPolylineCoordinateForCoordinate:(struct ? )arg0 segmentCoordinateIndex:(NSUInteger)arg1 ;
-(struct PolylineCoordinate )routeCoordinateAt:(NSUInteger)arg0 ;
-(struct pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> )_interpolatedCoordinateFrom:(*void)arg0 to:(*void)arg1 routeCoordinate:(struct PolylineCoordinate *)arg2 ;


@end


#endif