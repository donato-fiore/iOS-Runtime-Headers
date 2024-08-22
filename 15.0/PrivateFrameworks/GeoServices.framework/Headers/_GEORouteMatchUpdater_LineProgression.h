// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOROUTEMATCHUPDATER_LINEPROGRESSION_H
#define _GEOROUTEMATCHUPDATER_LINEPROGRESSION_H

@class GEORouteMatchUpdater;


#import "GEOComposedTransitTripRouteStep.h"

@interface _GEORouteMatchUpdater_LineProgression : GEORouteMatchUpdater {
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    PolylineCoordinate _startRouteCoordinate;
}




-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(NSUInteger)priority;
-(id)initWithTransitRouteMatcher:(id)arg0 tripSegment:(id)arg1 ;


@end


#endif