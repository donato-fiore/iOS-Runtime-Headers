// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMRECORDEDPRESSUREDATA_H
#define CMRECORDEDPRESSUREDATA_H

@class NSMeasurement, NSDate;
@protocol SRSampleDirectExporting;


#import "CMAmbientPressureData.h"

@interface CMRecordedPressureData : CMAmbientPressureData <SRSampleDirectExporting>

 {
    CGFloat _startDateValue;
    float _pressureValue;
    CGFloat _timestampValue;
    float _temperatureValue;
    NSMeasurement *_pressureMeasurement;
    NSMeasurement *_temperatureMeasurement;
}


@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSDate *startDate;
@property (readonly) CGFloat startTime;


+(BOOL)supportsSecureCoding;
-(BOOL)sr_prefersUTF8StringRepresentation;
-(CGFloat)timestamp;
-(NSInteger)sr_writeUTF8RepresentationToOutputStream:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(struct CMPressure *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;
-(id)pressure;
-(id)temperature;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithData:(struct CMPressure *)arg0 timestamp:(NSUInteger)arg1 walltime:(CGFloat)arg2 identifier:(NSUInteger)arg3 ;


@end


#endif