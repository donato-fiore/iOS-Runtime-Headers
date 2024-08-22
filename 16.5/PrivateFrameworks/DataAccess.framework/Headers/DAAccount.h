// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAACCOUNT_H
#define DAACCOUNT_H

@class NSMapTable, NSString, NSArray, ACAccount, NSMutableDictionary, NSData, NSDate, NSMutableArray, NSURL, NSSet, DAStatusReport;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DATaskManager.h"
#import "DATrustHandler.h"

@interface DAAccount : NSObject {
    BOOL _hasInitted;
    NSMapTable *_consumers;
    *__CFURLStorageSession _storageSession;
    NSString *_clientToken;
    NSObject<OS_xpc_object> *_xpcActivity;
    int _continueCount;
    BOOL _isFetchingAutomatically;
}


@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSArray *appIdsForPasswordPrompt; // ivar: _appIdsForPasswordPrompt
@property (readonly, nonatomic) ACAccount *backingAccountInfo; // ivar: _backingAccountInfo
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (readonly, copy, nonatomic) NSString *clientToken;
@property (nonatomic, setter=setDAAccountVersion:) int daAccountVersion;
@property (retain, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass; // ivar: _dataclassPropertyURLsByDataclass
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSInteger enabledDataclassesBitmask;
@property (retain, nonatomic) NSData *encryptionIdentityPersistentReference;
@property (copy, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *hostWithoutPath;
@property (readonly, copy, nonatomic) NSData *identityPersist;
@property (readonly, nonatomic) BOOL isChildAccount;
@property (nonatomic) BOOL isValidating; // ivar: _isValidating
@property (readonly, nonatomic) int keychainAccessibilityType;
@property (retain, nonatomic) NSDate *lastQueryStartedTime; // ivar: _lastQueryStartedTime
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSMutableArray *pendingQueries; // ivar: _pendingQueries
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingQueryQueue; // ivar: _pendingQueryQueue
@property (readonly, copy, nonatomic) NSString *persistentUUID;
@property (nonatomic) NSInteger port;
@property (readonly, nonatomic) NSString *preferredAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSURL *principalURL;
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly, nonatomic) NSString *scheduleIdentifier;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSSet *serverComplianceClasses;
@property (readonly, nonatomic) NSString *serverRoot;
@property (readonly, nonatomic) BOOL shouldAutodiscoverAccountProperties;
@property (nonatomic) BOOL shouldDoInitialAutodiscovery;
@property (readonly, nonatomic) BOOL shouldFailAllTasks; // ivar: _shouldFailAllTasks
@property (nonatomic) BOOL shouldUseOpportunisticSockets; // ivar: _shouldUseOpportunisticSockets
@property (retain, nonatomic) NSData *signingIdentityPersistentReference;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (retain, nonatomic) DAStatusReport *statusReport; // ivar: _statusReport
@property (readonly, nonatomic) DATaskManager *taskManager; // ivar: _taskManager
@property (retain, nonatomic) DATrustHandler *trustHandler; // ivar: _trustHandler
@property (nonatomic) BOOL useSSL;
@property (copy, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *userAgentHeader;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL wasUserInitiated; // ivar: _wasUserInitiated


+(BOOL)shouldCreateAccountForBackingAccountInfo:(id)arg0 ;
+(id)_leafAccountTypes;
+(id)_leafAccountTypes;
+(id)daAccountSubclassWithBackingAccountInfo:(id)arg0 ;
+(id)oneshotListOfAccountIDs;
+(void)reacquireClientRestrictions:(id)arg0 ;
-(BOOL)_isIdentityManagedByProfile;
-(BOOL)_reallySearchQueriesRunning;
-(BOOL)accountBoolPropertyForKey:(id)arg0 ;
-(BOOL)accountContainsEmailAddress:(id)arg0 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg0 ;
-(BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg0 ;
-(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg0 ;
-(BOOL)canSaveWithAccountProvider:(id)arg0 ;
-(BOOL)enabledForAnyDADataclasses:(NSInteger)arg0 ;
-(BOOL)enabledForDADataclass:(NSInteger)arg0 ;
-(BOOL)getFetchingAutomaticallyState;
-(BOOL)handleCertificateError:(id)arg0 ;
-(BOOL)handleTrustChallenge:(id)arg0 ;
-(BOOL)handleTrustChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)hasXpcActivity;
-(BOOL)isActiveSyncAccount;
-(BOOL)isCalDAVAccount;
-(BOOL)isCalDAVChildAccount;
-(BOOL)isCardDAVAccount;
-(BOOL)isDelegateAccount;
-(BOOL)isDisabled;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)isGoogleAccount;
-(BOOL)isHotmailAccount;
-(BOOL)isLDAPAccount;
-(BOOL)isSubscribedCalendarAccount;
-(BOOL)monitorFolderWithID:(id)arg0 ;
-(BOOL)monitorFoldersWithIDs:(id)arg0 ;
-(BOOL)preflightSaveWithAccountProvider:(id)arg0 ;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg0 inFolderWithId:(id)arg1 ;
-(BOOL)resetCertWarnings;
-(BOOL)saveAccountProperties;
-(BOOL)saveAccountPropertiesWithError:(*id)arg0 ;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(BOOL)searchQueriesRunning;
-(BOOL)sendEmailsForCalEvents:(id)arg0 consumer:(id)arg1 ;
-(BOOL)shouldCancelTaskDueToOnPowerFetchMode;
-(BOOL)shouldRemoveDBSyncDataOnAccountChange;
-(BOOL)upgradeAccount;
-(BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg0 ;
-(NSInteger)portFromDataclassPropertiesForDataclass:(id)arg0 ;
-(id)accountPropertyForKey:(id)arg0 ;
-(id)accountTypeIdentifier;
-(id)accountsProviderWithDBHelper:(id)arg0 ;
-(id)addUsernameToURL:(id)arg0 ;
-(id)additionalHeaderValues;
-(id)beginDownloadingAttachmentWithUUID:(id)arg0 consumer:(id)arg1 ;
-(id)consumerForTask:(id)arg0 ;
-(id)contactsFolders;
-(id)containerProviderWithDBHelper:(id)arg0 ;
-(id)customConnectionProperties;
-(id)dataclassProperties;
-(id)defaultContactsFolder;
-(id)defaultContainerIdentifierForDADataclass:(NSInteger)arg0 ;
-(id)defaultEventsFolder;
-(id)defaultNotesFolder;
-(id)defaultToDosFolder;
-(id)deletedItemsFolder;
-(id)description;
-(id)displayName;
-(id)domainOnly;
-(id)draftsFolder;
-(id)eventsFolders;
-(id)exceptionsDict;
-(id)fetchOfficeHoursWithConsumer:(id)arg0 error:(*id)arg1 ;
-(id)getAppleIDSession;
-(id)getPendingQueryQueue;
-(id)hostFromDataclassPropertiesForDataclass:(id)arg0 ;
-(id)inboxFolder;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)notesFolders;
-(id)oauth2Token;
-(id)oauthInfoProvider;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)onBehalfOfBundleIdentifier;
-(id)passwordWithExpected:(BOOL)arg0 ;
-(id)performCalendarDirectorySearchForTerms:(id)arg0 recordTypes:(id)arg1 resultLimit:(NSUInteger)arg2 consumer:(id)arg3 ;
-(id)protocolVersion;
-(id)redactedDescription;
-(id)reportShareRequestAsJunkForCalendar:(id)arg0 consumer:(id)arg1 ;
-(id)requestCalendarAvailabilityForStartDate:(id)arg0 endDate:(id)arg1 ignoredEventID:(id)arg2 addresses:(id)arg3 consumer:(id)arg4 ;
-(id)requestGrantedDelegatesListWithConsumer:(id)arg0 ;
-(id)respondToShareRequestForCalendar:(id)arg0 withResponse:(NSInteger)arg1 consumer:(id)arg2 ;
-(id)sentItemsFolder;
-(id)setOfficeHours:(id)arg0 withConsumer:(id)arg1 error:(*id)arg2 ;
-(id)spinnerIdentifiers;
-(id)stateString;
-(id)syncStoreIdentifier;
-(id)toDosFolders;
-(id)unactionableICSRepresentationForMetaData:(id)arg0 inFolderWithId:(id)arg1 outSummary:(*id)arg2 ;
-(id)updateGrantedDelegatePermission:(id)arg0 consumer:(id)arg1 ;
-(id)urlFromDataclassPropertiesForDataclass:(id)arg0 ;
-(int)accountIntPropertyForKey:(id)arg0 ;
-(int)toDosNumberOfPastDaysToSync;
-(struct __CFData *)exceptionsForDigest:(id)arg0 ;
-(struct __CFURLStorageSession *)copyStorageSession;
-(void)_dequeueQuery;
-(void)_handleSignificantPropertyChanges:(id)arg0 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelPendingSearchQuery:(id)arg0 ;
-(void)_reallyCancelSearchQuery:(id)arg0 ;
-(void)_reallyPerformSearchQuery:(id)arg0 ;
-(void)_refreshCredential;
-(void)_webLoginRequestedAtURL:(id)arg0 reasonString:(id)arg1 inQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)accountDidChangeFromOldAccountInfo:(id)arg0 ;
-(void)accountDidChangeWithChangeInfo:(id)arg0 ;
-(void)addToCoreDAVLoggingDelegates;
-(void)cancelAllSearchQueries;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg0 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg0 ;
-(void)cancelDownloadingInstance:(id)arg0 error:(id)arg1 ;
-(void)cancelGrantedDelegatesListRequestWithID:(id)arg0 ;
-(void)cancelOfficeHoursRequestWithID:(id)arg0 ;
-(void)cancelSearchQuery:(id)arg0 ;
-(void)cancelShareResponseInstance:(id)arg0 error:(id)arg1 ;
-(void)cancelUpdateGrantedDelegatePermissionRequestWithID:(id)arg0 ;
-(void)checkValidityOnAccountStore:(id)arg0 withConsumer:(id)arg1 ;
-(void)checkValidityOnAccountStore:(id)arg0 withConsumer:(id)arg1 inQueue:(id)arg2 ;
-(void)cleanupAccountFiles;
-(void)dealloc;
-(void)decrementXpcActivityContinueCount;
-(void)discoverInitialPropertiesWithConsumer:(id)arg0 ;
-(void)dropAssertionsAndRenewCredentialsInQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)handleValidationError:(id)arg0 completion:(id)arg1 ;
-(void)incrementXpcActivityContinueCount;
-(void)ingestBackingAccountInfoProperties;
-(void)performGroupExpansionForPrincipalPath:(id)arg0 consumer:(id)arg1 ;
-(void)performSearchQuery:(id)arg0 ;
-(void)performUsingAccountPersona:(id)arg0 ;
-(void)reload;
-(void)removeAccountPropertyForKey:(id)arg0 ;
-(void)removeClientCertificateData;
-(void)removeConsumerForTask:(id)arg0 ;
-(void)removeDBSyncDataForAccountChange:(id)arg0 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)removeXpcActivity;
-(void)resumeMonitoringFoldersWithIDs:(id)arg0 ;
-(void)retrieveOofSettingsForConsumer:(id)arg0 ;
-(void)saveFetchingAutomaticallyState:(BOOL)arg0 ;
-(void)saveXpcActivity:(id)arg0 ;
-(void)setAccountBoolProperty:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setAccountIntProperty:(int)arg0 forKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setConsumer:(id)arg0 forTask:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 forDADataclass:(NSInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 forDataclass:(id)arg1 ;
-(void)setExceptions:(struct __CFData *)arg0 forDigest:(id)arg1 ;
-(void)setIdentityCertificatePersistentID:(id)arg0 managedByProfile:(BOOL)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setToDosNumberOfPastDaysToSync:(int)arg0 ;
-(void)shutdown;
-(void)stopMonitoringFolderWithID:(id)arg0 ;
-(void)stopMonitoringFolders;
-(void)stopMonitoringFoldersWithIDs:(id)arg0 ;
-(void)suspendMonitoringFoldersWithIDs:(id)arg0 ;
-(void)synchronizeContactsFolder:(id)arg0 previousTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 previousTagIsSuspect:(BOOL)arg7 moreLocalChangesAvailable:(BOOL)arg8 consumer:(id)arg9 ;
-(void)synchronizeEventsFolder:(id)arg0 previousTag:(id)arg1 actions:(id)arg2 highestIdContext:(id)arg3 isInitialUberSync:(BOOL)arg4 isResyncAfterConnectionFailed:(BOOL)arg5 moreLocalChangesAvailable:(BOOL)arg6 consumer:(id)arg7 ;
-(void)synchronizeNotesFolder:(id)arg0 noteContext:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 changeSet:(id)arg4 notesToDeleteAfterSync:(id)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 moreLocalChangesAvailable:(BOOL)arg8 consumer:(id)arg9 ;
-(void)synchronizeToDosFolder:(id)arg0 previousTag:(id)arg1 actions:(id)arg2 highestIdContext:(id)arg3 isInitialUberSync:(BOOL)arg4 isResyncAfterConnectionFailed:(BOOL)arg5 moreLocalChangesAvailable:(BOOL)arg6 consumer:(id)arg7 ;
-(void)tearDown;
-(void)updateExistingAccountProperties;
-(void)updateOofSettingsWithParams:(id)arg0 consumer:(id)arg1 ;
-(void)webLoginRequestedAtURL:(id)arg0 reasonString:(id)arg1 inQueue:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif