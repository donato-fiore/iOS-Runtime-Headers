// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCHATREGISTRY_H
#define IMDCHATREGISTRY_H

@class NSMutableDictionary, NSRecursiveLock, NSArray, TUConversationManager, NSString, NSData;
@protocol TUConversationManagerDelegate, IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "IMDChatStore.h"
#import "IMDCKUtilities.h"
#import "IMDMessageHistorySyncController.h"
#import "IMDMessageProcessingController.h"

@interface IMDChatRegistry : NSObject <TUConversationManagerDelegate, IMSystemMonitorListener>

 {
    NSMutableDictionary *_chatsByGroupID;
    NSRecursiveLock *_chatsLock;
    NSRecursiveLock *_handlesLock;
    NSMutableDictionary *_chats;
    BOOL _isLoading;
    BOOL _doneLoadingAfterMerge;
    BOOL _blackholedChatsExistCache;
}


@property (readonly, nonatomic) NSArray *allChats;
@property (retain, nonatomic) NSMutableDictionary *cachedAliasToCNIDMap; // ivar: _cachedAliasToCNIDMap
@property (readonly, nonatomic) NSUInteger cachedChatCount;
@property (readonly, nonatomic) NSArray *cachedChats;
@property (retain, nonatomic) IMDChatStore *chatStore; // ivar: _chatStore
@property (readonly, nonatomic) NSArray *chats;
@property (retain, nonatomic) IMDCKUtilities *ckUtilities; // ivar: _ckUtilities
@property (readonly, nonatomic) TUConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDumpedLogsForNoExisitingGroup; // ivar: _hasDumpedLogsForNoExisitingGroup
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *historyToken; // ivar: _historyToken
@property (retain, nonatomic) NSMutableDictionary *idToHandlesMap; // ivar: _idToHandlesMap
@property (readonly, nonatomic) IMDMessageHistorySyncController *messageHistorySyncController; // ivar: _messageHistorySyncController
@property (readonly, nonatomic) IMDMessageProcessingController *messageProcessingController; // ivar: _messageProcessingController
@property (readonly, nonatomic) NSUInteger persistedChatCount; // ivar: _persistedChatCount
@property (retain, nonatomic) NSMutableDictionary *personCentricGroupedChatsCache; // ivar: _personCentricGroupedChatsCache
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)supportedServiceNames;
-(BOOL)_chat:(id)arg0 isDuplicateOfChat:(id)arg1 ;
-(BOOL)_contactsBasedMerginEnabled;
-(BOOL)_ensureNoExistingGroupForCKRecord:(id)arg0 ;
-(BOOL)_existingItemRequiresUpgrade:(id)arg0 itemFromCKRecord:(id)arg1 ;
-(BOOL)_haveInconsistentGroupPhotoGuidOnMergedChats:(id)arg0 ;
-(BOOL)_mergeDuplicateGroupsIfNeeded;
-(BOOL)_shouldHandleInternalPhishingAttempts;
-(BOOL)_shouldUpdateSyncStatsForChat:(id)arg0 originalSyncState:(NSInteger)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForMessage:(id)arg0 originalSyncState:(NSInteger)arg1 ;
-(BOOL)blackholedChatsExist;
-(BOOL)doneLoadingAfterMerge;
-(BOOL)filterediMessageChatsExist;
-(BOOL)handleMessageUpdate:(id)arg0 ;
-(BOOL)isBeingSetup;
-(BOOL)loadChatsWithCompletionBlock:(id)arg0 ;
-(BOOL)repairDuplicateChatsIfNeeded;
-(BOOL)updateProperties:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 ;
-(BOOL)updateSyncedSyndicationRanges:(id)arg0 forGUID:(id)arg1 ;
-(BOOL)updateUnreadCountForChat:(id)arg0 ;
-(NSUInteger)markAsSpamForIDs:(id)arg0 style:(unsigned char)arg1 onServices:(id)arg2 chatID:(id)arg3 queryID:(id)arg4 autoReport:(BOOL)arg5 ;
-(id)_activeTUConversations;
-(id)_addChatFromCacheMiss:(id)arg0 preferExistingChat:(BOOL)arg1 ;
-(id)_addChatsFromCacheMisses:(id)arg0 preferExistingChats:(BOOL)arg1 ;
-(id)_aliasToCNIDMapForAliases:(id)arg0 ;
-(id)_allChatInfo;
-(id)_allHandles;
-(id)_blackholedChatInfoForNumberOfChats:(NSInteger)arg0 ;
-(id)_cachedChatWithGUID:(id)arg0 ;
-(id)_cachedChatsWithGroupID:(id)arg0 ;
-(id)_chatForTUConversation:(id)arg0 ;
-(id)_chatForTUGroupID:(id)arg0 participants:(id)arg1 ;
-(id)_chatGUIDToChatMapForChats:(id)arg0 ;
-(id)_chatInfoForChats:(id)arg0 ;
-(id)_chatInfoForConnection;
-(id)_chatInfoForNumberOfChats:(NSInteger)arg0 ;
-(id)_chatInfoInRange:(struct _NSRange )arg0 wantsBlackholed:(BOOL)arg1 ;
-(id)_chatsWithBlackholed:(BOOL)arg0 ;
-(id)_conversationItemForChat:(id)arg0 conversation:(id)arg1 ;
-(id)_createGroupChatForConversation:(id)arg0 onSession:(id)arg1 ;
-(id)_createGroupChatsArray;
-(id)_exactGroupChatMatchOrNewestMatchingGroupID:(id)arg0 serviceName:(id)arg1 participants:(id)arg2 toIdentifier:(id)arg3 ;
-(id)_existingChatForCKRecord:(id)arg0 ;
-(id)_existingChatsForIDs:(id)arg0 serviceName:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)_existingiMessageChatForChatIdentifier:(id)arg0 style:(unsigned char)arg1 ;
-(id)_extractHandlesFromMap:(id)arg0 usingCNID:(id)arg1 ;
-(id)_findChatWinnerInDuplicateChatArray:(id)arg0 fixDisplayName:(*BOOL)arg1 ;
-(id)_findExistingGroupChatForConversation:(id)arg0 onSession:(id)arg1 ;
-(id)_findLosingChatGUIDsInArrayOfChats:(id)arg0 withWinner:(id)arg1 ;
-(id)_generateCurrentAliasToCNIDDictionary;
-(id)_handlesWithChangedContactsOriginalMap:(id)arg0 newMap:(id)arg1 ;
-(id)_initiatorForConversation:(id)arg0 chat:(id)arg1 ;
-(id)_itemFromCKRecord:(id)arg0 ;
-(id)_legacyExistingLoadedChatsForIDs:(id)arg0 onService:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)_lookupChatUsingParentChatID:(id)arg0 service:(id)arg1 ;
-(id)_mergedPinningIdentifiersForChats:(id)arg0 chatGUIDToChatMap:(id)arg1 groupedChatsByPersonCentricIdWithSortedChats:(id)arg2 ;
-(id)_messageStore;
-(id)_newestExistingChatWithGroupID:(id)arg0 onService:(id)arg1 ;
-(id)_newestExistingChatWithOriginalGroupID:(id)arg0 onService:(id)arg1 ;
-(id)_newestGroupChatMatchingParticipants:(id)arg0 displayName:(id)arg1 strictDisplayNameMatching:(BOOL)arg2 serviceName:(id)arg3 toIdentifier:(id)arg4 ;
-(id)_oneToOneChatForRemoteHandle:(id)arg0 ;
-(id)_parentChatIDFromCKRecord:(id)arg0 ;
-(id)_participantIDSetFromHandles:(id)arg0 toIdentifier:(id)arg1 ;
-(id)_reportMessageDictionaryForMessages:(id)arg0 withLastAddressedHandle:(id)arg1 maxMessageLength:(NSUInteger)arg2 isAutoReport:(BOOL)arg3 withChat:(id)arg4 maxMessagesToReport:(NSUInteger)arg5 totalMessageCount:(*NSUInteger)arg6 ;
-(id)_reportMessageDictionaryForMessages:(id)arg0 withLastAddressedHandle:(id)arg1 maxMessageLength:(NSUInteger)arg2 isAutoReport:(BOOL)arg3 withChat:(id)arg4 maxMessagesToReport:(NSUInteger)arg5 totalMessageCount:(*NSUInteger)arg6 onlyReportForiMessageService:(BOOL)arg7 notifyInternalSecurity:(BOOL)arg8 ;
-(id)_sharedMessageStore;
-(id)_siblingChatForChat:(id)arg0 usingChatGUIDToChatMap:(id)arg1 ;
-(id)_spamMessageCreator;
-(id)_statsCollector;
-(id)_tuConversationForChat:(id)arg0 ;
-(id)_upgradeChatToGroupChat:(id)arg0 forConversation:(id)arg1 ;
-(id)aliasToCNIDMap;
-(id)allChatsWithIdentifier:(id)arg0 style:(unsigned char)arg1 serviceNames:(id)arg2 ;
-(id)allExistingChatsWithIdentifier:(id)arg0 ;
-(id)allExistingChatsWithIdentifier:(id)arg0 style:(unsigned char)arg1 ;
-(id)allExistingSupportedServiceChatsWithIdentifier:(id)arg0 style:(unsigned char)arg1 ;
-(id)allHandlesForID:(id)arg0 ;
-(id)bestCandidateGroupChatWithFromIdentifier:(id)arg0 toIdentifier:(id)arg1 displayName:(id)arg2 participants:(id)arg3 groupID:(id)arg4 serviceName:(id)arg5 ;
-(id)blackholedChats;
-(id)chatForHandle:(id)arg0 account:(id)arg1 chatIdentifier:(id)arg2 guid:(id)arg3 lastAddressedHandle:(id)arg4 lastAddressedSIMID:(id)arg5 isBlackholed:(BOOL)arg6 ;
-(id)chatForHandles:(id)arg0 account:(id)arg1 chatIdentifier:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 displayName:(id)arg5 guid:(id)arg6 lastAddressedHandle:(id)arg7 lastAddressedSIMID:(id)arg8 isBlackholed:(BOOL)arg9 ;
-(id)chatForRoom:(id)arg0 account:(id)arg1 chatIdentifier:(id)arg2 guid:(id)arg3 ;
-(id)chatsToUploadToCloudKitWithLimit:(NSUInteger)arg0 ;
-(id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
-(id)existingChatForID:(id)arg0 account:(id)arg1 ;
-(id)existingChatForIDs:(id)arg0 account:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)existingChatForIDs:(id)arg0 account:(id)arg1 style:(unsigned char)arg2 ;
-(id)existingChatForRoom:(id)arg0 account:(id)arg1 ;
-(id)existingChatWithEngramID:(id)arg0 ;
-(id)existingChatWithGUID:(id)arg0 ;
-(id)existingChatWithIdentifier:(id)arg0 account:(id)arg1 ;
-(id)existingChatsFilteredUsingPredicate:(id)arg0 ;
-(id)existingChatsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 limit:(NSUInteger)arg2 ;
-(id)existingChatsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 olderThan:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)existingChatsForIDs:(id)arg0 displayName:(id)arg1 groupID:(id)arg2 style:(unsigned char)arg3 ;
-(id)existingChatsForIDs:(id)arg0 onService:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)existingChatsForIDs:(id)arg0 onService:(id)arg1 style:(unsigned char)arg2 ;
-(id)existingChatsWithGroupID:(id)arg0 ;
-(id)existingChatsWithPinningIdentifier:(id)arg0 ;
-(id)existingGroupChatsContainingHandles:(id)arg0 ;
-(id)existingOneOnOneChatsWithIdentifiers:(id)arg0 ;
-(id)existingSMSChatForID:(id)arg0 ;
-(id)existingSMSChatForID:(id)arg0 withChatStyle:(unsigned char)arg1 ;
-(id)existingiMessageChatForID:(id)arg0 ;
-(id)existingiMessageChatForID:(id)arg0 withChatStyle:(unsigned char)arg1 ;
-(id)findDuplicateChats:(id)arg0 ;
-(id)findDuplicateUnnamedGroups:(id)arg0 ;
-(id)generateUnusedChatIdentifierForGroupChatWithAccount:(id)arg0 ;
-(id)groupChatsBasedOnIdentity:(id)arg0 ;
-(id)groupChatsBasedOnIdentityUsingCacheIfApplicable:(id)arg0 ;
-(id)init;
-(id)messagesPendingUpdateT1ToCloudKitWithLimit:(NSUInteger)arg0 ;
-(id)messagesPendingUpdateT2ToCloudKitWithLimit:(NSUInteger)arg0 ;
-(id)messagesToUploadToCloudKitWithLimit:(NSUInteger)arg0 ;
-(id)personCentricGroupedChatsArrayWithMaximumNumberOfChats:(NSInteger)arg0 skipsLastMessageLoading:(BOOL)arg1 usingChats:(id)arg2 useCachedChatGroups:(BOOL)arg3 includingPinnedChatIdentifiers:(id)arg4 ;
-(id)recoverableMessagesMetadata;
-(id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(NSUInteger)arg0 ;
-(id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(NSUInteger)arg0 ;
-(id)sortPersonCentricChatGroups:(id)arg0 ;
-(id)stringForChatStyle:(unsigned char)arg0 ;
-(id)truncatedSortedChatsGroupedByPersonCentricID:(id)arg0 count:(NSInteger)arg1 pinnedChatIdentifiers:(id)arg2 ;
-(void)__addChatToGroupIDChatIndex:(id)arg0 ;
-(void)__removeChatFromGroupIDChatIndex:(id)arg0 ;
-(void)_addItemToParentChatIfNotLocationItem:(id)arg0 parentChat:(id)arg1 updatedLastMessageCount:(NSUInteger)arg2 ;
-(void)_adoptUpdatedStateForExistingItem:(id)arg0 itemFromCKRecord:(id)arg1 ;
-(void)_chatGUIDsThatNeedRemerging:(*id)arg0 chatDictionaryArray:(*id)arg1 aliasMap:(id)arg2 ;
-(void)_chatGUIDsThatNeedRemergingWithCompletionHandler:(id)arg0 ;
-(void)_checkForContactChanges;
-(void)_contactsChanged:(id)arg0 ;
-(void)_evictCachedChat:(id)arg0 ;
-(void)_finalizeIncomingChat:(id)arg0 ;
-(void)_fixSMSGroupChatAndStoreIfNeeded:(id)arg0 iMessageChat:(id)arg1 chatToRegenerate:(*id)arg2 ;
-(void)_fixUpChatParticipantsIfNeeded:(id)arg0 ;
-(void)_fixUpChatParticipantsIfNeeded:(id)arg0 usingChatGUIDToChatMap:(id)arg1 ;
-(void)_forceReloadChats:(BOOL)arg0 ;
-(void)_insertChatUsingCKRecord:(id)arg0 ;
-(void)_makeAllAttachmentsClassC;
-(void)_markForksAsSyncedForChat:(id)arg0 ;
-(void)_markGroupPhotosAsUnpurgeableIfNecessary;
-(void)_persistMergeIDMergedChatsIfNeeded;
-(void)_populateContactIDOnHandles;
-(void)_populateLastMessageForChat:(id)arg0 ;
-(void)_repairInconsistentGroupPhotoGuidOnMergedChatsIfNecessary:(id)arg0 ;
-(void)_reportToIDSiMessageSpam:(id)arg0 ;
-(void)_setGroupID:(id)arg0 forChatAndAllSiblings:(id)arg1 ;
-(void)_setInitialLoadForTesting:(BOOL)arg0 ;
-(void)_setSortIDOnIncomingMessage:(id)arg0 forChat:(id)arg1 ;
-(void)_updateCachedAliasToCNIDMap:(id)arg0 withHistoryToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateCachedCNIDMapForHandles:(id)arg0 ;
-(void)_updateChat:(id)arg0 usingRecord:(id)arg1 ;
-(void)_updateCurrentAliasToCNIDDictionaryAndHistoryTokenWithCompletionHandler:(id)arg0 ;
-(void)_updateSyncStatisticsForChat:(id)arg0 incrementTotalCount:(NSUInteger)arg1 ;
-(void)_updateSyncStatisticsForMessage:(id)arg0 incrementTotalCount:(NSUInteger)arg1 ;
-(void)addChat:(id)arg0 ;
-(void)addChat:(id)arg0 firstLoad:(BOOL)arg1 store:(BOOL)arg2 ;
-(void)addIMDHandleToRegistry:(id)arg0 ;
-(void)addItem:(id)arg0 toChat:(id)arg1 ;
-(void)addMessage:(id)arg0 toChat:(id)arg1 ;
-(void)addMessage:(id)arg0 toChat:(id)arg1 deferSpotlightIndexing:(BOOL)arg2 ;
-(void)checkBlackholedChatsExistAfterUpdatingChatWithAdd:(BOOL)arg0 ;
-(void)clearPendingDeleteTable;
-(void)clearRecoverableMessageTombStones;
-(void)conversationManager:(id)arg0 conversation:(id)arg1 addedMembersLocally:(id)arg2 ;
-(void)dealloc;
-(void)handleMessageUpdateConflictType:(id)arg0 serverRecord:(id)arg1 localRowID:(NSInteger)arg2 ;
-(void)invalidatePersonCentricGroupedChatsCache;
-(void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg0 ;
-(void)markDeferredChatsAsNeedingSync;
-(void)moveMessagesInChatsWithGUIDsToRecentlyDeleted:(id)arg0 deleteDate:(id)arg1 ;
-(void)moveMessagesWithGUIDsToRecentlyDeleted:(id)arg0 deleteDate:(id)arg1 ;
-(void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)processMessageUsingCKRecord:(id)arg0 ;
-(void)processMessageUsingCKRecord:(id)arg0 updatedLastMessageCount:(int)arg1 ;
-(void)recoverMessagesWithChatGUIDs:(id)arg0 ;
-(void)refreshUIWhileSyncing;
-(void)removeChat:(id)arg0 ;
-(void)removeIMDHandleFromRegistry:(id)arg0 ;
-(void)removeItem:(id)arg0 fromChat:(id)arg1 ;
-(void)removeMessage:(id)arg0 fromChat:(id)arg1 ;
-(void)resolveChatConflictUsingCKRecord:(id)arg0 localGUID:(id)arg1 ;
-(void)setUpInitialConversationManager;
-(void)simulateMessageReceive:(id)arg0 serviceName:(id)arg1 groupID:(id)arg2 handles:(id)arg3 sender:(id)arg4 date:(id)arg5 associatedMessageType:(NSInteger)arg6 associatedMessageGuid:(id)arg7 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidUnlock;
-(void)updateChatUsingCKRecord:(id)arg0 ;
-(void)updateChatWithGUID:(id)arg0 serverChangeToken:(id)arg1 recordID:(id)arg2 ;
-(void)updateFaceTimeGroupName:(id)arg0 ;
-(void)updateFaceTimeGroupPhoto:(id)arg0 ;
-(void)updateGroupIDForChat:(id)arg0 newGroupID:(id)arg1 ;
-(void)updateLastMessageForChat:(id)arg0 hintMessage:(id)arg1 ;
-(void)updateLastMessageForChat:(id)arg0 hintMessage:(id)arg1 historyQuery:(BOOL)arg2 ;
-(void)updateMeCardHasUpdatedForAllChats;
-(void)updateNotificationUnreadCountForChat:(id)arg0 ;
-(void)updateRecoverableMessageSyncState:(NSInteger)arg0 forMessageRowID:(NSInteger)arg1 onPartIndex:(NSInteger)arg2 ;
-(void)updateStateForChat:(id)arg0 forcePost:(BOOL)arg1 ;
-(void)updateStateForChat:(id)arg0 forcePost:(BOOL)arg1 shouldRebuildFailedMessageDate:(BOOL)arg2 ;
-(void)updateStateForChat:(id)arg0 forcePost:(BOOL)arg1 shouldRebuildFailedMessageDate:(BOOL)arg2 setUnreadCountToZero:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg0 forcePost:(BOOL)arg1 shouldRebuildFailedMessageDate:(BOOL)arg2 shouldCalculateUnreadCount:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg0 fromMessage:(id)arg1 toMessage:(id)arg2 forcePost:(BOOL)arg3 hintMessage:(id)arg4 shouldRebuildFailedMessageDate:(BOOL)arg5 shouldCalculateUnreadCount:(BOOL)arg6 setUnreadCountToZero:(BOOL)arg7 ;
-(void)updateStateForChat:(id)arg0 hintMessage:(id)arg1 ;
-(void)updateStateForChat:(id)arg0 hintMessage:(id)arg1 shouldRebuildFailedMessageDate:(BOOL)arg2 ;
-(void)updateStateForChat:(id)arg0 hintMessage:(id)arg1 shouldRebuildFailedMessageDate:(BOOL)arg2 setUnreadCountToZero:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg0 hintMessage:(id)arg1 shouldRebuildFailedMessageDate:(BOOL)arg2 shouldCalculateUnreadCount:(BOOL)arg3 ;
-(void)waitForLoadedChatsWithCompletionHandler:(id)arg0 ;


@end


#endif