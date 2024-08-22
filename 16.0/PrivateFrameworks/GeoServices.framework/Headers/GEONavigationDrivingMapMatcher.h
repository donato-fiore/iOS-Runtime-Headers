// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVIGATIONDRIVINGMAPMATCHER_H
#define GEONAVIGATIONDRIVINGMAPMATCHER_H



#import "GEONavigationMapMatcher.h"
#import "GEOLocation.h"

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher {
    BOOL _isCorrectingCourseSwing;
    GEOLocation *_lastAccurateCourseLocation;
}


@property (nonatomic) BOOL useMatchedCoordinateForMatching; // ivar: _useMatchedCoordinateForMatching


-(BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg0 distanceFromRoute:(CGFloat)arg1 ;
-(BOOL)_shouldConsiderRoadMatch:(id)arg0 overRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(CGFloat)_approximateMaxSpeedForRoad:(id)arg0 ;
-(CGFloat)_courseFromLocation:(id)arg0 ;
-(id)_effectiveLocationForLocation:(id)arg0 ;
-(id)_routeMatcherForRoute:(id)arg0 ;
-(id)matchLocation:(id)arg0 transportType:(int)arg1 ;
-(int)transportType;
-(struct ? )_coordinateFromLocation:(id)arg0 ;


@end


#endif