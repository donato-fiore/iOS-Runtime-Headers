// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHAT_H
#define IMCHAT_H

@class NSMutableSet, NSSet, NSArray, NSDate, NSDictionary, IMBrand, NSNumber, NSString, IMScheduledUpdater, NSMutableDictionary, IMDaemonController<IMDaemonProtocol>, IMSharedEmergencyInfo, NSData, IMMessageItem, NSMutableArray, IMTimingCollection;
@protocol IMPhotoLibraryPersistenceManagerListener, IMStateLoggable, INSpeakable, IMSendProgressDelegate, IMMomentSharePresentationCacheDelegate, IMChatItemRules;


#import "IMItemsController.h"
#import "IMMomentShareCache.h"
#import "IMMomentSharePresentationCache.h"
#import "IMAccount.h"
#import "IMHandle.h"
#import "IMChatScrutinyController.h"
#import "IMMessage.h"
#import "IMInlineReplyController.h"
#import "IMOrderingTools.h"
#import "IMSendProgress.h"
#import "IMParticipantChangeChatItem.h"

@interface IMChat : IMItemsController <IMPhotoLibraryPersistenceManagerListener, IMStateLoggable, INSpeakable, IMSendProgressDelegate, IMMomentSharePresentationCacheDelegate>

 {
    IMMomentShareCache *_momentShareCache;
    IMMomentSharePresentationCache *_momentSharePresentationCache;
    NSUInteger _senderBlackholeWarningStatus;
}


@property (retain, nonatomic, setter=_setGUIDs:) NSMutableSet *_guids; // ivar: _guids
@property (readonly, nonatomic) BOOL _shouldRegisterChat;
@property (readonly, nonatomic) IMAccount *account; // ivar: _account
@property (readonly, nonatomic) BOOL allParticipantsBlocked;
@property (readonly, nonatomic) BOOL allRecipientsFollowingLocation;
@property (readonly, nonatomic) BOOL allRecipientsSharingLocation;
@property (readonly, nonatomic) NSSet *allSiblingFMFHandles;
@property (nonatomic) BOOL allowedByScreenTime; // ivar: _allowedByScreenTime
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic, getter=isAutoDonatingMessages) BOOL autoDonateMessages;
@property (nonatomic) NSInteger autoDonationBehavior; // ivar: _autoDonationBehavior
@property (readonly, nonatomic) NSDate *availabilityStatusPublishedDate;
@property (copy, nonatomic) NSDictionary *bizIntent; // ivar: _bizIntent
@property (readonly, nonatomic) IMBrand *brand;
@property (readonly, nonatomic) IMHandle *businessHandle;
@property (retain, nonatomic) IMHandle *cachedEUHandle; // ivar: _cachedEUHandle
@property (nonatomic) NSInteger cachedShouldShowReportSpam; // ivar: _cachedShouldShowReportSpam
@property (nonatomic) NSInteger cachedShouldShowSpam; // ivar: _cachedShouldShowSpam
@property (retain, nonatomic) NSNumber *cachedStewieSharingChat; // ivar: _cachedStewieSharingChat
@property (readonly, nonatomic) BOOL canHaveMultipleParticipants;
@property (readonly, nonatomic) BOOL canLeaveChat;
@property (readonly, nonatomic) NSString *chatIdentifier;
@property (retain, nonatomic) NSObject<IMChatItemRules> *chatItemRules; // ivar: _chatItemRules
@property (readonly, copy, nonatomic) NSArray *chatItems;
@property (retain, nonatomic) IMScheduledUpdater *chatItemsUpdater; // ivar: _chatItemsUpdater
@property (retain, nonatomic) NSMutableDictionary *chatProperties; // ivar: _chatProperties
@property (readonly, nonatomic) IMChatScrutinyController *chatScrutinyController;
@property (readonly, nonatomic) unsigned char chatStyle; // ivar: _style
@property (nonatomic) *void contextInfo; // ivar: _context
@property (readonly, copy, nonatomic) NSNumber *countOfAttachmentsNotCachedLocally;
@property (retain, nonatomic) NSNumber *countOfAttachmentsNotCachedLocally; // ivar: _countOfAttachmentsNotCachedLocally
@property (retain, nonatomic) NSNumber *countOfMessagesMarkedAsSpam; // ivar: _countOfMessagesMarkedAsSpam
@property (retain, nonatomic) NSString *currentLocationGUID; // ivar: _currentLocationGUID
@property (retain, nonatomic) NSString *currentUnreadHistoryQuery; // ivar: _currentUnreadHistoryQuery
@property (readonly, nonatomic) IMDaemonController<IMDaemonProtocol> *daemonController;
@property (nonatomic) NSUInteger dbFailedCount; // ivar: _dbFailedCount
@property (nonatomic) NSUInteger dbUnreadCount; // ivar: _dbUnreadCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIndependentID;
@property (nonatomic) BOOL didSendAFinishedMessage; // ivar: _didSendAFinishedMessage
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) char downgradeState; // ivar: _downgradeState
@property (retain, nonatomic) IMScheduledUpdater *downgradeStateUpdater; // ivar: _downgradeStateUpdater
@property (retain, nonatomic) NSDate *earliestCachedMessageDate; // ivar: _earliestCachedMessageDate
@property (retain, nonatomic) NSDate *earliestRecoverableMessageDeletionDate; // ivar: _earliestRecoverableMessageDeletionDate
@property (readonly, nonatomic) IMHandle *emergencyUserHandle;
@property (readonly, nonatomic) IMSharedEmergencyInfo *emergencyUserInfo;
@property (readonly, nonatomic) NSData *engramID; // ivar: _engramID
@property (readonly, nonatomic) NSInteger filterCategory;
@property (readonly, nonatomic) NSInteger filterSubCategory;
@property (readonly, nonatomic) IMMessage *firstMessage;
@property (readonly, nonatomic) NSSet *fmfHandles;
@property (nonatomic) BOOL forceMMS;
@property (nonatomic) BOOL forceMMS; // ivar: _forceMMS
@property (retain, nonatomic) NSArray *frequentReplies; // ivar: _frequentReplies
@property (readonly, nonatomic, getter=isGroupChat) BOOL groupChat;
@property (retain, nonatomic) NSString *groupChatIdentifierUppercase; // ivar: _groupChatIdentifierUppercase
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (nonatomic) BOOL hasBeenConfigured; // ivar: _hasBeenConfigured
@property (readonly, nonatomic) BOOL hasCommSafetySensitiveMessage;
@property (nonatomic) BOOL hasEarlierMessagesToLoad; // ivar: _hasEarlierMessagesToLoad
@property (nonatomic) BOOL hasHadSuccessfulQuery; // ivar: _hasHadSuccessfulQuery
@property (nonatomic) NSInteger hasKnownParticipantsCacheStatus; // ivar: _hasKnownParticipantsCacheStatus
@property (readonly, nonatomic) BOOL hasMessageFromMe;
@property (readonly, nonatomic) BOOL hasMoreMessagesToLoad;
@property (readonly, nonatomic) BOOL hasMoreRecentMessagesToLoad;
@property (nonatomic) BOOL hasMoreRecentMessagesToLoad; // ivar: _hasMoreRecentMessagesToLoad
@property (nonatomic) BOOL hasQueriedForSiblingChats; // ivar: _hasQueriedForSiblingChats
@property (readonly, nonatomic) BOOL hasRecipientsFollowingLocation;
@property (readonly, nonatomic) BOOL hasRecipientsSharingLocation;
@property (nonatomic) BOOL hasRefreshedServiceForSending; // ivar: _hasRefreshedServiceForSending
@property (readonly, nonatomic) BOOL hasSiblingRecipientsSharingLocation;
@property (nonatomic) BOOL hasSurfRequest; // ivar: _hasSurfRequest
@property (readonly, nonatomic) BOOL hasUnhandledInvitation;
@property (readonly, nonatomic) BOOL hasVerifiedBusiness;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *identityHash;
@property (nonatomic) BOOL ignoreDowngradeStatusUpdates; // ivar: _ignoreDowngradeStatusUpdates
@property (readonly, nonatomic) IMInlineReplyController *inlineReplyController; // ivar: _inlineReplyController
@property (retain, nonatomic) IMMessage *invitationForPendingParticipants; // ivar: _invitationForPendingParticipants
@property (readonly, nonatomic) BOOL isAppleChat;
@property (readonly, nonatomic) BOOL isBusinessChat;
@property (readonly, nonatomic) BOOL isCommSafetySensitiveMessageRecent;
@property (nonatomic) BOOL isCurrentlyDownloadingPurgedAssets; // ivar: _isCurrentlyDownloadingPurgedAssets
@property (readonly, nonatomic) BOOL isCurrentlyDownloadingPurgedAttachments;
@property (nonatomic) NSInteger isFiltered; // ivar: _isFiltered
@property (nonatomic) BOOL isFirstMessageInvitation; // ivar: _isFirstMessageInvitation
@property (readonly, nonatomic) BOOL isMakoChat;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isReplyEnabled;
@property (nonatomic) BOOL isSubscriptionSwitchParticipantAddTypeFound; // ivar: _isSubscriptionSwitchParticipantAddTypeFound
@property (nonatomic) BOOL isUpdatingChatItems; // ivar: _isUpdatingChatItems
@property (readonly, nonatomic) NSInteger joinState; // ivar: _joinState
@property (retain, nonatomic) NSString *lastAddressedHandleID; // ivar: _lastAddressedHandleID
@property (retain, nonatomic) NSString *lastAddressedSIMID; // ivar: _lastAddressedSIMID
@property (readonly, nonatomic) IMMessage *lastFinishedMessage;
@property (readonly, nonatomic) NSDate *lastFinishedMessageDate;
@property (readonly, nonatomic) NSInteger lastFinishedMessageID;
@property (readonly, nonatomic) IMMessageItem *lastFinishedMessageItem;
@property (readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property (readonly, nonatomic) IMMessage *lastIncomingFinishedMessageWithTextContent;
@property (readonly, nonatomic) IMMessage *lastIncomingMessage;
@property (readonly, nonatomic) NSArray *lastIncomingMessageBlockWithTextContent;
@property (readonly, nonatomic) IMMessage *lastMessage;
@property (readonly, nonatomic) BOOL lastMessageExists;
@property (nonatomic) NSInteger lastMessageTimeStampOnLoad; // ivar: _lastMessageTimeStampOnLoad
@property (readonly, nonatomic) NSArray *lastOutgoingMessageBlockWithTextContent;
@property (readonly, nonatomic) NSString *lastSeenMessageGuid;
@property (readonly, nonatomic) IMMessage *lastSentMessage;
@property (readonly, nonatomic) NSDate *lastSentMessageDate;
@property (retain, nonatomic) NSDate *lastTUConversationCreatedDate;
@property (retain, nonatomic) NSDate *latestRecoverableMessageDeletionDate; // ivar: _latestRecoverableMessageDeletionDate
@property (nonatomic) CGFloat latestTypingIndicatorTimeInterval; // ivar: _latestTypingIndicatorTimeInterval
@property (readonly, nonatomic) NSString *localTypingMessageGUID;
@property (retain, nonatomic) NSString *localUserIsComposing; // ivar: _localUserIsComposing
@property (nonatomic) BOOL localUserIsRecording;
@property (nonatomic) BOOL localUserIsTyping;
@property (retain, nonatomic) NSSet *mergedPinningIdentifiers; // ivar: _mergedPinningIdentifiers
@property (readonly, nonatomic) NSUInteger messageCount;
@property (readonly, nonatomic) NSUInteger messageFailureCount;
@property (retain, nonatomic) NSMutableArray *messagesPendingJoin; // ivar: _messagesPendingJoin
@property (readonly, nonatomic) IMMomentSharePresentationCache *momentSharePresentationCache;
@property (nonatomic) NSUInteger numberOfMessagesToKeepLoaded;
@property (retain, nonatomic) IMOrderingTools *orderingTools; // ivar: _orderingTools
@property (retain, nonatomic) NSString *originalGroupID; // ivar: _originalGroupID
@property (nonatomic, getter=isOscarChat) BOOL oscarChat; // ivar: _oscarChat
@property (readonly, nonatomic) NSUInteger overallChatStatus;
@property (readonly, nonatomic) NSArray *participantDNDContactHandles;
@property (retain, nonatomic) NSMutableDictionary *participantProperties; // ivar: _participantProperties
@property (retain, nonatomic) NSMutableDictionary *participantStates; // ivar: _participantStates
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSString *personCentricID; // ivar: _personCentricID
@property (readonly, nonatomic) NSString *pinningIdentifier;
@property (nonatomic) BOOL prefersTextResponseToIncomingAudioMessages;
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (retain, nonatomic) IMHandle *recipient;
@property (nonatomic) NSUInteger recoverableMessagesCount; // ivar: _recoverableMessagesCount
@property (nonatomic, getter=isRecovered) BOOL recovered; // ivar: _recovered
@property (readonly, nonatomic) NSString *roomName; // ivar: _roomName
@property (retain, nonatomic) NSString *roomNameWithoutSuffix; // ivar: _roomNameWithoutSuffix
@property (retain, nonatomic) IMSendProgress *sendProgress; // ivar: _sendProgress
@property (readonly, nonatomic) BOOL shouldDisplayUnavailabilityIndicator;
@property (readonly, nonatomic) BOOL shouldShowAutoDonationAction;
@property (retain, nonatomic) NSMutableArray *showingEditHistoryForChatItemGUIDs; // ivar: _showingEditHistoryForChatItemGUIDs
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (nonatomic, getter=isStewieChat) BOOL stewieChat; // ivar: _stewieChat
@property (readonly, nonatomic, getter=isStewieSharingChat) BOOL stewieSharingChat;
@property (readonly, nonatomic) NSString *stewieSharingSuggestedName;
@property (retain, nonatomic) IMParticipantChangeChatItem *subscriptionSwitchParticipantAddChatItem; // ivar: _subscriptionSwitchParticipantAddChatItem
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressAccountRetargetingForNamedGroupConversation;
@property (retain, nonatomic) IMTimingCollection *timingCollection; // ivar: _timingCollection
@property (retain, nonatomic) NSString *typingGUID; // ivar: _typingGUID
@property (readonly, nonatomic) NSUInteger unreadMessageCount;
@property (nonatomic, getter=isUnregistered) BOOL unregistered; // ivar: _unregistered
@property (readonly, nonatomic) NSString *vocabularyIdentifier;
@property (readonly, nonatomic) BOOL wantsSenderBlackholeWarning;
@property (nonatomic) BOOL wasInvitationHandled; // ivar: _wasInvitationHandled
@property (readonly, copy, nonatomic) NSDate *watermarkDate;
@property (readonly, nonatomic) NSInteger watermarkMessageID;


+(BOOL)isGUIDInAttemptingListInScrutinyMode:(id)arg0 ;
+(Class)_NPSManagerClass;
+(id)stateCaptureRecents;
+(id)watermarkComparator:(SEL)arg0 ;
+(void)_initializeFMF;
+(void)cleanWatermarkCache;
+(void)removeGUIDInAttemptingListInScrutinyMode:(id)arg0 ;
+(void)storeGUIDInAttemptingListInScrutinyMode:(id)arg0 ;
-(BOOL)_accountIsOperational:(id)arg0 forService:(id)arg1 ;
-(BOOL)_handleIncomingItem:(id)arg0 ;
-(BOOL)_handleIncomingItem:(id)arg0 updateRecipient:(BOOL)arg1 ;
-(BOOL)_handleIncomingItem:(id)arg0 updateRecipient:(BOOL)arg1 suppressNotification:(BOOL)arg2 ;
-(BOOL)_handleIncomingItem:(id)arg0 updateRecipient:(BOOL)arg1 suppressNotification:(BOOL)arg2 updateReplyCounts:(BOOL)arg3 ;
-(BOOL)_hasCommunicatedOnService:(id)arg0 ;
-(BOOL)_hasJustSentAMessage;
-(BOOL)_isDuplicate:(id)arg0 ;
-(BOOL)_processSupportsHistory;
-(BOOL)_sanityCheckAccounts;
-(BOOL)_serverBagPreventsScrutinyMode;
-(BOOL)_shouldSendCancelTypingIndicator;
-(BOOL)_updateJoinStateWithMessageIfNeeded:(id)arg0 ;
-(BOOL)allParticipantsAreContacts;
-(BOOL)allowedToShowConversation;
-(BOOL)allowedToShowConversationSync;
-(BOOL)authorizationToSendCurrentLocationMessageDenied;
-(BOOL)authorizationToSendCurrentLocationMessageDetermined;
-(BOOL)authorizedToSendCurrentLocationMessage;
-(BOOL)canAddParticipant:(id)arg0 ;
-(BOOL)canAddParticipants:(id)arg0 ;
-(BOOL)canRemoveParticipants:(id)arg0 ;
-(BOOL)canSendCurrentLocationMessage;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)canSendTransfer:(id)arg0 ;
-(BOOL)containsMessageFromContactOrMe;
-(BOOL)deleteAllHistory;
-(BOOL)hasKnownParticipants;
-(BOOL)hasKnownParticipantsCache;
-(BOOL)hasStoredMessageWithGUID:(id)arg0 ;
-(BOOL)hasSurfRequestForPaymentType:(NSUInteger)arg0 ;
-(BOOL)hasSurfRequestNotFromMe:(id)arg0 ;
-(BOOL)isCategorized;
-(BOOL)isDowngraded;
-(BOOL)isEmergencyChat;
-(BOOL)isHoldingUpdatesForKey:(id)arg0 ;
-(BOOL)isInScrutinyMode;
-(BOOL)isMessagesAuthorizedToAccessFocusStatus;
-(BOOL)isMuted;
-(BOOL)isSMS;
-(BOOL)isShowingEditHistoryForAnyChatItem;
-(BOOL)isShowingEditHistoryForChatItemGUID:(id)arg0 ;
-(BOOL)mapsToTUConversation:(id)arg0 ;
-(BOOL)receivedResponseForChat;
-(BOOL)repliedToChat;
-(BOOL)shouldBeAllowListed;
-(BOOL)shouldForceToSMS;
-(NSInteger)_compareChat:(id)arg0 withDate:(id)arg1 withDate:(id)arg2 ;
-(NSInteger)chatPropertyValueFor:(NSInteger)arg0 ;
-(NSInteger)compareChatByDate:(id)arg0 ;
-(NSInteger)compareChatByTUDateAndLastFinishedMessageDate:(id)arg0 ;
-(NSInteger)numberOfTimesRespondedToThread;
-(NSInteger)transcriptSharingState;
-(NSUInteger)_flagsForCancelTypingIndicatorMessage;
-(NSUInteger)_flagsForTypingIndicatorMessage:(BOOL)arg0 ;
-(NSUInteger)markAsSpam:(NSUInteger)arg0 ;
-(NSUInteger)paymentTypeForMessage:(id)arg0 ;
-(NSUInteger)scrutinyModeAttemptCount;
-(NSUInteger)stateForParticipant:(id)arg0 ;
-(id)_archivedItemsToReplace:(id)arg0 isReplacingItems:(BOOL)arg1 ;
-(id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg0 ;
-(id)_existingMessageFromMessagePartGUID:(id)arg0 ;
-(id)_fetchMessagesBeforeAndAfterGUID:(id)arg0 numberOfMessagesToLoadBeforeGUID:(NSUInteger)arg1 numberOfMessagesToLoadAfterGUID:(NSUInteger)arg2 threadIdentifier:(id)arg3 synchronous:(BOOL)arg4 completion:(id)arg5 ;
-(id)_fetchMessagesUpToGUID:(id)arg0 limit:(NSUInteger)arg1 synchronous:(BOOL)arg2 completion:(id)arg3 ;
-(id)_fetchMessagesUpToLimit:(NSUInteger)arg0 synchronous:(BOOL)arg1 completion:(id)arg2 ;
-(id)_generatePersonCentricID;
-(id)_getCurrentLocale;
-(id)_getDeleteChatItemMap:(id)arg0 ;
-(id)_getMessageChatItemMap:(id)arg0 withDeleteMap:(id)arg1 andAllChatItems:(id)arg2 ;
-(id)_initWithDictionaryRepresentation:(id)arg0 items:(id)arg1 participantsHint:(id)arg2 accountHint:(id)arg3 ;
-(id)_initWithGUID:(id)arg0 account:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 displayName:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 items:(id)arg7 participants:(id)arg8 isFiltered:(NSInteger)arg9 hasHadSuccessfulQuery:(BOOL)arg10 isRecovered:(BOOL)arg11 ;
-(id)_initWithItems:(id)arg0 ;
-(id)_mergeParticipantIDs;
-(id)_pendingParticipants;
-(id)_performQueryWithKey:(id)arg0 loadImmediately:(BOOL)arg1 block:(id)arg2 ;
// -(id)_performQueryWithKey:(id)arg0 loadImmediately:(BOOL)arg1 block:(id)arg2 completion:(unk)arg3  ;
-(id)_previousAccountForService:(id)arg0 ;
-(id)_privateInitWithAccount:(id)arg0 style:(unsigned char)arg1 roomName:(id)arg2 messages:(id)arg3 participants:(id)arg4 isFiltered:(NSInteger)arg5 hasHadSuccessfulQuery:(BOOL)arg6 isRecovered:(BOOL)arg7 ;
-(id)_renderingDataDictionary;
-(id)_storedWatermarkMessageID;
-(id)_tuDateForChat:(id)arg0 ;
-(id)activeParticipantsForTUConversation;
-(id)allChatProperties;
-(id)allMessagesToReportAsSpam;
-(id)allPropertiesOfParticipant:(id)arg0 ;
-(id)callDurationStringForTuCall;
-(id)chatItemsForItems:(id)arg0 ;
-(id)chatRegistry;
-(id)contacts;
-(id)conversation;
-(id)conversationContext;
-(id)conversationWithUUID:(id)arg0 ;
-(id)currentTUCall;
-(id)displayNameWithRawAddress:(BOOL)arg0 isSpamFilteringEnabled:(BOOL)arg1 ;
-(id)init;
-(id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(NSInteger)arg0 ;
-(id)lastTranslatableMessageGUIDWithLanguageCode:(id)arg0 ;
-(id)loadFrequentRepliesLimit:(NSUInteger)arg0 loadImmediately:(BOOL)arg1 ;
-(id)loadMessagesBeforeAndAfterGUID:(id)arg0 numberOfMessagesToLoadBeforeGUID:(NSUInteger)arg1 numberOfMessagesToLoadAfterGUID:(NSUInteger)arg2 loadImmediately:(BOOL)arg3 threadIdentifier:(id)arg4 ;
-(id)loadMessagesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)loadMessagesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 loadImmediately:(BOOL)arg2 ;
-(id)loadMessagesUpToGUID:(id)arg0 date:(id)arg1 limit:(NSUInteger)arg2 loadImmediately:(BOOL)arg3 ;
-(id)loadMessagesUpToGUID:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)loadUnreadMessagesWithLimit:(NSUInteger)arg0 fallbackToMessagesUpToGUID:(id)arg1 ;
-(id)localizedUnreadShortcutTitle;
-(id)messageForGUID:(id)arg0 ;
-(id)messageGuidsForMyUnreadMentions;
-(id)messageItemForGUID:(id)arg0 ;
-(id)messagesToReportAsSpamFromChatItems:(id)arg0 ;
-(id)momentShareCache;
-(id)muteUntilDate;
-(id)participantHandleIDs;
-(id)participantsWithState:(NSUInteger)arg0 ;
-(id)remoteMembersForTUConversation;
-(id)stateDictionaryForDiagnosticsRequest;
-(id)testChatItems;
-(id)valueForChatProperty:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ofParticipant:(id)arg1 ;
-(void)__clearReadMessageCache;
-(void)_accountControllerUpdated:(id)arg0 ;
-(void)_accountLoggedOut:(id)arg0 ;
-(void)_addParticipants:(id)arg0 withState:(NSUInteger)arg1 ;
-(void)_automation_markAsRead:(BOOL)arg0 messageGUID:(id)arg1 forChatGUID:(id)arg2 fromMe:(BOOL)arg3 ;
-(void)_calculateDowngradeState;
-(void)_calculateDowngradeStateTimerFired;
-(void)_clearCachedIdentifier;
-(void)_clearDowngradeMarkers;
-(void)_clearPendingMessages;
-(void)_clearUnreadCount;
-(void)_configureLocationShareItem:(id)arg0 ;
-(void)_daemonAlive:(id)arg0 ;
-(void)_daemonDied:(id)arg0 ;
-(void)_delayedInvalidateDowngradeState;
-(void)_deleteTransfersWithGUIDs:(id)arg0 fromChatItems:(id)arg1 ;
-(void)_endTiming;
-(void)_engroupParticipantsUpdated;
-(void)_fixItemForSendingMessageTime:(id)arg0 ;
-(void)_fixSendingItemDateAndSortID:(id)arg0 ;
-(void)_handleAddressBookChangeForRecipientUID:(id)arg0 ;
-(void)_handleAttributionChanged;
-(void)_handleHandleStatusChanged:(id)arg0 ;
-(void)_handleItem:(id)arg0 ;
-(void)_handleItem:(id)arg0 forChatStyle:(unsigned char)arg1 ;
-(void)_handleItem:(id)arg0 forChatStyle:(unsigned char)arg1 updateReplyCounts:(BOOL)arg2 ;
-(void)_handleMessageGUIDDeletions:(id)arg0 ;
-(void)_initialize;
-(void)_insertHistoricalMessages:(id)arg0 queryID:(id)arg1 isRefresh:(BOOL)arg2 isHistoryQuery:(BOOL)arg3 ;
-(void)_insertHistoricalMessages:(id)arg0 queryID:(id)arg1 isRefresh:(BOOL)arg2 isHistoryQuery:(BOOL)arg3 isReplacingItems:(BOOL)arg4 limit:(NSUInteger)arg5 hasMessagesBefore:(BOOL)arg6 hasMessagesAfter:(BOOL)arg7 ;
-(void)_insertHistoricalMessages:(id)arg0 queryID:(id)arg1 isRefresh:(BOOL)arg2 isHistoryQuery:(BOOL)arg3 limit:(NSUInteger)arg4 ;
-(void)_invalidateDowngradeState;
-(void)_inviteParticipants:(id)arg0 reason:(id)arg1 toiMessageChat:(BOOL)arg2 ;
-(void)_inviteParticipantsToChat:(id)arg0 reason:(id)arg1 toiMessageChat:(BOOL)arg2 ;
-(void)_invitePendingParticipants;
-(void)_itemsDidChange:(id)arg0 ;
-(void)_leaveChat:(BOOL)arg0 ;
-(void)_markItemAsPlayed:(id)arg0 ;
-(void)_momentShareCacheDidChange:(id)arg0 ;
-(void)_participant:(id)arg0 statusChanged:(int)arg1 ;
-(void)_persistSortIDFromReplacedItem:(id)arg0 toItem:(id)arg1 ;
-(void)_postIMChatItemsDidChangeNotificationWithInserted:(id)arg0 removed:(id)arg1 reload:(id)arg2 regenerate:(id)arg3 oldChatItems:(id)arg4 newChatItems:(id)arg5 ;
-(void)_postNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)_recomputeOverallChatStatusQuietly:(BOOL)arg0 ;
-(void)_refreshServiceForSendingIfNeededWithMessage:(id)arg0 ;
-(void)_reloadChatItemsForHandleAvailabilityChange;
-(void)_reloadChatItemsForJunkStateChange;
-(void)_reloadChatItemsForStewieStateChange;
-(void)_removeItem:(id)arg0 ;
-(void)_removeParticipantsFromChat:(id)arg0 reason:(id)arg1 fromiMessageChat:(BOOL)arg2 ;
-(void)_replaceItems:(id)arg0 ;
-(void)_replaceStaleChatItems;
-(void)_sendMessage:(id)arg0 adjustingSender:(BOOL)arg1 shouldQueue:(BOOL)arg2 ;
-(void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg0 ;
-(void)_setDBFailedCount:(NSUInteger)arg0 ;
-(void)_setDBUnreadCount:(NSUInteger)arg0 ;
-(void)_setDBUnreadCount:(NSUInteger)arg0 postNotification:(BOOL)arg1 ;
-(void)_setIsDownloadingPurgedAssets:(BOOL)arg0 ;
-(void)_setParticipantState:(NSUInteger)arg0 forHandle:(id)arg1 quietly:(BOOL)arg2 ;
-(void)_setParticipantState:(NSUInteger)arg0 forHandles:(id)arg1 quietly:(BOOL)arg2 ;
-(void)_setPreviousAccount:(id)arg0 forService:(id)arg1 ;
-(void)_setRenderingDataDictionary:(id)arg0 ;
-(void)_setTimerForReadMessageCache;
-(void)_setupObservation;
-(void)_showErrorMessage:(id)arg0 ;
-(void)_startTiming:(id)arg0 ;
-(void)_targetToService:(id)arg0 newComposition:(BOOL)arg1 ;
-(void)_updateBizIntentForMessageIfNeeded:(id)arg0 ;
-(void)_updateChatItemsForChatItemUpdater;
-(void)_updateChatItemsWithDataDetectorResultsForReason:(id)arg0 ;
-(void)_updateChatItemsWithReason:(id)arg0 block:(id)arg1 ;
// -(void)_updateChatItemsWithReason:(id)arg0 block:(id)arg1 shouldPost:(unk)arg2  ;
-(void)_updateDisplayName:(id)arg0 ;
-(void)_updateDisplayName:(id)arg0 sender:(id)arg1 ;
-(void)_updateDowngradeState:(char)arg0 checkAgainInterval:(CGFloat)arg1 ;
-(void)_updateEngramID:(id)arg0 ;
-(void)_updateExistingMessageWithSyndicationAction:(id)arg0 ;
-(void)_updateFileAttachmentGUIDsForMessageIfNeeded:(id)arg0 withPayloadAttachments:(id)arg1 ;
-(void)_updateLastAddressedHandleID:(id)arg0 ;
-(void)_updateLastAddressedSIMID:(id)arg0 ;
-(void)_updateLastSeenMessageGuid:(id)arg0 ;
-(void)_updateLocaleForMessageIfNeeded:(id)arg0 ;
-(void)_updateLocationShareItemsForSender:(id)arg0 ;
-(void)_updateMessageItemStewieIfNeeded:(id)arg0 ;
-(void)_updateMessageItemTimeIfNeeded:(id)arg0 ;
-(void)_updatePayloadForMessageIfNeeded:(id)arg0 ;
-(void)_updateRepliesIfNecessaryWithItem:(id)arg0 ;
-(void)_updateRepliesIfNecessaryWithRemovedItems:(id)arg0 threadIdentifiersOfRemovedParts:(id)arg1 ;
-(void)_updateSenderForMessageIfNeeded:(id)arg0 adjustingSender:(BOOL)arg1 ;
-(void)_updateTypingGUIDForMessageIfNeeded:(id)arg0 ;
-(void)_validateChatRegistrationWithRegistry;
-(void)acceptInvitation;
-(void)addHandlesToGoupFaceTimeChatIfRegistered:(id)arg0 ;
-(void)addPendingParticipants:(id)arg0 ;
-(void)autoInviteToViewAvailabilityIfNeeded;
-(void)autoReportSpam;
-(void)beginHoldingUpdatesForKey:(id)arg0 ;
-(void)beginListeningToAttributionChanges;
-(void)beginObservingHandleAvailability;
-(void)beginShowingEditHistoryForChatItemGUID:(id)arg0 ;
-(void)canShareFocusStatusWithCompletion:(id)arg0 ;
-(void)cancelMessage:(id)arg0 ;
-(void)clear;
-(void)clearSMSCategory;
-(void)clearScrutinyMode;
-(void)closeSession;
-(void)createIMChatItemForTransientAttachmentWithAssetUUID:(id)arg0 parentChatItemGUID:(id)arg1 ;
-(void)dealloc;
-(void)declineInvitation;
-(void)deleteChatItems:(id)arg0 ;
-(void)deleteChatItems:(id)arg0 fromChatItems:(id)arg1 ;
-(void)deleteChatItemsWithTransferGUIDs:(id)arg0 fromMessageItem:(id)arg1 ;
-(void)deleteExtensionPayloadData;
-(void)deleteIMMessageItems:(id)arg0 ;
-(void)deleteTransfers:(id)arg0 ;
-(void)didUnregisterFromRegistry:(id)arg0 ;
-(void)dismissInlineReplies;
-(void)downgradeMessage:(id)arg0 manualDowngrade:(BOOL)arg1 ;
-(void)downgradeMessage:(id)arg0 manualDowngrade:(BOOL)arg1 downgradeChat:(BOOL)arg2 ;
-(void)downloadPurgedAttachments;
-(void)editMessage:(id)arg0 atPartIndex:(NSInteger)arg1 withNewPartText:(id)arg2 backwardCompatabilityText:(id)arg3 ;
-(void)endHoldingUpdatesForAllKeys;
-(void)endHoldingUpdatesForKey:(id)arg0 ;
-(void)endListeningToAttributionChanges;
-(void)endObservingHandleAvailability;
-(void)endShowingEditHistoryForAllChatItems;
-(void)endShowingEditHistoryForChatItemGUID:(id)arg0 ;
-(void)fetchMessagesBeforeAndAfterGUID:(id)arg0 numberOfMessagesToLoadBeforeGUID:(NSUInteger)arg1 numberOfMessagesToLoadAfterGUID:(NSUInteger)arg2 threadIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)fetchMessagesUpToGUID:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchMessagesUpToLimit:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)forceCancelTypingIndicator;
-(void)initiateTUConversationWithVideoEnabled:(BOOL)arg0 ;
-(void)initiateTUDialRequestWithVideoEnabled:(BOOL)arg0 ;
-(void)invalidateHasKnownParticipantsCache;
-(void)invalidateSpamIndicatorCachedValues;
-(void)invalidateSpamIndicatorCachedValuesIfNeeded;
-(void)inviteParticipants:(id)arg0 reason:(id)arg1 ;
-(void)inviteParticipantsToiMessageChat:(id)arg0 reason:(id)arg1 ;
-(void)isInvitedToViewMyFocusStatusWithCompletion:(id)arg0 ;
-(void)join;
-(void)joinExistingConversation:(id)arg0 ;
-(void)joinExistingTUConversation;
-(void)joinExistingTUConversationWithUUID:(id)arg0 ;
-(void)leave;
-(void)leaveiMessageGroup;
-(void)loadAttachments:(id)arg0 ;
-(void)loadInlineRepliesForThreadIdentifier:(id)arg0 threadOriginator:(id)arg1 messageGuid:(id)arg2 ;
-(void)loadParticipantContactsIfNecessary;
-(void)markAllLocationShareItemsAsUnactionable;
-(void)markAllMessagesAsRead;
-(void)markAsAutoSpamReported;
-(void)markAsHasBeenBlockContact;
-(void)markChatItemAsNotifyRecipient:(id)arg0 ;
-(void)markChatItemAsPlayed:(id)arg0 ;
-(void)markChatItemAsPlayedExpressiveSend:(id)arg0 ;
-(void)markChatItemAsSaved:(id)arg0 ;
-(void)markLastMessageAsUnread;
-(void)markMessageAsRead:(id)arg0 ;
-(void)markMessagesAsRead:(id)arg0 ;
-(void)momentSharePresentationCacheDidChange:(id)arg0 ;
-(void)photoLibraryPersistedSyndicatedAssetSetDidChange;
-(void)recoverFromJunk;
-(void)refreshServiceForSending;
-(void)remove;
-(void)removeMentionMessageGUID:(id)arg0 ;
-(void)removeParticipants:(id)arg0 reason:(id)arg1 ;
-(void)removeParticipantsFromiMessageChat:(id)arg0 reason:(id)arg1 ;
-(void)reportJunkToCarrier;
-(void)resendEditedMessage:(id)arg0 forPartIndex:(NSInteger)arg1 withBackwardCompatabilityText:(id)arg2 ;
-(void)resendGroupPhoto;
-(void)resortMessages;
-(void)retractMessagePart:(id)arg0 ;
-(void)retryGroupPhotoUploadIfNecessary;
-(void)saveWatermark;
-(void)sendAutoDonationUpdate:(BOOL)arg0 ;
-(void)sendCurrentLocationMessage;
-(void)sendGroupPhotoUpdate:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendProgress:(id)arg0 progressDidChange:(float)arg1 sendingMessages:(id)arg2 sendCount:(NSUInteger)arg3 totalCount:(NSUInteger)arg4 finished:(BOOL)arg5 ;
-(void)sendSyndicationAction:(unsigned char)arg0 forMessagePartGUID:(id)arg1 syndicatedMessagePartRange:(struct _NSRange )arg2 ;
-(void)sendUpdatedCollaborationMetadata:(id)arg0 forMessageGUID:(id)arg1 ;
-(void)setHasKnownParticipantsCache:(BOOL)arg0 ;
-(void)setMuteUntilDate:(id)arg0 ;
-(void)setValue:(id)arg0 forChatProperty:(id)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ofParticipant:(id)arg2 ;
-(void)shareLocationUntilDate:(id)arg0 ;
-(void)startTrackingParticipantLocations;
-(void)stopSharingLocation;
-(void)stopTrackingParticipantLocations;
-(void)stopTranscriptSharingWithChat;
-(void)updateChatItemsIfNeeded;
-(void)updateCommSafety:(NSInteger)arg0 forChatItem:(id)arg1 ;
-(void)updateCommSafety:(NSInteger)arg0 forChatItems:(id)arg1 ;
-(void)updateIsBlackholed:(BOOL)arg0 ;
-(void)updateIsEmergencyChat:(BOOL)arg0 ;
-(void)updateIsFiltered:(NSInteger)arg0 ;
-(void)updateLastMessageGUID:(id)arg0 forLanguageCode:(id)arg1 ;
-(void)updateLineSwitchedTo:(id)arg0 ;
-(void)updateMessage:(id)arg0 withIndexesOfDeletedItems:(id)arg1 withIndexToRangeMapOfDeletedItems:(id)arg2 deleteDate:(id)arg3 ;
-(void)updateSMSCategory:(NSInteger)arg0 subCategory:(NSInteger)arg1 ;
-(void)updateShouldForceToSMS:(BOOL)arg0 ;
-(void)updateTranscriptSharingState:(NSInteger)arg0 ;
-(void)updateWatermarks;
-(void)userToggledReadReceiptSwitch:(BOOL)arg0 ;
-(void)verifyFiltering;
-(void)watermarkInForScrutinyMode;
-(void)watermarkOutForScrutinyMode;


@end


#endif