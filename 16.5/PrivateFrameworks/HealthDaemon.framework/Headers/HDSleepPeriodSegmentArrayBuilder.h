// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSLEEPPERIODSEGMENTARRAYBUILDER_H
#define HDSLEEPPERIODSEGMENTARRAYBUILDER_H

@class HKCalendarCache, NSString;
@protocol HDSleepPeriodSegmentArrayBuilding, HDStatisticsCollectionCalculatorSourceOrderProvider;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDSleepPeriodSegmentArrayBuilder : NSObject <HDSleepPeriodSegmentArrayBuilding>

 {
    HDProfile *_profile;
    NSInteger _morningIndex;
    NSUInteger _options;
    HKCalendarCache *_calendarCache;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> *_sourceOrderProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initProfile:(id)arg0 morningIndex:(NSInteger)arg1 options:(NSUInteger)arg2 calendarCache:(id)arg3 sourceOrderProvider:(id)arg4 ;
-(id)sleepPeriodSegmentsFromSamples:(id)arg0 ;


@end


#endif