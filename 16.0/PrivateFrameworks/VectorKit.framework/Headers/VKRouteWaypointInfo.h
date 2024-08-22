// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKROUTEWAYPOINTINFO_H
#define VKROUTEWAYPOINTINFO_H

@class GEOFeatureStyleAttributes, GEOComposedWaypoint;

#import <Foundation/Foundation.h>


@interface VKRouteWaypointInfo : NSObject

@property (readonly, nonatomic) ? adjacentRouteCoordinate; // ivar: _adjacentRouteCoordinate
@property (nonatomic) BOOL isAtEnd; // ivar: _isAtEnd
@property (nonatomic) BOOL isAtStart; // ivar: _isAtStart
@property (nonatomic) BOOL isOnSelectedRoute; // ivar: _isOnSelectedRoute
@property (readonly, nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (nonatomic) BOOL needsTextUpdate; // ivar: _needsTextUpdate
@property (readonly, nonatomic) ? routeCoordinate; // ivar: _routeCoordinate
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (readonly, nonatomic) GEOComposedWaypoint *waypoint; // ivar: _waypoint
@property (nonatomic) unsigned char when; // ivar: _when


+(id)newRouteWaypointForWaypoint:(id)arg0 legIndex:(NSUInteger)arg1 routeCoordinate:(struct ? )arg2 adjacentRouteCoordinate:(struct ? )arg3 ;
-(id)initWithWaypoint:(id)arg0 legIndex:(NSUInteger)arg1 routeCoordinate:(struct ? )arg2 adjacentRouteCoordinate:(struct ? )arg3 waypointType:(unsigned char)arg4 ;


@end


#endif