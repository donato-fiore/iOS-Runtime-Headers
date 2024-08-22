// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADSTATSCALENDARS_H
#define CADSTATSCALENDARS_H



#import "CADStatCollector.h"
#import "CADStatCollectionContext.h"

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    int _totalCalendars;
    int _totalSharedCalendars;
    int _totalCalendarSharees;
    int _totalHolidayCalendars;
    int _totalSubscribedCalendars;
    int _totalCalDAVSubscribedCalendars;
    int _totalAuthenticatedSubscribedCalendars;
    int _totalDeselectedCalendars;
}




+(id)eventName;
-(BOOL)calendarUsesAuthentication:(*void)arg0 ;
-(BOOL)wantsCalendars;
-(id)eventDictionaries;
-(void)prepareWithContext:(id)arg0 ;
-(void)processCalendars:(id)arg0 inStore:(*void)arg1 ;


@end


#endif