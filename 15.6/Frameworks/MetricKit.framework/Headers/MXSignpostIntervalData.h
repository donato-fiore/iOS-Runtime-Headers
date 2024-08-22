// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXSIGNPOSTINTERVALDATA_H
#define MXSIGNPOSTINTERVALDATA_H

@class NSMeasurement, NSMeasurementFormatter;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MXAverage.h"
#import "MXHistogram.h"

@interface MXSignpostIntervalData : NSObject <NSSecureCoding>



@property (readonly) MXAverage *averageMemory; // ivar: _averageMemory
@property (readonly) NSMeasurement *cumulativeCPUTime; // ivar: _cumulativeCPUTime
@property (readonly) NSMeasurement *cumulativeHitchTimeRatio; // ivar: _cumulativeHitchTimeRatio
@property (readonly) NSMeasurement *cumulativeLogicalWrites; // ivar: _cumulativeLogicalWrites
@property (readonly) MXHistogram *histogrammedSignpostDuration; // ivar: _histogrammedSignpostDuration
@property (retain) NSMeasurementFormatter *measurementFormatter; // ivar: _measurementFormatter


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogramDurationData:(id)arg0 withCumulativeCPUTime:(id)arg1 withAverageMemory:(id)arg2 withCumulativeLogicalWrites:(id)arg3 ;
-(id)initWithHistogramDurationData:(id)arg0 withCumulativeCPUTime:(id)arg1 withAverageMemory:(id)arg2 withCumulativeLogicalWrites:(id)arg3 withCumulativeHitchTimeRatio:(id)arg4 ;
-(id)initWithHistogramDurationData:(id)arg0 withCumulativeCPUTime:(id)arg1 withPeakMemory:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif