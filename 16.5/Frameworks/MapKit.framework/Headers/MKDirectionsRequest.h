// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKDIRECTIONSREQUEST_H
#define MKDIRECTIONSREQUEST_H

@class NSDate, NSArray, GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKDirectionsRequest : NSObject <NSCopying>

 {
    NSUInteger _transportType;
    BOOL _requestsAlternateRoutes;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    NSInteger _tollPreference;
    NSInteger _highwayPreference;
}


@property (readonly, nonatomic) BOOL _includeRoutePoints; // ivar: _includeRoutePoints
@property (readonly, nonatomic) BOOL _includeTrafficIncidents; // ivar: _includeTrafficIncidents
@property (readonly, nonatomic) BOOL _includeTravelTimes; // ivar: _includeTravelTimes
@property (readonly, nonatomic) BOOL _resolveExtraAutomobileOptions; // ivar: _resolveExtraAutomobileOptions
@property (retain, nonatomic, getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:) NSArray *additionalTransportTypesRequested; // ivar: _additionalTransportTypesRequested
@property (retain, nonatomic, getter=_automobileOptions, setter=_setAutomobileOptions:) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (retain, nonatomic, getter=_cyclingOptions, setter=_setCyclingOptions:) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (retain, nonatomic) MKMapItem *destination; // ivar: _destination
@property (nonatomic, getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:) BOOL includeDistanceInETA; // ivar: _includeDistanceInETA
@property (retain, nonatomic) MKMapItem *source; // ivar: _source
@property (retain, nonatomic, getter=_transitOptions, setter=_setTransitOptions:) GEOTransitOptions *transitOptions; // ivar: _transitOptions
@property (nonatomic, getter=_useBackgroundURL, setter=_setUseBackgroundURL:) BOOL useBackgroundURL; // ivar: _useBackgroundURL
@property (retain, nonatomic, getter=_walkingOptions, setter=_setWalkingOptions:) GEOWalkingOptions *walkingOptions; // ivar: _walkingOptions


+(BOOL)isDirectionsRequestURL:(id)arg0 ;
-(BOOL)requestsAlternateRoutes;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSInteger)highwayPreference;
-(NSInteger)tollPreference;
-(NSUInteger)_transportType;
-(NSUInteger)transportType;
-(id)_arrivalDate;
-(id)_departureDate;
-(id)_mapkit_initWithDictionaryRepresentation:(id)arg0 ;
-(id)_mapkit_initWithSource:(id)arg0 destination:(id)arg1 transportType:(NSUInteger)arg2 arrivalDate:(id)arg3 ;
-(id)_mapkit_initWithSource:(id)arg0 destination:(id)arg1 transportType:(NSUInteger)arg2 departureDate:(id)arg3 includeTravelTimes:(BOOL)arg4 includeTrafficIncidents:(BOOL)arg5 includeRoutePoints:(BOOL)arg6 resolveExtraAutomobileOptions:(BOOL)arg7 ;
-(id)arrivalDate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)departureDate;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithContentsOfURL:(id)arg0 ;
-(void)setArrivalDate:(id)arg0 ;
-(void)setDepartureDate:(id)arg0 ;
-(void)setHighwayPreference:(NSInteger)arg0 ;
-(void)setRequestsAlternateRoutes:(BOOL)arg0 ;
-(void)setTollPreference:(NSInteger)arg0 ;
-(void)setTransportType:(NSUInteger)arg0 ;


@end


#endif