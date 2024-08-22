// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOBILECALDAVACCOUNT_H
#define MOBILECALDAVACCOUNT_H

@class DAAccount, NSMutableSet, NSMutableArray, NSString, NSSet, CoreDAVDiscoveryTaskGroup, NSURL, DACoreDAVLogger, NSDictionary, NSArray, NSMutableDictionary, MobileCalDAVPrincipal<CalDAVPrincipal>, CalDAVPrincipalSearchPropertySet, CalDAVServerVersion, DACoreDAVTaskManager, NSTimeZone;
@protocol CDBAccountInfo, DACalDAVAccount;


#import "MobileCalDAVAccountRefreshActor.h"
#import "CalDAVRefreshContext.h"

@interface MobileCalDAVAccount : DAAccount <CDBAccountInfo, DACalDAVAccount>

 {
    int _wasMigrated;
    NSMutableSet *_mMovedItemURLStrings;
    NSMutableArray *_duplicateCalendars;
    NSString *_usernameForDiscovery;
    NSString *_hostForDiscovery;
}


@property (retain, nonatomic) MobileCalDAVAccountRefreshActor *actor; // ivar: _actor
@property (copy, nonatomic) NSString *calendarHomeSyncToken;
@property (readonly, nonatomic) NSSet *calendars;
@property (retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup; // ivar: _checkValidityTaskGroup
@property (retain, nonatomic) NSURL *collectionSetURL;
@property (retain, nonatomic) DACoreDAVLogger *coreDAVLogger; // ivar: _coreDAVLogger
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *delegateUserInfos; // ivar: _delegateUserInfos
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *duplicateCalendars;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRefreshing; // ivar: _isRefreshing
@property (nonatomic) BOOL isSpinning; // ivar: _isSpinning
@property (nonatomic) BOOL isWritable;
@property (readonly, nonatomic) NSDictionary *itemIDsToMoveActions;
@property (retain, nonatomic) NSMutableSet *mCalendars; // ivar: _calendars
@property (retain, nonatomic) NSMutableDictionary *mItemIDsToMoveActions; // ivar: _itemIDsToMoveActions
@property (retain, nonatomic) NSMutableSet *mMovedItemURLStrings; // ivar: _movedItemURLStrings
@property (retain, nonatomic) NSMutableDictionary *mPrincipals; // ivar: _principals
@property (retain, nonatomic) MobileCalDAVPrincipal<CalDAVPrincipal> *mainPrincipal; // ivar: _mainPrincipal
@property (readonly, nonatomic) NSSet *movedItemURLStrings;
@property (nonatomic) BOOL needsAccountPropertyRefresh; // ivar: _needsAccountPropertyRefresh
@property (nonatomic) int overriddenPort;
@property (retain, nonatomic) NSString *overriddenScheme;
@property (retain, nonatomic) NSString *overriddenServer;
@property (nonatomic) int preferredEventDaysToSync; // ivar: _preferredEventDaysToSync
@property (nonatomic) int preferredToDoDaysToSync; // ivar: _preferredToDoDaysToSync
@property (readonly, nonatomic) NSDictionary *principals;
@property (nonatomic) BOOL pushDisabled;
@property (retain, nonatomic) CalDAVRefreshContext *refreshContext; // ivar: _refreshContext
@property (nonatomic) CGFloat refreshInterval;
@property (retain, nonatomic) CalDAVPrincipalSearchPropertySet *searchPropertySet; // ivar: _searchPropertySet
@property (nonatomic) BOOL searchQueriesShouldCancel; // ivar: _searchQueriesShouldCancel
@property (retain, nonatomic) NSMutableSet *searchTaskSet; // ivar: _searchTaskSet
@property (readonly, nonatomic) NSURL *serverBaseURL;
@property (retain, nonatomic) CalDAVServerVersion *serverVersion; // ivar: _serverVersion
@property (readonly, nonatomic) BOOL shouldFilterEventSyncTimeRange;
@property (readonly, nonatomic) BOOL shouldFilterSyncTimeRangeForInbox;
@property (readonly, nonatomic) BOOL shouldUseCalendarHomeSyncReport;
@property (retain, nonatomic) NSDictionary *subscribedCalendars;
@property (nonatomic) BOOL subscribedCalendarsChanged; // ivar: _subscribedCalendarsChanged
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEvents;
@property (readonly, nonatomic) BOOL supportsReminders;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (readonly, nonatomic) NSTimeZone *viewedTimeZone;
@property (nonatomic) BOOL wasMigrated;
@property (readonly, nonatomic) NSArray *wellKnownPaths;


+(id)defaultAlarmOffsetFromICSString:(id)arg0 ;
-(*void)copyCalStore;
-(BOOL)_reallySearchQueriesRunning;
-(BOOL)_saveModifiedPrincipalsOnBackingAccount;
-(BOOL)_saveModifiedSubscribedCalendarsOnBackingAccount;
-(BOOL)_updateCalendarStoreNoDBOpen:(BOOL)arg0 ;
-(BOOL)_updateCalendarStoreProperties:(*void)arg0 ;
-(BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg0 ;
-(BOOL)addressIsAccountOwner:(id)arg0 ;
-(BOOL)isCalDAVAccount;
-(BOOL)isDelegateAccount;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)retryDiscoveryTask:(id)arg0 ;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(BOOL)shouldLogTransmittedData;
-(BOOL)upgradeAccount;
-(id)_calendarConstraintsName;
-(id)_collectActionsFromMoveDictionary:(struct __CFDictionary *)arg0 forDataclass:(id)arg1 outShouldSave:(*BOOL)arg2 ;
-(id)_powerAssertionContext;
-(id)_powerAssertionGroupIdentifier;
-(id)accountDescription;
-(id)childAccountWithIdentifier:(id)arg0 ;
-(id)delegatePrincipalPath;
-(id)emailAddresses;
-(id)host;
-(id)init;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)logHandle;
-(id)onBehalfOfBundleIdentifier;
-(id)preferredAddress;
-(id)principalPath;
-(id)spinnerIdentifiers;
-(id)username;
-(void)_clearOrphanedCalendarItemChangesOfType:(int)arg0 withContext:(id)arg1 goodCalendarIds:(id)arg2 ;
-(void)_clearOrphanedChangesWithChangesCall:(*unk)arg0 entityType:(int)arg1 withContext:(id)arg2 ;
-(void)_clearOrphanedChangesWithContext:(id)arg0 ;
-(void)_collectMoveActions;
-(void)_foundDuplicateCalendar:(id)arg0 ofCalendar:(id)arg1 ;
-(void)_foundDuplicateCalendars:(int)arg0 ;
-(void)_logDuplicateCalendarDetails:(*void)arg0 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelSearchQuery:(id)arg0 ;
-(void)_reallyPerformSearchQuery:(id)arg0 ;
-(void)_setParentAccount:(id)arg0 ;
-(void)_setSpinning:(BOOL)arg0 ;
-(void)_syncEndedWithError:(id)arg0 ;
-(void)_syncStarted;
-(void)_updateCalendarStore:(BOOL)arg0 ;
-(void)addCalendar:(id)arg0 ;
-(void)addPrincipal:(id)arg0 ;
-(void)addToCoreDAVLoggingDelegates;
-(void)cancelRefreshWithCompletion:(id)arg0 ;
-(void)coreDAVLogTransmittedDataPartial:(id)arg0 ;
-(void)coreDAVTransmittedDataFinished;
-(void)dealloc;
-(void)discoverInitialPropertiesWithConsumer:(id)arg0 ;
-(void)discoveryTask:(id)arg0 gotAccountInfo:(id)arg1 error:(id)arg2 ;
-(void)dropPowerAssertions;
-(void)ingestBackingAccountInfoProperties;
-(void)noteHomeSetOnDifferentHost:(id)arg0 ;
-(void)performDiscoveryWithHostname:(id)arg0 username:(id)arg1 consumer:(id)arg2 ;
-(void)reattainPowerAssertions;
-(void)refreshActor:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)refreshWithContext:(id)arg0 ;
-(void)releasePowerAssertion;
-(void)reloadCalendars;
-(void)removeCalendar:(id)arg0 ;
-(void)removeCalendarWithURL:(id)arg0 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)removePrincipal:(id)arg0 ;
-(void)retainPowerAssertion;
-(void)setAccountDescription:(id)arg0 ;
-(void)setDelegatePrincipalPath:(id)arg0 ;
-(void)setIsDelegateAccount:(BOOL)arg0 ;
-(void)setPrincipalPath:(id)arg0 ;
-(void)setPrincipalURL:(id)arg0 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)updateDelegates;


@end


#endif