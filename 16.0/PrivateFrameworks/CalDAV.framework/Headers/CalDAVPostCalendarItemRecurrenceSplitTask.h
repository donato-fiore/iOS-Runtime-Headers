// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVPOSTCALENDARITEMRECURRENCESPLITTASK_H
#define CALDAVPOSTCALENDARITEMRECURRENCESPLITTASK_H

@class CoreDAVPropertyFindBaseTask, CoreDAVResponseItem, NSURL, NSString, NSDate;



@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) CoreDAVResponseItem *createdResponseItem; // ivar: _createdResponseItem
@property (nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (retain, nonatomic) NSURL *postURLWithQuery; // ivar: _postURLWithQuery
@property (retain, nonatomic) NSString *previousETag; // ivar: _previousETag
@property (retain, nonatomic) NSString *previousScheduleTag; // ivar: _previousScheduleTag
@property (retain, nonatomic) NSDate *recurrenceDate; // ivar: _recurrenceDate
@property (retain, nonatomic) NSURL *resourceURL; // ivar: _resourceURL
@property (retain, nonatomic) NSString *uidForCreatedSeries; // ivar: _uidForCreatedSeries
@property (retain, nonatomic) CoreDAVResponseItem *updatedResponseItem; // ivar: _updatedResponseItem


-(id)_dataForItem:(id)arg0 ;
-(id)_documentForItem:(id)arg0 ;
-(id)_etagForItem:(id)arg0 ;
-(id)_scheduleTagForItem:(id)arg0 ;
-(id)additionalHeaderValues;
-(id)createdETag;
-(id)createdICSData;
-(id)createdICSDocument;
-(id)createdScheduleTag;
-(id)createdURL;
-(id)description;
-(id)httpMethod;
-(id)initWithResourceURL:(id)arg0 recurrenceDate:(id)arg1 floating:(BOOL)arg2 allday:(BOOL)arg3 ;
-(id)requestBody;
-(id)updatedETag;
-(id)updatedICSDocument;
-(id)updatedScheduleTag;
-(id)url;
-(id)urlWithQuery;
-(void)_updateBothResponseItems;


@end


#endif