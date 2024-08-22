// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKREMINDERCHANGE_H
#define EKREMINDERCHANGE_H



#import "EKCalendarItemChange.h"

@interface EKReminderChange : EKCalendarItemChange



+(int)entityType;
+(void)fetchReminderChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchReminderChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchReminderChangesInStore:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif