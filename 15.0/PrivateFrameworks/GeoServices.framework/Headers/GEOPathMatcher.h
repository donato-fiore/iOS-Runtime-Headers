// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPATHMATCHER_H
#define GEOPATHMATCHER_H

@class NSArray, geo_isolater;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"

@interface GEOPathMatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    GEOComposedRoute *_route;
    NSArray *_matchedSegments;
    geo_isolater *_matchedSegmentsIsolater;
    vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> _failedRanges;
}


@property (nonatomic) CGFloat preloadDistance; // ivar: _preloadDistance


-(BOOL)_isFailedRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(id)_cachedSegments;
-(id)_matchedPathSegmentsForPath:(*void)arg0 routeCoordinates:(id)arg1 start:(struct PolylineCoordinate )arg2 end:(struct PolylineCoordinate )arg3 roadLookup:(id)arg4 ;
-(id)_matchedSegmentsInRange:(struct GEOPolylineCoordinateRange )arg0 ofMatchedSegments:(id)arg1 ;
-(id)_roadLookupForRoadNetwork:(*void)arg0 ;
-(id)_supportPointsForRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(id)_updateCacheWithNewSegments:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 ;
-(id)_zilchMatchedSegmentsForRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 ;
-(id)initForTesting;
-(id)initWithRoute:(id)arg0 ;
-(id)matchedSegmentsFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 ;
-(struct GEOPolylineCoordinateRange )_uncachedCoordinateRangeForStart:(struct PolylineCoordinate )arg0 end:(struct PolylineCoordinate )arg1 ;
// -(struct GEOPolylineCoordinateRange )_validateInputRange:(struct GEOPolylineCoordinateRange )arg0 finishedHandler:(id)arg1 callbackQueue:(unk)arg2  ;
-(struct RoadNetworkPath<GEOPathMatcherRoadKey> )_decodePathForRoute:(id)arg0 start:(struct PolylineCoordinate )arg1 end:(struct PolylineCoordinate )arg2 roadNetwork:(*void)arg3 ;
-(void)_addCoordinatesFromRoad:(id)arg0 routeCoordinates:(id)arg1 offsetFromStartOfPath:(CGFloat)arg2 errorScale:(CGFloat)arg3 offsetFromPathToCurrentPoint:(*CGFloat)arg4 outCoordinates:(*void)arg5 ;
// -(void)_callbackWithMatchedSegments:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 handler:(id)arg2 callbackQueue:(unk)arg3  ;
-(void)_clearZilchSnappedPathsForRoute:(id)arg0 ;
// -(void)_matchRouteOnQueueForRange:(struct GEOPolylineCoordinateRange )arg0 finishedHandler:(id)arg1 callbackQueue:(unk)arg2  ;
-(void)_zilchMatchedSegmentsForRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 handler:(id)arg2 ;
-(void)dealloc;
-(void)matchRouteFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 finishedHandler:(id)arg2 ;
// -(void)matchRouteFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 finishedHandler:(id)arg2 callbackQueue:(unk)arg3  ;


@end


#endif