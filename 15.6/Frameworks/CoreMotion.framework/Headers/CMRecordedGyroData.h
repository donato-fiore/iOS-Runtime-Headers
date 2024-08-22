// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMRECORDEDGYRODATA_H
#define CMRECORDEDGYRODATA_H

@class NSDate;


#import "CMGyroData.h"

@interface CMRecordedGyroData : CMGyroData {
    CGFloat _startDateValue;
    ? _rotationRate;
    CGFloat _timestampValue;
    float _temperatureValue;
}


@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSDate *startDate;
@property (readonly) CGFloat startTime;
@property (readonly) float temperature;


+(BOOL)supportsSecureCoding;
-(CGFloat)timestamp;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(struct CMGyro50 *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;
-(struct ? )rotationRate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithData:(struct CMGyro50 *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;


@end


#endif