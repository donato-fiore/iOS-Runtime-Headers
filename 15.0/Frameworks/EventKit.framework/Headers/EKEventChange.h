// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTCHANGE_H
#define EKEVENTCHANGE_H



#import "EKCalendarItemChange.h"

@interface EKEventChange : EKCalendarItemChange



+(int)entityType;
+(void)fetchEventChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchEventChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchEventChangesInStore:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif