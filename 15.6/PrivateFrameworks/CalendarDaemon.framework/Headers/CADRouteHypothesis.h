// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADROUTEHYPOTHESIS_H
#define CADROUTEHYPOTHESIS_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADRouteHypothesis : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *aggressiveDepartureDate; // ivar: _aggressiveDepartureDate
@property (readonly, nonatomic) CGFloat aggressiveTravelTime; // ivar: _aggressiveTravelTime
@property (readonly, copy, nonatomic) NSDate *conservativeDepartureDate; // ivar: _conservativeDepartureDate
@property (readonly, nonatomic) CGFloat conservativeTravelTime; // ivar: _conservativeTravelTime
@property (readonly, nonatomic) NSUInteger currentTrafficDensity; // ivar: _currentTrafficDensity
@property (readonly, nonatomic) CGFloat estimatedTravelTime; // ivar: _estimatedTravelTime
@property (readonly, copy, nonatomic) NSString *routeName; // ivar: _routeName
@property (readonly, copy, nonatomic) NSDate *suggestedDepartureDate; // ivar: _suggestedDepartureDate
@property (readonly, nonatomic) BOOL supportsLiveTraffic; // ivar: _supportsLiveTraffic
@property (readonly, copy, nonatomic) NSString *trafficDensityDescription; // ivar: _trafficDensityDescription
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) NSInteger travelState; // ivar: _travelState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransportType:(int)arg0 conservativeDepartureDate:(id)arg1 conservativeTravelTime:(CGFloat)arg2 suggestedDepartureDate:(id)arg3 estimatedTravelTime:(CGFloat)arg4 aggressiveDepartureDate:(id)arg5 aggressiveTravelTime:(CGFloat)arg6 routeName:(id)arg7 supportsLiveTraffic:(BOOL)arg8 currentTrafficDensity:(NSUInteger)arg9 trafficDensityDescription:(id)arg10 travelState:(NSInteger)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif