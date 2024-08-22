// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDWALKINGROUTESTEP_H
#define GEOCOMPOSEDWALKINGROUTESTEP_H



#import "GEOComposedRouteStep.h"

@interface GEOComposedWalkingRouteStep : GEOComposedRouteStep



-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 geoStep:(id)arg2 stepIndex:(NSUInteger)arg3 pointRange:(struct _NSRange )arg4 maneuverPointRange:(struct _NSRange )arg5 ;
-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 geoStep:(id)arg2 stepIndex:(NSUInteger)arg3 startRouteCoordinate:(struct ? )arg4 endRouteCoordinate:(struct ? )arg5 maneuverStartRouteCoordinate:(struct ? )arg6 ;


@end


#endif