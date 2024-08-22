// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMEMORYMETRIC_H
#define MXMEMORYMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"
#import "MXAverage.h"

@interface MXMemoryMetric : MXMetric

@property (readonly) MXAverage *averageSuspendedMemory; // ivar: _averageSuspendedMemory
@property (readonly) NSMeasurement *peakMemoryUsage; // ivar: _peakMemoryUsage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeakMemoryUsageMeasurement:(id)arg0 averageMemoryUsageMeasurement:(id)arg1 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif