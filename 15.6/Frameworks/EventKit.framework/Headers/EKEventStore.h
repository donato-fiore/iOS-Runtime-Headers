// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTSTORE_H
#define EKEVENTSTORE_H

@class CADDatabaseInitializationOptions, CADGenerationStampedObjectID, NSMutableDictionary, NSMutableArray, NSHashTable, NSNumber, NSArray, NSString, NSSet, NSMutableSet, NSDictionary, NSTimeZone;
@protocol EKDaemonConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKDaemonConnection.h"
#import "EKDataProtectionObserver.h"
#import "EKAlarm.h"
#import "EKCalendar.h"
#import "EKReminderStore.h"

@interface EKEventStore : NSObject <EKDaemonConnectionDelegate>

 {
    CADDatabaseInitializationOptions *_initializationOptions;
    CADGenerationStampedObjectID *_birthdaySourceID;
    NSMutableDictionary *_defaultCalendarsForNewEventsIDBySourceID;
    CADGenerationStampedObjectID *_suggestedEventCalendarID;
    CADGenerationStampedObjectID *_naturalLanguageSuggestedEventCalendarID;
    CADGenerationStampedObjectID *_subscribedCalendarsSourceID;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableDictionary *_calendarsByIdentifier;
    NSMutableDictionary *_cachedValidatedAddresses;
    NSMutableArray *_objectsPendingCommit;
    NSHashTable *_eventsNeedsGeocoding;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    BOOL _allowsBirthdayCalendarModifications;
    BOOL _hasAccessToEvents;
    BOOL _hasAccessToReminders;
    BOOL _accessDetermined;
    os_unfair_lock_s _reminderSourceMapLock;
    BOOL _isIgnoringExternalChanges;
    os_unfair_lock_s _flagsLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableDictionary *_cachedConstraints; // ivar: __cachedConstraints
@property (retain, nonatomic) NSMutableDictionary *_cachedNotificationCollections; // ivar: __cachedNotificationCollections
@property (readonly, nonatomic) BOOL allowsBirthdayModifications;
@property (readonly, nonatomic) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic) BOOL birthdayCalendarEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calendarSourcesAndDefaultsQueue; // ivar: _calendarSourcesAndDefaultsQueue
@property (readonly, nonatomic) NSArray *calendars;
@property (readonly) EKDaemonConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *constraintsCacheQueue; // ivar: _constraintsCacheQueue
@property (retain, nonatomic) EKDataProtectionObserver *dataProtectionObserver; // ivar: _dataProtectionObserver
@property (retain, nonatomic) EKDaemonConnection *database; // ivar: _database
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue; // ivar: _dbChangedQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EKAlarm *defaultAllDayAlarm;
@property (retain, nonatomic) EKCalendar *defaultCalendarForNewEvents;
@property (readonly, nonatomic) EKCalendar *defaultCalendarForNewReminders;
@property (readonly, nonatomic) EKAlarm *defaultTimedAlarm;
@property (readonly, nonatomic) NSArray *delegateSources;
@property (readonly, nonatomic) NSSet *deletedObjectIDsPendingCommit;
@property (retain, nonatomic) NSMutableSet *deletedObjects; // ivar: _deletedObjects
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger eventNotificationCount;
@property (readonly, nonatomic) NSArray *eventNotifications;
@property (retain, nonatomic) NSDictionary *eventSourceIDToReminderSourceIDMapping; // ivar: _eventSourceIDToReminderSourceIDMapping
@property (readonly, nonatomic) NSString *eventStoreIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inboxRepliedSectionHasContent; // ivar: _inboxRepliedSectionHasContent
@property (readonly, nonatomic) NSArray *inboxRepliedSectionItems;
@property (retain, nonatomic) NSHashTable *insertedObjects; // ivar: _insertedObjects
@property (readonly, nonatomic) BOOL isDataProtected;
@property (readonly, nonatomic) NSUInteger lastConfirmedSplashScreenVersion;
@property (nonatomic) NSUInteger lastDatabaseNotificationTimestamp; // ivar: _lastDatabaseNotificationTimestamp
@property (readonly, nonatomic) EKCalendar *naturalLanguageSuggestedEventCalendar;
@property (nonatomic) BOOL needsCommitForRemoteChanges; // ivar: _needsCommitForRemoteChanges
@property (readonly, nonatomic) int notifiableEventCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationCollectionCacheQueue; // ivar: _notificationCollectionCacheQueue
@property (retain, nonatomic) NSMutableSet *objectIDsNotSendingNotifications; // ivar: _objectIDsNotSendingNotifications
@property (readonly, nonatomic) NSArray *objectsPendingCommit;
@property (retain, nonatomic) NSMutableSet *objectsPendingSave; // ivar: _objectsPendingSave
@property (retain, nonatomic) NSMutableDictionary *registeredObjects; // ivar: _registeredObjects
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registeredQueue; // ivar: _registeredQueue
@property (retain, nonatomic) NSDictionary *reminderSourceIDToEventSourceIDMapping; // ivar: _reminderSourceIDToEventSourceIDMapping
@property (readonly, nonatomic) *os_unfair_lock_s reminderSourceMapLock;
@property (readonly, nonatomic) EKReminderStore *reminderStore; // ivar: _reminderStore
@property (nonatomic) BOOL showDeclinedEvents;
@property (readonly, nonatomic) NSArray *sources;
@property (readonly, nonatomic) EKCalendar *suggestedEventCalendar;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) int unacknowledgedEventCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue; // ivar: _unsavedChangesQueue
@property (retain, nonatomic) NSMutableSet *updatedObjects; // ivar: _updatedObjects


+(BOOL)_isConfirmedSuggestedEvent:(id)arg0 uniqueKey:(*id)arg1 ;
+(BOOL)_shouldRefreshSource:(id)arg0 ;
+(BOOL)_skipTCCAccessCheck;
+(BOOL)accessGrantedForEntityType:(NSUInteger)arg0 ;
+(Class)classForEntityName:(id)arg0 ;
+(NSInteger)authorizationStatusForEntityType:(NSUInteger)arg0 ;
+(NSUInteger)ekEventStoreInitOptionsFromCalDatabaseInitOptions:(int)arg0 ;
+(id)_filteredArrayWithIdentifiers:(id)arg0 fromObjects:(id)arg1 ;
+(id)_filteredObjectsWithIdentifiers:(id)arg0 fromObjects:(id)arg1 ;
+(id)_iMIPScheduledEvent:(id)arg0 attendeesDeleted:(BOOL)arg1 ;
+(id)eventStoreChangedDistributedNotificationName;
+(int)calDatabaseInitOptionsFromEKEventStoreInitOptions:(NSUInteger)arg0 ;
+(void)_addDaysSpannedByEvent:(id)arg0 toCountedSet:(id)arg1 inRange:(id)arg2 withNSCalendar:(id)arg3 ;
+(void)_refreshFolderListForSource:(id)arg0 isUserRequested:(BOOL)arg1 ;
+(void)setDenyAccessToEvents:(BOOL)arg0 ;
+(void)setDenyAccessToReminders:(BOOL)arg0 ;
-(BOOL)_calendar:(id)arg0 supportsEntityType:(NSUInteger)arg1 ;
-(BOOL)_commitObjectsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isEventNotSendingNotification:(id)arg0 ;
-(BOOL)_isRegisteredObject:(id)arg0 ;
-(BOOL)_isUnitTesting;
-(BOOL)_parseURI:(id)arg0 expectedScheme:(id)arg1 identifier:(*id)arg2 options:(*id)arg3 ;
-(BOOL)_refreshDASource:(id)arg0 isUserRequested:(BOOL)arg1 ;
-(BOOL)_removeCalendar:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_removeEvent:(id)arg0 span:(NSInteger)arg1 commit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_removeReminder:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_saveCalendar:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_saveEvent:(id)arg0 span:(NSInteger)arg1 commit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)accessGrantedForEntityType:(NSUInteger)arg0 ;
-(BOOL)acknowledgeNotifications:(id)arg0 error:(*id)arg1 ;
-(BOOL)backupDatabaseToDestination:(id)arg0 withFormat:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)canModifyCalendarDatabase;
-(BOOL)canModifySuggestedEventCalendar;
-(BOOL)commit:(*id)arg0 ;
-(BOOL)commitObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteCalendar:(id)arg0 forEntityType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)fetchProperties:(id)arg0 forReminders:(id)arg1 ;
-(BOOL)fetchingSharedCalendarInvitationsDisallowed;
-(BOOL)hasImmediatelyEligibleTravelEvents;
-(BOOL)hideCalendarsFromNotificationCenter:(id)arg0 error:(*id)arg1 ;
-(BOOL)isSourceManaged:(id)arg0 ;
-(BOOL)markIndividualChangesConsumed:(id)arg0 error:(*id)arg1 ;
-(BOOL)markResourceChangeAlertedAndSave:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsGeocodingForEvent:(id)arg0 ;
-(BOOL)objectWithIDExists:(id)arg0 ;
-(BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
-(BOOL)occurrencesExistInRangeForEvent:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 mustStartInInterval:(BOOL)arg3 timezone:(id)arg4 ;
-(BOOL)refreshSource:(id)arg0 userRequested:(BOOL)arg1 ;
-(BOOL)removeCalendar:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeEvent:(id)arg0 span:(NSInteger)arg1 commit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)removeEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)removeInviteReplyNotification:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeInviteReplyNotifications:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeReminder:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeReminder:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeResourceChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeResourceChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeResourceChangesForCalendarItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeSource:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)restoreDatabaseFromBackup:(id)arg0 withFormat:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)restoreGenerationChanged;
-(BOOL)returnEventResults;
-(BOOL)returnReminderResults;
-(BOOL)save:(*id)arg0 ;
-(BOOL)saveAttachment:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)saveCalendar:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)saveCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveEvent:(id)arg0 span:(NSInteger)arg1 commit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)saveEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)saveNotification:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)saveNotificationCollection:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)saveReminder:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)saveReminder:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSource:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setFetchingSharedCalendarInvitationsDisallowedAndGetPreviousValue:(BOOL)arg0 ;
-(BOOL)setInvitationStatus:(NSUInteger)arg0 forEvent:(id)arg1 error:(*id)arg2 ;
-(BOOL)setInvitationStatus:(NSUInteger)arg0 forEvents:(id)arg1 error:(*id)arg2 ;
-(BOOL)setRestoreGenerationChangedAndGetPreviousValue:(BOOL)arg0 ;
-(BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)arg0 ;
-(BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg0 ;
-(BOOL)shouldSaveCalendarAsEventCalendar:(id)arg0 ;
-(BOOL)shouldSaveCalendarAsReminderCalendar:(id)arg0 ;
-(Class)_SGSuggestionsServiceClass;
-(NSInteger)countOfRemindersWithContactIdentifier:(id)arg0 ;
-(NSInteger)registerForDetailedChangeTracking:(*id)arg0 ;
-(NSInteger)registerForDetailedChangeTrackingInSource:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)addressValidationStatus:(id)arg0 ;
-(NSUInteger)eventNotificationCountForSource:(id)arg0 excludingDelegateSources:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 excludeRowIDs:(id)arg3 ;
-(NSUInteger)timeToLeaveLocationAuthorizationStatus;
-(id)ICSDataForCalendarItems:(id)arg0 options:(NSUInteger)arg1 ;
-(id)ICSDataForCalendarItems:(id)arg0 preventLineFolding:(BOOL)arg1 ;
-(id)_addFetchedObjectWithID:(id)arg0 ;
-(id)_allCalendars;
-(id)_calendarItemsMatchingPredicate:(id)arg0 ;
-(id)_calendarItemsWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 entityTypes:(NSUInteger)arg2 ;
-(id)_combineEventSources:(id)arg0 withReminderSources:(id)arg1 ;
-(id)_deletableCalendars;
-(id)_deletableSources;
-(id)_eventCalendarWithIdentifier:(id)arg0 ;
-(id)_eventOccurrenceWithURI:(id)arg0 ;
-(id)_eventWithEventIdentifier:(id)arg0 ;
-(id)_eventWithRecurrenceIdentifier:(id)arg0 ;
-(id)_eventWithURI:(id)arg0 checkValid:(BOOL)arg1 ;
-(id)_fetchConstraintsForSourceWithCADObjectID:(id)arg0 ;
-(id)_fetchPersistentNotificationCollectionForSourceWithCADObjectID:(id)arg0 ;
-(id)_importEventsWithExternalIDs:(id)arg0 fromICSData:(id)arg1 intoCalendarsWithIDs:(id)arg2 options:(NSUInteger)arg3 batchSize:(int)arg4 ;
-(id)_localSourceWithEnableIfNeeded:(BOOL)arg0 ;
-(id)_markObjectsWithIdentifiersAsCommitted:(id)arg0 ;
-(id)_modifiedObjectIdentifiersForChangedObjectIDs:(id)arg0 ;
// -(id)_nextEventWithFetchBlock:(id)arg0 steps:(unk)arg1  ;
-(id)_predicateForRemindersWithDate:(id)arg0 useAsCompletionDate:(BOOL)arg1 calendars:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 includeDatesBefore:(BOOL)arg5 sortOrder:(int)arg6 preloadProperties:(id)arg7 ;
-(id)_predicateForRemindersWithDate:(id)arg0 useAsCompletionDate:(BOOL)arg1 calendars:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 includeDatesBefore:(BOOL)arg5 sortOrder:(int)arg6 preloadProperties:(id)arg7 maxResults:(NSUInteger)arg8 ;
-(id)_remindersMatchingPredicate:(id)arg0 ;
-(id)_sourceWithID:(id)arg0 ;
-(id)acquireDefaultCalendarForNewEvents;
-(id)acquireDefaultCalendarForNewReminders;
-(id)alarmWithExternalID:(id)arg0 ;
-(id)alarmWithUUID:(id)arg0 ;
-(id)allEventsWithUniqueId:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)attachmentWithUUID:(id)arg0 ;
-(id)beginCalDAVServerSimulationWithHostname:(id)arg0 ;
-(id)cachedConstraintsForSource:(id)arg0 ;
-(id)cachedConstraintsForSourceWithCADObjectID:(id)arg0 ;
-(id)calendarItemWithIdentifier:(id)arg0 ;
-(id)calendarItemsWithExternalIdentifier:(id)arg0 ;
-(id)calendarItemsWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 ;
-(id)calendarItemsWithUniqueIdentifier:(id)arg0 inCalendar:(id)arg1 ;
-(id)calendarWithCADID:(id)arg0 ;
-(id)calendarWithExternalID:(id)arg0 ;
-(id)calendarWithExternalURI:(id)arg0 ;
-(id)calendarWithID:(id)arg0 ;
-(id)calendarWithIdentifier:(id)arg0 ;
-(id)calendarWithUniqueID:(id)arg0 ;
-(id)calendarsForEntityType:(NSUInteger)arg0 ;
-(id)changesSinceSequenceNumber:(int)arg0 ;
-(id)closestCachedOccurrenceToDate:(CGFloat)arg0 forEventUID:(int)arg1 ;
-(id)closestCachedOccurrenceToDate:(CGFloat)arg0 forEventUID:(int)arg1 prefersForwardSearch:(BOOL)arg2 ;
-(id)combineEventCalendars:(id)arg0 withReminderCalendars:(id)arg1 ;
-(id)combinedReminderAndEventSources;
-(id)contactIdentifierForCalendarItem:(id)arg0 ;
-(id)defaultCalendarForNewEventsInDelegateSource:(id)arg0 ;
-(id)defaultLocalCalendar;
-(id)delegateSourcesForSource:(id)arg0 ;
-(id)doEvents:(id)arg0 haveOccurrencesAfterDate:(id)arg1 ;
-(id)eventForUID:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventForUID:(id)arg0 occurrenceDate:(id)arg1 checkValid:(BOOL)arg2 ;
-(id)eventNotificationsAfterDate:(id)arg0 ;
-(id)eventNotificationsAfterDate:(id)arg0 filteredByShowsNotificationsFlag:(BOOL)arg1 earliestExpiringNotification:(*id)arg2 ;
-(id)eventNotificationsFilteredByShowsNotificationsFlag:(BOOL)arg0 earliestExpiringNotification:(*id)arg1 ;
-(id)eventObjectIDsMatchingPredicate:(id)arg0 ;
-(id)eventSourceForReminderSource:(id)arg0 ;
-(id)eventSourceIDForReminderSourceID:(id)arg0 ;
-(id)eventSourceMap;
-(id)eventSources;
-(id)eventWithExternalURI:(id)arg0 ;
-(id)eventWithIdentifier:(id)arg0 ;
-(id)eventWithUUID:(id)arg0 ;
-(id)eventWithUUID:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventWithUniqueId:(id)arg0 ;
-(id)eventWithUniqueId:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventWithUniqueIdentifier:(id)arg0 ;
-(id)eventsMatchingPredicate:(id)arg0 ;
-(id)eventsWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 ;
-(id)eventsWithIdentifiers:(id)arg0 ;
-(id)fetchEventsMatchingPredicate:(id)arg0 resultHandler:(id)arg1 ;
-(id)fetchObjectsMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(id)fetchRemindersMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(id)fetchStorageUsage;
-(id)getSubscribedCalendarsSourceCreateIfNeededWithError:(*id)arg0 ;
-(id)importEventsWithExternalIDs:(id)arg0 fromICSData:(id)arg1 intoCalendars:(id)arg2 options:(NSUInteger)arg3 batchSize:(int)arg4 ;
-(id)importICS:(id)arg0 intoCalendar:(id)arg1 options:(NSUInteger)arg2 ;
-(id)importICSData:(id)arg0 intoCalendar:(id)arg1 options:(NSUInteger)arg2 ;
-(id)importICSData:(id)arg0 intoCalendars:(id)arg1 options:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithAccessToDelegateSources;
-(id)initWithBirthdayCalendarModifications;
-(id)initWithEKOptions:(NSUInteger)arg0 ;
-(id)initWithEKOptions:(NSUInteger)arg0 path:(id)arg1 changeTrackingClientId:(id)arg2 enablePropertyModificationLogging:(BOOL)arg3 allowDelegateSources:(BOOL)arg4 ;
-(id)initWithOptions:(int)arg0 path:(id)arg1 ;
-(id)initWithOptions:(int)arg0 path:(id)arg1 allowDelegateSources:(BOOL)arg2 ;
-(id)initWithOptions:(int)arg0 path:(id)arg1 changeTrackingClientId:(id)arg2 enablePropertyModificationLogging:(BOOL)arg3 allowDelegateSources:(BOOL)arg4 ;
-(id)localBirthdayCalendarCreateIfNeededWithError:(*id)arg0 ;
-(id)localBirthdayCalendarSource;
-(id)localSource;
-(id)localSourceEnableIfNeeded;
-(id)localSubscribedCalendarSource;
-(id)nextEventWithCalendarIdentifiers:(id)arg0 exclusionOptions:(NSInteger)arg1 ;
-(id)notificationCollectionForSource:(id)arg0 ;
-(id)objectWithObjectID:(id)arg0 ;
-(id)objectsMatchingPredicate:(id)arg0 ;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg0 ;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg0 onDay:(CGFloat)arg1 ;
-(id)parentSourceForDelegateSource:(id)arg0 ;
-(id)predicateForAssistantEventSearchWithTimeZone:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 notes:(id)arg5 participants:(id)arg6 calendars:(id)arg7 limit:(NSInteger)arg8 ;
-(id)predicateForCalendarItemsOfType:(NSUInteger)arg0 inCalendar:(id)arg1 ;
-(id)predicateForCalendarItemsOfType:(NSUInteger)arg0 withExternalID:(id)arg1 inCalendar:(id)arg2 ;
-(id)predicateForCalendarItemsOfType:(NSUInteger)arg0 withExternalID:(id)arg1 inSource:(id)arg2 ;
-(id)predicateForCalendarItemsOfType:(NSUInteger)arg0 withUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 ;
-(id)predicateForCalendarItemsOfType:(NSUInteger)arg0 withUniqueIdentifier:(id)arg1 inSource:(id)arg2 ;
-(id)predicateForCalendarStoreForRemindersInCalendars:(id)arg0 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg0 ending:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg0 ;
-(id)predicateForEventsCreatedFromSuggestion;
-(id)predicateForEventsCreatedFromSuggestionWithExtractionGroupIdentifier:(id)arg0 ;
-(id)predicateForEventsWithConferenceURL:(id)arg0 limit:(NSInteger)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendarIdentifiers:(id)arg2 exclusionOptions:(NSInteger)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendarIdentifiers:(id)arg2 prefetchHint:(NSInteger)arg3 exclusionOptions:(NSInteger)arg4 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 loadDefaultProperties:(BOOL)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 matchingContacts:(id)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 prefetchHint:(NSInteger)arg3 exclusionOptions:(NSInteger)arg4 ;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 uniqueID:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg0 title:(id)arg1 source:(id)arg2 ;
-(id)predicateForIncompleteRemindersAndRemindersCompletedAfter:(id)arg0 inCalendar:(id)arg1 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg0 ending:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForMasterEventsInCalendar:(id)arg0 ;
-(id)predicateForMasterEventsInCalendars:(id)arg0 ;
-(id)predicateForMasterEventsWithExternalTrackingStatusInCalendar:(id)arg0 ;
-(id)predicateForMasterEventsWithInvitationsAndOccurrencesAfter:(id)arg0 inCalendar:(id)arg1 ;
-(id)predicateForMasterEventsWithOccurrencesWithStartDate:(id)arg0 endDate:(id)arg1 inCalendar:(id)arg2 ;
-(id)predicateForMasterEventsWithStartDate:(id)arg0 title:(id)arg1 inCalendar:(id)arg2 ;
-(id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)arg0 ;
-(id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)arg0 startDate:(id)arg1 ;
-(id)predicateForNonrecurringEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForNotifiableEvents;
-(id)predicateForNotificationCenterVisibleEvents;
-(id)predicateForPotentialTravelEventsInCalendars:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)predicateForPreloadedCompletedRemindersWithDueDate:(id)arg0 calendars:(id)arg1 sortOrder:(int)arg2 preloadProperties:(id)arg3 ;
-(id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)arg0 calendars:(id)arg1 sortOrder:(int)arg2 preloadProperties:(id)arg3 ;
-(id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)arg0 calendars:(id)arg1 sortOrder:(int)arg2 preloadProperties:(id)arg3 maxResults:(NSUInteger)arg4 ;
-(id)predicateForRemindersInCalendars:(id)arg0 ;
-(id)predicateForRemindersInCalendars:(id)arg0 preloadProperties:(id)arg1 ;
-(id)predicateForRemindersWithTitle:(id)arg0 listTitle:(id)arg1 limitToCompletedOrIncomplete:(BOOL)arg2 completed:(BOOL)arg3 dueAfter:(id)arg4 dueBefore:(id)arg5 searchTerm:(id)arg6 sortOrder:(int)arg7 ;
-(id)predicateForRemindersWithTitle:(id)arg0 listTitle:(id)arg1 limitToCompletedOrIncomplete:(BOOL)arg2 completed:(BOOL)arg3 dueAfter:(id)arg4 dueBefore:(id)arg5 searchTerm:(id)arg6 sortOrder:(int)arg7 maxResults:(NSUInteger)arg8 ;
-(id)predicateForUnacknowledgedEvents;
-(id)predicateForUnalertedEvents;
-(id)predicateForUpNextEventsInCalendars:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 startDateRestrictionThreshold:(CGFloat)arg3 ;
-(id)predicateForUpcomingEventsWithLimit:(int)arg0 ;
-(id)publicObjectWithFetchedObjectID:(id)arg0 ;
-(id)publicObjectWithObjectID:(id)arg0 ;
-(id)publicObjectWithPersistentObject:(id)arg0 ;
-(id)readWriteCalendarsForEntityType:(NSUInteger)arg0 ;
-(id)refreshEverythingIfNecessary:(BOOL)arg0 ;
-(id)refreshFolderListsIfNecessary:(BOOL)arg0 ;
-(id)refreshSourcesIfNecessary:(BOOL)arg0 ;
-(id)registerFetchedObjectWithID:(id)arg0 ;
-(id)registerFetchedObjectWithID:(id)arg0 withDefaultLoadedPropertyKeys:(id)arg1 values:(id)arg2 ;
-(id)reminderObjectIDsMatchingPredicate:(id)arg0 ;
-(id)reminderSourceForEventSource:(id)arg0 ;
-(id)reminderSourceMap;
-(id)reminderSources;
-(id)reminderWithExternalURI:(id)arg0 ;
-(id)reminderWithUniqueId:(id)arg0 ;
-(id)remindersMatchingPredicate:(id)arg0 ;
-(id)remindersWithContactIdentifier:(id)arg0 ;
-(id)remindersWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 ;
-(id)resourceChangesForEntityTypes:(NSUInteger)arg0 ;
-(id)scheduledTaskCacheFetchDaysAndTaskCounts;
-(id)scheduledTaskCacheFetchTasksOnDay:(id)arg0 ;
-(id)scheduledTaskCacheFetchTasksOnDay:(id)arg0 maxResults:(NSUInteger)arg1 ;
-(id)sharedCalendarInvitationsForEntityTypes:(NSUInteger)arg0 ;
-(id)sourceWithExternalID:(id)arg0 ;
-(id)sourceWithIdentifier:(id)arg0 ;
-(id)sourcesEnabledForEntityType:(NSUInteger)arg0 ;
-(id)travelEligibleEventsInCalendars:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)validatedNonDeletedPersistentObjectWithObjectID:(id)arg0 ;
-(id)validatedNonDeletedPublicObjectWithObjectID:(id)arg0 ;
-(int)countOfRemindersMatchingPredicate:(id)arg0 ;
-(int)readWriteCalendarCountForEntityType:(NSUInteger)arg0 ;
-(int)sequenceNumber;
-(struct CGColor *)copyCGColorForNewCalendar;
-(void)_accessStatusChanged;
-(void)_addObjectToPendingCommits:(id)arg0 ;
-(void)_cacheCalendarWithCADObjectID:(id)arg0 withDefaultLoadedPropertyValues:(id)arg1 forKeys:(id)arg2 ;
-(void)_cacheSourceWithCADObjectID:(id)arg0 withDefaultLoadedPropertyValues:(id)arg1 forKeys:(id)arg2 ;
-(void)_clearAllCaches;
-(void)_clearCachedCalendars;
-(void)_clearCachedConstraintsForSourceWithCADObjectID:(id)arg0 ;
-(void)_clearCachedSources;
-(void)_clearEventsNeedingGeocodingWithCommittedObjects:(id)arg0 ;
-(void)_databaseChangedExternally:(NSUInteger)arg0 processSynchronously:(BOOL)arg1 ;
-(void)_defaultAlarmChangedExternally;
-(void)_defaultCalendarChangedExternally;
-(void)_deleteObject:(id)arg0 ;
-(void)_detachObject:(id)arg0 ;
-(void)_fetchAndClearEventsNeedingGeocoding:(*id)arg0 withCommittedObjects:(id)arg1 ;
-(void)_forgetRegisteredObjects;
-(void)_handleExternalDatabaseChangeNotification:(id)arg0 synchronously:(BOOL)arg1 ;
-(void)_insertObject:(id)arg0 ;
-(void)_loadCalendarsIfNeeded;
-(void)_loadSourcesIfNeeded;
-(void)_objectDidReset:(id)arg0 ;
-(void)_populateCalendarsByIdentifierIfNeeded;
-(void)_postEventStoreChangedNotificationWithChangeType:(NSUInteger)arg0 changedObjectIDs:(id)arg1 ;
-(void)_processChangedObjectIDsWithToken:(NSInteger)arg0 errorCode:(int)arg1 changesTruncated:(BOOL)arg2 latestToken:(NSInteger)arg3 changeData:(id)arg4 insertCount:(int)arg5 updateCount:(int)arg6 deleteCount:(int)arg7 resultHandler:(id)arg8 ;
-(void)_rebuildSourceMapsWithEventSources:(id)arg0 reminderSources:(id)arg1 ;
-(void)_registerObject:(id)arg0 ;
-(void)_registerObjectImmediate:(id)arg0 ;
-(void)_removeCachedCalendarFromSource:(id)arg0 ;
-(void)_removeCachedCalendarWithCADID:(id)arg0 ;
-(void)_requestAccessForEntityType:(NSUInteger)arg0 ;
-(void)_reregisterObject:(id)arg0 oldID:(id)arg1 ;
-(void)_resetAndNotifyAfterDatabaseRestoreGenerationChanged;
-(void)_setEvent:(id)arg0 isNotSendingNotification:(BOOL)arg1 ;
-(void)_setIsSpotlightTesting:(BOOL)arg0 ;
-(void)_setIsUnitTesting:(BOOL)arg0 ;
-(void)_simulateDaemonCrashForUnitTests;
-(void)_trackModifiedObject:(id)arg0 ;
-(void)_unregisterObject:(id)arg0 ;
-(void)_validateCADObjectIDs:(id)arg0 completion:(id)arg1 ;
-(void)_validateEventPredicate:(id)arg0 ;
-(void)_validateReminderPredicate:(id)arg0 ;
-(void)acceptSuggestedEvent:(id)arg0 ;
-(void)addContactIdentifier:(id)arg0 forCalendarItem:(id)arg1 ;
-(void)alarmOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 inCalendars:(id)arg2 completion:(id)arg3 ;
-(void)cacheValidationStatusForAddress:(id)arg0 status:(NSUInteger)arg1 ;
-(void)cancelFetchRequest:(id)arg0 ;
-(void)changedObjectIDsSinceToken:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)clearSuperfluousChanges;
-(void)confirmSuggestedEvent:(id)arg0 ;
-(void)daemonRestarted;
-(void)databaseRestoreGenerationChangedExternally:(int)arg0 ;
-(void)dealloc;
-(void)deleteSuggestedEvent:(id)arg0 ;
-(void)endCalDAVServerSimulation:(id)arg0 ;
-(void)enumerateEventsMatchingPredicate:(id)arg0 usingBlock:(id)arg1 ;
-(void)fetchChangedObjectIDsSinceToken:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)fetchEventCountsInRange:(id)arg0 inCalendars:(id)arg1 exclusionOptions:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchGrantedDelegatesForSource:(id)arg0 results:(id)arg1 ;
-(void)getMapsWithReminderSourceMap:(*id)arg0 eventSourceMap:(*id)arg1 ;
-(void)handleExternalDatabaseChangeNotification:(id)arg0 ;
-(void)initializeEKEventStorePlusReminders;
-(void)insertSuggestedEventCalendar;
-(void)invalidateReminderSourceMaps;
-(void)locationBasedAlarmOccurrencesWithCompletion:(id)arg0 ;
-(void)markChangedObjectIDsConsumedUpToToken:(NSInteger)arg0 ;
-(void)performHoldingReminderSourceMapLock:(id)arg0 ;
-(void)postSyntheticRouteHypothesis:(id)arg0 forEventWithExternalURL:(id)arg1 ;
-(void)purgeChangelog;
-(void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg0 ;
-(void)rebuildOccurrenceCache;
-(void)refreshSourcesIfNecessary;
-(void)removeContactIdentifier:(id)arg0 forCalendarItem:(id)arg1 ;
-(void)removeSuggestedEventCalendar;
-(void)requestAccessToEntityType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)respondToSharedCalendarInvitation:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)rollback;
-(void)setCachedEKSourceConstraintObject:(id)arg0 forKey:(id)arg1 ;
-(void)setDefaultCalendar:(id)arg0 forNewEventsInDelegateSource:(id)arg1 ;
-(void)setFetchingSharedCalendarInvitationsDisallowed:(BOOL)arg0 ;
-(void)setNeedsGeocoding:(BOOL)arg0 forEvent:(id)arg1 ;
-(void)setRestoreGenerationChanged:(BOOL)arg0 ;
-(void)setSourceAccountManagement:(int)arg0 ;
-(void)setSourceAccountManagement:(int)arg0 withBundleID:(id)arg1 ;
-(void)unregisterForDetailedChangeTracking:(*id)arg0 ;
-(void)updateGrantedDelegate:(id)arg0 action:(NSInteger)arg1 source:(id)arg2 completion:(id)arg3 ;
-(void)vehicleTriggerAlarmOccurrencesWithCompletion:(id)arg0 ;
-(void)waitForSpotlightUpdates;


@end


#endif