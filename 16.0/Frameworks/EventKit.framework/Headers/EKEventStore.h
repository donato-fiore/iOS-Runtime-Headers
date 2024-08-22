// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTSTORE_H
#define EKEVENTSTORE_H

@class CADDatabaseInitializationOptions, CADGenerationStampedObjectID, NSMutableDictionary, NSMutableArray, NSHashTable, NSNumber, CalAccumulatingQueue, NSCache, NSArray, NSString, NSSet, NSMutableSet, NSDictionary, CADInMemoryChangeTimestamp, NSTimeZone;
@protocol EKDaemonConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKSequenceToken.h"
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
    NSNumber *_showDeclinedEventsNumber;
    BOOL _hasAccessToEvents;
    BOOL _hasAccessToReminders;
    BOOL _accessDetermined;
    os_unfair_lock_s _reminderSourceMapLock;
    BOOL _isIgnoringExternalChanges;
    BOOL _shouldNotifySyncStatusOnlyChanges;
    os_unfair_lock_s _flagsLock;
    ? _flags;
    CalAccumulatingQueue *_notificationAccumulatingQueue;
    CGFloat _defaultDelayForThrottledNotifications;
    NSUInteger _lastFiredEventStoreChangedNotificationTime;
    NSUInteger _lastFiredNonSyncOnlyEventStoreChangedNotificationTime;
    NSCache *_deletedEventUniqueIdentifiersCache;
    EKSequenceToken *_lastSequenceToken;
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
@property (readonly, nonatomic) EKAlarm *defaultAllDayAlarm; // ivar: _defaultAllDayAlarm
@property (readonly, nonatomic) NSNumber *defaultAllDayAlarmOffset;
@property (retain, nonatomic) EKCalendar *defaultCalendarForNewEvents;
@property (readonly, nonatomic) EKCalendar *defaultCalendarForNewReminders;
@property (readonly, nonatomic) EKAlarm *defaultTimedAlarm; // ivar: _defaultTimedAlarm
@property (readonly, nonatomic) NSNumber *defaultTimedAlarmOffset;
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
@property (retain, nonatomic) CADInMemoryChangeTimestamp *lastDatabaseNotificationTimestamp; // ivar: _lastDatabaseNotificationTimestamp
@property (readonly, nonatomic) EKCalendar *naturalLanguageSuggestedEventCalendar;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationCollectionCacheQueue; // ivar: _notificationCollectionCacheQueue
@property (readonly, nonatomic) NSArray *objectsPendingCommit;
@property (retain, nonatomic) NSMutableSet *objectsPendingSave; // ivar: _objectsPendingSave
@property (retain, nonatomic) NSMutableDictionary *registeredObjects; // ivar: _registeredObjects
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registeredQueue; // ivar: _registeredQueue
@property (retain, nonatomic) NSDictionary *reminderSourceIDToEventSourceIDMapping; // ivar: _reminderSourceIDToEventSourceIDMapping
@property (readonly, nonatomic) *os_unfair_lock_s reminderSourceMapLock;
@property (readonly, nonatomic) EKReminderStore *reminderStore; // ivar: _reminderStore
@property (nonatomic) BOOL showDeclinedEvents;
@property (readonly, nonatomic) NSNumber *siriSuggestionsAllDayAlarmOffset; // ivar: _siriSuggestionsAllDayAlarmOffset
@property (readonly, nonatomic) NSNumber *siriSuggestionsTimedAlarmOffset; // ivar: _siriSuggestionsTimedAlarmOffset
@property (readonly, nonatomic) NSArray *sources;
@property (readonly, nonatomic) EKCalendar *suggestedEventCalendar;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue; // ivar: _unsavedChangesQueue
@property (retain, nonatomic) NSMutableSet *updatedObjects; // ivar: _updatedObjects


+(BOOL)_isConfirmedSuggestedEvent:(id)arg0 uniqueKey:(*id)arg1 ;
+(BOOL)_shouldRefreshSource:(id)arg0 ;
+(BOOL)_skipTCCAccessCheck;
+(BOOL)accessGrantedForEntityType:(NSUInteger)arg0 ;
+(CGFloat)_defaultDelayForThrottledNotificationsWithInitializationOptions:(id)arg0 ;
+(CGFloat)_throttleDelayForEventStoreChangedNotificationWithLastFiredTime:(NSUInteger)arg0 delay:(CGFloat)arg1 ;
+(Class)classForEntityName:(id)arg0 ;
+(NSInteger)authorizationStatusForEntityType:(NSUInteger)arg0 ;
+(NSUInteger)ekEventStoreInitOptionsFromCalDatabaseInitOptions:(int)arg0 ;
+(id)_contextForNotificationWithChangeType:(NSUInteger)arg0 changedObjectIDs:(id)arg1 ;
+(id)_filteredArrayWithIdentifiers:(id)arg0 fromObjects:(id)arg1 ;
+(id)_filteredObjectsWithIdentifiers:(id)arg0 fromObjects:(id)arg1 ;
+(id)_iMIPScheduledEvent:(id)arg0 attendeesDeleted:(BOOL)arg1 ;
+(id)calendarObjectIDsForPredicate:(id)arg0 ;
+(id)eventStoreChangedDistributedNotificationName;
+(int)calDatabaseInitOptionsFromEKEventStoreInitOptions:(NSUInteger)arg0 ;
+(void)_addDaysSpannedByEvent:(id)arg0 toCountedSet:(id)arg1 inRange:(id)arg2 withNSCalendar:(id)arg3 ;
+(void)_refreshFolderListForSource:(id)arg0 isUserRequested:(BOOL)arg1 ;
+(void)setDenyAccessToEvents:(BOOL)arg0 ;
+(void)setDenyAccessToReminders:(BOOL)arg0 ;
-(BOOL)_calendar:(id)arg0 supportsEntityType:(NSUInteger)arg1 ;
-(BOOL)_commitObjectsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isRegisteredObject:(id)arg0 ;
-(BOOL)_isUnitTesting;
-(BOOL)_parseURI:(id)arg0 expectedScheme:(id)arg1 identifier:(*id)arg2 options:(*id)arg3 ;
-(BOOL)_refreshDASource:(id)arg0 isUserRequested:(BOOL)arg1 ;
-(BOOL)_removeCalendar:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_removeEvent:(id)arg0 span:(NSInteger)arg1 commit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_saveCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveDraftOfEvent:(id)arg0 toDirectory:(id)arg1 ;
-(BOOL)_saveDraftOfEvent:(id)arg0 toDirectory:(id)arg1 withVersion:(id)arg2 ;
-(BOOL)_saveEvent:(id)arg0 span:(NSInteger)arg1 commit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)accessGrantedForEntityType:(NSUInteger)arg0 ;
-(BOOL)acknowledgeNotifications:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowDelegateSources;
-(BOOL)backupDatabaseToDestination:(id)arg0 withFormat:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)canModifyCalendarDatabase;
-(BOOL)canModifySuggestedEventCalendar;
-(BOOL)commit:(*id)arg0 ;
-(BOOL)commitObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitWithRollback:(*id)arg0 ;
-(BOOL)commitWithRollbackForNewClients:(*id)arg0 ;
-(BOOL)deleteCalendar:(id)arg0 forEntityType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)eventWithUUID:(id)arg0 isInCalendars:(id)arg1 ;
-(BOOL)eventsExistOnCalendar:(id)arg0 ;
-(BOOL)eventsMarkedScheduleAgentClientExistOnCalendar:(id)arg0 ;
-(BOOL)fetchingSharedCalendarInvitationsDisallowed;
-(BOOL)futureScheduledEventsExistOnCalendar:(id)arg0 ;
-(BOOL)hasImmediatelyEligibleTravelEvents;
-(BOOL)hideCalendarsFromNotificationCenter:(id)arg0 error:(*id)arg1 ;
-(BOOL)isObjectInserted:(id)arg0 ;
-(BOOL)isSourceManaged:(id)arg0 ;
-(BOOL)markIndividualChangesConsumed:(id)arg0 error:(*id)arg1 ;
-(BOOL)markResourceChangeAlertedAndSave:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsGeocodingForEvent:(id)arg0 ;
-(BOOL)objectWithIDExists:(id)arg0 ;
-(BOOL)objectsHaveChangesToCommit:(id)arg0 ;
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
-(BOOL)saveDraftOfEvent:(id)arg0 ;
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
-(BOOL)unregisterForDetailedChangeTracking:(*id)arg0 ;
-(CGFloat)_throttleDelayForEventStoreChangedNotificationWithTags:(id)arg0 context:(id)arg1 ;
-(Class)_SGSuggestionsServiceClass;
-(NSInteger)registerForDetailedChangeTracking:(*id)arg0 ;
-(NSInteger)registerForDetailedChangeTrackingInSource:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)addressValidationStatus:(id)arg0 ;
-(NSUInteger)eventNotificationCountExcludingUncheckedCalendars:(BOOL)arg0 expanded:(BOOL)arg1 ;
-(NSUInteger)eventNotificationCountExpanded:(BOOL)arg0 ;
-(NSUInteger)eventNotificationCountForSource:(id)arg0 excludingDelegateSources:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 excludeObjectIDs:(id)arg3 ;
-(NSUInteger)eventNotificationCountForSource:(id)arg0 excludingDelegateSources:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 excludeObjectIDs:(id)arg3 expanded:(BOOL)arg4 ;
-(NSUInteger)timeToLeaveLocationAuthorizationStatus;
-(id)ICSDataForCalendarItems:(id)arg0 options:(NSUInteger)arg1 ;
-(id)ICSDataForCalendarItems:(id)arg0 preventLineFolding:(BOOL)arg1 ;
-(id)_addFetchedObjectWithID:(id)arg0 ;
-(id)_allCalendars;
-(id)_apiExpectedEventForEvent:(id)arg0 ;
-(id)_apiExpectedEventsForEvents:(id)arg0 ;
-(id)_calendarItemsMatchingPredicate:(id)arg0 ;
-(id)_calendarItemsWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 entityTypes:(NSUInteger)arg2 ;
-(id)_combineEventSources:(id)arg0 withReminderSources:(id)arg1 ;
-(id)_deletableCalendars;
-(id)_deletableSources;
-(id)_draftPathForEventWithOccurrenceID:(id)arg0 draftDirectory:(id)arg1 ;
-(id)_entityWrappersForEventUUIDs:(id)arg0 inCalendars:(id)arg1 propertiesToLoad:(id)arg2 ;
-(id)_eventCalendarWithIdentifier:(id)arg0 ;
-(id)_eventOccurrenceWithURI:(id)arg0 ;
-(id)_eventWithEventIdentifier:(id)arg0 ;
-(id)_eventWithURI:(id)arg0 checkValid:(BOOL)arg1 ;
-(id)_fetchConstraintsForSourceWithCADObjectID:(id)arg0 ;
-(id)_fetchPersistentNotificationCollectionForSourceWithCADObjectID:(id)arg0 ;
-(id)_importEventsWithExternalIDs:(id)arg0 fromICSData:(id)arg1 intoCalendarsWithIDs:(id)arg2 options:(NSUInteger)arg3 batchSize:(int)arg4 ;
-(id)_invalidCADObjectIDs:(id)arg0 ;
-(id)_loadDraftOfEventWithOccurrenceID:(id)arg0 fromDirectory:(id)arg1 ;
-(id)_loadDraftOfEventWithOccurrenceID:(id)arg0 fromDirectory:(id)arg1 withVersion:(id)arg2 ;
-(id)_localSourceWithEnableIfNeeded:(BOOL)arg0 ;
-(id)_markObjectsWithIdentifiersAsCommitted:(id)arg0 ;
// -(id)_nextEventWithFetchBlock:(id)arg0 steps:(unk)arg1  ;
-(id)_sourceWithID:(id)arg0 ;
-(id)acquireDefaultCalendarForNewEvents;
-(id)acquireDefaultCalendarForNewReminders;
-(id)alarmWithExternalID:(id)arg0 ;
-(id)alarmWithUUID:(id)arg0 ;
-(id)allEventsWithUniqueId:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)attachmentUUIDWithExternalID:(id)arg0 inSource:(id)arg1 ;
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
-(id)calendarsWithIdentifiers:(id)arg0 ;
-(id)closestCachedOccurrenceToDate:(CGFloat)arg0 forEventObjectID:(id)arg1 ;
-(id)closestCachedOccurrenceToDate:(CGFloat)arg0 forEventObjectID:(id)arg1 prefersForwardSearch:(BOOL)arg2 ;
-(id)colorStringForNewCalendar;
-(id)combineEventCalendars:(id)arg0 withReminderCalendars:(id)arg1 ;
-(id)combinedReminderAndEventSources;
-(id)defaultCalendarForNewEventsInDelegateSource:(id)arg0 ;
-(id)defaultLocalCalendar;
-(id)delegateSourcesForSource:(id)arg0 ;
-(id)doEvents:(id)arg0 haveOccurrencesAfterDate:(id)arg1 ;
-(id)eventForObjectID:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventForObjectID:(id)arg0 occurrenceDate:(id)arg1 checkValid:(BOOL)arg2 ;
-(id)eventForUID:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventForUID:(id)arg0 occurrenceDate:(id)arg1 checkValid:(BOOL)arg2 ;
-(id)eventNotificationsAfterDate:(id)arg0 ;
-(id)eventNotificationsAfterDate:(id)arg0 excludingUncheckedCalendars:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 earliestExpiringNotification:(*id)arg3 ;
-(id)eventNotificationsAfterDate:(id)arg0 filteredByShowsNotificationsFlag:(BOOL)arg1 earliestExpiringNotification:(*id)arg2 ;
-(id)eventNotificationsExcludingUncheckedCalendars:(BOOL)arg0 filteredByShowsNotificationsFlag:(BOOL)arg1 earliestExpiringNotification:(*id)arg2 ;
-(id)eventObjectIDsMatchingPredicate:(id)arg0 ;
-(id)eventSourceForReminderSource:(id)arg0 ;
-(id)eventSourceIDForReminderSourceID:(id)arg0 ;
-(id)eventSourceMap;
-(id)eventSources;
-(id)eventWithExternalURI:(id)arg0 ;
-(id)eventWithIdentifier:(id)arg0 ;
-(id)eventWithRecurrenceIdentifier:(id)arg0 ;
-(id)eventWithUUID:(id)arg0 ;
-(id)eventWithUUID:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventWithUniqueId:(id)arg0 ;
-(id)eventWithUniqueId:(id)arg0 occurrenceDate:(id)arg1 ;
-(id)eventWithUniqueIdentifier:(id)arg0 ;
-(id)eventsMatchingPredicate:(id)arg0 ;
-(id)eventsWithErrorsPerSourceID;
-(id)eventsWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 ;
-(id)eventsWithIdentifiers:(id)arg0 ;
-(id)eventsWithUUIDToOccurrenceDateMap:(id)arg0 inCalendars:(id)arg1 ;
-(id)fetchEventsMatchingPredicate:(id)arg0 resultHandler:(id)arg1 ;
-(id)fetchObjectsMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(id)fetchRemindersMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(id)fetchStorageUsage;
-(id)getSubscribedCalendarsSourceCreateIfNeededWithError:(*id)arg0 ;
-(id)importEventsWithExternalIDs:(id)arg0 fromICSData:(id)arg1 intoCalendars:(id)arg2 options:(NSUInteger)arg3 batchSize:(int)arg4 ;
-(id)importICS:(id)arg0 intoCalendar:(id)arg1 options:(NSUInteger)arg2 ;
-(id)importICSData:(id)arg0 intoCalendar:(id)arg1 options:(NSUInteger)arg2 ;
-(id)importICSData:(id)arg0 intoCalendars:(id)arg1 options:(NSUInteger)arg2 ;
-(id)importVCSData:(id)arg0 intoCalendars:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithBirthdayCalendarModifications;
-(id)initWithEKOptions:(NSUInteger)arg0 ;
-(id)initWithEKOptions:(NSUInteger)arg0 path:(id)arg1 changeTrackingClientId:(id)arg2 enablePropertyModificationLogging:(BOOL)arg3 allowDelegateSources:(BOOL)arg4 ;
-(id)initWithEKOptions:(NSUInteger)arg0 path:(id)arg1 changeTrackingClientId:(id)arg2 enablePropertyModificationLogging:(BOOL)arg3 allowDelegateSources:(BOOL)arg4 allowedSourceIdentifiers:(id)arg5 ;
-(id)initWithEKOptions:(NSUInteger)arg0 path:(id)arg1 conainerProvider:(id)arg2 changeTrackingClientId:(id)arg3 enablePropertyModificationLogging:(BOOL)arg4 allowDelegateSources:(BOOL)arg5 allowedSourceIdentifiers:(id)arg6 ;
-(id)initWithEKOptions:(NSUInteger)arg0 path:(id)arg1 sources:(id)arg2 ;
-(id)initWithOptions:(int)arg0 path:(id)arg1 ;
-(id)initWithOptions:(int)arg0 path:(id)arg1 allowDelegateSources:(BOOL)arg2 ;
-(id)initWithOptions:(int)arg0 path:(id)arg1 changeTrackingClientId:(id)arg2 enablePropertyModificationLogging:(BOOL)arg3 allowDelegateSources:(BOOL)arg4 ;
-(id)initWithSources:(id)arg0 ;
-(id)loadDraftOfEventWithOccurrenceID:(id)arg0 ;
-(id)localBirthdayCalendarCreateIfNeededWithError:(*id)arg0 ;
-(id)localBirthdayCalendarSource;
-(id)localSource;
-(id)localSourceEnableIfNeeded;
-(id)nextEventWithCalendarIdentifiers:(id)arg0 exclusionOptions:(NSInteger)arg1 ;
-(id)nextEventWithCalendars:(id)arg0 exclusionOptions:(NSInteger)arg1 ;
-(id)notificationCollectionForSource:(id)arg0 ;
-(id)objectWithObjectID:(id)arg0 ;
-(id)objectsMatchingPredicate:(id)arg0 ;
-(id)occurrenceCacheGetOccurrenceCountsForCalendars:(id)arg0 ;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg0 onDay:(id)arg1 ;
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
-(id)predicateForEventsInSubscribedCalendar:(id)arg0 ;
-(id)predicateForEventsWithAttendeesInCalendar:(id)arg0 ;
-(id)predicateForEventsWithConferenceURL:(id)arg0 limit:(NSInteger)arg1 ;
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
-(id)predicateForRemindersWithTitle:(id)arg0 listTitle:(id)arg1 limitToCompletedOrIncomplete:(BOOL)arg2 completed:(BOOL)arg3 dueAfter:(id)arg4 dueBefore:(id)arg5 searchTerm:(id)arg6 sortOrder:(int)arg7 maxResults:(NSUInteger)arg8 ;
-(id)predicateForScheduleAgentClientEventsInCalendar:(id)arg0 ;
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
-(id)reminderWithIdentifier:(id)arg0 ;
-(id)reminderWithUniqueId:(id)arg0 ;
-(id)remindersMatchingPredicate:(id)arg0 ;
-(id)remindersWithExternalIdentifier:(id)arg0 inCalendars:(id)arg1 ;
-(id)resourceChangesForEntityTypes:(NSUInteger)arg0 ;
-(id)sequenceToken;
-(id)sharedCalendarInvitationsForEntityTypes:(NSUInteger)arg0 ;
-(id)sourceWithExternalID:(id)arg0 ;
-(id)sourceWithIdentifier:(id)arg0 ;
-(id)sourcesEnabledForEntityType:(NSUInteger)arg0 ;
-(id)travelEligibleEventsInCalendars:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)uniqueIdentifiersForAllObjectsWithChangesRelatedToObjects:(id)arg0 ;
-(id)uniqueIdentifiersForEventsWithObjectIDs:(id)arg0 ;
-(id)validatedNonDeletedPersistentObjectWithObjectID:(id)arg0 ;
-(id)validatedNonDeletedPublicObjectWithObjectID:(id)arg0 ;
-(int)readWriteCalendarCountForEntityType:(NSUInteger)arg0 ;
-(int)sequenceNumber;
-(int)syncErrorCount;
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
-(void)_clearPendingChangesForObjectsWithOwner:(id)arg0 ;
-(void)_databaseChangedExternally:(NSUInteger)arg0 processSynchronously:(BOOL)arg1 ;
-(void)_defaultAlarmChangedExternally;
-(void)_defaultCalendarChangedExternally;
-(void)_deleteDraft:(id)arg0 ;
-(void)_deleteDraftOfEventWithOccurrenceID:(id)arg0 fromDirectory:(id)arg1 ;
-(void)_deleteObject:(id)arg0 ;
-(void)_detachObject:(id)arg0 ;
-(void)_fetchAndClearEventsNeedingGeocoding:(*id)arg0 withCommittedObjects:(id)arg1 ;
-(void)_fetchProperties:(id)arg0 forObjects:(id)arg1 ;
-(void)_forgetRegisteredObjects;
-(void)_handleExternalDatabaseChangeNotification:(id)arg0 synchronously:(BOOL)arg1 ;
-(void)_handleExternalDatabaseChangedNotificationAsynchronously:(id)arg0 ;
-(void)_insertObject:(id)arg0 ;
-(void)_loadCalendarsIfNeeded;
-(void)_loadSourcesIfNeeded;
-(void)_objectDidReset:(id)arg0 ;
-(void)_populateCalendarsByIdentifierIfNeeded;
-(void)_postEventStoreChangedNotificationWithChangeType:(NSUInteger)arg0 changedObjectIDs:(id)arg1 forceImmediate:(BOOL)arg2 ;
-(void)_postEventStoreChangedNotificationWithTags:(id)arg0 context:(id)arg1 ;
-(void)_processChangedObjectIDsWithErrorCode:(int)arg0 changesTruncated:(BOOL)arg1 latestToken:(id)arg2 changeData:(id)arg3 resultHandler:(id)arg4 ;
-(void)_processExternalChangesWithLatestTimestamp:(id)arg0 changedObjectIDsData:(id)arg1 changesWereSyncStatusOnly:(BOOL)arg2 forceImmediateNotification:(BOOL)arg3 ;
-(void)_rebuildSourceMapsWithEventSources:(id)arg0 reminderSources:(id)arg1 ;
-(void)_registerObject:(id)arg0 ;
-(void)_registerObjectImmediate:(id)arg0 ;
-(void)_removeCachedCalendarFromSource:(id)arg0 ;
-(void)_removeCachedCalendarWithCADID:(id)arg0 ;
-(void)_requestAccessForEntityType:(NSUInteger)arg0 ;
-(void)_reregisterObject:(id)arg0 oldID:(id)arg1 ;
-(void)_resetAndNotifyAfterDatabaseRestoreGenerationChanged;
-(void)_setIsSpotlightTesting:(BOOL)arg0 ;
-(void)_setIsUnitTesting:(BOOL)arg0 ;
-(void)_simulateDaemonCrashForUnitTests;
-(void)_trackModifiedObject:(id)arg0 ;
-(void)_unregisterObject:(id)arg0 ;
-(void)_updateDefaultDelayForThrottleEventStoreChangedNotifications;
-(void)_validateEventPredicate:(id)arg0 ;
-(void)acceptSuggestedEvent:(id)arg0 ;
-(void)acceptSuggestedEvent:(id)arg0 placeOnCalendar:(id)arg1 ;
-(void)addExchangeDelegateWithName:(id)arg0 emailAddress:(id)arg1 toSource:(id)arg2 completion:(id)arg3 ;
-(void)alarmOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 inCalendars:(id)arg2 completion:(id)arg3 ;
-(void)cacheValidationStatusForAddress:(id)arg0 status:(NSUInteger)arg1 ;
-(void)cancelFetchRequest:(id)arg0 ;
-(void)changedObjectIDsSinceToken:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)changesSinceSequenceToken:(id)arg0 completion:(id)arg1 ;
-(void)clearSuperfluousChanges;
-(void)confirmSuggestedEvent:(id)arg0 ;
-(void)consumeAllChangesUpToToken:(id)arg0 ;
-(void)daemonRestarted;
-(void)databaseRestoreGenerationChangedExternally:(int)arg0 ;
-(void)dealloc;
-(void)deleteDraftOfEventWithOccurrenceID:(id)arg0 ;
-(void)deleteSuggestedEvent:(id)arg0 ;
-(void)endCalDAVServerSimulation:(id)arg0 ;
-(void)ensureLoadedProperties:(id)arg0 forObjects:(id)arg1 ;
-(void)enumerateEventsMatchingPredicate:(id)arg0 usingBlock:(id)arg1 ;
-(void)fetchChangedObjectIDs:(id)arg0 ;
-(void)fetchChangedObjectIDsSinceToken:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)fetchEventCountsInRange:(id)arg0 inCalendars:(id)arg1 exclusionOptions:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchGrantedDelegatesForSource:(id)arg0 results:(id)arg1 ;
-(void)getMapsWithReminderSourceMap:(*id)arg0 eventSourceMap:(*id)arg1 ;
-(void)handleExternalDatabaseChangeNotification:(id)arg0 ;
-(void)initializeEKEventStorePlusReminders;
-(void)insertSuggestedEventCalendar;
-(void)invalidateReminderSourceMaps;
-(void)markChangedObjectIDsConsumedUpToToken:(NSInteger)arg0 ;
-(void)performHoldingReminderSourceMapLock:(id)arg0 ;
-(void)postSyntheticRouteHypothesis:(id)arg0 forEventWithExternalURL:(id)arg1 ;
-(void)purgeChangelog;
-(void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg0 ;
-(void)rebuildOccurrenceCache;
-(void)recordSequenceTokenForLegacyClients:(id)arg0 ;
-(void)refreshSourcesIfNecessary;
-(void)removeExchangeDelegate:(id)arg0 completion:(id)arg1 ;
-(void)removeSuggestedEventCalendar;
-(void)requestAccessToEntityType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)requestAccessToEntityType:(NSUInteger)arg0 testing:(BOOL)arg1 completion:(id)arg2 ;
-(void)reset;
-(void)respondToSharedCalendarInvitation:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)rollback;
-(void)rollbackObjectsWithIdentifiers:(id)arg0 ;
-(void)setCachedDefaultAlarmOffsetsToNSNotFound;
-(void)setCachedEKSourceConstraintObject:(id)arg0 forKey:(id)arg1 ;
-(void)setDefaultCalendar:(id)arg0 forNewEventsInDelegateSource:(id)arg1 ;
-(void)setFetchingSharedCalendarInvitationsDisallowed:(BOOL)arg0 ;
-(void)setNeedsGeocoding:(BOOL)arg0 forEvent:(id)arg1 ;
-(void)setPrivacyClientIdentity:(id)arg0 ;
-(void)setRestoreGenerationChanged:(BOOL)arg0 ;
-(void)setSourceAccountManagement:(int)arg0 ;
-(void)setSourceAccountManagement:(int)arg0 withBundleID:(id)arg1 ;
-(void)showDeclinedEventsChanged:(id)arg0 ;
-(void)updateGrantedDelegate:(id)arg0 action:(NSInteger)arg1 source:(id)arg2 completion:(id)arg3 ;
-(void)waitForSpotlightUpdates;


@end


#endif