// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBTPROXIMITYMEASUREMENT_H
#define PRBTPROXIMITYMEASUREMENT_H

@class NSNumber, NSUUID;

#import <Foundation/Foundation.h>


@interface PRBTProximityMeasurement : NSObject

@property (readonly, nonatomic) NSNumber *continuousProximityLevel; // ivar: _continuousProximityLevel
@property (readonly, nonatomic) NSUInteger proximityLevel; // ivar: _proximityLevel
@property (readonly, nonatomic) NSUInteger proximityTrend; // ivar: _proximityTrend
@property (readonly, nonatomic) CGFloat rssi; // ivar: _rssi
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)btProximityWithTime:(CGFloat)arg0 proximityLevel:(NSUInteger)arg1 rssi:(CGFloat)arg2 continuousProximityLevel:(id)arg3 uuid:(id)arg4 proximityTrend:(NSUInteger)arg5 ;
-(id)initWithTime:(CGFloat)arg0 proximityLevel:(NSUInteger)arg1 rssi:(CGFloat)arg2 continuousProximityLevel:(id)arg3 uuid:(id)arg4 proximityTrend:(NSUInteger)arg5 ;


@end


#endif