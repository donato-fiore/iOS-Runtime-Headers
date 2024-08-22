// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKREMREMINDERPREDICATE_H
#define EKREMREMINDERPREDICATE_H

@class NSPredicate, NSArray, NSSet;



@interface EKREMReminderPredicate : NSPredicate {
    NSArray *_calendars;
    NSSet *_calendarIdentifierSet;
    BOOL noCalendarNoResult;
}




-(BOOL)evaluateWithObject:(id)arg0 ;
-(id)fetchMatchingRemindersInStore:(id)arg0 allLists:(id)arg1 error:(*id)arg2 ;
-(id)initForCalendarStoreWithCalendars:(id)arg0 ;
-(id)initWithCalendars:(id)arg0 ;
-(id)predicateFormat;
-(id)remListIDsWithAllLists:(id)arg0 ;


@end


#endif