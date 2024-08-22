// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODIRECTIONSERVICE_H
#define GEODIRECTIONSERVICE_H


#import <Foundation/Foundation.h>

#import "GEODirectionsRequester.h"

@interface GEODirectionService : NSObject

@property (readonly, nonatomic) GEODirectionsRequester *directionsRequester; // ivar: _directionsRequester


+(id)sharedService;
-(id)_geoOriginalWaypointRouteForReroute:(id)arg0 fromStepIndex:(NSUInteger)arg1 ;
-(id)_ticketForSearchAlongRoute:(id)arg0 transportType:(int)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 routeCoordinate:(struct ? )arg4 returnToOriginalDestination:(BOOL)arg5 routeAttributes:(id)arg6 commonOptions:(id)arg7 ;
-(id)directionsURL;
-(id)init;
-(id)ticketForCyclingRerouteFromLocation:(id)arg0 originalRoute:(id)arg1 stepIndex:(NSUInteger)arg2 routeCoordinate:(struct ? )arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(CGFloat)arg6 lastETADisplayed:(id)arg7 commonOptions:(id)arg8 requestingAppIdentifier:(id)arg9 ;
-(id)ticketForCyclingRouteRecall:(id)arg0 waypoints:(id)arg1 maxRouteCount:(unsigned int)arg2 routeAttributes:(id)arg3 feedback:(id)arg4 ;
-(id)ticketForCyclingSearchAlongRoute:(id)arg0 currentLocation:(id)arg1 originalRoute:(id)arg2 routeCoordinate:(struct ? )arg3 returnToOriginalDestination:(BOOL)arg4 routeAttributes:(id)arg5 commonOptions:(id)arg6 ;
-(id)ticketForCyclingWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 ;
-(id)ticketForCyclingWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 sessionID:(struct GEOSessionID )arg7 ;
-(id)ticketForDrivingDoomFromOrigin:(id)arg0 toDestination:(id)arg1 requestPriority:(id)arg2 routeAttributes:(id)arg3 ;
-(id)ticketForDrivingRerouteFromLocation:(id)arg0 originalRoute:(id)arg1 stepIndex:(NSUInteger)arg2 routeCoordinate:(struct ? )arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(CGFloat)arg6 lastETADisplayed:(id)arg7 commonOptions:(id)arg8 requestingAppIdentifier:(id)arg9 ;
-(id)ticketForDrivingRouteRecall:(id)arg0 waypoints:(id)arg1 maxRouteCount:(unsigned int)arg2 routeAttributes:(id)arg3 feedback:(id)arg4 ;
-(id)ticketForDrivingSearchAlongRoute:(id)arg0 currentLocation:(id)arg1 originalRoute:(id)arg2 routeCoordinate:(struct ? )arg3 returnToOriginalDestination:(BOOL)arg4 routeAttributes:(id)arg5 commonOptions:(id)arg6 ;
-(id)ticketForDrivingWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 ;
-(id)ticketForDrivingWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 sessionID:(struct GEOSessionID )arg7 ;
-(id)ticketForTransitRerouteFromLocation:(id)arg0 originalRoute:(id)arg1 stepIndex:(NSUInteger)arg2 routeAttributes:(id)arg3 originalDirectionsResponseID:(id)arg4 previousRequestTime:(CGFloat)arg5 commonOptions:(id)arg6 ;
-(id)ticketForTransitRouteRecall:(id)arg0 waypoints:(id)arg1 maxRouteCount:(unsigned int)arg2 routeAttributes:(id)arg3 feedback:(id)arg4 ;
-(id)ticketForTransitWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 ;
-(id)ticketForTransitWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 sessionID:(struct GEOSessionID )arg7 ;
-(id)ticketForWalkingRerouteFromLocation:(id)arg0 originalRoute:(id)arg1 stepIndex:(NSUInteger)arg2 routeCoordinate:(struct ? )arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(CGFloat)arg6 lastETADisplayed:(id)arg7 commonOptions:(id)arg8 requestingAppIdentifier:(id)arg9 ;
-(id)ticketForWalkingRouteRecall:(id)arg0 waypoints:(id)arg1 maxRouteCount:(unsigned int)arg2 routeAttributes:(id)arg3 feedback:(id)arg4 ;
-(id)ticketForWalkingWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 ;
-(id)ticketForWalkingWaypoints:(id)arg0 currentLocation:(id)arg1 visibleRegion:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 commonOptions:(id)arg6 sessionID:(struct GEOSessionID )arg7 ;


@end


#endif