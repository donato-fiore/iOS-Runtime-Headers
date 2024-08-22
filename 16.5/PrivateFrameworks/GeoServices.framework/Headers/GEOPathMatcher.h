// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPATHMATCHER_H
#define GEOPATHMATCHER_H

@class NSArray, geo_isolater, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"

@interface GEOPathMatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    GEOComposedRoute *_route;
    NSArray *_matchedSegments;
    geo_isolater *_matchedSegmentsIsolater;
    vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> _failedRanges;
    NSString *_loggingIdentifier;
    BOOL _shouldSaveInternalInfo;
    NSArray *_internalInfos;
    geo_isolater *_internalInfosIsolater;
}


@property (nonatomic) BOOL forceSync; // ivar: _forceSync
@property (nonatomic) CGFloat preloadDistance; // ivar: _preloadDistance


-(BOOL)_isFailedRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(BOOL)_isRangeValid:(struct GEOPolylineCoordinateRange )arg0 ;
-(BOOL)shouldSaveInternalInfo;
-(id)_cachedSegments;
-(id)_matchedPathSegmentsForPath:(*void)arg0 routeCoordinates:(id)arg1 start:(struct PolylineCoordinate )arg2 end:(struct PolylineCoordinate )arg3 roadLookup:(id)arg4 ;
-(id)_matchedSegmentsInRange:(struct GEOPolylineCoordinateRange )arg0 ofMatchedSegments:(id)arg1 ;
-(id)_roadLookupForRoadNetwork:(*void)arg0 ;
-(id)_supportPointsForRange:(struct GEOPolylineCoordinateRange )arg0 ;
-(id)_updateCacheWithNewSegments:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 ;
-(id)_zilchMatchedSegmentsForRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 ;
-(id)initForTesting;
-(id)initWithRoute:(id)arg0 ;
-(id)initWithRoute:(id)arg0 loggingIdentifier:(id)arg1 ;
-(id)internalInfos;
-(id)matchedSegmentsFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 ;
-(struct GEOPolylineCoordinateRange )_uncachedCoordinateRangeForStart:(struct PolylineCoordinate )arg0 end:(struct PolylineCoordinate )arg1 ;
// -(struct GEOPolylineCoordinateRange )_validateInputRange:(struct GEOPolylineCoordinateRange )arg0 finishedHandler:(id)arg1 callbackQueue:(unk)arg2  ;
-(struct RoadNetworkPath<GEOPathMatcherRoadKey> )_decodePathForRoute:(id)arg0 supportPoints:(id)arg1 roadNetwork:(*void)arg2 internalInfo:(id)arg3 ;
-(void)_addCoordinatesFromRoad:(id)arg0 routeCoordinates:(id)arg1 offsetFromStartOfPath:(CGFloat)arg2 errorScale:(CGFloat)arg3 offsetFromPathToCurrentPoint:(*CGFloat)arg4 outCoordinates:(*void)arg5 ;
// -(void)_callbackWithMatchedSegments:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 handler:(id)arg2 callbackQueue:(unk)arg3  ;
-(void)_clearZilchSnappedPathsForRoute:(id)arg0 ;
// -(void)_matchRouteOnQueueForRange:(struct GEOPolylineCoordinateRange )arg0 finishedHandler:(id)arg1 callbackQueue:(unk)arg2  ;
-(void)_verifySegmentDistanceFromRoute:(id)arg0 segmentIndex:(NSInteger)arg1 requestedPathRange:(struct GEOPolylineCoordinateRange )arg2 ;
-(void)_zilchMatchedSegmentsForRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 handler:(id)arg2 ;
-(void)dealloc;
-(void)matchRouteFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 finishedHandler:(id)arg2 ;
// -(void)matchRouteFromStart:(struct PolylineCoordinate )arg0 toEnd:(struct PolylineCoordinate )arg1 finishedHandler:(id)arg2 callbackQueue:(unk)arg3  ;
-(void)setInternalInfos:(id)arg0 ;
-(void)setShouldSaveInternalInfo:(BOOL)arg0 ;


@end


#endif