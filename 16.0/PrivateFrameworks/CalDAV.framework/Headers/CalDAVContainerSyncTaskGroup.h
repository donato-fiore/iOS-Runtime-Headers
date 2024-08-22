// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCONTAINERSYNCTASKGROUP_H
#define CALDAVCONTAINERSYNCTASKGROUP_H

@class CoreDAVContainerSyncTaskGroup, NSDateComponents;
@protocol CalDAVCalendar;



@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    int _fetchingEtagState;
}


@property (retain, nonatomic) NSObject<CalDAVCalendar> *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate; // ivar: _eventFilterEndDate
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate; // ivar: _eventFilterStartDate
@property (nonatomic) BOOL fallbackOnMultiGetError; // ivar: _fallbackOnMultiGetError
@property (nonatomic) BOOL getScheduleChanges; // ivar: _getScheduleChanges
@property (nonatomic) BOOL getScheduleTags; // ivar: _getScheduleTags
@property (nonatomic) BOOL supportsExtendedCalendarQuery; // ivar: _supportsExtendedCalendarQuery
@property (nonatomic) BOOL syncEvents; // ivar: _syncEvents
@property (nonatomic) BOOL syncTodos; // ivar: _syncTodos


-(BOOL)_shouldFetchEventsForState:(int)arg0 ;
-(BOOL)_shouldFetchTodosForState:(int)arg0 ;
-(BOOL)shouldFetchMoreETags;
-(BOOL)shouldFetchResourceWithEtag:(id)arg0 propertiesToValues:(id)arg1 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)arg0 ;
-(id)copyGetTaskWithURL:(id)arg0 ;
-(id)copyMultiGetTaskWithURLs:(id)arg0 ;
-(id)copyPutTaskWithPayloadItem:(id)arg0 forAction:(id)arg1 ;
-(id)dataContentType;
-(id)initWithCalendar:(id)arg0 accountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 appSpecificCalendarItemClass:(Class)arg6 ;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 getScheduleTags:(BOOL)arg4 getScheduleChanges:(BOOL)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificCalendarItemClass:(Class)arg8 ;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
-(void)applyAdditionalPropertiesFromPostTask:(id)arg0 ;
-(void)applyAdditionalPropertiesFromPutTask:(id)arg0 ;


@end


#endif