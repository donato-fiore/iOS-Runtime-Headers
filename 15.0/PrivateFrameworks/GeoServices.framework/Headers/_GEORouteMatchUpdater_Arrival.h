// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOROUTEMATCHUPDATER_ARRIVAL_H
#define _GEOROUTEMATCHUPDATER_ARRIVAL_H

@class GEORouteMatchUpdater;


#import "GEOComposedRouteStep.h"

@interface _GEORouteMatchUpdater_Arrival : GEORouteMatchUpdater {
    GEOComposedRouteStep *_arrivalStep;
    GEOComposedRouteStep *_previousExitStationStep;
    PolylineCoordinate _arrivalRouteCoordinate;
    ? _destinationLocationCoordinate;
}




-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithRoute:(id)arg0 arrivalStep:(id)arg1 ;


@end


#endif