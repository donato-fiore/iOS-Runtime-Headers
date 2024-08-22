// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOWALKINGROUTEMATCHER_H
#define GEOWALKINGROUTEMATCHER_H



#import "GEORouteMatcher.h"

@interface GEOWalkingRouteMatcher : GEORouteMatcher {
    NSUInteger _newStepProgressions;
}




-(BOOL)_supportsSnapping;
-(CGFloat)_maxMatchDistance:(CGFloat)arg0 routeIndex:(unsigned int)arg1 previousMatchGood:(BOOL)arg2 ;
-(CGFloat)_modifiedHorizontalAccuracy:(CGFloat)arg0 routeIndex:(unsigned int)arg1 ;
-(id)_candidateForSegment:(id)arg0 location:(id)arg1 previousRouteMatch:(id)arg2 ;
-(id)initWithRoute:(id)arg0 ;
-(void)_finishRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;


@end


#endif