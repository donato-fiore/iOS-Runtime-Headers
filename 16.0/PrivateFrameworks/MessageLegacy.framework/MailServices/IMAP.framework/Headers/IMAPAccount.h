// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAPACCOUNT_H
#define IMAPACCOUNT_H

@class MailAccount, NSString, NSRecursiveLock, NSMutableArray, NSArray, NSLock, NSNumber, NSSet, NSMutableDictionary;
@protocol MFIMAPConnectionDelegate, MFIMAPMailboxListFilter;


#import "MFIMAPOperationCache.h"

@interface IMAPAccount : MailAccount <MFIMAPConnectionDelegate, MFIMAPMailboxListFilter>

 {
    NSString *_separatorChar;
    NSString *_serverNamespace;
    *__CFArray _cachedConnections;
    *__CFArray _mailboxesToSynchronize;
    MFIMAPOperationCache *_offlineCache;
    NSUInteger _greatestInboxUid;
    CGFloat _timeLastFetchedMailboxList;
    NSRecursiveLock *_flagChangesLock;
    NSMutableArray *_recentFlagChanges;
    NSRecursiveLock *_connectionLock;
    int _nextConnectionTag;
    *void _packetContextAssertion;
    NSArray *_lockOrderingArray;
    unsigned int _readBufferSize;
    id *_offlineCacheFlushHandler;
    BOOL _fetchedMailboxList;
    BOOL _isOffline;
    NSArray *_lastKnownCapabilities;
    NSLock *_eSearchSupportedLock;
    NSNumber *_eSearchSupported;
    CGFloat _lastPushRegistration;
    NSString *_apsTopic;
    NSSet *_pushedMailboxUids;
    NSMutableDictionary *_pushRegisteredMailboxes;
    int _supportedPushServiceLevel;
    BOOL _observingPushedFoldersPrefsChanged;
    BOOL _mustRegisterForPushOnNextConnection;
    BOOL _didRequestPushRegistration;
    BOOL _listeningForDeviceTokenChanges;
    BOOL _didUpdateSeparatorAndNamespace;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(*void)legacyKeychainProtocol;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)csAccountTypeString;
+(id)saslProfileName;
+(unsigned int)defaultPortNumber;
+(unsigned int)defaultSecurePortNumber;
+(void)_deleteQueuedMailboxes:(id)arg0 ;
-(BOOL)_deleteMailbox:(id)arg0 ;
-(BOOL)_registerPushNotificationPrefix:(id)arg0 forMailboxNames:(id)arg1 ;
-(BOOL)_setChildren:(id)arg0 forMailboxUid:(id)arg1 ;
-(BOOL)allowsPartialDownloads;
-(BOOL)canAttemptPushRegistration;
-(BOOL)canFetch;
-(BOOL)canGoOffline;
-(BOOL)canMailboxBeDeleted:(id)arg0 ;
-(BOOL)canReceiveNewMailNotifications;
-(BOOL)compactWhenClosingMailboxes;
-(BOOL)connectAndAuthenticate:(id)arg0 ;
-(BOOL)connection:(id)arg0 shouldHandleUntaggedResponse:(id)arg1 forCommand:(struct ? *)arg2 ;
-(BOOL)deleteInPlaceForAllMailboxes;
-(BOOL)deleteInPlaceForMailbox:(id)arg0 ;
-(BOOL)getMailboxListWithConnection:(id)arg0 ;
-(BOOL)getMailboxListWithConnection:(id)arg0 statusDataItems:(id)arg1 statusEntriesByMailbox:(*id)arg2 ;
-(BOOL)hasPendingOfflineOperations;
-(BOOL)isMailboxLocalForType:(int)arg0 ;
-(BOOL)isOffline;
-(BOOL)isSpecialMailbox:(id)arg0 ;
-(BOOL)mustRegisterForPushOnNextConnection;
-(BOOL)needToSynchronizeMailboxCaches;
-(BOOL)newMailboxNameIsAcceptable:(id)arg0 reasonForFailure:(*id)arg1 ;
-(BOOL)renameMailbox:(id)arg0 newName:(id)arg1 parent:(id)arg2 ;
-(BOOL)requiresAuthentication;
-(BOOL)requiresDataForOfflineTransfersFromStore:(id)arg0 ;
-(BOOL)shouldExpungeMessagesOnDelete;
-(BOOL)shouldRegisterForPush;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)storeMailboxTypeOnServer:(int)arg0 ;
-(BOOL)supportsAppend;
-(BOOL)supportsMailboxEditing;
-(BOOL)supportsRemoteAppend;
-(BOOL)supportsUserPushedMailboxes;
-(BOOL)verifyESearchSupportWithBlock:(id)arg0 ;
-(BOOL)xListSupportedOnConnection:(id)arg0 ;
-(CGFloat)lastPushRegistration;
-(Class)connectionClass;
-(Class)storeClass;
-(NSUInteger)greatestInboxUid;
-(NSUInteger)minID;
-(NSUInteger)minUID;
-(id)_URLScheme;
-(id)_copyMailboxListForNames:(id)arg0 ;
-(id)_copyMailboxListPreferenceForKey:(id)arg0 ;
-(id)_copyMailboxUidWithParent:(id)arg0 name:(id)arg1 attributes:(unsigned int)arg2 existingMailboxUid:(id)arg3 dictionary:(id)arg4 ;
-(id)_copyPushedMailboxesForPrefix:(id)arg0 ;
-(id)_copyUserPushedMailboxes;
-(id)_dataForTemporaryUid:(unsigned int)arg0 ;
-(id)_externalMailboxUids;
-(id)_fileSystemServerPathPrefix;
-(id)_infoForMatchingURL:(id)arg0 ;
-(id)_listingForMailboxUid:(id)arg0 listAllChildren:(BOOL)arg1 ;
-(id)_listingForMailboxUid:(id)arg0 listAllChildren:(BOOL)arg1 onlySubscribed:(BOOL)arg2 ;
-(id)_listingForMailboxUid:(id)arg0 listAllChildren:(BOOL)arg1 onlySubscribed:(BOOL)arg2 statusDataItems:(id)arg3 withConnection:(id)arg4 statusEntriesByMailbox:(*id)arg5 ;
-(id)_mailboxPathPrefix;
-(id)_mailboxUidForName:(id)arg0 ;
-(id)_nameForMailboxUid:(id)arg0 ;
-(id)_newMailboxWithParent:(id)arg0 name:(id)arg1 attributes:(unsigned int)arg2 dictionary:(id)arg3 withCreationOption:(int)arg4 ;
-(id)_notesPrefix;
-(id)_notificationNameForMailbox:(id)arg0 withPrefix:(id)arg1 ;
-(id)_pathComponentForUidName:(id)arg0 ;
-(id)_specialMailboxUidWithType:(int)arg0 create:(BOOL)arg1 ;
-(id)_uidNameForPathComponent:(id)arg0 ;
-(id)allMailMailboxUid;
-(id)apsTopic;
-(id)certUIService;
-(id)clientToken;
-(id)connectionForStore:(id)arg0 delegate:(id)arg1 options:(int)arg2 ;
-(id)copyDiagnosticInformation;
-(id)errorForResponse:(id)arg0 ;
-(id)fetchLimits;
-(id)flagChangesForMailboxPath:(id)arg0 UID:(unsigned int)arg1 connectTime:(CGFloat)arg2 ;
-(id)flagChangesLock;
-(id)hostname;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)lastKnownCapabilities;
-(id)mailboxNamesForPushRegistration;
-(id)mailboxPathExtension;
-(id)mailboxUidForRelativePath:(id)arg0 create:(BOOL)arg1 ;
-(id)mailboxesRegisteredForPushByHash;
-(id)mfl_lockOrdering;
-(id)moveMessages:(id)arg0 fromMailbox:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 ;
-(id)nameForMailboxUid:(id)arg0 ;
-(id)notificationNamesForPrefix:(id)arg0 mailboxUids:(id)arg1 ;
-(id)offlineCache;
-(id)offlineCacheDirectoryPath;
-(id)offlineCacheIfExists;
-(id)offlineCacheIfOffline;
-(id)pushedMailboxUids;
-(id)registerPushNotificationPrefix:(id)arg0 forMailboxUids:(id)arg1 ;
-(id)secureServiceName;
-(id)separatorChar;
-(id)serverPathPrefix;
-(id)serverPathPrefixAccountValue;
-(id)serviceName;
-(id)specialUseAttributeForType:(int)arg0 ;
-(id)specialUseAttributesForMailbox:(id)arg0 ;
-(id)statisticsKind;
-(int)supportedPushServiceLevel;
-(unsigned int)minimumPartialDownloadSize;
-(unsigned int)readBufferSize;
-(void)_apsDeviceTokenChanged:(id)arg0 ;
-(void)_didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg0 ;
-(void)_flushOfflineCache;
-(void)_invokeBlock:(id)arg0 ;
-(void)_mailboxListingChanged;
-(void)_mailboxesWereRemovedFromTree:(id)arg0 withFileSystemPaths:(id)arg1 ;
-(void)_purgeStaleFlagChanges;
-(void)_readCustomInfoFromMailboxCache:(id)arg0 ;
-(void)_registerForDeviceTokenChanges;
-(void)_releaseAllConnectionsAndCallSuper:(BOOL)arg0 ;
-(void)_releaseAllConnectionsAndCallSuper:(BOOL)arg0 edgeForcedOnly:(BOOL)arg1 ifIdleForTimeInterval:(CGFloat)arg2 saveOfflineCache:(BOOL)arg3 ;
-(void)_renameLocalSpecialMailboxesToName:(id)arg0 ;
-(void)_schedulePushRegistrationConnection;
-(void)_setCapabilities:(id)arg0 ;
-(void)_setSpecialMailbox:(id)arg0 forType:(int)arg1 ;
-(void)_synchronizeAccountWithServer;
-(void)_synchronouslyLoadListingForParent:(id)arg0 ;
-(void)_unregisterForDeviceTokenChanges;
-(void)_updatePushedMailboxesAndNotify:(BOOL)arg0 ;
-(void)_updateSeparatorAndNamespaceWithConnection:(id)arg0 ;
-(void)_waitForMailboxListingLoadToComplete;
-(void)_writeCustomInfoToMailboxCache:(id)arg0 ;
-(void)acquireNetworkAssertion;
-(void)addFlagChanges:(id)arg0 forMailboxPath:(id)arg1 UID:(unsigned int)arg2 ;
-(void)changePushedMailboxUidsAdded:(id)arg0 deleted:(id)arg1 ;
-(void)checkInConnection:(id)arg0 ;
-(void)checkInConnection:(id)arg0 destroy:(BOOL)arg1 ;
-(void)checkInConnectionsForStore:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 forCommand:(struct ? *)arg2 ;
-(void)connectionDidDisconnect:(id)arg0 ;
-(void)dealloc;
-(void)deleteMessagesFromMailboxUid:(id)arg0 olderThanNumberOfDays:(unsigned int)arg1 ;
-(void)fetchMailboxList;
-(void)filterMailboxList:(id)arg0 forMailbox:(id)arg1 options:(int)arg2 ;
-(void)flushOfflineCache;
-(void)handleAlertResponse:(id)arg0 ;
-(void)handleOverQuotaResponse:(id)arg0 ;
-(void)handlePushNotificationOnMailboxes:(id)arg0 missedNotifications:(BOOL)arg1 ;
-(void)messagesAdded:(id)arg0 ;
-(void)networkChanged;
-(void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
-(void)releaseAllConnections;
-(void)releaseAllConnectionsIdleForTimeInterval:(CGFloat)arg0 ;
-(void)releaseAllForcedConnections;
-(void)releaseNetworkAssertion;
-(void)removeFlagChanges:(id)arg0 forMessages:(id)arg1 ;
-(void)removeFlagChangesCommittedBefore:(CGFloat)arg0 ;
-(void)resetMailboxTimer;
-(void)saveState;
-(void)serverRegisteredMailboxes:(id)arg0 withTopic:(id)arg1 version:(int)arg2 ;
-(void)setAPSTopic:(id)arg0 ;
-(void)setAllowsPartialDownloads:(BOOL)arg0 ;
-(void)setCommitTime:(CGFloat)arg0 forConnectionTag:(unsigned int)arg1 ;
-(void)setCompactWhenClosingMailboxes:(BOOL)arg0 ;
-(void)setConnectionTag:(unsigned int)arg0 forFlagChanges:(id)arg1 forMessages:(id)arg2 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setHandlerForOfflineCacheFlush:(id)arg0 ;
-(void)setIsOffline:(BOOL)arg0 ;
-(void)setLastPushRegistration:(CGFloat)arg0 ;
-(void)setLibrary:(id)arg0 ;
-(void)setMustRegisterForPushOnNextConnection:(BOOL)arg0 ;
-(void)setReadBufferSize:(unsigned int)arg0 ;
-(void)setServerPathPrefix:(id)arg0 ;
-(void)setServerPathPrefix:(id)arg0 shouldSync:(BOOL)arg1 ;
-(void)setStoreMailboxType:(int)arg0 onServer:(BOOL)arg1 ;
-(void)setSupportedPushServiceLevel:(int)arg0 ;
-(void)setValueInAccountInfo:(id)arg0 forKey:(id)arg1 ;
-(void)startListeningForNotifications;
-(void)stopListeningForNotifications;
-(void)throttledGetMailboxListWithConnection:(id)arg0 ;
-(void)transferNotificationSessionToAccount:(id)arg0 ;
-(void)unselectMailbox:(id)arg0 ;
-(void)updatePushRegisteredMailboxes:(id)arg0 ;


@end


#endif