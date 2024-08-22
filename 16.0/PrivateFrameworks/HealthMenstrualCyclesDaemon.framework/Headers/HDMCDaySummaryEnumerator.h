// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCDAYSUMMARYENUMERATOR_H
#define HDMCDAYSUMMARYENUMERATOR_H

@class HDProfile, HDMultiTypeSortedSampleIterator, HKCalendarCache;

#import <Foundation/Foundation.h>


@interface HDMCDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    ? _dayIndexRange;
    HDMultiTypeSortedSampleIterator *_iterator;
    BOOL _ascending;
    HKCalendarCache *_calendarCache;
}




+(id)daySummariesInIndexRange:(struct ? )arg0 profile:(id)arg1 calendarCache:(id)arg2 error:(*id)arg3 ;
+(id)daySummaryAtIndex:(NSInteger)arg0 profile:(id)arg1 calendarCache:(id)arg2 error:(*id)arg3 ;
-(BOOL)enumerateWithError:(*id)arg0 handler:(id)arg1 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 dayIndexRange:(struct ? )arg2 ascending:(BOOL)arg3 includeFactors:(BOOL)arg4 includeWristTemperature:(BOOL)arg5 ;
-(void)_addSample:(id)arg0 toBuilders:(id)arg1 atDayIndex:(NSInteger)arg2 ;
-(void)_addSample:(id)arg0 toBuilders:(id)arg1 inRange:(struct ? )arg2 ;
-(void)_addSample:(id)arg0 toBuilders:(id)arg1 sampleRange:(struct ? )arg2 ;
// -(void)_closeBuilders:(id)arg0 withIndexes:(id)arg1 handler:(id)arg2 stop:(unk)arg3  ;


@end


#endif