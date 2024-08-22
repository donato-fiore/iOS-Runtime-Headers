// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKROUTEWAYPOINTINFO_H
#define VKROUTEWAYPOINTINFO_H

@class GEOStyleAttributes, GEOComposedWaypoint;

#import <Foundation/Foundation.h>


@interface VKRouteWaypointInfo : NSObject

@property (readonly, nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (nonatomic) BOOL needsRestyle; // ivar: _needsRestyle
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (readonly, nonatomic) GEOComposedWaypoint *waypoint; // ivar: _waypoint


+(id)newRouteWaypointForWaypoint:(id)arg0 legIndex:(NSUInteger)arg1 ;
-(id)initWithWaypoint:(id)arg0 legIndex:(NSUInteger)arg1 waypointType:(unsigned char)arg2 ;
-(void)dealloc;


@end


#endif