// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADSTATSGENERALCOLLECTION_H
#define CADSTATSGENERALCOLLECTION_H

@class NSMutableDictionary, NSCountedSet, EKCalendarDate;


#import "CADStatCollector.h"
#import "CADStatCollectionContext.h"

@interface CADStatsGeneralCollection : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableDictionary *payload;
    NSUInteger totalAccounts;
    NSUInteger totalFacebookEvents;
    NSUInteger totalAccountsWithSyncStyleManual;
    NSUInteger totalAccountsWithSyncStyleFetch;
    NSUInteger totalAccountsWithSyncStylePush;
    NSUInteger totalCalendars;
    BOOL hasLocalSource;
    BOOL hasRemoteSource;
    NSCountedSet *accountTypes;
    NSUInteger totalDefaultBirthdays;
    NSInteger totalOccurrencesProcessed;
    ? totalOccurrences;
    ? totalAllDayOccurrences;
    ? totalOccurrencesAreCandidatesForTravelAdvisories;
    ? totalOccurrencesAreImmediatelyEligibleForTravelAdvisories;
    ? totalOccurrencesWithLocation;
    ? totalOccurrencesWithClientLocation;
    ? totalOccurrencesWithLocationHavingKnownSpatialData;
    ? totalOccurrencesWithConferenceRoomLocation;
    ? totalOccurrencesWithConferenceRoomLocationHavingKnownSpatialData;
    ? totalOccurrencesWithTravelAdvisoryBehaviorAutomatic;
    ? totalOccurrencesWithTravelAdvisoryBehaviorEnabled;
    ? totalOccurrencesWithTravelAdvisoryBehaviorDisabled;
    ? totalOccurrencesInCalendarsThatSuppressEventAlerts;
    ? totalOccurrencesWithAttendees;
    ? totalOccurrencesWithAttendeeResponseComment;
    ? totalOccurrencesWithAttendeesAndOrganizerIsSelf;
    ? totalOccurrencesWithAttendeesAndOrganizerIsNotSelf;
    ? totalOccurrencesWithAttendeeStatusNone;
    ? totalOccurrencesWithAttendeeStatusPending;
    ? totalOccurrencesWithAttendeeStatusTentative;
    ? totalOccurrencesWithAttendeeStatusInprocess;
    ? totalOccurrencesWithAttendeeStatusDelegated;
    ? totalOccurrencesWithAttendeeStatusDeclined;
    ? totalOccurrencesWithAttendeeStatusCompleted;
    ? totalOccurrencesWithAttendeeStatusAccepted;
    ? totalOccurrencesWithStatusNone;
    ? totalOccurrencesWithStatusCancelled;
    ? totalOccurrencesWithStatusConfirmed;
    ? totalOccurrencesWithStatusTentative;
    ? totalOccurrencesWithStatusTentativeUnlisted;
    ? totalOccurrencesWithNonDefaultAlarms;
    ? totalOccurrencesWithURLs;
    ? totalOccurrencesWithNotes;
    ? numAttendees;
    ? durationAllDayDays;
    ? durationNonAllDayMinutes;
    EKCalendarDate *now;
    EKCalendarDate *oneDayAgo;
    EKCalendarDate *days1;
    EKCalendarDate *days7;
    EKCalendarDate *days28;
    EKCalendarDate *days365;
    NSUInteger totalEvents;
    NSUInteger totalDetachedEvents;
    NSUInteger totalEventsWithRecurrence;
    NSUInteger totalEventsAreCandidatesForTravelAdvisories;
    NSUInteger totalEventsAreImmediatelyEligibleForTravelAdvisories;
    NSUInteger totalEventsWithLocation;
    NSUInteger totalEventsWithClientLocation;
    NSUInteger totalEventsWithLocationHavingKnownSpatialData;
    NSUInteger totalEventsWithConferenceRoomLocation;
    NSUInteger totalEventsWithConferenceRoomLocationHavingKnownSpatialData;
    NSUInteger totalEventsWithTravelAdvisoryBehaviorAutomatic;
    NSUInteger totalEventsWithTravelAdvisoryBehaviorEnabled;
    NSUInteger totalEventsWithTravelAdvisoryBehaviorDisabled;
    NSUInteger totalAllDayEvents;
    NSUInteger totalEventsWithAlertsIgnored;
    NSUInteger totalEventsThatUserDeclined;
    NSUInteger significantEventsCount;
    NSUInteger significantEventsWithPredictedLocationCount;
    NSUInteger significantEventsOnSharedCalendarCount;
    NSUInteger significantEventsWithPredictedLocationAndOnSharedCalendar;
}




+(id)eventName;
-(BOOL)wantsBirthdays;
-(BOOL)wantsCalendars;
-(BOOL)wantsEvents;
-(BOOL)wantsOccurrences;
-(BOOL)wantsSignificantEvents;
-(BOOL)wantsStores;
-(id)eventDictionaries;
-(id)init;
-(void)performOtherGeneralCollection;
-(void)prepareWithContext:(id)arg0 ;
-(void)processBirthdayCalendarEvents:(id)arg0 ;
-(void)processCalendars:(id)arg0 inStore:(*void)arg1 ;
-(void)processEvents:(id)arg0 ;
-(void)processOccurrences:(id)arg0 ;
-(void)processSignificantEventWithPredictedLocation:(BOOL)arg0 onSharedCalendar:(BOOL)arg1 ;
-(void)processStores:(id)arg0 ;


@end


#endif