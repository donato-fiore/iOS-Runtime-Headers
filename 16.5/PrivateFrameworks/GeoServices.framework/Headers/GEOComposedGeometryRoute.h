// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDGEOMETRYROUTE_H
#define GEOCOMPOSEDGEOMETRYROUTE_H



#import "GEOComposedRoute.h"

@interface GEOComposedGeometryRoute : GEOComposedRoute



-(id)initSingleLegRouteWithCoordinates:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithRoutingPathData:(id)arg0 ;
-(id)initWithRoutingPathData:(id)arg0 trafficColors:(id)arg1 destination:(id)arg2 ;
-(id)initWithRoutingPathData:(id)arg0 trafficColors:(id)arg1 destinations:(id)arg2 ;


@end


#endif