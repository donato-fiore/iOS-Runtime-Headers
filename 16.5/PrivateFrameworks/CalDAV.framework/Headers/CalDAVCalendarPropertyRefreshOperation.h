// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARPROPERTYREFRESHOPERATION_H
#define CALDAVCALENDARPROPERTYREFRESHOPERATION_H

@class NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate, CalDAVCalendarPropertyRefreshDelegate, OS_dispatch_group;


#import "CalDAVOperation.h"

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>

 {
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    NSMutableSet *_updatedCalendars;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _isSecondRefresh;
    int _nextCalendarOrder;
}


@property (retain, nonatomic) NSString *calendarHomeSyncToken; // ivar: _calendarHomeSyncToken
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CalDAVCalendarPropertyRefreshDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceClearCalendarHomeSyncToken; // ivar: _forceClearCalendarHomeSyncToken
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingTasksGroup; // ivar: _outstandingTasksGroup
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCalendarHomeSyncReport; // ivar: _useCalendarHomeSyncReport


-(BOOL)_handleMkCalTaskGroupError:(id)arg0 forCalendar:(id)arg1 ;
-(BOOL)_handleUpdateForCalendar:(id)arg0 ;
-(id)_generateTimeZoneString:(id)arg0 ;
-(id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg0 isEventCalendar:(BOOL)arg1 ;
-(id)_getIsAffectingAvailabilityCoreDAVItem:(id)arg0 ;
-(id)_getMkcalendarTaskGroupForCalendar:(id)arg0 ;
-(id)_getSetIsAffectingAvailabilityTask:(BOOL)arg0 forCalendar:(id)arg1 atURL:(id)arg2 ;
-(id)_getSetPropertiesTaskWithItemsToSet:(id)arg0 itemsToRemove:(id)arg1 atURL:(id)arg2 ;
-(id)_getSetPropertyStringTask:(id)arg0 forName:(id)arg1 andNamespace:(id)arg2 forCalendar:(id)arg3 atURL:(id)arg4 ;
-(id)_getSetPropertyStringTask:(id)arg0 forName:(id)arg1 andNamespace:(id)arg2 forCalendar:(id)arg3 atURL:(id)arg4 ignoreErrors:(BOOL)arg5 ;
-(id)_getSetPropertyTaskWithCoreDAVItem:(id)arg0 forCalendar:(id)arg1 atURL:(id)arg2 ;
-(id)_getSetPropertyTaskWithCoreDAVItem:(id)arg0 forCalendar:(id)arg1 atURL:(id)arg2 ignoreErrors:(BOOL)arg3 ;
-(id)initWithPrincipal:(id)arg0 ;
-(int)_sharingStatusForContainer:(id)arg0 ;
-(void)_continueHandleContainerInfoTask:(id)arg0 completedWithContainers:(id)arg1 error:(id)arg2 ;
-(void)_finishRefresh;
-(void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg0 ;
-(void)_handleCalendarPublish;
-(void)_initializePrincipalCalendarCache;
-(void)_prepareCalendarsBeforeRefresh;
-(void)_reallyRefreshCalendarProperties;
-(void)_retryMkCalForCalendar:(id)arg0 ;
-(void)_sendAddsForCalendars;
-(void)_sendDeletesForCalendars;
-(void)_sendShareActionTasks;
-(void)_updateDefaultSchedulingCalendarIfNeededForInboxCalendar:(id)arg0 withContainer:(id)arg1 ;
-(void)containerInfoSyncTask:(id)arg0 completedWithNewSyncToken:(id)arg1 error:(id)arg2 ;
-(void)containerInfoSyncTask:(id)arg0 retrievedAddedOrModifiedContainers:(id)arg1 removedContainerURLs:(id)arg2 ;
-(void)containerInfoTask:(id)arg0 completedWithContainers:(id)arg1 error:(id)arg2 ;
-(void)continueRefreshFromSendingDeletes;
-(void)refreshCalendarProperties;


@end


#endif