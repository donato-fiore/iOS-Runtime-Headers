// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTELEG_H
#define GEOCOMPOSEDROUTELEG_H

@class NSData;
@protocol NSSecureCoding, GEOServerFormattedString;

#import <Foundation/Foundation.h>

#import "GEOArrivalParameters.h"
#import "GEOComposedRouteEVChargingStationInfo.h"
#import "GEOComposedWaypoint.h"
#import "GEOComposedWaypointDisplayInfo.h"
#import "GEOWaypointInfo.h"
#import "GEOComposedRoute.h"

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding>



@property (readonly, nonatomic) GEOArrivalParameters *arrivalParameters; // ivar: _arrivalParameters
@property (readonly, nonatomic) CGFloat chargingDuration;
@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (readonly, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (readonly, nonatomic) GEOComposedWaypointDisplayInfo *destinationDisplayInfo; // ivar: _destinationDisplayInfo
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *destinationListInstruction; // ivar: _destinationListInstruction
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) int drivingSide; // ivar: _drivingSide
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) ? endRouteCoordinate;
@property (readonly, nonatomic) NSUInteger endStepIndex;
@property (readonly, nonatomic) GEOWaypointInfo *geoDestinationWaypointInfo; // ivar: _geoDestinationWaypointInfo
@property (readonly, nonatomic) GEOWaypointInfo *geoOriginWaypointInfo; // ivar: _geoOriginWaypointInfo
@property (readonly, nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (readonly, nonatomic) GEOComposedWaypoint *origin; // ivar: _origin
@property (readonly, nonatomic) GEOComposedWaypointDisplayInfo *originDisplayInfo; // ivar: _originDisplayInfo
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *originListInstruction; // ivar: _originListInstruction
@property (readonly, nonatomic) NSUInteger pointCount;
@property (nonatomic) _NSRange pointRange; // ivar: _pointRange
@property (weak, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (retain, nonatomic) NSData *serverLegIDForAnalytics; // ivar: _serverLegIDForAnalytics
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) ? startRouteCoordinate;
@property (readonly, nonatomic) NSUInteger startStepIndex;
@property (readonly, nonatomic) NSUInteger stepCount;
@property (nonatomic) _NSRange stepRange; // ivar: _stepRange
@property (readonly, nonatomic) CGFloat travelDuration;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 legIndex:(NSUInteger)arg2 origin:(id)arg3 destination:(id)arg4 arrivalParameters:(id)arg5 ;
-(id)initWithComposedRoute:(id)arg0 legIndex:(NSUInteger)arg1 origin:(id)arg2 destination:(id)arg3 arrivalParameters:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif