// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMRECORDEDROTATIONRATEDATA_H
#define CMRECORDEDROTATIONRATEDATA_H

@class NSDate;


#import "CMRotationRateData.h"

@interface CMRecordedRotationRateData : CMRotationRateData {
    CGFloat _startDateValue;
    ? _rotationRate;
    CGFloat _timestampValue;
}


@property (readonly) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(CGFloat)timestamp;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(struct CMGyro200 *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 ;
-(struct ? )rotationRate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif