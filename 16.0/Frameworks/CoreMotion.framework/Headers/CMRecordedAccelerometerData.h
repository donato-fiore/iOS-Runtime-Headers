// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMRECORDEDACCELEROMETERDATA_H
#define CMRECORDEDACCELEROMETERDATA_H

@class NSDate;


#import "CMAccelerometerData.h"

@interface CMRecordedAccelerometerData : CMAccelerometerData {
    CGFloat _startDateValue;
    ? _accelerationValue;
    CGFloat _timestampValue;
}


@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSDate *startDate;
@property (readonly) CGFloat startTime;


+(BOOL)supportsSecureCoding;
-(CGFloat)timestamp;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(struct CMAccel100 *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;
-(struct ? )acceleration;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithData:(struct CMAccel100 *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;


@end


#endif