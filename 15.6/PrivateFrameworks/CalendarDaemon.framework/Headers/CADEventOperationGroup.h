// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADEVENTOPERATIONGROUP_H
#define CADEVENTOPERATIONGROUP_H

@protocol CADEventInterface;


#import "CADOperationGroup.h"

@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(void)monitorLocationAuthorizationStatusChanges:(NSUInteger)arg0 ;
-(BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
-(id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)arg0 ;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg0 action:(int)arg1 reply:(id)arg2 ;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg0 action:(int)arg1 validator:(id)arg2 reply:(id)arg3 ;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(id)arg0 ;
-(void)CADDatabaseGetAllEventsWithUniqueID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetAttachmentWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(id)arg0 ;
-(void)CADDatabaseGetCountOfNotifiableEvents:(id)arg0 ;
-(void)CADDatabaseGetCountOfUnacknowledgedEvents:(id)arg0 ;
-(void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg0 withReply:(id)arg1 ;
-(void)CADDatabaseGetDefaultLocalCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseGetOrCreateBirthdayCalendar:(id)arg0 ;
-(void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(id)arg0 ;
-(void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseGetTTLLocationAuthorizationStatus:(id)arg0 ;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id)arg0 ;
-(void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)arg0 withReply:(id)arg1 ;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg0 delegateSource:(id)arg1 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg0 ;
-(void)CADDatabaseShouldPermitOrganizerEmailFromJunkChecks:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseShouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg0 reply:(id)arg1 ;
-(void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(id)arg0 ;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg0 ;
-(void)CADOccurrenceCacheDoEvents:(id)arg0 haveOccurrencesAfterDate:(id)arg1 reply:(id)arg2 ;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg0 reply:(id)arg1 ;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg0 nearestDate:(id)arg1 prefersForwardSearch:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg0 onDay:(id)arg1 reply:(id)arg2 ;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg0 inCalendars:(id)arg1 responseToken:(int)arg2 reply:(id)arg3 ;
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg0 inCalendars:(id)arg1 responseToken:(int)arg2 reply:(id)arg3 ;
-(void)CADOccurrencesExistInRangeForEvent:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 mustStartInInterval:(BOOL)arg3 timezone:(id)arg4 reply:(id)arg5 ;


@end


#endif