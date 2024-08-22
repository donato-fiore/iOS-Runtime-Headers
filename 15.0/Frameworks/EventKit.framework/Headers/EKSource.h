// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSOURCE_H
#define EKSOURCE_H

@class NSSet, NSString, NSNumber, NSDate, NSData, NSDictionary, REMObjectID, NSError;


#import "EKObject.h"
#import "EKAvailabilityCache.h"
#import "EKSourceConstraints.h"

@interface EKSource : EKObject {
    EKAvailabilityCache *_availabilityCache;
}


@property (readonly, nonatomic) NSSet *allCalendars;
@property (nonatomic) BOOL allowsCalendarAddDeleteModify;
@property (nonatomic) BOOL allowsEvents;
@property (nonatomic) BOOL allowsProposeNewTime;
@property (nonatomic) BOOL allowsTasks;
@property (readonly, nonatomic) EKAvailabilityCache *availabilityCache;
@property (retain, nonatomic) NSString *cachedHost; // ivar: _cachedHost
@property (retain, nonatomic) NSSet *cachedOwnerAddresses; // ivar: _cachedOwnerAddresses
@property (nonatomic) NSInteger cachedPort; // ivar: _cachedPort
@property (readonly, nonatomic) NSSet *calendars;
@property (readonly, nonatomic) EKSourceConstraints *constraints;
@property (retain, nonatomic) NSString *constraintsDescriptionPath;
@property (retain, nonatomic) NSString *constraintsDescriptionPathForUnitTesting;
@property (retain, nonatomic) NSString *constraintsName;
@property (copy, nonatomic) NSString *creatorBundleID;
@property (copy, nonatomic) NSString *creatorCodeSigningIdentity;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (copy, nonatomic) NSNumber *defaultAllDayAlarmOffset;
@property (copy, nonatomic) NSString *delegatedAccountOwnerStoreID;
@property (nonatomic) int displayOrder;
@property (readonly, nonatomic) int displayOrderForNewCalendar;
@property (nonatomic) BOOL doesSyncDefaultAlarmsToServer;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) int flags;
@property (nonatomic) int flags2;
@property (readonly, nonatomic) BOOL hasOwnerEmailAddress;
@property (readonly, nonatomic) BOOL isDelegate;
@property (readonly, nonatomic) BOOL isEnabledForEvents;
@property (nonatomic) BOOL isFacebook; // ivar: _isFacebook
@property (readonly, nonatomic) BOOL isFacebookSource;
@property (nonatomic) BOOL isInMainWindow;
@property (nonatomic) BOOL isInSeparateWindow;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isWritable;
@property (retain, nonatomic) NSDate *lastSyncEndDate;
@property (readonly, nonatomic) NSUInteger lastSyncError;
@property (retain, nonatomic) NSData *lastSyncErrorData;
@property (readonly, copy, nonatomic) NSDictionary *lastSyncErrorUserInfo;
@property (retain, nonatomic) NSDate *lastSyncStartDate;
@property (readonly, nonatomic, getter=isNestedLocalSource) BOOL nestedLocalSource;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (readonly, nonatomic) NSSet *ownerAddresses;
@property (copy, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL preferUsingEventOrganizerEmailWhenComposingMail;
@property (nonatomic) NSInteger preferredEventPrivateValue;
@property (readonly, nonatomic) NSString *preferredOwnerAddress;
@property (readonly, nonatomic) BOOL prefersSuggestingNewTimeViaEmail;
@property (readonly, nonatomic, getter=isPrimaryLocalSource) BOOL primaryLocalSource;
@property (nonatomic) BOOL prohibitsDetachmentOnCommentChange;
@property (nonatomic) BOOL prohibitsICSImport;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) BOOL prohibitsPrivateEventsWithAttendees;
@property (nonatomic) BOOL prohibitsSlicingEventsWithAttendees;
@property (nonatomic) BOOL prohibitsYearlyRecurrenceInterval;
@property (readonly, nonatomic) REMObjectID *remAccountObjectID;
@property (nonatomic) BOOL requiresOccurrencesConformToRecurrenceRule;
@property (nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (readonly, nonatomic) NSString *serverHost;
@property (readonly, nonatomic) NSInteger serverPort;
@property (readonly, nonatomic) BOOL serverUsesSSL;
@property (nonatomic) BOOL showsNotifications;
@property (nonatomic) BOOL snoozeAlarmRequiresDetach; // ivar: _snoozeAlarmRequiresDetach
@property (readonly, nonatomic) NSError *sourceError;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) NSInteger sourceType;
@property (nonatomic) NSInteger strictestEventPrivateValue;
@property (nonatomic) BOOL supportsAlarmAcknowledgedDate;
@property (nonatomic) BOOL supportsAttachments;
@property (readonly, nonatomic) BOOL supportsAttendeeEventForwarding;
@property (nonatomic) BOOL supportsAvailabilityRequests;
@property (readonly, nonatomic) BOOL supportsCalendarCreation;
@property (nonatomic) BOOL supportsDelegateEnumeration;
@property (nonatomic) BOOL supportsDelegation;
@property (readonly, nonatomic) BOOL supportsEventCalendarCreation;
@property (nonatomic) BOOL supportsEventForwarding;
@property (readonly, nonatomic) BOOL supportsFloatingTimeZone;
@property (readonly, nonatomic) BOOL supportsFreebusy;
@property (nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests;
@property (readonly, nonatomic) BOOL supportsJunkReporting;
@property (nonatomic) BOOL supportsLocationDirectorySearches;
@property (readonly, nonatomic) BOOL supportsMultipleAlarms;
@property (readonly, nonatomic) BOOL supportsMultipleDaysInMonthlyRecurrence;
@property (readonly, nonatomic) BOOL supportsMultipleMonthsInYearlyRecurrence;
@property (readonly, nonatomic) BOOL supportsPhoneNumbers;
@property (nonatomic) BOOL supportsPrivateEvents;
@property (nonatomic) BOOL supportsPush;
@property (readonly, nonatomic) BOOL supportsReminderActions;
@property (nonatomic) BOOL supportsSharedCalendars;
@property (readonly, nonatomic) BOOL supportsURLs;
@property (readonly, nonatomic) BOOL supportsYearlyRecurrenceWithArbitraryInterval;
@property (readonly, nonatomic) NSString *symbolicColorForNewCalendar;
@property (readonly, nonatomic) BOOL syncs;
@property (retain, nonatomic) NSDate *timeOfLastExternalIdentificationCache; // ivar: _timeOfLastExternalIdentificationCache
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL usesSelfAttendee;
@property (readonly, nonatomic) BOOL wantsCommentPromptWhenDeclining;
@property (nonatomic) BOOL wasMigrated;


+(BOOL)isWeakRelationship;
+(Class)frozenClass;
+(NSInteger)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg0 ;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
+(id)primaryLocalSourceID;
+(id)sourceWithEventStore:(id)arg0 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(NSInteger)arg0 ;
-(BOOL)_reset;
-(BOOL)_validateClientCanModifySources:(*id)arg0 ;
-(BOOL)disabled;
-(BOOL)flag2:(int)arg0 ;
-(BOOL)flag:(int)arg0 ;
-(BOOL)refresh;
-(BOOL)remove:(*id)arg0 ;
-(BOOL)removeCalendarItemsOlderThanDate:(id)arg0 entityTypeMask:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)save:(*id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)UUID;
-(id)_calDAVOfficeHoursFromEKOfficeHours:(id)arg0 ;
-(id)_ekOfficeHoursFromCalDAVOfficeHours:(id)arg0 ;
-(id)calendarWithExternalIdentifier:(id)arg0 ;
-(id)calendarsForEntityType:(NSUInteger)arg0 ;
-(id)description;
-(id)readWriteCalendarsForEntityType:(NSUInteger)arg0 ;
-(int)managedConfigurationAccountAccess;
-(void)_cacheExternalIdentification;
-(void)_cacheExternalIdentificationIfNeeded;
-(void)_countCalendarItemsOfCalType:(int)arg0 resultHandler:(id)arg1 ;
-(void)countCalendarItemsOfType:(NSUInteger)arg0 resultHandler:(id)arg1 ;
-(void)countCalendarItemsWithResultHandler:(id)arg0 ;
// -(void)fetchOfficeHoursWithCompletion:(id)arg0 onQueue:(unk)arg1  ;
-(void)setDisabled:(BOOL)arg0 ;
-(void)setFlag2:(int)arg0 value:(BOOL)arg1 ;
-(void)setFlag:(int)arg0 value:(BOOL)arg1 ;
// -(void)setOfficeHours:(id)arg0 withCompletion:(id)arg1 onQueue:(unk)arg2  ;
-(void)setUUID:(id)arg0 ;


@end


#endif