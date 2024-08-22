// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTETRAFFIC_H
#define GEOCOMPOSEDROUTETRAFFIC_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *routeIncidents; // ivar: _incidents
@property (readonly, nonatomic) NSArray *routeTrafficColors; // ivar: _trafficColors
@property (readonly, nonatomic) *unsigned int trafficColorOffsets;
@property (readonly, nonatomic) NSUInteger trafficColorOffsetsCount;
@property (readonly, nonatomic) *unsigned int trafficColors;
@property (readonly, nonatomic) NSUInteger trafficColorsCount;
@property (readonly, nonatomic) NSArray *trafficIncidentOffsets;
@property (readonly, nonatomic) NSArray *trafficIncidents;


+(BOOL)supportsSecureCoding;
-(id)_incidentsForOldRoute:(id)arg0 etaRoute:(id)arg1 ;
-(id)_incidentsForOldRoute:(id)arg0 geoIncidentsFromResponse:(id)arg1 ;
-(id)_incidentsForRoute:(id)arg0 ;
-(id)_incidentsForRoute:(id)arg0 etaRoute:(id)arg1 ;
-(id)_trafficColorInfosFromDebugSettingsForRoute:(id)arg0 ;
-(id)_trafficColorInfosFromTrafficBuilder:(id)arg0 route:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorInfos:(id)arg0 incidentInfos:(id)arg1 ;
-(id)initWithRoute:(id)arg0 etaRoute:(id)arg1 ;
-(id)initWithRoute:(id)arg0 initializerData:(id)arg1 ;
-(void)_buildIncidentsForRoute:(id)arg0 etaRoute:(id)arg1 initializerData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif