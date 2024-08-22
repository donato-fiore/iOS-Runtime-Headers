// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADEVENTOPERATIONGROUP_H
#define CADEVENTOPERATIONGROUP_H

@protocol CADEventInterface;


#import "CADOperationGroup.h"

@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>





+(BOOL)requiresEventAccess;
+(void)monitorLocationAuthorizationStatusChanges:(NSUInteger)arg0 ;
-(?)_getDefaultCalendarIDForNewEventsInStoreWithID:(?)arg0 inDatabasedefaultExists;
-(BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
-(id)_mergeDaysAndOccurrenceCounts:(id)arg0 withCounts:(id)arg1 ;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(id)arg0 ;
-(void)CADDatabaseGetAllEventsWithUniqueID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetAttachmentUUIDWithExternalID:(id)arg0 store:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseGetAttachmentWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(id)arg0 ;
-(void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg0 withReply:(id)arg1 ;
-(void)CADDatabaseGetDefaultLocalCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseGetOrCreateBirthdayCalendar:(id)arg0 ;
-(void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(id)arg0 ;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseGetTTLLocationAuthorizationStatus:(id)arg0 ;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)arg0 withReply:(id)arg1 ;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg0 delegateSource:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseShouldPermitOrganizerEmailFromJunkChecks:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseShouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg0 reply:(id)arg1 ;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg0 ;
-(void)CADOccurrenceCacheDoEvents:(id)arg0 haveOccurrencesAfterDate:(id)arg1 reply:(id)arg2 ;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg0 reply:(id)arg1 ;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithObjectID:(id)arg0 nearestDate:(id)arg1 prefersForwardSearch:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADOccurrenceCacheGetOccurrencesForCalendars:(id)arg0 onDay:(id)arg1 reply:(id)arg2 ;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg0 inCalendars:(id)arg1 responseToken:(int)arg2 reply:(id)arg3 ;
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg0 inCalendars:(id)arg1 responseToken:(int)arg2 reply:(id)arg3 ;
-(void)CADOccurrencesExistInRangeForEvent:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 mustStartInInterval:(BOOL)arg3 timezone:(id)arg4 reply:(id)arg5 ;


@end


#endif