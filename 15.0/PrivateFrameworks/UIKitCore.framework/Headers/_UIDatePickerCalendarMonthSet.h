// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERCALENDARMONTHSET_H
#define _UIDATEPICKERCALENDARMONTHSET_H

@class NSCalendar, NSMutableIndexSet, NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarMonthSet : NSObject {
    NSCalendar *_calendar;
    NSUInteger _rangeLength;
    _UIDatePickerCalendarMonth *_referenceMonth;
    NSMutableIndexSet *_loadedMonthOffsets;
    NSMutableOrderedSet *_loadedMonths;
}




-(NSUInteger)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(struct __UISignedRange )arg0 ;
-(NSUInteger)indexOfMonth:(id)arg0 ;
-(id)_monthAtOffset:(NSInteger)arg0 ;
-(id)initWithCalendar:(id)arg0 rangeLength:(NSUInteger)arg1 ;
-(id)loadedMonths;
-(id)monthAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )_loadOffsetRange:(struct __UISignedRange )arg0 ;
-(struct __UISignedRange )_offsetRangeForMonth:(id)arg0 ;
-(void)_clearLoadedData;
-(void)_ensureReferenceMonthWithFallbackMonth:(id)arg0 ;
-(void)insertMonthsAroundMonth:(id)arg0 loadedIndexRange:(struct _NSRange *)arg1 ;
-(void)reloadWithMonthsAroundMonth:(id)arg0 ;


@end


#endif