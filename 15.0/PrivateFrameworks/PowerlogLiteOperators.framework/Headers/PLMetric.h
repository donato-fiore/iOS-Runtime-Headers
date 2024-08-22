// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMETRIC_H
#define PLMETRIC_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PLMetric : NSObject

@property NSUInteger bitPosition; // ivar: _bitPosition
@property int defaultValue; // ivar: _defaultValue
@property (retain) NSDate *lastOnTimestamp; // ivar: _lastOnTimestamp
@property (retain) NSString *metricKey; // ivar: _metricKey
@property short metricType; // ivar: _metricType
@property int metricValue; // ivar: _metricValue
@property int numBits; // ivar: _numBits


+(NSUInteger)binBatteryTemperature:(int)arg0 ;
+(NSUInteger)binDurationValue:(int)arg0 ;
-(NSUInteger)getBinnedMetricValue;
-(id)initWithKey:(id)arg0 withPosition:(NSUInteger)arg1 withNumBits:(int)arg2 withDefault:(int)arg3 andType:(short)arg4 ;
-(void)constructMetricValueForInterval:(id)arg0 ;
-(void)resetMetric;
-(void)updateMetricWithTimestamp:(id)arg0 forEvent:(short)arg1 withValue:(int)arg2 ;


@end


#endif