// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSTIMINGMEASUREMENT_H
#define BCSTIMINGMEASUREMENT_H

@class NSDate, NSArray;


#import "BCSMeasurement.h"

@interface BCSTimingMeasurement : BCSMeasurement {
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_realTimeMeasurementHandlers;
}


@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSInteger timingMeasurementType; // ivar: _timingMeasurementType


+(id)newTimingMeasurement:(NSInteger)arg0 withHandlers:(id)arg1 ;
-(void)begin;
-(void)end;


@end


#endif