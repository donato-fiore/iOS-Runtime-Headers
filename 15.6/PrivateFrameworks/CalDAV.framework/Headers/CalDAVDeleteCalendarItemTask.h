// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVDELETECALENDARITEMTASK_H
#define CALDAVDELETECALENDARITEMTASK_H

@class CoreDAVDeleteTask, NSString;



@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask

@property (retain, nonatomic) NSString *previousScheduleTag; // ivar: _previousScheduleTag


-(id)additionalHeaderValues;
-(id)description;


@end


#endif