// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOBILECALDAVACCOUNT_H
#define MOBILECALDAVACCOUNT_H

@class DAAccount, NSMutableSet, NSString, NSSet, CoreDAVDiscoveryTaskGroup, NSURL, DACoreDAVLogger, NSDictionary, NSMutableDictionary, CalDAVPrincipalSearchPropertySet, CalDAVServerVersion, DACoreDAVTaskManager, NSTimeZone, NSArray;


#import "MobileCalDAVAccountRefreshActor.h"
#import "MobileCalDAVPrincipal.h"
#import "CalDAVRefreshContext.h"

@interface MobileCalDAVAccount : DAAccount {
    int _wasMigrated;
    NSMutableSet *_mMovedItemURLStrings;
    NSString *_usernameForDiscovery;
    NSString *_hostForDiscovery;
}


@property (retain, nonatomic) MobileCalDAVAccountRefreshActor *actor; // ivar: _actor
@property (copy, nonatomic) NSString *calendarHomeSyncToken;
@property (readonly, nonatomic) NSSet *calendars;
@property (retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup; // ivar: _checkValidityTaskGroup
@property (retain, nonatomic) NSURL *collectionSetURL;
@property (retain, nonatomic) DACoreDAVLogger *coreDAVLogger; // ivar: _coreDAVLogger
@property (retain, nonatomic) NSDictionary *delegateUserInfos; // ivar: _delegateUserInfos
@property (nonatomic) BOOL isRefreshing; // ivar: _isRefreshing
@property (nonatomic) BOOL isSpinning; // ivar: _isSpinning
@property (nonatomic) BOOL isWritable;
@property (readonly, nonatomic) NSDictionary *itemIDsToMoveActions;
@property (retain, nonatomic) NSMutableSet *mCalendars; // ivar: _calendars
@property (retain, nonatomic) NSMutableDictionary *mItemIDsToMoveActions; // ivar: _itemIDsToMoveActions
@property (retain, nonatomic) NSMutableSet *mMovedItemURLStrings; // ivar: _movedItemURLStrings
@property (retain, nonatomic) NSMutableDictionary *mPrincipals; // ivar: _principals
@property (retain, nonatomic) MobileCalDAVPrincipal *mainPrincipal; // ivar: _mainPrincipal
@property (readonly, nonatomic) NSSet *movedItemURLStrings;
@property (nonatomic) BOOL needsAccountPropertyRefresh; // ivar: _needsAccountPropertyRefresh
@property (nonatomic) int overriddenPort;
@property (retain, nonatomic) NSString *overriddenScheme;
@property (retain, nonatomic) NSString *overriddenServer;
@property (nonatomic) int preferredEventDaysToSync; // ivar: _preferredEventDaysToSync
@property (nonatomic) int preferredToDoDaysToSync; // ivar: _preferredToDoDaysToSync
@property (readonly, nonatomic) NSDictionary *principals;
@property (retain, nonatomic) CalDAVRefreshContext *refreshContext; // ivar: _refreshContext
@property (retain, nonatomic) CalDAVPrincipalSearchPropertySet *searchPropertySet; // ivar: _searchPropertySet
@property (nonatomic) BOOL searchQueriesShouldCancel; // ivar: _searchQueriesShouldCancel
@property (retain, nonatomic) NSMutableSet *searchTaskSet; // ivar: _searchTaskSet
@property (readonly, nonatomic) NSURL *serverBaseURL;
@property (retain, nonatomic) CalDAVServerVersion *serverVersion; // ivar: _serverVersion
@property (readonly, nonatomic) BOOL shouldFilterEventSyncTimeRange;
@property (readonly, nonatomic) BOOL shouldFilterSyncTimeRangeForInbox;
@property (readonly, nonatomic) BOOL shouldUseCalendarHomeSyncReport;
@property (retain, nonatomic) NSDictionary *subscribedCalendars;
@property (readonly, nonatomic) BOOL supportsEvents;
@property (readonly, nonatomic) BOOL supportsReminders;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (readonly, nonatomic) NSTimeZone *viewedTimeZone;
@property (nonatomic) BOOL wasMigrated;
@property (readonly, nonatomic) NSArray *wellKnownPaths;


-(BOOL)_reallySearchQueriesRunning;
-(BOOL)_rem_updateAccountProperties;
-(BOOL)_saveModifiedPrincipalsOnBackingAccount;
-(BOOL)_saveModifiedSubscribedCalendarsOnBackingAccount;
-(BOOL)_updateCalendarStoreNoDBOpen:(BOOL)arg0 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg0 ;
-(BOOL)addressIsAccountOwner:(id)arg0 ;
-(BOOL)isCalDAVAccount;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)retryDiscoveryTask:(id)arg0 ;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(BOOL)shouldLogTransmittedData;
-(BOOL)upgradeAccount;
-(NSInteger)coreDAVLogLevel;
-(NSInteger)coreDAVOutputLevel;
-(id)_calendarConstraintsPath;
-(id)_calendarConstraintsResource;
-(id)_powerAssertionContext;
-(id)_powerAssertionGroupIdentifier;
-(id)emailAddresses;
-(id)host;
-(id)init;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(id)principalPath;
-(id)spinnerIdentifiers;
-(id)username;
-(void)_collectMoveActions;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelSearchQuery:(id)arg0 ;
-(void)_reallyPerformSearchQuery:(id)arg0 ;
-(void)_rem_createAccountStore_whichReallyShouldNotHappen;
-(void)_setSpinning:(BOOL)arg0 ;
-(void)_syncEndedWithError:(id)arg0 ;
-(void)_syncStarted;
-(void)_updateCalendarStore:(BOOL)arg0 ;
-(void)addCalendar:(id)arg0 ;
-(void)addPrincipal:(id)arg0 ;
-(void)addToCoreDAVLoggingDelegates;
-(void)cancelRefreshWithCompletion:(id)arg0 ;
-(void)coreDAVLogDiagnosticMessage:(id)arg0 atLevel:(NSInteger)arg1 ;
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
-(void)resetStatusReport;
-(void)retainPowerAssertion;
-(void)setAccountDescription:(id)arg0 ;
-(void)setPrincipalPath:(id)arg0 ;
-(void)setPrincipalURL:(id)arg0 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)updateDelegates;


@end


#endif