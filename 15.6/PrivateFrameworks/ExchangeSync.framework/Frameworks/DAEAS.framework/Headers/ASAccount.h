// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASACCOUNT_H
#define ASACCOUNT_H

@class ESAccount, NSMutableSet, NSLock, NSError, NSString;
@protocol DAValidityCheckConsumer, ASSettingsTaskDelegate;


#import "ASFolderHierarchy.h"
#import "ASProtocol.h"
#import "ASTaskManager.h"

@interface ASAccount : ESAccount <DAValidityCheckConsumer, ASSettingsTaskDelegate>

 {
    ASFolderHierarchy *_folderHierarchy;
    ASProtocol *_protocol;
    NSMutableSet *_searchTaskSet;
    NSMutableSet *_autodiscoveryTasks;
    NSLock *_autodiscoverTaskLock;
    NSError *_autodiscovery401Error;
    BOOL _useHTTPForTesting;
    BOOL _useLocalhostForAutodiscoveryTesting;
    BOOL _oneAutodiscoverAtATime;
    BOOL _isValidating;
}


@property (nonatomic, setter=setASAccountVersion:) int asAccountVersion; // ivar: _asAccountVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) int mailNumberOfPastDaysToSync;
@property (readonly, nonatomic) int mailNumberOfPastDaysToSyncUpperLimit;
@property (nonatomic) BOOL reminderAccountMissing; // ivar: _reminderAccountMissing
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASTaskManager *taskManager;


+(void)cleanUpFilesForAccountWithId:(id)arg0 ;
-(*void)_copyABAccount:(BOOL)arg0 ;
-(*void)_copyDefaultExchangeEventsCalendar:(BOOL)arg0 ;
-(*void)_copyExchangeCalendarStore:(BOOL)arg0 ;
-(BOOL)_generateAutodiscoverURLsForEmailAddress:(id)arg0 explicitUsername:(id)arg1 withConsumer:(id)arg2 ;
-(BOOL)_managedConfigurationDisablesNotes;
-(BOOL)_reallySearchQueriesRunning;
-(BOOL)_shouldEditNotesSupportOnProtocolChange;
-(BOOL)_shouldSaveLastKnownProtocolVersion;
-(BOOL)_submitAutoDV2TaskForEmailAddress:(id)arg0 withConsumer:(id)arg1 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg0 ;
-(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg0 ;
-(BOOL)autodiscoverOAuthAccountWithConsumer:(id)arg0 ;
-(BOOL)clearFolderIdsForPersistentPushWithClientID:(id)arg0 ;
-(BOOL)enabledForDADataclass:(NSInteger)arg0 ;
-(BOOL)folderItemsSyncTask:(id)arg0 handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6 ;
-(BOOL)folderItemsSyncTask:(id)arg0 hasPartialAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 addedResponse:(id)arg4 modifiedResponse:(id)arg5 removedResponse:(id)arg6 fetchedResponse:(id)arg7 moreAvailable:(BOOL)arg8 ;
-(BOOL)isActiveSyncAccount;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)isGoogleAccount;
-(BOOL)isHotmailAccount;
-(BOOL)isUnicodeGeneralCategoryLetterOther:(unsigned short)arg0 ;
-(BOOL)itemOperationsTask:(id)arg0 handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6 ;
-(BOOL)itemOperationsTask:(id)arg0 hasPartialResponses:(id)arg1 ;
-(BOOL)setFolderIdsForPersistentPushAdded:(id)arg0 deleted:(id)arg1 clientID:(id)arg2 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(id)arg1 foldersTag:(id)arg2 ;
-(BOOL)shouldFixOnDiskDeviceId;
-(BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
-(BOOL)syncDefaultFoldersOnly;
-(BOOL)upgradeAccount;
-(id)_defaultMailFolderWithDefaultType:(int)arg0 fallbackType:(int)arg1 fallbackName:(id)arg2 ;
-(id)_easEndPointFQDNFromURL:(id)arg0 ;
-(id)_newPolicyManager;
-(id)_visibleASFolders;
-(id)addressBookConstraintsPath;
-(id)asFolderHierarchyTaskManager:(id)arg0 ;
-(id)asFolderWithId:(id)arg0 ;
-(id)calendarConstraintsPath;
-(id)changeTrackingID;
-(id)contactsFolders;
-(id)defaultContactsFolder;
-(id)defaultContainerIdentifierForDADataclass:(NSInteger)arg0 ;
-(id)defaultEventsFolder;
-(id)defaultNotesFolder;
-(id)defaultToDosFolder;
-(id)deletedItemsFolder;
-(id)domainOnly;
-(id)draftsFolder;
-(id)emailAddresses;
-(id)encryptionIdentityPersistentReference;
-(id)eventsFolders;
-(id)existingTaskManager;
-(id)folderHierarchy;
-(id)folderIdsForPersistentPush;
-(id)folderIdsForPersistentPushForClientID:(id)arg0 ;
-(id)folderIdsForPersistentPushForDataclasses:(NSInteger)arg0 clientID:(id)arg1 ;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(NSInteger)arg0 ;
-(id)folderWithId:(id)arg0 ;
-(id)foldersTag;
-(id)inboxFolder;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)lastKnownProtocolVersion;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)notesFolders;
-(id)onBehalfOfBundleIdentifier;
-(id)performCalendarDirectorySearchForTerms:(id)arg0 recordTypes:(id)arg1 resultLimit:(NSUInteger)arg2 consumer:(id)arg3 ;
-(id)policyManager;
-(id)protocol;
-(id)protocolVersion;
-(id)savedFolderPathsThatClientsCareAbout;
-(id)sentItemsFolder;
-(id)signingIdentityPersistentReference;
-(id)stateString;
-(id)toDosFolders;
-(id)usernameWithoutDomain;
-(id)visibleFolders;
-(int)sendMessageWithRFC822Data:(id)arg0 messageID:(id)arg1 outgoingMessageType:(int)arg2 originalMessageFolderID:(id)arg3 originalMessageItemID:(id)arg4 originalMessageLongID:(id)arg5 originalAccountID:(id)arg6 useSmartTasksIfPossible:(BOOL)arg7 sourceApplicationBundleIdentifier:(id)arg8 consumer:(id)arg9 context:(id)arg10 ;
-(int)sendSmartMessageWithRFC822Data:(id)arg0 messageID:(id)arg1 outgoingMessageType:(int)arg2 originalMessageFolderID:(id)arg3 originalMessageItemID:(id)arg4 originalMessageLongID:(id)arg5 originalAccountID:(id)arg6 replaceOriginalMime:(BOOL)arg7 sourceApplicationBundleIdentifier:(id)arg8 consumer:(id)arg9 context:(id)arg10 ;
-(int)sniffableTypeForFolder:(id)arg0 ;
-(int)supportsConversations;
-(int)supportsDraftFolderSync;
-(int)supportsEmailFlagging;
-(int)supportsMailboxSearch;
-(int)supportsSmartForwardReply;
-(int)supportsUniqueServerId;
-(void)_explodeEmailAddress:(id)arg0 outUsername:(*id)arg1 outEmailAddress:(*id)arg2 ;
-(void)_fillOutActionsArray:(id)arg0 responseArray:(id)arg1 withTask:(id)arg2 added:(id)arg3 removed:(id)arg4 modified:(id)arg5 preserved:(id)arg6 addedResponse:(id)arg7 modifiedResponse:(id)arg8 removedResponse:(id)arg9 fetchedResponse:(id)arg10 ;
-(void)_getContextElementsForItemChangeType:(NSUInteger)arg0 dataclass:(NSInteger)arg1 nativeContext:(id)arg2 outContext:(*id)arg3 outServerId:(*id)arg4 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelPendingSearchQuery:(id)arg0 ;
-(void)_reallyCancelSearchQuery:(id)arg0 ;
-(void)_reallyPerformSearchQuery:(id)arg0 ;
-(void)_removeInvitationsForMailboxFolderID:(id)arg0 ;
-(void)_silentlyTearDownAutodiscoveryTasks;
-(void)account:(id)arg0 isValid:(BOOL)arg1 validationError:(id)arg2 ;
-(void)accountDidUpdateProtocolVersion;
-(void)applyNewAccountProperties:(id)arg0 saveIfDifferent:(BOOL)arg1 ;
-(void)autodiscoverTask:(id)arg0 completedWithStatus:(NSInteger)arg1 accountInfo:(id)arg2 shouldRetryWithEmail:(id)arg3 error:(id)arg4 ;
-(void)autodiscoverV2Task:(id)arg0 completedWithStatus:(NSInteger)arg1 authorizationURI:(id)arg2 easEndPoint:(id)arg3 error:(id)arg4 ;
-(void)blowAwayFolderCache;
-(void)cancelCalendarDirectorySearchWithID:(id)arg0 ;
-(void)cancelTaskWithID:(int)arg0 ;
-(void)cleanupAccountFiles;
-(void)dealloc;
-(void)discoverInitialPropertiesWithConsumer:(id)arg0 ;
-(void)fetchAttachmentTask:(id)arg0 completedWithStatus:(NSInteger)arg1 dataWasBase64:(BOOL)arg2 error:(id)arg3 ;
-(void)fetchAttachmentTask:(id)arg0 receivedData:(id)arg1 ofContentType:(id)arg2 ;
-(void)folderItemsSyncTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 newSyncKey:(id)arg3 added:(id)arg4 removed:(id)arg5 modified:(id)arg6 addedResponse:(id)arg7 modifiedResponse:(id)arg8 removedResponse:(id)arg9 fetchedResponse:(id)arg10 ;
-(void)getOptionsTask:(id)arg0 completedWithStatus:(NSInteger)arg1 supportedCommands:(id)arg2 supportedVersions:(id)arg3 error:(id)arg4 ;
-(void)itemOperationsTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 responses:(id)arg3 ;
-(void)moveItemsTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 movedItems:(id)arg3 ;
-(void)performSearchQuery:(id)arg0 ;
-(void)renewCredentialsWithHandler:(id)arg0 ;
-(void)resetAccountID;
-(void)searchTask:(id)arg0 finishedWithError:(id)arg1 ;
-(void)searchTask:(id)arg0 returnedResults:(id)arg1 ;
-(void)searchTask:(id)arg0 returnedTotalCount:(id)arg1 ;
-(void)sendMailTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 forDADataclass:(NSInteger)arg1 ;
-(void)setEncryptionIdentityPersistentReference:(id)arg0 ;
-(void)setLastKnownProtocolVersion:(id)arg0 ;
-(void)setLastKnownProtocolVersion:(id)arg0 save:(BOOL)arg1 ;
-(void)setOneAutodiscoverAtATime:(BOOL)arg0 ;
-(void)setPrimarySMTPAddress:(id)arg0 emailAddresses:(id)arg1 ;
-(void)setProtocolVersion:(id)arg0 ;
-(void)setSavedFolderPathsThatClientsCareAbout:(id)arg0 ;
-(void)setSigningIdentityPersistentReference:(id)arg0 ;
-(void)setUseHTTPForTesting:(BOOL)arg0 ;
-(void)setUseLocalhostForAutodiscoveryTesting:(BOOL)arg0 ;
-(void)settingsTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 response:(id)arg3 ;
-(void)upgradeWithProtocolVersion:(id)arg0 ;


@end


#endif