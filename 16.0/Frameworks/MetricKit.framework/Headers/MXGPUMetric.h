// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXGPUMETRIC_H
#define MXGPUMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"

@interface MXGPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeGPUTime; // ivar: _cumulativeGPUTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCumulativeGPUTimeMeasurement:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif