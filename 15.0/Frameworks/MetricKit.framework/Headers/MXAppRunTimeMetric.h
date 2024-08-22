// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXAPPRUNTIMEMETRIC_H
#define MXAPPRUNTIMEMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"

@interface MXAppRunTimeMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeBackgroundAudioTime; // ivar: _cumulativeBackgroundAudioTime
@property (readonly) NSMeasurement *cumulativeBackgroundLocationTime; // ivar: _cumulativeBackgroundLocationTime
@property (readonly) NSMeasurement *cumulativeBackgroundTime; // ivar: _cumulativeBackgroundTime
@property (readonly) NSMeasurement *cumulativeForegroundTime; // ivar: _cumulativeForegroundTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCumulativeForegroundTimeMeasurement:(id)arg0 cumulativeBackgroundTimeMeasurement:(id)arg1 cumulativeBackgroundAudioTimeMeasurement:(id)arg2 cumulativeBackgroundLocationTimeMeasurement:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif