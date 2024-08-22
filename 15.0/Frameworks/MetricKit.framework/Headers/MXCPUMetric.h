// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXCPUMETRIC_H
#define MXCPUMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"

@interface MXCPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeCPUInstructions; // ivar: _cumulativeCPUInstructions
@property (readonly) NSMeasurement *cumulativeCPUTime; // ivar: _cumulativeCPUTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg0 ;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg0 withCumulativeCPUInstructions:(id)arg1 ;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg0 withCumulativeCPUInstructions:(id)arg1 withCumulativeForegroundCPUTimeMeasurement:(id)arg2 withCumulativeBackgroundCPUTimeMeasurement:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif