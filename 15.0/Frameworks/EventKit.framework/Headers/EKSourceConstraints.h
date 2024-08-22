// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSOURCECONSTRAINTS_H
#define EKSOURCECONSTRAINTS_H


#import <Foundation/Foundation.h>


@interface EKSourceConstraints : NSObject {
    ? _flags;
}


@property (nonatomic) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;
@property (nonatomic) BOOL allowsCalendarAddDeleteModify;
@property (nonatomic) BOOL allowsEvents;
@property (nonatomic) BOOL allowsProposeNewTime;
@property (nonatomic) BOOL allowsTasks;
@property (nonatomic) BOOL attendeesUseDeletedByOrganizerStatus;
@property (nonatomic) BOOL canSetAvailability;
@property (nonatomic) BOOL declinedStatusChangeRequiresNoPendingStatus;
@property (nonatomic) BOOL deliverySourceOrExternalIDRequiredForResponse;
@property (nonatomic) BOOL eventAvailabilityLimited;
@property (nonatomic) BOOL eventDurationConstrainedToRecurrenceInterval;
@property (nonatomic) BOOL futureStartDateLimitedToOccurrenceCacheBounds;
@property (nonatomic) BOOL inviteesCanSeeAttendeeStatuses;
@property (nonatomic) BOOL isFacebook;
@property (nonatomic) int maxAlarmsAllowed;
@property (nonatomic) int maxRecurrencesAllowed;
@property (nonatomic) BOOL mustAcknowledgeMasterEvent;
@property (nonatomic) BOOL occurrencesMustOccurOnSeparateDays;
@property (nonatomic) BOOL organizerCanSeeAttendeeStatuses;
@property (nonatomic) BOOL prohibitsDetachmentOnCommentChange;
@property (nonatomic) BOOL prohibitsICSImport;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) BOOL prohibitsPrivateEventsWithAttendees;
@property (nonatomic) BOOL prohibitsSlicingEventsWithAttendees;
@property (nonatomic) BOOL prohibitsUsingEventOrganizerEmailWhenComposingMail;
@property (nonatomic) BOOL prohibitsYearlyRecurrenceInterval;
@property (nonatomic) BOOL proposedStatusRequiredForResponse;
@property (nonatomic) BOOL recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
@property (nonatomic) BOOL recurrencesShouldPinToMonthDays;
@property (nonatomic) BOOL requiresAttendeeSearchInSingleAccount;
@property (nonatomic) BOOL requiresMSFormattedUID;
@property (nonatomic) BOOL requiresOccurrencesConformToRecurrenceRule;
@property (nonatomic) BOOL requiresOpeningAttachmentAsLink;
@property (nonatomic) BOOL requiresOutgoingInvitationsInDefaultCalendar;
@property (nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (nonatomic) BOOL shouldCancelDeletedEvents;
@property (nonatomic) BOOL shouldDeclineDeletedInvitations;
@property (nonatomic) BOOL shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
@property (nonatomic) BOOL snoozeAlarmRequiresDetach;
@property (nonatomic) BOOL statusesAreAccurate;
@property (nonatomic) BOOL supportsAlarmProximity;
@property (nonatomic) BOOL supportsAlarmTriggerDates;
@property (nonatomic) BOOL supportsAlarmTriggerIntervals;
@property (nonatomic) BOOL supportsAlarmsTriggeringAfterStartDate;
@property (nonatomic) BOOL supportsAllDayDueDates;
@property (nonatomic) BOOL supportsAttachments;
@property (nonatomic) BOOL supportsAutoGeocodingStructuredLocations;
@property (nonatomic) BOOL supportsAvailabilityRequests;
@property (nonatomic) BOOL supportsDelegateEnumeration;
@property (nonatomic) BOOL supportsDelegation;
@property (nonatomic) BOOL supportsEventForwarding;
@property (nonatomic) BOOL supportsFloatingTimeZone;
@property (nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests;
@property (nonatomic) BOOL supportsInboxAvailability;
@property (nonatomic) BOOL supportsIncomingInvitations;
@property (nonatomic) BOOL supportsInvitationModifications;
@property (nonatomic) BOOL supportsInvitationModificationsWithoutNotification;
@property (nonatomic) BOOL supportsJunkReporting;
@property (nonatomic) BOOL supportsLocationDirectorySearches;
@property (nonatomic) BOOL supportsManagedSubscribedCalendars;
@property (nonatomic) BOOL supportsOutgoingInvitations;
@property (nonatomic) BOOL supportsParticipantRoles;
@property (nonatomic) BOOL supportsPhoneNumbers;
@property (nonatomic) BOOL supportsPrivateEvents;
@property (nonatomic) BOOL supportsPush;
@property (nonatomic) BOOL supportsRecurrenceSplit;
@property (nonatomic) BOOL supportsRecurrencesOnDetachedEvents;
@property (nonatomic) BOOL supportsReminderActions;
@property (nonatomic) BOOL supportsReminderLocations;
@property (nonatomic) BOOL supportsResponseComments;
@property (nonatomic) BOOL supportsSharedCalendars;
@property (nonatomic) BOOL supportsStructuredLocations;
@property (nonatomic) BOOL supportsSubscribedCalendars;
@property (nonatomic) BOOL supportsSubscriptionMirroring;
@property (nonatomic) BOOL supportsURLField;


+(id)allAllowSourceConstraints;
-(id)init;
-(id)initWithCDBSourceConstraintFlags:(struct ? )arg0 ;


@end


#endif