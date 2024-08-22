// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOROUTEMATCHUPDATER_ENTERBOARD_H
#define _GEOROUTEMATCHUPDATER_ENTERBOARD_H

@class GEORouteMatchUpdater;


#import "GEOPBTransitStop.h"
#import "GEOPBTransitStation.h"
#import "GEOComposedRouteStep.h"
#import "GEOComposedTransitTripRouteStep.h"

@interface _GEORouteMatchUpdater_EnterBoard : GEORouteMatchUpdater {
    GEOPBTransitStop *_transitStop;
    GEOPBTransitStation *_transitStation;
    ? _entranceCoordinate;
    PolylineCoordinate _routeCoordinateApproaching;
    PolylineCoordinate _routeCoordinateAtStation;
    GEOComposedRouteStep *_enterStationStep;
    GEOComposedRouteStep *_boardVehicleStep;
    GEOComposedTransitTripRouteStep *_rideStep;
    BOOL _hasEnteredStation;
}




-(BOOL)_hasLocationEnteredStation:(id)arg0 routeMatch:(id)arg1 ;
-(BOOL)_hasLocationExitedStation:(id)arg0 ;
-(BOOL)_isLocationNearAccessPoint:(id)arg0 ;
-(BOOL)_isLocationNearEndOfWalkingSegment:(id)arg0 ;
-(BOOL)_isLocationNearTransitNode:(id)arg0 ;
-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithTransitRouteMatcher:(id)arg0 boardVehicleStep:(id)arg1 ;


@end


#endif