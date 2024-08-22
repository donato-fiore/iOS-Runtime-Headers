// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITROUTEMATCHER_H
#define GEOTRANSITROUTEMATCHER_H

@class NSArray;


#import "GEORouteMatcher.h"
#import "GEOMotionContext.h"

@interface GEOTransitRouteMatcher : GEORouteMatcher {
    GEOMotionContext *_motionContext;
    NSArray *_stationsOnRoute;
    NSArray *_routeMatchUpdaters;
    NSArray *_stepRanges;
}


@property (readonly, nonatomic) CGFloat distanceToClosestWalkingSegment; // ivar: _distanceToClosestWalkingSegment


-(BOOL)_shouldConsiderCourseForLocation:(id)arg0 ;
-(BOOL)_stepsInSameRange:(id)arg0 nextStep:(id)arg1 ;
-(BOOL)isStationCoordinateOnRoute:(struct ? )arg0 ;
-(CGFloat)_scoreModifierForStep:(id)arg0 previousStep:(id)arg1 ;
-(id)initWithRoute:(id)arg0 motionContext:(id)arg1 ;
-(id)motionContext;
-(void)_considerCandidateMatch:(id)arg0 ;
-(void)_finishRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(void)_insertUpdater:(id)arg0 into:(id)arg1 ;
-(void)_startRouteMatch;


@end


#endif