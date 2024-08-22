// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEMATCHER_H
#define GEOROUTEMATCHER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"
#import "GEOPathMatcher.h"

@interface GEORouteMatcher : NSObject {
    GEOComposedRoute *_route;
    GEOPathMatcher *_pathMatcher;
    NSArray *_snappedSegments;
}


@property (nonatomic) CGFloat maxMatchDistanceFromPreviousRouteMatch; // ivar: _maxMatchDistanceFromPreviousRouteMatch
@property (nonatomic) BOOL shouldSnapRouteMatchToRoute; // ivar: _shouldSnapRouteMatchToRoute
@property (nonatomic) NSUInteger targetLegIndex; // ivar: _targetLegIndex
@property (nonatomic) BOOL useMatchedCoordinateForMatching; // ivar: _useMatchedCoordinateForMatching
@property (nonatomic) BOOL useStrictInitialOnRouteCriteria; // ivar: _useStrictInitialOnRouteCriteria


-(BOOL)_shouldConsiderCourseForLocation:(id)arg0 ;
-(BOOL)_supportsSnapping;
-(CGFloat)_scoreModifierForStep:(id)arg0 previousStep:(id)arg1 ;
-(CGFloat)distanceToRouteFrom:(struct ? )arg0 ;
-(CGFloat)distanceToRouteFrom:(struct ? )arg0 startDistance:(CGFloat)arg1 endDistance:(CGFloat)arg2 ;
-(id)_candidateForSegment:(id)arg0 location:(id)arg1 previousRouteMatch:(id)arg2 ;
-(id)_startStepForPreviousRouteMatch:(id)arg0 ;
-(id)_stepForRouteCoordinate:(struct PolylineCoordinate )arg0 stepHint:(id)arg1 ;
-(id)initWithRoute:(id)arg0 ;
-(id)matchToClosestPointOnRouteWithLocation:(id)arg0 ;
-(id)matchToRouteWithLocation:(id)arg0 ;
-(id)matchToRouteWithLocation:(id)arg0 previousRouteMatch:(id)arg1 ;
-(id)snappedSegmentForRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)snappedSegments;
-(struct PolylineCoordinate )_guaranteedRouteCoordinateForLocationCoordinate:(struct ? )arg0 ;
-(struct PolylineCoordinate )closestRouteCoordinateForLocationCoordinate:(struct ? )arg0 ;
-(void)_considerCandidateMatch:(id)arg0 ;
-(void)_finishRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(void)_forEachSegmentNearLocation:(id)arg0 previousRouteMatch:(id)arg1 handler:(id)arg2 ;
-(void)_snapRouteMatchToRoad:(id)arg0 ;
-(void)_startRouteMatch;


@end


#endif