// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHATREGISTRY_H
#define IMCHATREGISTRY_H

@class NSMutableArray, NSArray, NSMutableDictionary, IMContactStore, TUConversationManager, NSString, NSDictionary, IMTimer, NSSet, IMSharedWithYouManager, NSUserActivity;
@protocol NSFastEnumeration, TUConversationManagerDelegate, OS_dispatch_queue, IMDaemonProtocol;

#import <Foundation/Foundation.h>

#import "IMDaemonController.h"
#import "IMDaemonQueryController.h"

@interface IMChatRegistry : NSObject <NSFastEnumeration, TUConversationManagerDelegate>



@property (nonatomic, setter=_setDefaultNumberOfMessagesToLoad:) NSUInteger _defaultNumberOfMessagesToLoad; // ivar: _defaultNumberOfMessagesToLoad
@property (readonly, nonatomic) BOOL _isLoading; // ivar: __isLoading
@property (nonatomic, setter=_setPostMessageSentNotifications:) BOOL _postMessageSentNotifications; // ivar: _postMessageSentNotifications
@property (readonly, nonatomic) NSMutableArray *allChatsInProcess; // ivar: _allChatsInProcess
@property (readonly, nonatomic) NSArray *allExistingChats;
@property (readonly, nonatomic) BOOL blackholedChatsExist;
@property (nonatomic) BOOL blackholedChatsExist; // ivar: _blackholedChatsExist
@property (readonly, copy, nonatomic) NSArray *cachedChats;
@property (readonly, nonatomic) NSMutableArray *cachedChatsInThreadNameMap; // ivar: _cachedChatsInThreadNameMap
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToChatMap; // ivar: _chatGUIDToChatMap
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToCurrentThreadMap; // ivar: _chatGUIDToCurrentThreadMap
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToInfoMap; // ivar: _chatGUIDToInfoMap
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToiMessageSentOrReceivedMap; // ivar: _chatGUIDToiMessageSentOrReceivedMap
@property (retain, nonatomic) NSMutableDictionary *chatPersonIDToChatMap; // ivar: _chatPersonIDToChatMap
@property (retain, nonatomic) NSMutableDictionary *chatsBeingLoadedMap; // ivar: _chatsBeingLoadedMap
@property (retain, nonatomic) IMContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactStoreQueue; // ivar: _contactStoreQueue
@property (readonly, nonatomic) TUConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, nonatomic) IMDaemonController *daemonController;
@property (nonatomic) BOOL daemonHadTerminated; // ivar: _daemonHadTerminated
@property (readonly, nonatomic) IMDaemonQueryController *daemonQueryController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *filterCategoryToEarliestInitiallyFetchedLastMessageDate; // ivar: _filterCategoryToEarliestInitiallyFetchedLastMessageDate
@property (nonatomic) BOOL filterediMessageChatsExist; // ivar: _filterediMessageChatsExist
@property (nonatomic, getter=isFirstLoad) BOOL firstLoad; // ivar: _firstLoad
@property (readonly, nonatomic) NSMutableDictionary *groupIDToChatMap; // ivar: _groupIDToChatMap
@property (readonly, nonatomic) NSMutableDictionary *groupParticipantToChatsMap; // ivar: _groupParticipantToChatsMap
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *historyModificationStamp; // ivar: _historyModificationStamp
@property (nonatomic) BOOL isInternalInstall; // ivar: _isInternalInstall
@property (nonatomic) NSInteger lastFailedMessageDate; // ivar: _lastFailedMessageDate
@property (nonatomic) BOOL loading; // ivar: _loading
@property (retain, nonatomic) IMTimer *markAsReadTimer; // ivar: _markAsReadTimer
@property (readonly, nonatomic) NSUInteger numberOfCachedChats;
@property (readonly, nonatomic) NSUInteger numberOfExistingChats;
@property (retain, nonatomic) NSMutableArray *pendingQueries; // ivar: _pendingQueries
@property (retain, nonatomic) NSArray *preExistingAllChats; // ivar: _preExistingAllChats
@property (nonatomic) BOOL processingChatCacheMiss; // ivar: _processingChatCacheMiss
@property (retain, nonatomic) NSMutableDictionary *queryCompletionBlocks; // ivar: _queryCompletionBlocks
@property (retain, nonatomic) NSSet *registryChangeHistoryChatsToObserve; // ivar: _registryChangeHistoryChatsToObserve
@property (retain, nonatomic) NSSet *registryChangeHistoryChatsToUnregister; // ivar: _registryChangeHistoryChatsToUnregister
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *remoteDaemon;
@property (readonly, nonatomic) IMSharedWithYouManager *sharedWithYouManager;
@property (readonly, nonatomic) NSMutableDictionary *simulatedChatGUIDToChatMap; // ivar: _simulatedChatGUIDToChatMap
@property (retain, nonatomic, setter=_setSimulatedChats:) NSArray *simulatedChats; // ivar: _simulatedChats
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *threadNameToChatMap; // ivar: _threadNameToChatMap
@property (nonatomic) CGFloat timerStartTimeInterval; // ivar: _timerStartTimeInterval
@property (nonatomic) NSUInteger unreadCount; // ivar: _unreadCount
@property (retain, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (retain, nonatomic) NSMutableArray *waitingForQueries; // ivar: _waitingForQueries
@property (nonatomic) BOOL wantsHistoryReload; // ivar: _wantsHistoryReload


+(BOOL)hasInitializedChatFiltering;
+(Class)messageClass;
+(id)performanceLogHandle;
+(id)sharedInstance;
+(id)sharedRegistry;
+(id)sharedRegistryIfAvailable;
+(void)setHasInitializedChatFiltering:(BOOL)arg0 ;
+(void)setMessageClass:(Class)arg0 ;
-(BOOL)_hasChat:(id)arg0 forService:(id)arg1 ;
-(BOOL)_nicknameSharingEnabled;
-(BOOL)_shouldShareMeCardForAlwaysAskAudienceWithChat:(id)arg0 ;
-(BOOL)_shouldShareMeCardForContactsOnlyAudienceWithChat:(id)arg0 ;
-(BOOL)_shouldSwitchAccountAddingMessagesToChat:(id)arg0 messageItems:(id)arg1 messagesComingFromStorage:(BOOL)arg2 chatProperties:(id)arg3 ;
-(BOOL)_updateAutoDonationBehavior:(NSInteger)arg0 forChat:(id)arg1 shouldPostNotification:(BOOL)arg2 ;
-(NSUInteger)_nicknameSharingAudience;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_activeTUConversations;
-(id)_cachedChatForChatDictionary:(id)arg0 participants:(id)arg1 participantHash:(id)arg2 ;
-(id)_cachedChatWithDisplayName:(id)arg0 ;
-(id)_cachedChatWithGUID:(id)arg0 ;
-(id)_cachedChatWithGroupID:(id)arg0 ;
-(id)_cachedChatWithHandle:(id)arg0 ;
-(id)_cachedChatWithHandles:(id)arg0 allowAlternativeService:(BOOL)arg1 groupID:(id)arg2 displayName:(id)arg3 joinedChatsOnly:(BOOL)arg4 ;
-(id)_cachedChatWithIdentifier:(id)arg0 ;
-(id)_cachedChatWithIdentifier:(id)arg0 style:(unsigned char)arg1 ;
-(id)_cachedChatWithPersonID:(id)arg0 ;
-(id)_cachedChatsWithMessage:(id)arg0 ;
-(id)_cachedChatsWithMessageGUID:(id)arg0 ;
-(id)_cachedGroupChatForGroupChatDictionary:(id)arg0 participants:(id)arg1 participantHash:(id)arg2 ;
-(id)_cachedOneToOneChatForChatDictionary:(id)arg0 participants:(id)arg1 participantHash:(id)arg2 ;
-(id)_chatForIdentifiers:(id)arg0 ;
-(id)_chatsMatchingStatusSubscription:(id)arg0 ;
-(id)_copyMergedChatsPairedArrayFromMergedChatsArray:(id)arg0 ;
-(id)_earliestLastMessageDateFromChatDictionaries:(id)arg0 ;
-(id)_eventForMessage:(id)arg0 ;
-(id)_existingChatForHandleUsingPersonID:(id)arg0 ;
-(id)_existingChatForTUConversation:(id)arg0 ;
-(id)_existingChatFromSiblingsForHandle:(id)arg0 ;
-(id)_existingChatWithHandle:(id)arg0 fixChatHandle:(BOOL)arg1 ;
-(id)_existingChatWithIdentifier:(id)arg0 style:(unsigned char)arg1 account:(id)arg2 ;
-(id)_existingChatWithIdentifier:(id)arg0 style:(unsigned char)arg1 service:(id)arg2 ;
-(id)_inPersonFromIMHandle:(id)arg0 isMe:(BOOL)arg1 ;
-(id)_inPersonHandleFromIMHandle:(id)arg0 contact:(id)arg1 ;
-(id)_inPersonNameForContact:(id)arg0 imHandle:(id)arg1 ;
-(id)_interactionForMessage:(id)arg0 inChat:(id)arg1 ;
-(id)_lastMessageDateForQueryFromChatDictionary:(id)arg0 ;
-(id)_lastMessageItemForChatDictionary:(id)arg0 ;
-(id)_ownerHandleStringsFromSubscription:(id)arg0 ;
-(id)_participantsForChatDictionary:(id)arg0 ;
// -(id)_performChatCacheLookupWithBlock:(id)arg0 cacheMissQueryKey:(unk)arg1 queryBlock:(id)arg2  ;
// -(id)_performSingleChatCacheLookupWithBlock:(id)arg0 cacheMissQueryKey:(unk)arg1 queryBlock:(id)arg2  ;
-(id)_possiblyUnregisteredCachedChatForRoom:(id)arg0 onAccount:(id)arg1 ;
-(id)_possiblyUnregisteredCachedChatWithHandle:(id)arg0 ;
-(id)_possiblyUnregisteredCachedChatWithHandles:(id)arg0 style:(unsigned char)arg1 groupID:(id)arg2 displayName:(id)arg3 joinedChatsOnly:(BOOL)arg4 ;
-(id)_possiblyUnregisteredCachedChatWithIdentifier:(id)arg0 style:(unsigned char)arg1 account:(id)arg2 ;
-(id)_processLoadedChatDictionaries:(id)arg0 ;
-(id)_sendMessageInteractionForMessage:(id)arg0 inChat:(id)arg1 ;
-(id)_sortedParticipantIDHashForParticipants:(id)arg0 ;
-(id)_sortedParticipantIDHashForParticipants:(id)arg0 usesPersonCentricID:(BOOL)arg1 ;
-(id)_unsendMessageInteractionForMessage:(id)arg0 inChat:(id)arg1 ;
-(id)activeCallForConversationUUID:(id)arg0 ;
-(id)allGUIDsForChat:(id)arg0 ;
-(id)chatForFaceTimeConversation:(id)arg0 ;
-(id)chatForFaceTimeRecipientIDs:(id)arg0 ;
-(id)chatForIMHandle:(id)arg0 ;
-(id)chatForIMHandle:(id)arg0 lastAddressedHandle:(id)arg1 lastAddressedSIMID:(id)arg2 ;
-(id)chatForIMHandles:(id)arg0 ;
-(id)chatForIMHandles:(id)arg0 chatName:(id)arg1 ;
-(id)chatForIMHandles:(id)arg0 chatName:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 ;
-(id)chatForIMHandles:(id)arg0 displayName:(id)arg1 joinedChatsOnly:(BOOL)arg2 ;
-(id)chatForIMHandles:(id)arg0 displayName:(id)arg1 joinedChatsOnly:(BOOL)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 ;
-(id)chatForIMHandles:(id)arg0 lastAddressedHandle:(id)arg1 lastAddressedSIMID:(id)arg2 ;
-(id)chatForRoom:(id)arg0 onAccount:(id)arg1 ;
-(id)chatForURL:(id)arg0 outMessageText:(*id)arg1 outRecipientIDs:(*id)arg2 outService:(*id)arg3 outMessageGUID:(*id)arg4 ;
-(id)chatForURL:(id)arg0 outMessageText:(*id)arg1 outRecipientIDs:(*id)arg2 outService:(*id)arg3 outMessageGUID:(*id)arg4 presentOverlay:(*BOOL)arg5 ;
-(id)chatGuidsForChat:(id)arg0 ;
-(id)chatWithHandle:(id)arg0 ;
-(id)chatWithHandle:(id)arg0 lastAddressedHandle:(id)arg1 lastAddressedSIMID:(id)arg2 ;
-(id)chatWithHandles:(id)arg0 ;
-(id)chatWithHandles:(id)arg0 displayName:(id)arg1 joinedChatsOnly:(BOOL)arg2 ;
-(id)chatWithHandles:(id)arg0 displayName:(id)arg1 joinedChatsOnly:(BOOL)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 ;
-(id)chatWithHandles:(id)arg0 lastAddressedHandle:(id)arg1 lastAddressedSIMID:(id)arg2 ;
-(id)chatsWithMyself;
-(id)exisitingChatForGroupID:(id)arg0 ;
-(id)existingChatForAddresses:(id)arg0 allowRetargeting:(BOOL)arg1 bestHandles:(*id)arg2 ;
-(id)existingChatForContacts:(id)arg0 bestHandles:(*id)arg1 ;
-(id)existingChatForIMHandle:(id)arg0 ;
-(id)existingChatForIMHandle:(id)arg0 allowRetargeting:(BOOL)arg1 ;
-(id)existingChatForIMHandle:(id)arg0 allowRetargeting:(BOOL)arg1 fixChatHandle:(BOOL)arg2 ;
-(id)existingChatForIMHandles:(id)arg0 ;
-(id)existingChatForIMHandles:(id)arg0 allowRetargeting:(BOOL)arg1 ;
-(id)existingChatForIMHandles:(id)arg0 allowRetargeting:(BOOL)arg1 groupID:(id)arg2 ;
-(id)existingChatForIMHandles:(id)arg0 allowRetargeting:(BOOL)arg1 groupID:(id)arg2 displayName:(id)arg3 ignoresDisplayName:(BOOL)arg4 joinedChatsOnly:(BOOL)arg5 ;
-(id)existingChatForIMHandles:(id)arg0 allowRetargeting:(BOOL)arg1 groupID:(id)arg2 displayName:(id)arg3 joinedChatsOnly:(BOOL)arg4 ;
-(id)existingChatForPersonID:(id)arg0 ;
-(id)existingChatForRoom:(id)arg0 onAccount:(id)arg1 ;
-(id)existingChatForRoom:(id)arg0 onAccount:(id)arg1 allowRetargeting:(BOOL)arg2 ;
-(id)existingChatWithAddresses:(id)arg0 allowAlternativeService:(BOOL)arg1 bestHandles:(*id)arg2 ;
-(id)existingChatWithChatIdentifier:(id)arg0 ;
-(id)existingChatWithContacts:(id)arg0 bestHandles:(*id)arg1 ;
-(id)existingChatWithDeviceIndependentID:(id)arg0 ;
-(id)existingChatWithDisplayName:(id)arg0 ;
-(id)existingChatWithGUID:(id)arg0 ;
-(id)existingChatWithGroupID:(id)arg0 ;
-(id)existingChatWithHandle:(id)arg0 ;
-(id)existingChatWithHandle:(id)arg0 allowAlternativeService:(BOOL)arg1 ;
-(id)existingChatWithHandles:(id)arg0 ;
-(id)existingChatWithHandles:(id)arg0 allowAlternativeService:(BOOL)arg1 ;
-(id)existingChatWithHandles:(id)arg0 allowAlternativeService:(BOOL)arg1 groupID:(id)arg2 ;
-(id)existingChatWithHandles:(id)arg0 allowAlternativeService:(BOOL)arg1 groupID:(id)arg2 displayName:(id)arg3 joinedChatsOnly:(BOOL)arg4 ;
-(id)existingChatWithPersonID:(id)arg0 ;
-(id)existingChatWithPinningIdentifier:(id)arg0 ;
-(id)existingConversationForFaceTimeConversationUUID:(id)arg0 ;
-(id)existingConversationForTelephonyConversationUUID:(id)arg0 ;
-(id)generateUnusedChatIdentifierForGroupChatWithAccount:(id)arg0 ;
-(id)init;
-(id)initAsListener:(BOOL)arg0 ;
-(id)loadChatFromDaemonWithChatIdentifier:(id)arg0 ;
-(id)messagesURLWithChat:(id)arg0 ;
-(id)messagesURLWithChat:(id)arg0 orHandles:(id)arg1 withMessageText:(id)arg2 ;
-(id)messagesURLWithMessageGUID:(id)arg0 ;
-(id)performanceLogHandle;
-(id)unblackholeAndLoadChatWithIMHandles:(id)arg0 ;
-(id)unblackholeChatWithHandles:(id)arg0 ;
-(void)_IMChatGetIdentifiersAndServicesTestHookWithChatRegistry:(id)arg0 chat:(id)arg1 identifiers:(*id)arg2 services:(*id)arg3 personCentricEnabled:(BOOL)arg4 ;
-(void)__blockUntilQueriesComplete;
-(void)__handleChatReconstructions:(id)arg0 ;
-(void)__handleMergedChatReconstructions:(id)arg0 ;
-(void)_account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messagesUpdated:(id)arg4 ;
-(void)_account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messagesUpdated:(id)arg4 suppressNotification:(BOOL)arg5 ;
-(void)_addChat:(id)arg0 participantSet:(id)arg1 ;
-(void)_automation_markAsReadQuery:(id)arg0 finishedWithResult:(BOOL)arg1 ;
-(void)_batchFetchRemainingContactsOnLaunch;
-(void)_blockUntilQueriesComplete:(id)arg0 ;
-(void)_chat:(id)arg0 handleCompletionOfQuery:(id)arg1 withUserInfo:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)_chat:(id)arg0 inviteParticipants:(id)arg1 reason:(id)arg2 toiMessageChat:(BOOL)arg3 ;
-(void)_chat:(id)arg0 joinWithProperties:(id)arg1 ;
-(void)_chat:(id)arg0 removeParticipants:(id)arg1 reason:(id)arg2 fromiMessageChat:(BOOL)arg3 ;
-(void)_chat:(id)arg0 resendEditedMessage:(id)arg1 partIndex:(NSInteger)arg2 withBackwardCompatabilityText:(id)arg3 ;
-(void)_chat:(id)arg0 retryGroupPhotoUpload:(id)arg1 ;
-(void)_chat:(id)arg0 sendEditedMessage:(id)arg1 previousMessage:(id)arg2 partIndex:(NSInteger)arg3 editType:(NSUInteger)arg4 backwardCompatabilityText:(id)arg5 ;
-(void)_chat:(id)arg0 sendGroupPhotoUpdate:(id)arg1 ;
-(void)_chat:(id)arg0 sendMessage:(id)arg1 ;
-(void)_chat:(id)arg0 sendNotifyRecipientCommandForMessage:(id)arg1 ;
-(void)_chat:(id)arg0 sendPlayedReceiptForMessage:(id)arg1 ;
-(void)_chat:(id)arg0 sendReadReceiptForMessages:(id)arg1 ;
-(void)_chat:(id)arg0 sendSavedReceiptForMessage:(id)arg1 ;
-(void)_chat:(id)arg0 sendSyndicationAction:(id)arg1 ;
-(void)_chat:(id)arg0 sendUpdatedCollaborationMetadata:(id)arg1 forMessageGUID:(id)arg2 ;
-(void)_chat:(id)arg0 setPlayedExpressiveSendForMessage:(id)arg1 ;
-(void)_chat:(id)arg0 setProperties:(id)arg1 ofParticipant:(id)arg2 ;
-(void)_chat:(id)arg0 setValue:(id)arg1 forChatProperty:(id)arg2 ;
-(void)_chat:(id)arg0 updateDisplayName:(id)arg1 ;
-(void)_chat:(id)arg0 updateIsBlackholed:(BOOL)arg1 ;
-(void)_chat:(id)arg0 updateIsFiltered:(NSInteger)arg1 ;
-(void)_chat:(id)arg0 updateIsRecovered:(BOOL)arg1 ;
-(void)_chat:(id)arg0 updateLastAddressedHandle:(id)arg1 ;
-(void)_chat:(id)arg0 updateLastAddressedSIMID:(id)arg1 ;
-(void)_chatLoadedWithChatIdentifier:(id)arg0 chats:(id)arg1 ;
-(void)_chat_clearHistory:(id)arg0 beforeGUID:(id)arg1 afterGUID:(id)arg2 queryID:(id)arg3 ;
-(void)_chat_closeSession:(id)arg0 ;
-(void)_chat_declineInvitation:(id)arg0 ;
-(void)_chat_downloadPurgedAttachmentsForChat:(id)arg0 ;
-(void)_chat_isDownloadingPurgedAssetsForChat:(id)arg0 queryID:(id)arg1 loadImmediately:(BOOL)arg2 ;
-(void)_chat_leave:(id)arg0 leavingiMessageChat:(BOOL)arg1 ;
-(void)_chat_loadAttachments:(id)arg0 queryID:(id)arg1 loadImmediately:(BOOL)arg2 ;
-(void)_chat_loadFrequentReplies:(id)arg0 limit:(NSUInteger)arg1 queryID:(id)arg2 loadImmediately:(BOOL)arg3 ;
-(void)_chat_loadHistory:(id)arg0 limit:(NSUInteger)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 threadIdentifier:(id)arg4 queryID:(id)arg5 synchronous:(BOOL)arg6 completion:(id)arg7 ;
-(void)_chat_loadPagedHistory:(id)arg0 numberOfMessagesBefore:(NSUInteger)arg1 numberOfMessagesAfter:(NSUInteger)arg2 messageGUID:(id)arg3 threadIdentifier:(id)arg4 queryID:(id)arg5 synchronous:(BOOL)arg6 completion:(id)arg7 ;
-(void)_chat_loadUncachedAttachmentsCount:(id)arg0 queryID:(id)arg1 loadImmediately:(BOOL)arg2 ;
-(void)_chat_loadUnreadMessages:(id)arg0 limit:(NSUInteger)arg1 fallbackGUID:(id)arg2 queryID:(id)arg3 loadImmediately:(BOOL)arg4 ;
-(void)_chat_markAsSpam:(id)arg0 queryID:(id)arg1 ;
-(void)_chat_markAsSpam:(id)arg0 queryID:(id)arg1 autoReport:(BOOL)arg2 ;
-(void)_chat_markAsSpamAutomatically:(id)arg0 ;
-(void)_chat_markLastMessageAsUnread:(id)arg0 ;
-(void)_chat_recoverFromJunk:(id)arg0 ;
-(void)_chat_remove:(id)arg0 ;
-(void)_chat_sendReadReceiptForAllMessages:(id)arg0 ;
-(void)_chat_storeItem:(id)arg0 inChat:(id)arg1 ;
-(void)_checkIfItemIsCorrupt:(id)arg0 ;
-(void)_checkLimitAndSetMessagesToKeepLoadedIfNeeded:(NSUInteger)arg0 chat:(id)arg1 ;
-(void)_clearExistingTypingIndicatorsWithMessageGUID:(id)arg0 excludingChatWithIdentifier:(id)arg1 ;
-(void)_completeChatLoadQueryWithChat:(id)arg0 queryID:(id)arg1 ;
-(void)_daemonCompletedDeferredSetup;
-(void)_daemonReallyDied:(id)arg0 ;
-(void)_fetchInitialBatchOfContactsOnLaunch;
-(void)_handleAddressBookChange:(id)arg0 ;
-(void)_handleAvailabilityChangedNotification:(id)arg0 ;
-(void)_handleAvailabilityInvitationReceivedNotification:(id)arg0 ;
-(void)_handleAvailabilityStateChangedNotification:(id)arg0 ;
-(void)_handleCachingAliasToCNIDMap:(id)arg0 ;
-(void)_handleChatParticipantsDidChange:(id)arg0 ;
-(void)_handleChatReconstructions:(id)arg0 ;
-(void)_handleMergedChatReconstructions:(id)arg0 ;
-(void)_loadAllSiblingChatsForHandlesAssociatedWithChats:(id)arg0 waitForReply:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_loadChatsFilteredUsingPredicate:(id)arg0 lastMessageOlderThan:(id)arg1 limit:(NSUInteger)arg2 waitForReply:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_loadSiblingsForChatIfNeeded:(id)arg0 ;
-(void)_markHasHadSuccessfulQueryForChat:(id)arg0 ;
-(void)_noteChatDealloc:(id)arg0 ;
-(void)_noteChatInit:(id)arg0 ;
-(void)_postMultiWayStateChangedNotification:(id)arg0 ;
-(void)_previouslyBlackholedChatLoadedWithHandleIDs:(id)arg0 chat:(id)arg1 ;
-(void)_processMessageForAccount:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 groupID:(id)arg4 chatPersonCentricID:(id)arg5 message:(id)arg6 ;
-(void)_processMessagesForAccount:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 groupID:(id)arg4 chatPersonCentricID:(id)arg5 messages:(id)arg6 messagesComingFromStorage:(BOOL)arg7 ;
-(void)_registerChat:(id)arg0 isIncoming:(BOOL)arg1 guid:(id)arg2 ;
-(void)_registerChatDictionary:(id)arg0 forChat:(id)arg1 isIncoming:(BOOL)arg2 newGUID:(id)arg3 ;
-(void)_registerChatDictionary:(id)arg0 forChat:(id)arg1 isIncoming:(BOOL)arg2 newGUID:(id)arg3 shouldPostNotification:(BOOL)arg4 ;
// -(void)_registerCompletion:(id)arg0 forQueryID:(unk)arg1  ;
-(void)_removeFromGroupParticipantToChatsMap:(id)arg0 ;
-(void)_resetChatReconstructionGroupMaps;
-(void)_resetChatRegistry;
-(void)_setChatHasCommunicatedOveriMessage:(id)arg0 ;
-(void)_setMeCardSharingOnMessage:(id)arg0 forChat:(id)arg1 ;
-(void)_setReplyToGuidOnMessage:(id)arg0 forChat:(id)arg1 ;
-(void)_trackUsageForMessage:(id)arg0 ;
-(void)_unregisterChat:(id)arg0 ;
-(void)_unregisterChatWithGUID:(id)arg0 ;
-(void)_updateBlackholedChatsExist:(BOOL)arg0 ;
-(void)_updateChat:(id)arg0 groupID:(id)arg1 shouldPostNotification:(BOOL)arg2 ;
-(void)_updateChat:(id)arg0 updateIsFiltered:(NSInteger)arg1 ;
-(void)_updateChatAutoDonationBehavior:(id)arg0 withInfo:(id)arg1 shouldPostNotification:(BOOL)arg2 ;
-(void)_updateFilterediMessageChatsExist:(BOOL)arg0 ;
-(void)_updateInfo:(id)arg0 forGUID:(id)arg1 updatingUnreadCount:(BOOL)arg2 ;
-(void)_updateInfo:(id)arg0 forGUID:(id)arg1 updatingUnreadCount:(BOOL)arg2 shouldPostNotifications:(BOOL)arg3 ;
-(void)_updatePersonCentricIDToChatMapForChat:(id)arg0 toNewPersonCentricID:(id)arg1 ;
-(void)_updateUnreadCountForChat:(id)arg0 ;
-(void)_updateUnreadCountForChat:(id)arg0 shouldPostNotification:(BOOL)arg1 ;
-(void)_validateChatQueryResults:(id)arg0 matchCurrentCacheResults:(id)arg1 ;
-(void)_verifyChatMergeWithChat:(id)arg0 dictionary:(id)arg1 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 chatPersonCentricID:(id)arg4 member:(id)arg5 statusChanged:(int)arg6 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 error:(id)arg4 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 groupID:(id)arg4 chatPersonCentricID:(id)arg5 messageReceived:(id)arg6 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 groupID:(id)arg4 chatPersonCentricID:(id)arg5 messageSent:(id)arg6 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 groupID:(id)arg4 chatPersonCentricID:(id)arg5 messagesReceived:(id)arg6 messagesComingFromStorage:(BOOL)arg7 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 groupID:(id)arg4 chatPersonCentricID:(id)arg5 statusChanged:(int)arg6 handleInfo:(id)arg7 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 invitationReceived:(id)arg4 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messageUpdated:(id)arg4 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messageUpdated:(id)arg4 suppressNotification:(BOOL)arg5 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messagesUpdated:(id)arg4 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 notifySentMessage:(id)arg4 sendTime:(id)arg5 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 updateProperties:(id)arg4 ;
-(void)attachmentQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 finishedWithResult:(id)arg3 ;
-(void)blackholedChatsExist:(BOOL)arg0 ;
-(void)chat:(id)arg0 chatPersonCentricID:(id)arg1 displayNameUpdated:(id)arg2 ;
-(void)chat:(id)arg0 chatPersonCentricID:(id)arg1 displayNameUpdated:(id)arg2 sender:(id)arg3 ;
-(void)chat:(id)arg0 engramIDUpdated:(id)arg1 ;
-(void)chat:(id)arg0 isFilteredUpdated:(NSInteger)arg1 ;
-(void)chat:(id)arg0 isRecoveredUpdated:(BOOL)arg1 ;
-(void)chat:(id)arg0 lastAddressedHandleUpdated:(id)arg1 ;
-(void)chat:(id)arg0 lastAddressedSIMIDUpdated:(id)arg1 ;
-(void)chat:(id)arg0 lastMessageTimeStampOnLoadUpdated:(CGFloat)arg1 ;
-(void)chat:(id)arg0 lastSeenMessageGuidUpdated:(id)arg1 ;
-(void)chat:(id)arg0 nicknamesUpdated:(id)arg1 ;
-(void)chat:(id)arg0 propertiesUpdated:(id)arg1 ;
-(void)chat:(id)arg0 uncachedAttachmentCountUpdated:(id)arg1 ;
-(void)chat:(id)arg0 updated:(id)arg1 ;
-(void)chatLoadedWithChatIdentifier:(id)arg0 chats:(id)arg1 ;
-(void)chatsNeedRemerging:(id)arg0 groupedChats:(id)arg1 ;
-(void)conversationManager:(id)arg0 activeRemoteParticipantsChangedForConversation:(id)arg1 ;
-(void)conversationManager:(id)arg0 activitySessionsChangedForConversation:(id)arg1 ;
-(void)conversationManager:(id)arg0 remoteMembersChangedForConversation:(id)arg1 ;
-(void)conversationManager:(id)arg0 removedActiveConversation:(id)arg1 ;
-(void)conversationManager:(id)arg0 stateChangedForConversation:(id)arg1 ;
-(void)dealloc;
-(void)downloadedPurgedAssetBatchForChatIDs:(id)arg0 completedTransferGUIDs:(id)arg1 ;
-(void)engroupParticipantsUpdatedForChat:(id)arg0 ;
-(void)enumerateAllChatsAndAttachmentSizesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)finishedDownloadingPurgedAssetsForChatIDs:(id)arg0 ;
-(void)forcedReloadingChatRegistryWithQueryID:(id)arg0 ;
-(void)frequentRepliesQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 finishedWithResult:(id)arg3 limit:(NSInteger)arg4 ;
-(void)frequentRepliesQuery:(id)arg0 finishedWithResult:(id)arg1 limit:(NSInteger)arg2 ;
-(void)groupPhotoUpdatedForChatIdentifier:(id)arg0 style:(unsigned char)arg1 account:(id)arg2 userInfo:(id)arg3 ;
-(void)historicalMessageGUIDsDeleted:(id)arg0 chatGUIDs:(id)arg1 queryID:(id)arg2 ;
-(void)historyQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 finishedWithResult:(id)arg3 limit:(NSInteger)arg4 ;
-(void)isDownloadingQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 finishedWithResult:(BOOL)arg3 ;
-(void)lastFailedMessageDateChanged:(NSInteger)arg0 ;
-(void)leftChat:(id)arg0 ;
-(void)loadedChats:(id)arg0 queryID:(id)arg1 ;
-(void)loadedRecoverableMessagesMetadata:(id)arg0 queryID:(id)arg1 ;
-(void)markAsSpamQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 finishedWithResult:(id)arg3 ;
-(void)markedAsReadForMessageGUID:(id)arg0 success:(BOOL)arg1 queryID:(id)arg2 ;
-(void)moveMessagesInChatsToRecentlyDeleted:(id)arg0 deleteDate:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)moveMessagesWithGUIDsToRecentlyDeleted:(id)arg0 deleteDate:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)movedMessagesToRecentlyDeletedForChatsWithGUIDs:(id)arg0 queryID:(id)arg1 ;
-(void)movedMessagesToRecentlyDeletedWithQueryID:(id)arg0 ;
-(void)pagedHistoryQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 numberOfMessagesBefore:(NSInteger)arg3 numberOfMessagesAfter:(NSInteger)arg4 finishedWithResult:(id)arg5 hasMessagesBefore:(BOOL)arg6 hasMessagesAfter:(BOOL)arg7 ;
-(void)permanentlyDeleteRecoverableMessagesInChats:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(id)arg0 ;
-(void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(id)arg0 queryID:(id)arg1 ;
-(void)permanentlyDeletedRecoverableMessagesForChatsWithGUIDs:(id)arg0 deletedChatGUIDs:(id)arg1 ;
-(void)previouslyBlackholedChatLoadedWithChatIdentifier:(id)arg0 chats:(id)arg1 ;
-(void)previouslyBlackholedChatLoadedWithHandleIDs:(id)arg0 chat:(id)arg1 ;
-(void)recoverMessagesForChats:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)recoveredMessagesFromRecentlyDeletedForChatsWithGUIDs:(id)arg0 ;
-(void)recoveredMessagesWithQueryID:(id)arg0 ;
-(void)screenTimeEnablementChanged:(BOOL)arg0 ;
-(void)service:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 messagesUpdated:(id)arg3 ;
-(void)setUpInitialCallState;
-(void)setupComplete;
-(void)setupComplete:(BOOL)arg0 info:(id)arg1 ;
-(void)uncachedAttachmentCountQuery:(id)arg0 chatID:(id)arg1 services:(id)arg2 finishedWithResult:(id)arg3 ;
-(void)unreadCountChanged:(NSInteger)arg0 ;
-(void)unregisterChat:(id)arg0 ;
-(void)unregisterChatWithGUID:(id)arg0 ;
-(void)updateChatDictionaryArray:(id)arg0 createdChat:(id)arg1 joinstate:(NSInteger)arg2 setHasCommunicatedOveriMessage:(*BOOL)arg3 ;
-(void)updateEarliestMessageDateForChats:(id)arg0 completion:(id)arg1 ;
-(void)updateRecoverableMessagesMetadataSynchronously:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateRecoverableMessagesMetadataSynchronously:(BOOL)arg0 loadChats:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)verifyFilteringForAllChats;


@end


#endif