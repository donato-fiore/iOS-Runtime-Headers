// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVIGATIONBICYCLEMAPMATCHER_H
#define GEONAVIGATIONBICYCLEMAPMATCHER_H



#import "GEONavigationMapMatcher.h"

@interface GEONavigationBicycleMapMatcher : GEONavigationMapMatcher {
    NSUInteger _numProgressionsOffRoute;
}


@property (nonatomic) BOOL useMatchedCoordinateForMatching; // ivar: _useMatchedCoordinateForMatching


-(BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg0 distanceFromRoute:(CGFloat)arg1 ;
-(BOOL)_shouldConsiderRoadMatch:(id)arg0 overRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(CGFloat)_approximateMaxSpeedForRoad:(id)arg0 ;
-(CGFloat)_courseFromLocation:(id)arg0 ;
-(id)_routeMatcherForRoute:(id)arg0 ;
-(id)matchLocation:(id)arg0 transportType:(int)arg1 ;
-(int)transportType;
-(struct ? )_coordinateFromLocation:(id)arg0 ;


@end


#endif