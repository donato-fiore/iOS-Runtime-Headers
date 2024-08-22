// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMRECORDEDPRESSUREDATA_H
#define CMRECORDEDPRESSUREDATA_H

@class NSDate;


#import "CMAmbientPressureData.h"

@interface CMRecordedPressureData : CMAmbientPressureData {
    CGFloat _startDateValue;
    float _pressureValue;
    CGFloat _timestampValue;
    float _temperatureValue;
}


@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSDate *startDate;
@property (readonly) CGFloat startTime;


+(BOOL)supportsSecureCoding;
-(CGFloat)timestamp;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(struct CMPressure *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;
-(struct ? )ambientPressure;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithData:(struct CMPressure *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;


@end


#endif