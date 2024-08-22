// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXAVERAGE_H
#define MXAVERAGE_H

@class NSMeasurementFormatter, NSMeasurement;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXAverage : NSObject <NSSecureCoding>

 {
    NSMeasurementFormatter *_averageMeasurementFormatter;
}


@property (readonly) NSMeasurement *averageMeasurement; // ivar: _averageMeasurement
@property (readonly) NSInteger sampleCount; // ivar: _sampleCount
@property (readonly) CGFloat standardDeviation; // ivar: _standardDeviation


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDoubleValue:(CGFloat)arg0 sampleCount:(NSInteger)arg1 standardDeviation:(CGFloat)arg2 unit:(id)arg3 ;
-(id)initWithMeasurement:(id)arg0 sampleCount:(NSInteger)arg1 standardDeviation:(CGFloat)arg2 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif