// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALENDARMODEL_H
#define CALENDARMODEL_H

@class NSLock, NSArray, NSSet, _EKNotificationMonitor, NSMutableDictionary, EKCalendarDate, NSMutableArray, NSCalendar, EKEventStore, NSString, EKEvent, EKSource, CUIKUndoManager;
@protocol CalendarEventLoaderDelegate, OccurrenceCacheDataSourceProtocol;

#import <Foundation/Foundation.h>

#import "CalendarEventLoader.h"
#import "CalendarModelSceneState.h"
#import "EKUIPasteboardManager.h"

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate>

 {
    BOOL _modelLocked;
    BOOL _notificationMonitorSetUp;
    CalendarEventLoader *_eventLoader;
    NSUInteger _focusFilterMode;
    NSLock *_filterLock;
    NSArray *_visibleCalendars;
    NSSet *_unselectedCalendarsForFocusMode;
    BOOL _hasLoadedUnselectedCalendarsForFocusMode;
    NSInteger _readWriteCalendarCount;
    NSArray *_delegateSources;
    NSInteger _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    os_unfair_lock_s _dataSourceLock;
    id<OccurrenceCacheDataSourceProtocol> *_occurrenceCacheDataSource;
    id<OccurrenceCacheDataSourceProtocol> *_occurrenceCacheFilteredDataSource;
    NSInteger _cachedFakeTodayIndex;
    NSMutableDictionary *_displayableAccountErrorCounts;
    NSInteger _initialAccountSyncCount;
    os_unfair_lock_s _selectedDateLock;
    EKCalendarDate *_selectedDate;
    BOOL _suspendSelectedDateChanges;
    EKCalendarDate *_suspendedSelectedDate;
    CalendarModelSceneState *_persistedSceneState;
    NSMutableArray *_selectedOccurrences;
}


@property (readonly, nonatomic) NSInteger accountsInInitialSyncCount;
@property (nonatomic) BOOL allowEventLocationPrediction;
@property (nonatomic) BOOL autoStartNotificationMonitor; // ivar: _autoStartNotificationMonitor
@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) BOOL containsDelegateSources;
@property (readonly, nonatomic) BOOL currentlyLocked;
@property (nonatomic) BOOL disableFocusFiltering; // ivar: _disableFocusFiltering
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (nonatomic) NSUInteger firstVisibleSecond; // ivar: _firstVisibleSecond
@property (nonatomic) NSUInteger focusFilterMode;
@property (readonly, nonatomic) EKUIPasteboardManager *pasteboardManager; // ivar: _pasteboardManager
@property (readonly, nonatomic) NSInteger readWriteCalendarCount;
@property (copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) NSSet *selectedCalendars; // ivar: _selectedCalendars
@property (readonly, nonatomic) NSSet *selectedCalendarsIgnoringFocus;
@property (copy, nonatomic) EKCalendarDate *selectedDate;
@property (readonly, nonatomic) EKCalendarDate *selectedDay;
@property (retain, nonatomic) EKEvent *selectedOccurrence;
@property (copy, nonatomic) NSArray *selectedOccurrences;
@property (nonatomic) BOOL showDayAsList;
@property (nonatomic) BOOL showMonthAsDivided;
@property (retain, nonatomic) NSArray *sortedEnabledDelegates; // ivar: _sortedEnabledDelegates
@property (readonly, retain, nonatomic) EKSource *sourceForSelectedIdentity; // ivar: _sourceForSelectedIdentity
@property (readonly, nonatomic) CUIKUndoManager *undoManager; // ivar: _undoManager
@property (copy, nonatomic) NSSet *unselectedCalendars;
@property (readonly, nonatomic) NSSet *unselectedCalendarsForFocusMode;
@property (readonly, nonatomic) NSSet *unselectedCalendarsIgnoringFocus;


+(NSUInteger)errorForSource:(id)arg0 ;
+(NSUInteger)errorForSubscribedCalendarChildrenOfSource:(id)arg0 ;
+(id)calendarModelWithDataPath:(id)arg0 ;
+(id)calendarModelWithEventStore:(id)arg0 ;
+(id)sortedEnabledDelegateSourcesFromStore:(id)arg0 ;
+(void)temporarilyIgnoreInsecureConnectionErrorsForCalendars:(id)arg0 ;
+(void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)arg0 ;
-(BOOL)_eventBelongsToCurrentIdentity:(id)arg0 ;
-(BOOL)_shouldShowNotification:(id)arg0 ;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)countSourcesWithErrors;
-(BOOL)invitationBearingStoresExistForEvents;
-(BOOL)isCalendarVisibleWithID:(id)arg0 ;
-(BOOL)removeEvent:(id)arg0 withSpan:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)searchingOccurrences;
-(CGFloat)_tomorrow;
-(NSInteger)cachedFakeTodayIndex;
-(NSInteger)countAccountsInInitialSync;
-(NSInteger)displayableAccountErrorsForSource:(id)arg0 ;
-(NSInteger)numberOfCachedOccurrencesInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfCachedOccurrencesInSection:(NSInteger)arg0 usingFilter:(BOOL)arg1 ;
-(NSInteger)numberOfDaysWithCachedOccurrences;
-(NSInteger)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg0 ;
-(NSInteger)sectionForCachedOccurrencesOnDate:(id)arg0 ;
-(NSInteger)sectionForCachedOccurrencesOnDate:(id)arg0 sectionExistsForDay:(*BOOL)arg1 ;
-(NSInteger)sectionForCachedOccurrencesOnDate:(id)arg0 sectionExistsForDay:(*BOOL)arg1 usingFilter:(BOOL)arg2 ;
-(NSInteger)sectionForCachedOccurrencesOnDate:(id)arg0 usingFilter:(BOOL)arg1 ;
-(NSUInteger)_eventNotificationCountForCurrentIdentityIgnoringFilter:(BOOL)arg0 ;
-(NSUInteger)allEventNotificationsCount;
-(NSUInteger)eventNotificationsForCurrentIdentityCount;
-(NSUInteger)eventNotificationsForCurrentIdentityIgnoringFilterCount;
-(id)_calendarsEnabledInFocus:(id)arg0 ;
-(id)_calendarsForCurrentIdentityFromCalendars:(id)arg0 lock:(BOOL)arg1 ;
-(id)_dataSourceUsingFilter:(BOOL)arg0 ;
-(id)_eventNotificationsForCurrentIdentityIgnoringFilter:(BOOL)arg0 ;
-(id)_notificationMonitor;
-(id)allCalendarsForCurrentIdentity;
-(id)allEventNotificationReferences;
-(id)cachedOccurrenceAtIndexPath:(id)arg0 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg0 usingFilter:(BOOL)arg1 ;
-(id)cachedSpecialDayDataForSection:(NSInteger)arg0 ;
-(id)calendarsForCurrentIdentityFromCalendars:(id)arg0 ;
-(id)closestOccurrenceToTomorrowForEventObjectID:(id)arg0 ;
-(id)closestOccurrenceToTomorrowForEventUID:(int)arg0 ;
-(id)dateForCachedOccurrencesInSection:(NSInteger)arg0 ;
-(id)dateForCachedOccurrencesInSection:(NSInteger)arg0 usingFilter:(BOOL)arg1 ;
-(id)defaultCalendarForNewEvents;
-(id)eventNotificationReferencesForCurrentIdentity;
-(id)eventNotificationReferencesForCurrentIdentityIgnoringFilter;
-(id)eventNotificationReferencesForIdentity:(id)arg0 ;
-(id)eventNotificationReferencesForIdentity:(id)arg0 ignoringFilter:(BOOL)arg1 ;
-(id)indexPathsForOccurrence:(id)arg0 usingFilter:(BOOL)arg1 ;
-(id)init;
-(id)initWithDataPath:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 ;
-(id)occurrencesForDay:(id)arg0 waitForLoad:(BOOL)arg1 ;
-(id)occurrencesForStartDate:(id)arg0 endDate:(id)arg1 preSorted:(BOOL)arg2 waitForLoad:(BOOL)arg3 ;
-(id)occurrencesForStartDay:(id)arg0 endDay:(id)arg1 preSorted:(BOOL)arg2 waitForLoad:(BOOL)arg3 ;
-(id)persistedSceneState;
-(id)refreshAccountListIfNeeded:(BOOL)arg0 ;
-(id)refreshCalendarDataIfNeeded:(BOOL)arg0 ;
-(id)selectedDateOccurrences:(BOOL)arg0 loadIsComplete:(*BOOL)arg1 ;
-(void)_checkSources;
-(void)_createOccurrenceCacheDataSources;
-(void)_deselectOccurrence:(id)arg0 notify:(BOOL)arg1 ;
-(void)_eventStoreChanged:(id)arg0 ;
-(void)_executeBlockWithOccurrenceCacheDataSources:(id)arg0 ;
-(void)_finishedFirstLoad;
-(void)_focusModeConfigurationChanged:(id)arg0 ;
-(void)_ignoredErrorsChanged;
-(void)_invalidateCachedOccurrences;
-(void)_invalidateOccurrenceCacheDataSources;
-(void)_loadVisibleCalendarsIfNeeded;
-(void)_localeChanged:(id)arg0 ;
-(void)_notificationBlacklisted;
-(void)_notificationsExpired:(id)arg0 ;
-(void)_notificationsLoaded:(id)arg0 ;
-(void)_occurrenceCacheChanged;
-(void)_occurrenceCacheChangedNotificationHandler;
-(void)_performCommonInitialization;
-(void)_processReloadForCacheOnly:(BOOL)arg0 includingCalendars:(BOOL)arg1 checkCalendarsValid:(BOOL)arg2 checkSources:(BOOL)arg3 ;
-(void)_recreateOccurrenceCacheDataSources;
-(void)_reloadIfTodayDetermined;
-(void)_sceneEnteredBackground:(id)arg0 ;
-(void)_sceneEnteredForeground:(id)arg0 ;
-(void)_searchResultsAvailable:(id)arg0 ;
-(void)_selectOccurrence:(id)arg0 notify:(BOOL)arg1 ;
-(void)_setupUndoManager;
-(void)_significantTimeChange:(id)arg0 ;
-(void)_systemWake;
-(void)_timeZoneChanged:(id)arg0 ;
-(void)_tzSupportTodayRolledOver;
-(void)addOccurrenceAwaitingDeletion:(id)arg0 ;
-(void)addOccurrenceAwaitingRefresh:(id)arg0 ;
-(void)addRespondedNotificationObjectID:(id)arg0 ;
-(void)calendarEventLoader:(id)arg0 occurrencesDidUpdateBetweenStart:(CGFloat)arg1 end:(CGFloat)arg2 generation:(int)arg3 wasEmptyLoad:(BOOL)arg4 ;
-(void)checkLocationAuthorizationAndAllowEventLocationPrediction;
-(void)dealloc;
-(void)deselectOccurrence:(id)arg0 ;
-(void)ensureCalendarVisibleWithId:(id)arg0 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(NSInteger)arg0 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(NSInteger)arg0 usingFilter:(BOOL)arg1 ;
-(void)fetchDaysStartingFromSection:(NSInteger)arg0 sectionsToLoadInBothDirections:(NSInteger)arg1 ;
-(void)locationPrecisionDeterminedNotification:(id)arg0 ;
-(void)postSelectedCalendarsChanged;
-(void)prepareForAppSuspend;
-(void)selectOccurrence:(id)arg0 ;
-(void)setComponentForExpandingPadding:(NSUInteger)arg0 ;
-(void)setComponentForExpandingRequests:(NSUInteger)arg0 ;
-(void)setDesiredPaddingDays:(unsigned int)arg0 ;
-(void)setMaxCachedDays:(unsigned int)arg0 ;
-(void)setPreferredReloadStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)simulateFirstLoadFinished;
-(void)startNotificationMonitor;
-(void)updateAfterAppResume;
-(void)updateSelectedDateTimeZone;
-(void)updateSourceForSelectedIdentity:(id)arg0 selectedCalendars:(id)arg1 ;


@end


#endif