// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARITEM_H
#define EKCALENDARITEM_H

@class NSURL, NSString, NSArray, NSDate, NSData, NSTimeZone;


#import "EKObject.h"
#import "EKCalendar.h"

@interface EKCalendarItem : EKObject

@property (copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *attendees;
@property (retain, nonatomic) EKCalendar *calendar;
@property (readonly, nonatomic) NSString *calendarItemExternalIdentifier;
@property (retain, nonatomic) NSString *calendarItemIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) BOOL hasAlarms;
@property (readonly, nonatomic) BOOL hasAttendees;
@property (readonly, nonatomic) BOOL hasNotes;
@property (readonly, nonatomic) BOOL hasRecurrenceRules;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSData *localStructuredData;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSArray *recurrenceRules;
@property (copy, nonatomic) NSData *structuredData;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;


+(BOOL)_shouldDeleteAndAddForMoveFromCalendar:(id)arg0 toCalendar:(id)arg1 ;
+(BOOL)canonicalizedEqualityTestValue1:(id)arg0 value2:(id)arg1 key:(id)arg2 object1:(id)arg3 object2:(id)arg4 ;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)adjustDateFromUTC:(id)arg0 allDay:(BOOL)arg1 timeZone:(id)arg2 ;
+(id)knownDerivedRelationshipKeys;
+(id)knownIdentityKeysForComparison;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipMultiValueKeysForValidation;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipSingleValueKeysForValidation;
+(id)knownRelationshipWeakKeys;
+(id)knownSingleValueKeysForComparison;
+(id)timeZoneFromTimeZoneName:(id)arg0 withFloatingTimeZone:(id)arg1 ;
+(id)timeZoneNameFromTimeZone:(id)arg0 ;
-(BOOL)_excludeAlarmDueToConnectionTrigger:(id)arg0 ;
-(BOOL)_hadAttendees;
-(BOOL)_hadRecurrenceRules;
-(BOOL)_isInSharedToMeCalendarWithNoSharingScheduling;
-(BOOL)_validateAccessConsent:(*id)arg0 ;
-(BOOL)_validateDeletable:(*id)arg0 ;
-(BOOL)_validateDeletableBySharedCalendarShareeWithError:(*id)arg0 ;
-(BOOL)_validateDeletableInCalendarWithError:(*id)arg0 ;
-(BOOL)allowsAlarmModifications;
-(BOOL)allowsAttendeesModifications;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)allowsSpansOtherThanThisEvent;
-(BOOL)canMoveOrCopyToCalendar:(id)arg0 fromCalendar:(id)arg1 error:(*id)arg2 ;
-(BOOL)canMoveToCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)canMoveToCalendar:(id)arg0 fromCalendar:(id)arg1 error:(*id)arg2 ;
-(BOOL)defaultAlarmWasDeleted;
-(BOOL)hasAttachment;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(BOOL)isAllDay;
-(BOOL)isDeletable;
-(BOOL)isEditable;
-(BOOL)isExternallyOrganizedInvitation;
-(BOOL)isFloating;
-(BOOL)isOnlyAlarmAcknowledgedPropertyDirty;
-(BOOL)isOrganizedBySharedCalendarOwner;
-(BOOL)isSelfOrganized;
-(BOOL)isSelfOrganizedInvitation;
-(BOOL)needsResponse;
-(BOOL)requiresDetach;
-(BOOL)validate:(*id)arg0 ;
-(NSInteger)indexForAlarm:(id)arg0 ;
-(NSInteger)selfParticipantStatus;
-(NSUInteger)actionsState;
-(NSUInteger)entityType;
-(NSUInteger)priority;
-(id)_customObjectForKey:(id)arg0 local:(BOOL)arg1 ;
-(id)_dataFromStructuredDataDictionary:(id)arg0 ;
-(id)_generateNewUniqueID;
-(id)_structuredDataDictionaryFromData:(id)arg0 ;
-(id)action;
-(id)actionString;
-(id)adjustDateFromUTC:(id)arg0 ;
-(id)allAlarms;
-(id)allAlarmsSet;
-(id)appLink;
-(id)appLinkData;
-(id)attendeeMatchingEmailAddress:(id)arg0 ;
-(id)clientLocation;
-(id)contactIdentifiers;
-(id)customObjectForKey:(id)arg0 ;
-(id)defaultAlarms;
-(id)description;
-(id)detachedItems;
-(id)displayNotes;
-(id)ekExceptionDates;
-(id)endTimeZone;
-(id)endTimeZoneName;
-(id)exceptionDates;
-(id)exportToICS;
-(id)exportToICSWithOptions:(NSUInteger)arg0 ;
-(id)externalData;
-(id)externalID;
-(id)externalModificationTag;
-(id)externalScheduleID;
-(id)externalURI;
-(id)filterAttendeesPendingDeletion:(id)arg0 ;
-(id)findOriginalAlarmStartingWith:(id)arg0 ;
-(id)localCustomObjectForKey:(id)arg0 ;
-(id)localUID;
-(id)organizer;
-(id)originalItem;
-(id)participantMatchingContact:(id)arg0 ;
-(id)preferredLocation;
-(id)recurrenceRuleString;
-(id)selfAttendee;
-(id)sharedItemCreatedByAddress;
-(id)sharedItemCreatedByAddressString;
-(id)sharedItemCreatedByDisplayName;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemCreatedDate;
-(id)sharedItemCreatedTimeZone;
-(id)sharedItemCreatedTimeZoneName;
-(id)sharedItemModifiedByAddress;
-(id)sharedItemModifiedByAddressString;
-(id)sharedItemModifiedByDisplayName;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)sharedItemModifiedDate;
-(id)sharedItemModifiedTimeZone;
-(id)sharedItemModifiedTimeZoneName;
-(id)singleRecurrenceRule;
-(id)sortedAlarms;
-(id)startDateForRecurrence;
-(id)startDateRaw;
-(id)startTimeZone;
-(id)startTimeZoneName;
-(id)structuredLocation;
-(id)structuredLocationWithoutPrediction;
-(id)travelStartLocation;
-(id)uniqueID;
-(id)uniqueId;
-(int)selfParticipantStatusRaw;
-(int)sequenceNumber;
-(unsigned int)modifiedProperties;
-(void)_addDetachedItem:(id)arg0 ;
-(void)_addExceptionDate:(id)arg0 ;
-(void)_adjustAfterRebaseForMovingFromOldSource:(id)arg0 toNewSource:(id)arg1 savingItem:(id)arg2 ;
-(void)_deletePersistentItemAndDetachedItems:(id)arg0 forSavingItem:(id)arg1 ;
-(void)_deleteSelfAndDetached;
-(void)_moveToCalendar:(id)arg0 forSavingItem:(id)arg1 ;
// -(void)_recursivelyPerformBlockOnSelfAndDetachedItems:(id)arg0 forSavingItem:(unk)arg1  ;
-(void)_removeAttendee:(id)arg0 ;
-(void)_removeDetachedItem:(id)arg0 ;
-(void)_removeExceptionDate:(id)arg0 ;
-(void)_resetFieldsAfterMovingToNewCalendar;
-(void)_setCustomObject:(id)arg0 forKey:(id)arg1 local:(BOOL)arg2 ;
-(void)_setSelfAttendee:(id)arg0 ;
-(void)_updateHasAttendeesIfNeeded;
-(void)_updateHasNotesIfNeeded;
-(void)_updateHasRecurrenceRulesIfNeeded;
-(void)_updateModifiedAlarmByAcknowledging;
-(void)_willSave;
-(void)addAlarm:(id)arg0 ;
-(void)addAttachment:(id)arg0 ;
-(void)addAttendee:(id)arg0 ;
-(void)addRecurrenceRule:(id)arg0 ;
-(void)moveToCalendar:(id)arg0 ;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAlarm:(id)arg0 ;
-(void)removeAllSnoozedAlarms;
-(void)removeAttachment:(id)arg0 ;
-(void)removeAttendee:(id)arg0 ;
-(void)removeRecurrenceRule:(id)arg0 ;
-(void)setAction:(id)arg0 ;
-(void)setActionString:(id)arg0 ;
-(void)setAllAlarms:(id)arg0 ;
-(void)setAllAlarmsSet:(id)arg0 ;
-(void)setAllDay:(BOOL)arg0 ;
-(void)setAppLink:(id)arg0 ;
-(void)setAppLinkData:(id)arg0 ;
-(void)setClientLocation:(id)arg0 ;
-(void)setContactIdentifiers:(id)arg0 ;
-(void)setCustomObject:(id)arg0 forKey:(id)arg1 ;
-(void)setDefaultAlarmWasDeleted:(BOOL)arg0 ;
-(void)setDetachedItems:(id)arg0 ;
-(void)setDisplayNotes:(id)arg0 ;
-(void)setEkExceptionDates:(id)arg0 ;
-(void)setEndTimeZone:(id)arg0 ;
-(void)setEndTimeZoneName:(id)arg0 ;
-(void)setExceptionDates:(id)arg0 ;
-(void)setExternalData:(id)arg0 ;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setExternalScheduleID:(id)arg0 ;
-(void)setLocalCustomObject:(id)arg0 forKey:(id)arg1 ;
-(void)setModifiedProperties:(unsigned int)arg0 ;
-(void)setOrganizer:(id)arg0 ;
-(void)setOriginalItem:(id)arg0 ;
-(void)setPriority:(NSUInteger)arg0 ;
-(void)setSelfAttendee:(id)arg0 ;
-(void)setSharedItemCreatedByAddress:(id)arg0 ;
-(void)setSharedItemCreatedByAddressString:(id)arg0 ;
-(void)setSharedItemCreatedByDisplayName:(id)arg0 ;
-(void)setSharedItemCreatedByFirstName:(id)arg0 ;
-(void)setSharedItemCreatedByLastName:(id)arg0 ;
-(void)setSharedItemCreatedDate:(id)arg0 ;
-(void)setSharedItemCreatedTimeZone:(id)arg0 ;
-(void)setSharedItemCreatedTimeZoneName:(id)arg0 ;
-(void)setSharedItemModifiedByAddress:(id)arg0 ;
-(void)setSharedItemModifiedByAddressString:(id)arg0 ;
-(void)setSharedItemModifiedByDisplayName:(id)arg0 ;
-(void)setSharedItemModifiedByFirstName:(id)arg0 ;
-(void)setSharedItemModifiedByLastName:(id)arg0 ;
-(void)setSharedItemModifiedDate:(id)arg0 ;
-(void)setSharedItemModifiedTimeZone:(id)arg0 ;
-(void)setSharedItemModifiedTimeZoneName:(id)arg0 ;
-(void)setSingleRecurrenceRule:(id)arg0 ;
-(void)setStartDateRaw:(id)arg0 ;
-(void)setStartTimeZone:(id)arg0 ;
-(void)setStartTimeZoneName:(id)arg0 ;
-(void)setStructuredLocation:(id)arg0 ;
-(void)setStructuredLocationWithoutPrediction:(id)arg0 ;
-(void)setTravelStartLocation:(id)arg0 ;
-(void)setUniqueID:(id)arg0 ;
-(void)setUniqueId:(id)arg0 ;
-(void)snoozeAlarm:(id)arg0 withLocation:(id)arg1 proximity:(NSInteger)arg2 ;
-(void)snoozeAlarm:(id)arg0 withTimeIntervalFromNow:(CGFloat)arg1 ;
-(void)updateWithAppLink:(id)arg0 usedSelectedText:(*BOOL)arg1 ;
-(void)willSave;


@end


#endif