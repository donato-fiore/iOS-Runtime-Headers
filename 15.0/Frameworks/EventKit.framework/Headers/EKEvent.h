// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENT_H
#define EKEVENT_H

@class NSDate, NSString, NSSet, NSURL, EKCalendarDate, NSArray, NSNumber;
@protocol EKJunkInvitationProtocol_Private, CalDateRangeProtocol;


#import "EKCalendarItem.h"
#import "EKStructuredLocation.h"
#import "EKReadWriteLock.h"
#import "EKEventStore.h"
#import "EKParticipant.h"
#import "EKRecurrenceIdentifier.h"
#import "EKSuggestedEventInfo.h"
#import "EKVirtualConference.h"

@interface EKEvent : EKCalendarItem <EKJunkInvitationProtocol_Private, CalDateRangeProtocol>

 {
    EKStructuredLocation *_cachedLocationPrediction;
    NSDate *_cachedLocationPredictionExpirationDate;
    BOOL _locationPredictionFrozen;
    BOOL _locationPredictionAllowed;
    EKReadWriteLock *_locationPredictionLock;
}


@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSSet *actions;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) BOOL allowsAllDayModifications;
@property (readonly, nonatomic) BOOL allowsAvailabilityModifications;
@property (readonly, nonatomic) BOOL allowsParticipantStatusModifications;
@property (readonly, nonatomic) BOOL allowsParticipationStatusModifications;
@property (readonly, nonatomic) BOOL allowsPrivacyLevelModifications;
@property (readonly, nonatomic) BOOL allowsProposedTimeModifications;
@property (readonly, nonatomic) BOOL allowsResponseCommentModifications;
@property (readonly, nonatomic) BOOL allowsTravelTimeModifications;
@property (nonatomic) BOOL attendeeComment;
@property (nonatomic) BOOL attendeeDeclinedStartDate;
@property (nonatomic) BOOL attendeeProposedStartDate;
@property (nonatomic) BOOL attendeeReplyChanged;
@property (nonatomic) BOOL attendeeStatus;
@property (readonly, nonatomic) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic) NSInteger availability;
@property (readonly, nonatomic) NSString *birthdayContactIdentifier;
@property (readonly, nonatomic) NSInteger birthdayPersonID;
@property (readonly, nonatomic) NSString *birthdayPersonUniqueID; // ivar: _birthdayPersonUniqueID
@property (nonatomic) NSUInteger cachedJunkStatus;
@property (readonly, nonatomic) BOOL canBeRespondedTo;
@property (readonly, nonatomic) BOOL canDetachSingleOccurrence;
@property (nonatomic) int clearModifiedFlags; // ivar: _clearModifiedFlags
@property (retain, nonatomic) NSURL *conferenceURL;
@property (readonly, nonatomic) NSInteger currentUserGeneralizedParticipantRole;
@property (readonly, nonatomic, getter=isCurrentUserInvitedAttendee) BOOL currentUserInvitedAttendee;
@property (nonatomic) BOOL dateChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontSendNotificationForChanges;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat durationIncludingTravel;
@property (readonly, nonatomic) BOOL eligibleForTravelAdvisories;
@property (readonly, nonatomic) EKCalendarDate *endCalendarDate;
@property (copy, nonatomic) NSDate *endDate;
@property (retain, nonatomic) EKStructuredLocation *endLocation;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *eventOccurrenceID;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (nonatomic) int externalTrackingStatus;
@property (readonly, nonatomic) NSURL *externalURL;
@property (nonatomic) BOOL firedTTL;
@property (readonly, nonatomic) BOOL hasAttachmentChanges;
@property (readonly, nonatomic) BOOL hasComplexRecurrence;
@property (readonly, nonatomic) BOOL hasPredictedLocation;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *initialEndDate;
@property (readonly, copy, nonatomic) NSDate *initialStartDate;
@property (nonatomic) NSUInteger invitationStatus;
@property (nonatomic) BOOL isAlerted;
@property (readonly, nonatomic) BOOL isAllDayDirty;
@property (readonly, nonatomic) BOOL isDetached;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isEndDateDirty;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isMasterOrDetachedOccurrence;
@property (nonatomic) BOOL isPhantom;
@property (readonly, nonatomic) BOOL isPrivateEventSharedToMe;
@property (readonly, nonatomic) BOOL isSignificantlyDetached;
@property (readonly, nonatomic) BOOL isSignificantlyDetachedIgnoringParticipation;
@property (readonly, nonatomic) BOOL isStartDateDirty;
@property (readonly, nonatomic) BOOL isStatusDirty;
@property (nonatomic) NSUInteger junkStatus;
@property (readonly, nonatomic) NSURL *launchURL;
@property (nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL locationIsAConferenceRoom;
@property (nonatomic) NSInteger locationPredictionState;
@property (readonly, nonatomic) NSString *locationWithoutPrediction;
@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *locationsWithoutPrediction;
@property (readonly, nonatomic) NSDate *occurrenceDate;
@property (copy, nonatomic) EKCalendarDate *occurrenceEndDate; // ivar: _occurrenceEndDate
@property (nonatomic) BOOL occurrenceIsAllDay; // ivar: _occurrenceIsAllDay
@property (copy, nonatomic) EKCalendarDate *occurrenceStartDate; // ivar: _occurrenceStartDate
@property (readonly, nonatomic) EKParticipant *organizer;
@property (copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate; // ivar: _originalOccurrenceEndDate
@property (copy, nonatomic) NSNumber *originalOccurrenceIsAllDay; // ivar: _originalOccurrenceIsAllDay
@property (copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate; // ivar: _originalOccurrenceStartDate
@property (readonly, nonatomic) NSDate *originalStartDate;
@property (nonatomic) NSInteger participationStatus;
@property (retain, nonatomic) NSDate *participationStatusModifiedDate;
@property (readonly, nonatomic) NSInteger pendingParticipationStatus;
@property (readonly, nonatomic) BOOL potentiallyEligibleForTravelAdvisories;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocationWithoutPrediction;
@property (nonatomic) BOOL preventConferenceURLDetection; // ivar: _preventConferenceURLDetection
@property (nonatomic) NSInteger privacyLevel;
@property (readonly, nonatomic, getter=isPrivacySet) BOOL privacySet;
@property (retain, nonatomic) NSDate *proposedEndDate; // ivar: _proposedEndDate
@property (retain, nonatomic) NSDate *proposedStartDate;
@property (readonly, nonatomic) NSDate *recurrenceDate;
@property (readonly, nonatomic) EKRecurrenceIdentifier *recurrenceIdentifier;
@property (copy, nonatomic) NSString *recurrenceSet;
@property (nonatomic) BOOL requiresDetachDueToSnoozedAlarm; // ivar: _requiresDetachDueToSnoozedAlarm
@property (readonly, nonatomic) BOOL responseMustApplyToAll;
@property (readonly, nonatomic) NSString *sendersEmail;
@property (readonly, nonatomic) NSString *sendersPhoneNumber;
@property (readonly, nonatomic) NSString *showEventURLString; // ivar: _showEventURLString
@property (readonly, nonatomic) EKCalendarDate *startCalendarDate;
@property (readonly, nonatomic) EKCalendarDate *startCalendarDateIncludingTravelTime;
@property (copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *startDateIncludingTravel;
@property (nonatomic) NSInteger status;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsJunkReporting;
@property (readonly, nonatomic) BOOL supportsParticipationStatusModificationsWithoutNotification;
@property (nonatomic) BOOL timeChanged;
@property (nonatomic) BOOL titleChanged;
@property (nonatomic) NSInteger travelAdvisoryBehavior;
@property (readonly, nonatomic) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled;
@property (readonly, nonatomic) NSInteger travelRoutingMode;
@property (retain, nonatomic) EKStructuredLocation *travelStartLocation;
@property (nonatomic) CGFloat travelTime;
@property (nonatomic) BOOL videoConferenceChanged;
@property (retain, nonatomic) EKVirtualConference *virtualConference;
@property (retain, nonatomic) NSString *virtualConferenceTextRepresentation; // ivar: _virtualConferenceTextRepresentation


+(BOOL)_calendarsAreSharedToMeInSameSourceAndHaveSameOwner:(id)arg0 ;
+(BOOL)isMultiDayTimedEventWithStartDate:(id)arg0 endDate:(id)arg1 allDay:(BOOL)arg2 inCalendar:(id)arg3 ;
+(Class)frozenClass;
+(NSInteger)_coercedEventAvailabilityForDesiredAvailability:(NSInteger)arg0 supportedAvailabilities:(NSUInteger)arg1 ;
+(NSInteger)_eventAvailabilityForParticipantStatus:(NSInteger)arg0 supportedEventAvailabilities:(NSUInteger)arg1 isAllDayEvent:(BOOL)arg2 ;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)_basicChangesRequiringSpanAll;
+(id)_locationStringForLocations:(id)arg0 ;
+(id)_modifiedNotificationUserInfoWithIdentifier:(id)arg0 forRevert:(BOOL)arg1 ;
+(id)_relatedCachedTimeKeys;
+(id)_updatedPredictedLocationRespectingTimeoutBudgetForEvent:(id)arg0 error:(*id)arg1 ;
+(id)eventFromICSEvent:(id)arg0 inStore:(id)arg1 ;
+(id)eventWithEventStore:(id)arg0 ;
+(id)externalUriScheme;
+(id)generateUniqueIDWithEvent:(id)arg0 originalEvent:(id)arg1 calendar:(id)arg2 ;
+(id)knownKeysToSkipForFutureChanges;
+(id)knownKeysToUseForFutureChanges;
+(id)knownPerUserPropertyKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRequireRSVPKeys;
+(id)knownSingleValueKeysForComparison;
-(BOOL)_canMoveOrCopyFromCalendar:(id)arg0 toCalendar:(id)arg1 allowedRequirements:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)_cancelWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_checkStartDateConstraintAgainstDate:(struct ? )arg0 timeZone:(id)arg1 error:(*id)arg2 ;
-(BOOL)_couldBeJunkCommon;
-(BOOL)_deleteWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_diff:(id)arg0 isDifferentFromCommittedEventHelperRequiresReschedule:(BOOL)arg1 ;
-(BOOL)_eligibleForTravelAdvisoriesIncludePotential:(BOOL)arg0 ;
-(BOOL)_eventIsTheOnlyRemainingOccurrence;
-(BOOL)_fetchedEventIsConflict:(id)arg0 forStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_hasAbsoluteAlarms;
-(BOOL)_hasBasicChangesRequiringSpanAll;
-(BOOL)_hasExternalIDOrDeliverySource;
-(BOOL)_hasOrHadRecurrenceRule;
-(BOOL)_hasRecurrenceRuleChangeRequiringSpanAll;
-(BOOL)_invitationChangedPropertyForFlag:(unsigned int)arg0 ;
-(BOOL)_isOriginalOccurrenceStartDateSameAsCommittedStartDate;
-(BOOL)_isParticipationStatusDirty;
-(BOOL)_isSignificantlyDetachedComparedToMaster:(id)arg0 shouldIgnorePartStat:(BOOL)arg1 ;
-(BOOL)_isSimpleRepeatingEvent;
-(BOOL)_needsPredictedLocationCacheUpdateHoldingLock;
-(BOOL)_noRemainingEarlierOccurrences;
-(BOOL)_occurrenceExistsOnDate:(id)arg0 timeZone:(id)arg1 ;
-(BOOL)_requirementsToMoveOrCopyToCalendarHelperAllowedToMoveOrCopyEventFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)_requirementsToMoveToCalendarHelperAlterationsRequiredToMoveEventFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)_requirementsToMoveToCalendarHelperDuplicationRequiredToMoveEventFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)_requirementsToMoveToCalendarHelperNeedToRemoveOriginalToMoveEventFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)_requirementsToMoveToCalendarHelperReinviteAttendeesRequiredToMoveEventFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)_requirementsToMoveToCalendarHelperRemoveAttendeesRequiredToMoveEventFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)_reset;
-(BOOL)_settingTimeZoneChangesStartEndDates;
-(BOOL)_shouldAlertInviteeDeclines;
-(BOOL)_shouldCancelInsteadOfDeleteWithSpan:(NSInteger)arg0 ;
-(BOOL)_shouldDeclineInsteadOfDelete;
-(BOOL)_shouldPreserveFutureWhenSlicingWithStartDate:(id)arg0 newStartDate:(id)arg1 ;
-(BOOL)_suggestedStartDateHelperRecurrenceRuleRequiresExpansion:(id)arg0 forDate:(id)arg1 ;
-(BOOL)_userAddressesRepresentInvitedAttendee:(id)arg0 checkEmailAddresses:(BOOL)arg1 ;
-(BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(NSInteger)arg0 ;
-(BOOL)_validateDatesAndRecurrencesGivenSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)allowsAlarmModifications;
-(BOOL)allowsAttendeesModifications;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)allowsSpansOtherThanThisEvent;
-(BOOL)canForward;
-(BOOL)canMoveOrCopyToCalendar:(id)arg0 fromCalendar:(id)arg1 error:(*id)arg2 ;
-(BOOL)canMoveToCalendar:(id)arg0 fromCalendar:(id)arg1 allowedRequirements:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)canMoveToCalendar:(id)arg0 fromCalendar:(id)arg1 error:(*id)arg2 ;
-(BOOL)changingAllDayPropertyIsAllowed;
-(BOOL)conformsToRecurrenceRules:(id)arg0 ;
-(BOOL)couldBeJunk;
-(BOOL)currentUserMayActAsOrganizer;
-(BOOL)disallowProposeNewTime;
-(BOOL)futureOccurrencesCannotBeAffectedByChangingStartDateToDate:(id)arg0 ;
-(BOOL)hasAttendeeProposedTimes;
-(BOOL)hasChangesRequiringSpanAll;
-(BOOL)hasValidEventAction;
-(BOOL)isAttendeeSameAsOrganizer:(id)arg0 ;
-(BOOL)isBirthday;
-(BOOL)isDifferentAndHasForwardedAttendeesWithDiff:(id)arg0 ;
-(BOOL)isDifferentAndHasNewProposedTimeWithDiff:(id)arg0 ;
-(BOOL)isDifferentAndHasUnscheduledAttendeesWithDiff:(id)arg0 ;
-(BOOL)isDifferentAndModifiedAttendeesWithDiff:(id)arg0 ;
-(BOOL)isDifferentAndRequiresRSVPWithDiff:(id)arg0 ;
-(BOOL)isDifferentAndRequiresRescheduleWithDiff:(id)arg0 ;
-(BOOL)isDifferentExceptingPerUserPropertiesWithDiff:(id)arg0 ;
-(BOOL)isDifferentFromCommittedEventAndHasUnscheduledAttendees;
-(BOOL)isDifferentFromCommittedEventAndRequiresRSVP;
-(BOOL)isDifferentFromCommittedEventAndRequiresReschedule;
-(BOOL)isDifferentWithDiff:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 comparingKeys:(id)arg1 ;
-(BOOL)isFirstOccurrence;
-(BOOL)isFloating;
-(BOOL)isMainOccurrence;
-(BOOL)isMultiDayTimedEventInCalendar:(id)arg0 ;
-(BOOL)isOnlyOccurrence;
-(BOOL)isProposedTimeEvent;
-(BOOL)isTentative;
-(BOOL)isValidAttendee:(id)arg0 forCalendar:(id)arg1 ;
-(BOOL)needsGeocoding;
-(BOOL)needsOccurrenceCacheUpdate;
-(BOOL)overlapsWithOrIsSameDayAsEventInSeries;
-(BOOL)phantomMaster;
-(BOOL)refresh;
-(BOOL)refreshAndNotify:(BOOL)arg0 ;
-(BOOL)removeWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)requiresCopyToMoveFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(BOOL)requiresDetach;
-(BOOL)revert;
-(BOOL)saveWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)seriesHasOutOfOrderEvents;
-(BOOL)seriesHasOverlappingOrOnSameDayOrOutOfOrderEvents;
-(BOOL)serverSupportedProposeNewTime;
-(BOOL)supportsAddingAttachments;
-(BOOL)updateEventToEvent:(id)arg0 ;
-(BOOL)updateEventToEvent:(id)arg0 commit:(BOOL)arg1 ;
-(BOOL)updateWithGeocodedMapItemAndSaveWithCommit:(id)arg0 eventStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)validate:(*id)arg0 ;
-(BOOL)validateAndUpdateOccurrenceDateFieldsAfterRefresh;
-(BOOL)validateRecurrenceRule:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)_parentParticipationStatus;
-(NSInteger)compareStartDateIncludingTravelWithEvent:(id)arg0 ;
-(NSInteger)compareStartDateWithEvent:(id)arg0 ;
-(NSInteger)daysSpannedInCalendar:(id)arg0 ;
-(NSInteger)requirementsToMoveFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
-(NSInteger)requirementsToMoveToCalendar:(id)arg0 ;
-(NSUInteger)countOfAttendeeProposedTimes;
-(NSUInteger)entityType;
-(id)_adjustedPersistedDateForDate:(id)arg0 withAdjustmentMode:(NSUInteger)arg1 pinMode:(NSUInteger)arg2 clientCalendarDate:(*id)arg3 ;
-(id)_buildConferenceStringFromNotesWithoutConference:(id)arg0 serializedConference:(id)arg1 ;
-(id)_calculateDurationWithStart:(id)arg0 end:(id)arg1 allDay:(BOOL)arg2 ;
-(id)_committedEndDate;
-(id)_committedStartDate;
-(id)_conferenceRoomDisplayStrings;
-(id)_dateForNextOccurrence;
-(id)_detectConferenceURL;
-(id)_firstNonConferenceRoomLocationTitle;
-(id)_generateNewUniqueID;
-(id)_keysToChangeForDuplicateWithOptions:(NSInteger)arg0 ;
-(id)_leftoversInDates:(id)arg0 withGeneratedDates:(id)arg1 ;
-(id)_nsCalendar;
-(id)_originallyCommittedVirtualConference;
-(id)_pinDate:(id)arg0 withPinMode:(NSUInteger)arg1 ;
-(id)_prioritizedConferencesSources;
-(id)_updateMasterDate:(id)arg0 forChangeToOccurrenceDate:(id)arg1 fromOriginalOccurrenceDate:(id)arg2 ;
-(id)_updatePredictedLocationCacheIfNeeded;
-(id)_updatePredictedLocationCacheIfNeededHoldingLock;
-(id)adjustedPersistedDateForDate:(id)arg0 withAdjustmentMode:(NSUInteger)arg1 ;
-(id)attendeesNotIncludingOrganizer;
-(id)birthdayContactName;
-(id)birthdayID;
-(id)committedValueForKey:(id)arg0 ;
-(id)conferencesSet;
-(id)defaultAlarms;
-(id)diffFromCommitted;
-(id)displayNotes;
-(id)duplicateWithOptions:(NSInteger)arg0 ;
-(id)effectiveTimeZone;
-(id)externalURI;
-(id)init;
-(id)initWithEventStore:(id)arg0 ;
-(id)initWithObjectForCopy:(id)arg0 ;
-(id)initWithPersistentObject:(id)arg0 ;
-(id)initWithPersistentObject:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)lunarCalendarString;
-(id)masterEvent;
-(id)nextOccurrenceOrDetachmentAfter:(id)arg0 ;
-(id)parsedConference;
-(id)potentialConflictOccurrenceDatesInTimePeriod:(*CGFloat)arg0 ;
-(id)privacyDescription;
-(id)recurrenceRule;
-(id)responseComment;
-(id)roomAttendees;
-(id)scanForConflicts;
-(id)specificIdentifier;
-(id)startOfDayForEndDateInCalendar:(id)arg0 ;
-(id)startOfDayForStartDateInCalendar:(id)arg0 ;
-(id)suggestedStartDateForCurrentRecurrenceRule;
-(id)title;
-(id)uniqueId;
-(unsigned int)invitationChangedProperties;
-(void)_addDefaultAlarms;
-(void)_addNewAttendeesToRecentsIfNeeded;
-(void)_addOrganizerToRecentsIfNeeded;
-(void)_adjustAfterRebaseForMovingFromOldSource:(id)arg0 toNewSource:(id)arg1 savingItem:(id)arg2 ;
-(void)_adjustForNewCalendarBeforeSave;
-(void)_applyTimeChangesToMaster;
-(void)_cancelDetachedEventsWithSpan:(NSInteger)arg0 ;
-(void)_clearAttendeeChangedFlags;
-(void)_clearExceptionDatesAndUpdateDetachedOriginalDates;
-(void)_clearLocationPredictionCacheIfNotFrozen;
-(void)_clearLocationPredictionCacheIfNotFrozenHoldingLock;
-(void)_clearOriginalDateFields;
-(void)_deleteFromOccurrenceDateOnward:(id)arg0 ;
-(void)_deleteThisOccurrence;
-(void)_detachWithStartDate:(id)arg0 newStartDate:(id)arg1 future:(BOOL)arg2 ;
-(void)_filterExceptionDatesAndDetachments;
-(void)_propagateAlarmChangesToDetachedEvents:(id)arg0 ;
-(void)_propagateChangesToDetachedEvents:(id)arg0 significantlyDetachedEvents:(id)arg1 startDateOffset:(id)arg2 duration:(id)arg3 calendar:(id)arg4 ;
-(void)_removeDefaultAlarms;
-(void)_resetInternalState;
-(void)_respondToProposedTimeFromAttendee:(id)arg0 shouldAccept:(BOOL)arg1 ;
-(void)_setInvitationChangedProperty:(BOOL)arg0 forFlag:(unsigned int)arg1 ;
-(void)_updateDefaultAlarms;
-(void)_updateEndDateForDate:(id)arg0 withAdjustmentMode:(NSUInteger)arg1 ;
-(void)_updateModifiedProperties;
-(void)_updateModifiedPropertiesForThisEventAndAllDetachments;
-(void)_updateSelfFromDetachedEventIfNeededForDelete;
-(void)_updateStartDateForDate:(id)arg0 withAdjustmentMode:(NSUInteger)arg1 ;
-(void)_updateVideoConferenceOnlyModified;
-(void)_willSave;
-(void)acceptProposedTimeNotificationFromAttendee:(id)arg0 ;
-(void)addConferenceRooms:(id)arg0 ;
-(void)addEventAction:(id)arg0 ;
-(void)clearCachedTimeValues;
-(void)clearDetectedConferenceURL;
-(void)clearInvitationStatus;
-(void)clearParsedConference;
-(void)confirmPredictedLocation:(id)arg0 ;
-(void)declineProposedTimeNotificationFromAttendee:(id)arg0 ;
-(void)dismissAcceptedProposeNewTimeNotification;
-(void)dismissAttendeeRepliedNotification;
-(void)forceLocationPredictionUpdate;
-(void)forceSetTimeZone:(id)arg0 ;
-(void)makeRecurrenceEndCountBased;
-(void)makeRecurrenceEndDateBased;
-(void)markAsCommitted;
-(void)markAsSaved;
-(void)markAsUndeleted;
-(void)markEventAsAttendeeForward;
-(void)overrideStartDate:(id)arg0 ;
-(void)postModifiedNotification;
-(void)postModifiedNotificationWithUserInfo:(id)arg0 ;
-(void)rebaseToEventStore:(id)arg0 ;
-(void)rejectPredictedLocation;
-(void)removeConferenceRooms:(id)arg0 ;
-(void)removeEventAction:(id)arg0 ;
-(void)reset;
-(void)rollback;
-(void)setBirthdayContact:(id)arg0 ;
-(void)setCalendar:(id)arg0 ;
-(void)setConferencesSet:(id)arg0 ;
-(void)setDisplayNotes:(id)arg0 ;
-(void)setInvitationChangedProperties:(unsigned int)arg0 ;
-(void)setIsJunk:(BOOL)arg0 shouldSave:(BOOL)arg1 ;
-(void)setLocationPredictionAllowed:(BOOL)arg0 ;
-(void)setLunarCalendarString:(id)arg0 ;
-(void)setNeedsGeocoding:(BOOL)arg0 ;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg0 ;
-(void)setNotes:(id)arg0 ;
-(void)setNotesCommon:(id)arg0 ;
-(void)setPhantomMaster:(BOOL)arg0 ;
-(void)setPredictedLocationFrozen:(BOOL)arg0 ;
-(void)setRecurrenceRule:(id)arg0 ;
-(void)setResponseComment:(id)arg0 ;
-(void)setTimeZone:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)setURLCommon:(id)arg0 ;
-(void)snoozeAlarm:(id)arg0 withTimeIntervalFromNow:(CGFloat)arg1 ;


@end


#endif