// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKEVCHARGESTATIONROUTEWAYPOINT_H
#define VKEVCHARGESTATIONROUTEWAYPOINT_H

@class GEOComposedRouteEVChargingStationInfo, NSString;


#import "VKRouteWaypointInfo.h"

@interface VKEVChargeStationRouteWaypoint : VKRouteWaypointInfo

@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargeInfo;
@property (retain, nonatomic) NSString *chargeTimeText; // ivar: _chargeTimeText


-(id)initWithWaypoint:(id)arg0 legIndex:(NSUInteger)arg1 routeCoordinate:(struct ? )arg2 adjacentRouteCoordinate:(struct ? )arg3 ;


@end


#endif