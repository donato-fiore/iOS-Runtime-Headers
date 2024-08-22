// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNROUTEDIVERGENCEFINDER_H
#define MNROUTEDIVERGENCEFINDER_H


#import <Foundation/Foundation.h>


@interface MNRouteDivergenceFinder : NSObject {
    CGFloat _distancePaddingWhenAlternating;
}


@property (nonatomic) CGFloat minLengthMetersForConvergence; // ivar: _minLengthMetersForConvergence
@property (nonatomic) CGFloat toleranceMeters; // ivar: _toleranceMeters


-(BOOL)_pathsDivergeBetweenRoute:(id)arg0 from:(struct PolylineCoordinate )arg1 andRoute:(id)arg2 from:(struct PolylineCoordinate )arg3 withinDistance:(CGFloat)arg4 ;
-(BOOL)_pointMeetsConvergenceThreshold:(struct _MNRouteConvergencePoint *)arg0 withOtherPoint:(struct _MNRouteConvergencePoint *)arg1 outRouteCoordinateA:(struct PolylineCoordinate *)arg2 outRouteCoordinateB:(struct PolylineCoordinate *)arg3 outDistance:(*CGFloat)arg4 ;
-(CGFloat)_distanceFromCoordinate:(struct ? )arg0 toSegmentStart:(struct ? )arg1 segmentEnd:(struct ? )arg2 ;
-(CGFloat)_offsetForCoordinate:(struct ? )arg0 alongSegmentStart:(struct ? )arg1 segmentEnd:(struct ? )arg2 ;
-(id)_stringForCoordinate:(struct ? )arg0 ;
-(id)findAllDivergenceConvergenceBetweenRoute:(id)arg0 andRoute:(id)arg1 ;
-(id)findAllOverlapRangesBetweenRoutes:(id)arg0 ;
-(id)findFirstConvergenceBetweenRoute:(id)arg0 andRoute:(id)arg1 ;
-(id)findFirstConvergenceBetweenRoute:(id)arg0 fromRouteCoordinate:(struct PolylineCoordinate )arg1 andRoute:(id)arg2 fromRouteCoordinate:(struct PolylineCoordinate )arg3 ;
-(id)findFirstDivergenceBetweenRoute:(id)arg0 andRoute:(id)arg1 ;
-(id)findFirstDivergenceBetweenRoute:(id)arg0 fromRouteCoordinate:(struct PolylineCoordinate )arg1 andRoute:(id)arg2 fromRouteCoordinate:(struct PolylineCoordinate )arg3 ;
-(id)findFirstUniqueRangeBetweenRoute:(id)arg0 andRoute:(id)arg1 ;
-(id)findOverlappingSectionsForRoutes:(id)arg0 ;
-(id)init;
-(struct PolylineCoordinate )_closestRouteCoordinateOnRoute:(id)arg0 toLocationCoordinate:(struct ? )arg1 inRange:(struct GEOPolylineCoordinateRange )arg2 ;
-(struct PolylineCoordinate )_firstRouteCoordinateWithinToleranceOnRoute:(id)arg0 nearCoordinate:(struct ? )arg1 range:(struct GEOPolylineCoordinateRange )arg2 ;
-(struct PolylineCoordinate )_routeCoordinateForLocationCoordinate:(struct ? )arg0 route:(id)arg1 startIndex:(NSUInteger)arg2 ;
-(void)_findFirstConvergenceBetweenRoute:(id)arg0 fromRouteCoordinate:(struct PolylineCoordinate )arg1 andRoute:(id)arg2 fromRouteCoordinate:(struct PolylineCoordinate )arg3 outRouteCoordinate:(struct PolylineCoordinate *)arg4 outRouteCoordinate:(struct PolylineCoordinate *)arg5 ;
-(void)_findFirstConvergenceBetweenRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 andRoute:(id)arg2 range:(struct GEOPolylineCoordinateRange )arg3 outRouteCoordinate:(struct PolylineCoordinate *)arg4 outRouteCoordinate:(struct PolylineCoordinate *)arg5 ;
-(void)_findFirstDivergenceBetweenRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 andRoute:(id)arg2 range:(struct GEOPolylineCoordinateRange )arg3 outRouteCoordinate:(struct PolylineCoordinate *)arg4 outRouteCoordinate:(struct PolylineCoordinate *)arg5 ;
-(void)_populateConvergencePoints:(*void)arg0 route:(id)arg1 range:(struct GEOPolylineCoordinateRange )arg2 isRouteA:(BOOL)arg3 ;


@end


#endif