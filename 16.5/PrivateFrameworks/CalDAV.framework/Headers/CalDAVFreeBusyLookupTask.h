// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVFREEBUSYLOOKUPTASK_H
#define CALDAVFREEBUSYLOOKUPTASK_H

@class NSString;


#import "CalDAVScheduleTask.h"

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask

@property (retain, nonatomic) NSString *maskedUID; // ivar: _maskedUID


+(id)_freeBusyDocumentWithOrganizer:(id)arg0 attendees:(id)arg1 start:(id)arg2 end:(id)arg3 maskedUID:(id)arg4 extendedFreeBusy:(BOOL)arg5 prodID:(id)arg6 ;
+(id)_icsDate:(id)arg0 calendar:(id)arg1 ;
-(id)initWithOrganizer:(id)arg0 originator:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 outboxURL:(id)arg5 maskedUID:(id)arg6 ;
-(id)initWithOrganizer:(id)arg0 originator:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 outboxURL:(id)arg5 maskedUID:(id)arg6 extendedFreeBusy:(BOOL)arg7 prodID:(id)arg8 ;


@end


#endif