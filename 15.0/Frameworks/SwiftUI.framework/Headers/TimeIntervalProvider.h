// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMEINTERVALPROVIDER_H
#define TIMEINTERVALPROVIDER_H

@class NSDateFormatter, NSArray, NSDate;


#import "BaseDateProvider.h"

@interface TimeIntervalProvider : BaseDateProvider {
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
}


@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)_dateIntervalNarrowText;
-(id)_dateIntervalTextWithNarrow:(BOOL)arg0 ;
-(id)_dateIntervalWideText;
-(id)_fallbackSequence;
-(id)_sessionTextForIndex:(NSInteger)arg0 ;
-(id)_startTimeDropMinutesText;
-(id)_startTimeFullText;
-(id)_stringByRemovingDesignatorRange:(struct _NSRange )arg0 fromString:(id)arg1 ;
-(id)_textForSequenceItem:(NSInteger)arg0 ;
-(id)_timeIntervalDropMinutesText;
-(id)_timeIntervalFullText;
-(id)_timeIntervalTextWithDropMinutes:(BOOL)arg0 onlyStartDate:(BOOL)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 ;
-(struct _NSRange )_rangeOfAnnontatedTime:(id)arg0 matchingPattern:(id)arg1 ;
-(struct _NSRange )_rangeOfDesignatorInAnnotatedTime:(id)arg0 ;
-(struct _NSRange )_rangeOfHoursInAnnotatedTime:(id)arg0 ;


@end


#endif