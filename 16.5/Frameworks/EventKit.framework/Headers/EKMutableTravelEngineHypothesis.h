// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKMUTABLETRAVELENGINEHYPOTHESIS_H
#define EKMUTABLETRAVELENGINEHYPOTHESIS_H

@class NSDate, NSString;


#import "EKTravelEngineHypothesis.h"

@interface EKMutableTravelEngineHypothesis : EKTravelEngineHypothesis

@property (copy, nonatomic) NSDate *aggressiveDepartureDate;
@property (nonatomic) CGFloat aggressiveTravelTime;
@property (copy, nonatomic) NSDate *conservativeDepartureDate;
@property (nonatomic) CGFloat conservativeTravelTime;
@property (nonatomic) NSUInteger currentTrafficDensity;
@property (nonatomic) CGFloat estimatedTravelTime;
@property (copy, nonatomic) NSString *routeName;
@property (copy, nonatomic) NSDate *suggestedDepartureDate;
@property (nonatomic) BOOL supportsLiveTraffic;
@property (copy, nonatomic) NSString *trafficDensityDescription;
@property (nonatomic) int transportType;
@property (nonatomic) NSInteger travelState;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif