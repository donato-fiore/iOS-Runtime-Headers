// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVSCHEDULETASK_H
#define CALDAVSCHEDULETASK_H

@class CoreDAVPostTask, NSArray, NSString;


#import "CalDAVScheduleResponseItem.h"

@interface CalDAVScheduleTask : CoreDAVPostTask

@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (retain, nonatomic) NSString *originator; // ivar: _originator
@property (retain, nonatomic) CalDAVScheduleResponseItem *scheduleResponse; // ivar: _scheduleResponse


-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)initWithOriginator:(id)arg0 attendees:(id)arg1 outboxURL:(id)arg2 payload:(id)arg3 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif