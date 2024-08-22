// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTECOORDINATEARRAY_H
#define GEOCOMPOSEDROUTECOORDINATEARRAY_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteCoordinateArray : NSObject <NSSecureCoding>

 {
    NSArray *_paths;
    BOOL _usesZilch;
}


@property (readonly, nonatomic) NSUInteger coordinateCount; // ivar: _coordinateCount
@property (readonly, nonatomic) NSUInteger pathsCount;
@property (readonly, nonatomic) BOOL usesRoutingPathPoints; // ivar: _usesRoutingPathPoints
@property (readonly, nonatomic) BOOL usesZilch;


+(BOOL)supportsSecureCoding;
-(*void)_addPointToRoutingPath:(*void)arg0 coordinate:(struct ? )arg1 supportPoint:(id)arg2 distanceFromStart:(CGFloat)arg3 ;
-(CGFloat)_length;
-(CGFloat)distanceBetweenIndex:(NSUInteger)arg0 andIndex:(NSUInteger)arg1 ;
-(CGFloat)distanceBetweenRouteCoordinate:(struct PolylineCoordinate )arg0 andRouteCoordinate:(struct PolylineCoordinate )arg1 ;
-(CGFloat)distanceFromStartToIndex:(NSUInteger)arg0 ;
-(CGFloat)distanceFromStartToRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(CGFloat)distanceToEndFromIndex:(NSUInteger)arg0 ;
-(CGFloat)distanceToEndFromRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(NSUInteger)_localCoordinateIndexForRouteIndex:(NSUInteger)arg0 ;
-(NSUInteger)coordinateCountForPathAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)nearestSupportPointIndexForRouteCoordinate:(struct PolylineCoordinate )arg0 beforeCoordinate:(BOOL)arg1 ;
-(NSUInteger)pathIndexForRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(NSUInteger)pathIndexForRouteIndex:(NSUInteger)arg0 ;
-(NSUInteger)routeIndexForLocalIndex:(NSUInteger)arg0 onPath:(NSUInteger)arg1 ;
-(id)_supportPointsForRange:(struct GEOPolylineCoordinateRange )arg0 shouldEncompassRange:(BOOL)arg1 ;
-(id)compressedDataForRoutingPath:(*void)arg0 ;
-(id)compressedZilchDataToEndOfPathFromIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoRoutingPathsData:(id)arg0 ;
-(id)initWithPointData:(id)arg0 lengthMarkers:(id)arg1 usesZilch:(BOOL)arg2 ;
-(id)routingPathDataFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 supportPointsOnly:(BOOL)arg2 ;
-(id)routingPathDataWithSupportPointFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 supportPointsOnly:(BOOL)arg2 ;
-(id)supportPointsEncompassingRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(id)supportPointsForPathAtIndex:(NSUInteger)arg0 ;
-(id)supportPointsWithinRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(struct ? )coordinateForRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(struct ? )coordinateOnPath:(NSUInteger)arg0 coordinateIndex:(NSUInteger)arg1 ;
-(struct ? )coordinateOnRouteAt:(NSUInteger)arg0 ;
-(struct ControlPoint )zilchControlPointAt:(NSUInteger)arg0 ;
-(struct PolylineCoordinate )_nearestSupportPointRouteCoordinateForRouteCoordinate:(struct PolylineCoordinate )arg0 beforeCoordinate:(BOOL)arg1 ;
-(struct PolylineCoordinate )_routeCoordinateForOffset:(CGFloat)arg0 fromRouteCoordinate:(struct PolylineCoordinate )arg1 ;
-(struct PolylineCoordinate )nearestSupportPointAfterRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(struct PolylineCoordinate )nearestSupportPointBeforeRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(struct PolylineCoordinate )routeCoordinateForDistance:(CGFloat)arg0 afterRouteCoordinate:(struct PolylineCoordinate )arg1 ;
-(struct PolylineCoordinate )routeCoordinateForDistance:(CGFloat)arg0 beforeRouteCoordinate:(struct PolylineCoordinate )arg1 ;
-(struct PolylineCoordinate )routeCoordinateForDistanceAfterStart:(CGFloat)arg0 ;
-(struct PolylineCoordinate )routeCoordinateForDistanceBeforeEnd:(CGFloat)arg0 ;
-(struct RoutingPathLeg )routingPathFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 supportPointsOnly:(BOOL)arg2 convertEndpointsToSupportPoints:(BOOL)arg3 ;
-(struct RoutingPathLeg )routingPathWithSupportPointFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 supportPointsOnly:(BOOL)arg2 ;
-(void)_buildBasicCoordinatesForPointData:(id)arg0 ;
-(void)_buildPointLengthsWithMarkers:(id)arg0 ;
-(void)_buildZilchCoordinatesForPointData:(id)arg0 ;
-(void)_populateRoutingPathWithCoordinate:(*void)arg0 pathIndex:(NSUInteger)arg1 startIndex:(NSUInteger)arg2 endIndex:(NSUInteger)arg3 distanceFromStartOffset:(CGFloat)arg4 supportPointsOnly:(BOOL)arg5 convertEndpointsToSupportPoints:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif