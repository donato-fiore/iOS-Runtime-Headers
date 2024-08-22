// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDINBEDPERIODSEGMENTARRAYBUILDER_H
#define HDINBEDPERIODSEGMENTARRAYBUILDER_H

@class NSMutableArray, NSDate, HKDateIntervalTree;

#import <Foundation/Foundation.h>


@interface HDInBedPeriodSegmentArrayBuilder : NSObject {
    NSMutableArray *_segments;
    NSInteger _category;
    CGFloat _minimumInterSegmentTimeInterval;
    NSDate *_minDate;
    NSDate *_maxDate;
    HKDateIntervalTree *_sampleIntervals;
}




-(id)finish;
-(id)init;
-(void)addOrderedSample:(id)arg0 ;


@end


#endif