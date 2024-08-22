// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKREMCOMPLETIONSTATEREMINDERPREDICATE_H
#define EKREMCOMPLETIONSTATEREMINDERPREDICATE_H

@class NSDate;


#import "EKREMReminderPredicate.h"

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {
    NSDate *_start;
    NSDate *_end;
    BOOL _completed;
}




-(BOOL)evaluateWithObject:(id)arg0 ;
-(id)fetchMatchingRemindersInStore:(id)arg0 allLists:(id)arg1 error:(*id)arg2 ;
-(id)initForCompletedRemindersWithCompletionDateStarting:(id)arg0 ending:(id)arg1 calendars:(id)arg2 ;
-(id)initForIncompleteRemindersWithDueDateStarting:(id)arg0 ending:(id)arg1 calendars:(id)arg2 ;


@end


#endif