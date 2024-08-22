// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEINITIALIZERDATA_H
#define GEOROUTEINITIALIZERDATA_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEODirectionsRequest.h"
#import "GEODirectionsResponse.h"
#import "GEOETATrafficUpdateResponse.h"
#import "GEORouteAttributes.h"
#import "GEOStyleAttributes.h"

@interface GEORouteInitializerData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly, nonatomic) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse; // ivar: _etaTrafficUpdateResponse
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (readonly, nonatomic) NSArray *waypoints; // ivar: _waypoints


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 directionsResponse:(id)arg2 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 directionsResponse:(id)arg2 directionsRequest:(id)arg3 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 etauResponse:(id)arg2 styleAttributes:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif