// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVPOSTCALENDARITEMTASK_H
#define CALDAVPOSTCALENDARITEMTASK_H

@class CoreDAVPostTask, NSString;
@protocol CalDAVPostCalendarItemTaskDelegate;



@interface CalDAVPostCalendarItemTask : CoreDAVPostTask

@property (nonatomic) NSObject<CalDAVPostCalendarItemTaskDelegate> *delegate;
@property (retain, nonatomic) NSString *previousScheduleTag; // ivar: _previousScheduleTag


-(id)additionalHeaderValues;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif