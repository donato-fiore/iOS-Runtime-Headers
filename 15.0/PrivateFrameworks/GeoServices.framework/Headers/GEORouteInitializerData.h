// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEINITIALIZERDATA_H
#define GEOROUTEINITIALIZERDATA_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEODirectionsRequest.h"
#import "GEODirectionsResponse.h"
#import "GEOETATrafficUpdateResponse.h"
#import "GEORouteAttributes.h"

@interface GEORouteInitializerData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly, nonatomic) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse; // ivar: _etaTrafficUpdateResponse
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (readonly, nonatomic) NSArray *waypoints; // ivar: _waypoints


+(BOOL)supportsSecureCoding;
-(BOOL)_MapsCarPlay_isEqual:(id)arg0 ;
-(id)arrivalParametersAtIndex:(NSUInteger)arg0 ;
-(id)incidentAtIndex:(NSUInteger)arg0 forGeoRoute:(id)arg1 ;
-(id)incidentAtIndex:(NSUInteger)arg0 forGeoWaypointRoute:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 ETATrafficUpdateResponse:(id)arg2 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 directionsResponse:(id)arg2 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 directionsResponse:(id)arg2 directionsRequest:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif