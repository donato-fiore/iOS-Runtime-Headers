// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADCLIENTHOLIDAYCALENDARFETCHDELEGATE_H
#define DADCLIENTHOLIDAYCALENDARFETCHDELEGATE_H

@class CalDAVCalendarSearchTask, DAAccount;


#import "DADClientDelegate.h"

@interface DADClientHolidayCalendarFetchDelegate : DADClientDelegate {
    CalDAVCalendarSearchTask *_searchTask;
    DAAccount *_syncingAccount;
}




-(id)_getThrottleDateIfApplicable;
-(id)syncingAccount;
-(void)_handleCalendarSearchResults:(id)arg0 ;
-(void)_sendCompletionWithError:(id)arg0 retryThrottleTime:(CGFloat)arg1 ;
-(void)_sendResults:(id)arg0 ;
-(void)_setThrottledRetryDateUsingTimeInterval:(CGFloat)arg0 ;
-(void)fetchHolidayCalendars;
-(void)finishWithError:(id)arg0 ;


@end


#endif