// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVPUTCALENDARITEMTASK_H
#define CALDAVPUTCALENDARITEMTASK_H

@class CoreDAVPutTask, NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;



@interface CalDAVPutCalendarItemTask : CoreDAVPutTask

@property (nonatomic) NSObject<CalDAVPutCalendarItemTaskDelegate> *delegate;
@property (retain, nonatomic) NSString *previousScheduleTag; // ivar: _previousScheduleTag


-(id)additionalHeaderValues;
-(id)description;


@end


#endif