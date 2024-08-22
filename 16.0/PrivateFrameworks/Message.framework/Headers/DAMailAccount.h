// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAMAILACCOUNT_H
#define DAMAILACCOUNT_H

@class DAAccount, NSString, NSArray, NSMutableDictionary, NSLock, NSSet;
@protocol ECLocalActionReplayerDelegate, ASAccountActorMessages;


#import "MailAccount.h"
#import "MFDAMailbox.h"
#import "MFMailboxUid.h"

@interface DAMailAccount : MailAccount <ECLocalActionReplayerDelegate>

 {
    NSObject<ASAccountActorMessages> *_accountConduit;
    DAAccount *_daAccount;
    BOOL _isNetworkReachable;
    NSString *_cachedAccountID;
    NSString *_cachedAccountPersistentUUID;
    NSString *_cachedDisplayName;
    NSString *_cachedEmailAddress;
    NSArray *_cachedEmailAddresses;
    NSString *_cachedIconString;
    BOOL _cachedIsActive;
    BOOL _cachedIsHotmailAccount;
    BOOL _cachedCalendarEnabled;
    BOOL _cachedPerMessageEncryptionEnabled;
    BOOL _cachedSecureMIMEShouldSign;
    BOOL _cachedSecureMIMEShouldEncrypt;
    BOOL _cachedRestrictMessageTransfersToOtherAccounts;
    BOOL _cachedRestrictSendingFromExternalProcesses;
    BOOL _cachedRestrictSyncingRecents;
    BOOL _cachedIsManaged;
    BOOL _cachedSupportsMailDrop;
    BOOL _cachedArchiveByDefault;
    BOOL _cachedSourceIsManaged;
    BOOL _cachedStoreDraftsOnServer;
    NSString *_cachedInboxFolderID;
    NSString *_cachedSentMessagesFolderID;
    NSString *_cachedTrashFolderID;
    NSString *_cachedJunkFolderID;
    NSString *_cachedDraftsFolderID;
    MFDAMailbox *_temporaryInbox;
    BOOL _loadedInitialMailboxList;
    BOOL _receivedInitialMailboxUpdate;
    BOOL _doneInitialInboxCheck;
    BOOL _observingPushedFoldersPrefsChanged;
    int _supportsServerSearch;
    int _supportsMessageFlagging;
    int _supportsConversations;
    int _supportsServerDrafts;
    int _supportsUniqueServerId;
    unsigned int _daysToSync;
    NSMutableDictionary *_requestQueuesByFolderID;
    NSLock *_watchedFolderIdsLock;
    NSSet *_watchedFolderIds;
    NSString *_folderTag;
    os_unfair_lock_s _supportsUniqueServerIdLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) MFMailboxUid *virtualAllSearchMailbox; // ivar: _virtualAllSearchMailbox


+(Class)_accountConduitClass;
+(id)_URLScheme;
+(id)accountIDForDirectoryName:(id)arg0 isAccountDirectory:(*BOOL)arg1 ;
+(id)accountTypeString;
+(id)csAccountTypeString;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)legacyPathForAccountIdentifier:(id)arg0 withHostname:(id)arg1 username:(id)arg2 ;
-(BOOL)_deleteMailbox:(id)arg0 reflectToServer:(BOOL)arg1 ;
-(BOOL)_isUnitTesting;
-(BOOL)addRequest:(id)arg0 consumer:(id)arg1 mailbox:(id)arg2 ;
-(BOOL)addRequests:(id)arg0 mailbox:(id)arg1 ;
-(BOOL)addRequests:(id)arg0 mailbox:(id)arg1 combine:(BOOL)arg2 ;
-(BOOL)canArchiveSentMessages;
-(BOOL)canGoOffline;
-(BOOL)canReceiveNewMailNotifications;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)finishedInitialMailboxListLoad;
-(BOOL)isActive;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isMailboxLocalForType:(int)arg0 ;
-(BOOL)isManaged;
-(BOOL)isRunningInDisallowedBundle;
-(BOOL)moveSupported;
-(BOOL)moveSupportedFromMailboxURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)mustArchiveSentMessages;
-(BOOL)newMailboxNameIsAcceptable:(id)arg0 reasonForFailure:(*id)arg1 ;
-(BOOL)perMessageEncryptionEnabledForAddress:(id)arg0 ;
-(BOOL)performRequests:(id)arg0 mailbox:(id)arg1 ;
-(BOOL)processRequests:(id)arg0 mailbox:(id)arg1 ;
-(BOOL)reconstituteOrphanedMeetingInMessage:(id)arg0 ;
-(BOOL)renameMailbox:(id)arg0 newName:(id)arg1 parent:(id)arg2 ;
-(BOOL)restrictedFromSendingExternally;
-(BOOL)restrictedFromSyncingRecents;
-(BOOL)restrictedFromTransferingMessagesToOtherAccounts;
-(BOOL)shouldArchiveByDefault;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(BOOL)shouldFetchAgainWithError:(id)arg0 foregroundRequest:(BOOL)arg1 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)sourceIsManaged;
-(BOOL)supportsMailDrop;
-(BOOL)supportsMailboxEditing;
-(BOOL)supportsMessageFlagging;
-(BOOL)supportsRemoteAppend;
-(BOOL)supportsServerDrafts;
-(BOOL)supportsThreadOperations;
-(BOOL)supportsUniqueServerId;
-(BOOL)supportsUserPushedMailboxes;
-(Class)storeClass;
-(id)URLStringFromLegacyURLString:(id)arg0 ;
-(id)_URLScheme;
-(id)_copyMailboxUidWithParent:(id)arg0 name:(id)arg1 attributes:(NSUInteger)arg2 existingMailboxUid:(id)arg3 dictionary:(id)arg4 ;
-(id)_copyMailboxWithParent:(id)arg0 name:(id)arg1 attributes:(NSUInteger)arg2 dictionary:(id)arg3 ;
-(id)_folderIdsForMailboxUids:(id)arg0 ;
-(id)_inboxFolderID;
-(id)_infoForMatchingURL:(id)arg0 ;
-(id)_newMailboxWithParent:(id)arg0 name:(id)arg1 attributes:(unsigned int)arg2 dictionary:(id)arg3 withCreationOption:(int)arg4 ;
-(id)_relativePathForType:(int)arg0 ;
-(id)_relativePathSpecialMailboxUidWithType:(int)arg0 create:(BOOL)arg1 ;
-(id)_remoteIDsForFlagChangeAction:(id)arg0 ;
-(id)_specialMailboxUidWithType:(int)arg0 create:(BOOL)arg1 ;
-(id)_updateWatchedFolderIdsAndNotify:(BOOL)arg0 ;
-(id)_watchedFolderIds;
-(id)accountConduit;
-(id)accountForRenewingCredentials;
-(id)accountPropertyForKey:(id)arg0 ;
-(id)allMailMailboxUid;
-(id)allMailboxUids;
-(id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg0 error:(*id)arg1 ;
-(id)copyDataForRemoteEncryptionCertificatesForAddresses:(id)arg0 errors:(*id)arg1 ;
-(id)deliveryAccount;
-(id)displayName;
-(id)encryptionIdentityPersistentReferenceForAddress:(id)arg0 ;
-(id)fetchLimits;
-(id)folderIDForMailbox:(id)arg0 ;
-(id)hostname;
-(id)iconString;
-(id)identifier;
-(id)initWithDAAccount:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)mailboxForFolderID:(id)arg0 ;
-(id)mailboxPathExtension;
-(id)mailboxUidForInfo:(id)arg0 ;
-(id)meetingStorePersistentID;
-(id)messageDataForMessage:(id)arg0 ;
-(id)primaryMailboxUid;
-(id)pushedMailboxUids;
-(id)replayAction:(id)arg0 ;
-(id)signingIdentityPersistentReferenceForAddress:(id)arg0 ;
-(id)statisticsKind;
-(id)syncAnchorForFolderID:(id)arg0 mailbox:(*id)arg1 ;
-(id)syncAnchorForMailbox:(id)arg0 ;
-(id)unactionableInvitationICSRepresentationInMessage:(id)arg0 summary:(*id)arg1 ;
-(id)uniqueID;
-(id)uniqueIdForPersistentConnection;
-(id)uniqueServerIdForMessage:(id)arg0 ;
-(id)unsupportedHandoffTypes;
-(id)username;
-(int)emptyFrequencyForMailboxType:(int)arg0 ;
-(int)secureCompositionEncryptionPolicyForAddress:(id)arg0 ;
-(int)secureCompositionSigningPolicyForAddress:(id)arg0 ;
-(int)supportsServerSearch;
-(unsigned int)daysToSync;
-(void)_ensureWeHaveLoadedInitialMailboxList;
-(void)_loadChildrenForParent:(id)arg0 fromMap:(id)arg1 intoArray:(id)arg2 replacingInbox:(id)arg3 withID:(id)arg4 ;
-(void)_performFolderChange:(id)arg0 completion:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_synchronouslyLoadListingForParent:(id)arg0 ;
-(void)accountHierarchyChanged:(id)arg0 ;
-(void)cancelSearchQuery:(id)arg0 ;
-(void)changePushedMailboxUidsAdded:(id)arg0 deleted:(id)arg1 ;
-(void)dealloc;
-(void)fetchMailboxList;
-(void)foldersContentsChanged:(id)arg0 ;
-(void)invalidate;
-(void)performSearchQuery:(id)arg0 ;
-(void)pushedFoldersPrefsChanged:(id)arg0 ;
-(void)resetSpecialMailboxes;
-(void)setDAAccount:(id)arg0 ;
-(void)setEncryptionIdentityPersistentReference:(id)arg0 forAddress:(id)arg1 ;
-(void)setSigningIdentityPersistentReference:(id)arg0 forAddress:(id)arg1 ;
-(void)setSyncAnchor:(id)arg0 forFolderID:(id)arg1 mailbox:(*id)arg2 ;
-(void)startListeningForNotifications;
-(void)stopListeningForNotifications;


@end


#endif