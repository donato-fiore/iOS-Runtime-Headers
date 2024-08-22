// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDDRIVINGROUTESTEP_H
#define GEOCOMPOSEDDRIVINGROUTESTEP_H



#import "GEOComposedRouteStep.h"
#import "GEOComposedRouteEVStepInfo.h"

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {
    GEOComposedRouteEVStepInfo *_evInfo;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)evInfo;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 geoStep:(id)arg2 stepIndex:(NSUInteger)arg3 pointRange:(struct _NSRange )arg4 maneuverPointRange:(struct _NSRange )arg5 ;
-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 geoStep:(id)arg2 stepIndex:(NSUInteger)arg3 startRouteCoordinate:(struct ? )arg4 endRouteCoordinate:(struct ? )arg5 maneuverStartRouteCoordinate:(struct ? )arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif