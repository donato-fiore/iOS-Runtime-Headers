// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEMATCHER_H
#define GEOROUTEMATCHER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPathMatcher.h"
#import "GEOComposedRoute.h"

@interface GEORouteMatcher : NSObject {
    GEOPathMatcher *_pathMatcher;
    NSArray *_snappedSegments;
}


@property (nonatomic) CGFloat maxMatchDistanceFromPreviousRouteMatch; // ivar: _maxMatchDistanceFromPreviousRouteMatch
@property (nonatomic) BOOL requiresRoadNetworkData; // ivar: _requiresRoadNetworkData
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (nonatomic) BOOL shouldSnapRouteMatchToRoute; // ivar: _shouldSnapRouteMatchToRoute
@property (nonatomic) BOOL shouldWaitForSnappedSegments; // ivar: _shouldWaitForSnappedSegments
@property (readonly, nonatomic) NSArray *snappedSegments;
@property (nonatomic) NSUInteger targetLegIndex; // ivar: _targetLegIndex
@property (nonatomic) BOOL useMatchedCoordinateForMatching; // ivar: _useMatchedCoordinateForMatching
@property (nonatomic) BOOL useStrictInitialOnRouteCriteria; // ivar: _useStrictInitialOnRouteCriteria


-(BOOL)_shouldConsiderCourseForLocation:(id)arg0 ;
-(BOOL)_supportsSnapping;
-(CGFloat)_roadWidthForSnappedSegment:(id)arg0 ;
-(CGFloat)_scoreModifierForStep:(id)arg0 previousStep:(id)arg1 ;
-(CGFloat)distanceToRouteFrom:(struct ? )arg0 ;
-(CGFloat)distanceToRouteFrom:(struct ? )arg0 startDistance:(CGFloat)arg1 endDistance:(CGFloat)arg2 ;
-(CGFloat)roadWidthForRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)_candidateForSegment:(id)arg0 location:(id)arg1 previousRouteMatch:(id)arg2 ;
-(id)_startStepForPreviousRouteMatch:(id)arg0 ;
-(id)_stepForRouteCoordinate:(struct PolylineCoordinate )arg0 stepHint:(id)arg1 ;
-(id)initWithRoute:(id)arg0 ;
-(id)matchToClosestPointOnRouteWithLocation:(id)arg0 ;
-(id)matchToRouteWithLocation:(id)arg0 ;
-(id)matchToRouteWithLocation:(id)arg0 previousRouteMatch:(id)arg1 ;
-(id)snappedSegmentForRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(struct PolylineCoordinate )_guaranteedRouteCoordinateForLocationCoordinate:(struct ? )arg0 ;
-(struct PolylineCoordinate )closestRouteCoordinateForLocationCoordinate:(struct ? )arg0 ;
-(void)_considerCandidateMatch:(id)arg0 ;
-(void)_finishRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(void)_forEachSegmentNearLocation:(id)arg0 previousRouteMatch:(id)arg1 handler:(id)arg2 ;
-(void)_startRouteMatch;


@end


#endif