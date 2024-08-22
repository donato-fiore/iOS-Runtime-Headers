// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSLEEPPERIODSEGMENTARRAYBUILDER_H
#define HDSLEEPPERIODSEGMENTARRAYBUILDER_H

@class NSMutableArray, NSDate, HKDateIntervalTree;

#import <Foundation/Foundation.h>


@interface HDSleepPeriodSegmentArrayBuilder : NSObject {
    NSMutableArray *_segments;
    NSInteger _category;
    CGFloat _minimumInterSegmentTimeInterval;
    NSDate *_minDate;
    NSDate *_maxDate;
    HKDateIntervalTree *_sampleIntervals;
    BOOL _containsAppleSleepTrackingData;
}




-(id)finish;
-(id)initWithCategory:(NSInteger)arg0 ;
-(void)addOrderedSample:(id)arg0 ;


@end


#endif