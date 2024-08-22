// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNACTIVEROUTEINFO_H
#define MNACTIVEROUTEINFO_H

@class GEOETATrafficUpdateResponse, GEOComposedETARoute, GEOComposedRoute, NSUUID, GEOComposedRouteTraffic, GEOTransitRouteUpdateRequest;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNDisplayETAInfo.h"
#import "MNRouteDistanceInfo.h"

@interface MNActiveRouteInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger alternateRouteIndex; // ivar: _alternateRouteIndex
@property (retain, nonatomic) MNDisplayETAInfo *displayETAInfo; // ivar: _displayETAInfo
@property (retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse; // ivar: _etaResponse
@property (retain, nonatomic) GEOComposedETARoute *etaRoute; // ivar: _etaRoute
@property (retain, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo; // ivar: _remainingDistanceInfo
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (readonly, nonatomic) NSUUID *routeID;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (readonly, nonatomic) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoute:(id)arg0 ;
-(id)initWithRoute:(id)arg0 trafficRoute:(id)arg1 routeInitalizerData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif