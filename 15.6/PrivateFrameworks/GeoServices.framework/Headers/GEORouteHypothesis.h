// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEHYPOTHESIS_H
#define GEOROUTEHYPOTHESIS_H

@class NSString, NSDate, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"
#import "GEORouteHypothesisIncident.h"

@interface GEORouteHypothesis : NSObject <NSSecureCoding>

 {
    NSString *_trafficDensityDescription;
}


@property (readonly, nonatomic) NSDate *aggressiveDepartureDate; // ivar: _aggressiveDepartureDate
@property (readonly, nonatomic) CGFloat aggressiveTravelTime; // ivar: _aggressiveTravelTime
@property (readonly, nonatomic) NSDate *conservativeDepartureDate; // ivar: _conservativeDepartureDate
@property (readonly, nonatomic) CGFloat conservativeTravelTime; // ivar: _conservativeTravelTime
@property (readonly, nonatomic) NSUInteger currentTrafficDensity; // ivar: _currentTrafficDensity
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat estimatedTravelTime; // ivar: _estimatedTravelTime
@property (readonly, nonatomic) NSDate *generationDate; // ivar: _generationDate
@property (readonly, nonatomic) NSUInteger historicTrafficDensity; // ivar: _historicTrafficDensity
@property (readonly, nonatomic) GEOLocation *lastLocation; // ivar: _lastLocation
@property (readonly, nonatomic) GEORouteHypothesisIncident *mostRelevantIncident; // ivar: _mostRelevantIncident
@property (readonly, copy, nonatomic) NSString *routeName; // ivar: _routeName
@property (readonly, nonatomic) NSDate *suggestedDepartureDate; // ivar: _suggestedDepartureDate
@property (readonly, nonatomic) BOOL supportsLiveTraffic; // ivar: _supportsLiveTraffic
@property (readonly, nonatomic) NSString *trafficDensityDescription;
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) NSInteger travelState; // ivar: _travelState


+(BOOL)supportsSecureCoding;
+(BOOL)supportsTravelState:(NSInteger)arg0 forTransportType:(int)arg1 ;
+(id)_routeHypothesisErrorWithUnderlyingError:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_clearHypothesisAndSetErrorWithCode:(NSInteger)arg0 ;
-(void)_updateCurrentTrafficDensity:(CGFloat)arg0 staticTravelTime:(CGFloat)arg1 ;
-(void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg0 travelTimeWithTraffic:(CGFloat)arg1 conservativeTravelTime:(CGFloat)arg2 aggressiveTravelTime:(CGFloat)arg3 transportType:(int)arg4 ;
-(void)_updateHistoricTrafficDensity:(CGFloat)arg0 staticTravelTime:(CGFloat)arg1 ;
-(void)_updateTrafficDensityDescription:(id)arg0 ;
-(void)_updateTrafficIncidents:(id)arg0 ;
-(void)_updateTravelStateHasArrived:(BOOL)arg0 isTraveling:(BOOL)arg1 travelScore:(CGFloat)arg2 isNavigating:(BOOL)arg3 isNavigatingToDestination:(BOOL)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif