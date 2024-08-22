// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARQUERYTASK_H
#define CALDAVCALENDARQUERYTASK_H

@class CoreDAVPropFindTask, NSDateComponents;



@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask

@property (retain, nonatomic) NSDateComponents *eventFilterEndDate; // ivar: _eventFilterEndDate
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate; // ivar: _eventFilterStartDate
@property (nonatomic) BOOL syncEvents; // ivar: _syncEvents
@property (nonatomic) BOOL syncTodos; // ivar: _syncTodos


-(id)_icsDateStringForNSDateComponents:(id)arg0 ;
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)_appendComponentFiltersToXMLData:(id)arg0 ;
-(void)_appendTimeRangeFilterToXMLData:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif