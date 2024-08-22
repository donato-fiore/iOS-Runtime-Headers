// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTSERIESQUANTITY_H
#define HDWORKOUTSERIESQUANTITY_H

@class HKQuantity, NSDateInterval, HKQuantitySample, HKQuantityType;
@protocol HDWorkoutQuantity;

#import <Foundation/Foundation.h>


@interface HDWorkoutSeriesQuantity : NSObject <HDWorkoutQuantity>

 {
    HKQuantity *_quantity;
    NSDateInterval *_dateInterval;
    HKQuantitySample *_series;
}


@property (readonly, nonatomic) NSDateInterval *hdw_dateInterval;
@property (readonly, nonatomic) CGFloat hdw_endTimestamp;
@property (readonly, nonatomic) HKQuantity *hdw_quantity;
@property (readonly, nonatomic) HKQuantitySample *hdw_sample;
@property (readonly, nonatomic) CGFloat hdw_startTimestamp;
@property (readonly, nonatomic) HKQuantityType *hdw_type;


-(id)description;
-(id)initWithQuantity:(id)arg0 dateInterval:(id)arg1 series:(id)arg2 ;


@end


#endif