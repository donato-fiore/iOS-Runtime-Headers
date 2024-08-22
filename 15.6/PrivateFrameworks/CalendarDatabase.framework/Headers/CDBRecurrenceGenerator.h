// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDBRECURRENCEGENERATOR_H
#define CDBRECURRENCEGENERATOR_H

@class CalRecurrenceGenerator;



@interface CDBRecurrenceGenerator : CalRecurrenceGenerator



-(id)_copyOccurrenceDatesWithBirthdayEvent:(*void)arg0 startDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 limit:(NSInteger)arg4 locked:(BOOL)arg5 ;
-(id)computeRecurrenceEndDateForCalEvent:(*void)arg0 recurrenceRule:(*void)arg1 locked:(BOOL)arg2 ;
-(id)copyOccurrenceDatesWithCalEvent:(*void)arg0 startDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 limit:(NSInteger)arg4 locked:(BOOL)arg5 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg0 calRecurrences:(id)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 timeZone:(id)arg4 ;
-(void)_prepareForCalRecurrence:(*void)arg0 locked:(BOOL)arg1 ;
-(void)_setupForCalEvent:(*void)arg0 locked:(BOOL)arg1 ;


@end


#endif