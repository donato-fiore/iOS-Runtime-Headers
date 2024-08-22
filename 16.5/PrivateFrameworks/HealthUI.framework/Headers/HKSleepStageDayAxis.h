// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGEDAYAXIS_H
#define HKSLEEPSTAGEDAYAXIS_H

@protocol HKSleepStageDayAxisDelegate;


#import "HKDateAxis.h"

@interface HKSleepStageDayAxis : HKDateAxis

@property (weak, nonatomic) NSObject<HKSleepStageDayAxisDelegate> *delegate; // ivar: _delegate


-(id)_currentOrGregorianCalendar;
-(id)stringForDate:(id)arg0 somnogramDateInterval:(id)arg1 ;
-(id)stringForDate:(id)arg0 zoom:(NSInteger)arg1 labelType:(NSInteger)arg2 ;


@end


#endif