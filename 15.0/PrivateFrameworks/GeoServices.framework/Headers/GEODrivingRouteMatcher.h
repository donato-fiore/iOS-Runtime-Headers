// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODRIVINGROUTEMATCHER_H
#define GEODRIVINGROUTEMATCHER_H



#import "GEORouteMatcher.h"

@interface GEODrivingRouteMatcher : GEORouteMatcher {
    CGFloat _differentLegScorePenalty;
}




-(BOOL)_supportsSnapping;
-(CGFloat)_courseFromLocation:(id)arg0 ;
-(CGFloat)_courseWeightForLocation:(id)arg0 accuracyType:(NSInteger)arg1 ;
-(CGFloat)_maxCourseDelta:(id)arg0 previousRouteMatch:(id)arg1 timeSinceTunnel:(CGFloat)arg2 ;
-(CGFloat)_maxMatchDistance:(CGFloat)arg0 routeIndex:(unsigned int)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(CGFloat)arg3 ;
-(CGFloat)_modifiedCourseAccuracyForLocation:(id)arg0 previousRouteMatch:(id)arg1 ;
-(CGFloat)_modifiedHorizontalAccuracy:(CGFloat)arg0 routeIndex:(unsigned int)arg1 ;
-(id)_candidateForSegment:(id)arg0 location:(id)arg1 previousRouteMatch:(id)arg2 ;
-(id)_startStepForPreviousRouteMatch:(id)arg0 ;
-(id)initWithRoute:(id)arg0 ;
-(struct ? )_coordinateFromLocation:(id)arg0 ;
-(void)_finishRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;


@end


#endif