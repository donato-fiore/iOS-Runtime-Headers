// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOROUTEMATCHUPDATER_ALIGHTEXIT_H
#define _GEOROUTEMATCHUPDATER_ALIGHTEXIT_H

@class GEORouteMatchUpdater;


#import "GEOPBTransitStop.h"
#import "GEOPBTransitStation.h"
#import "GEOComposedRouteStep.h"

@interface _GEORouteMatchUpdater_AlightExit : GEORouteMatchUpdater {
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStation *_alightStation;
    PolylineCoordinate _routeCoordinateAlightStation;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_postAlightStep;
    GEOComposedRouteStep *_postAlightWalkingStep;
}




-(BOOL)_isLocationNearAlightNode:(id)arg0 ;
-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithTransitRouteMatcher:(id)arg0 alightStep:(id)arg1 ;


@end


#endif