// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDNOTIFICATIONSCONTROLLER_H
#define IMDNOTIFICATIONSCONTROLLER_H

@class NSSet, IMBusinessNameManager, UNNotificationCategory, CNContact, UNUserNotificationCenter;

#import <Foundation/Foundation.h>


@interface IMDNotificationsController : NSObject {
    NSInteger _lastAlertedMessageDate;
    NSInteger _lastAlertedFailedMessageDate;
    NSInteger _lastProcessingMessageDate;
}


@property (retain, nonatomic) NSSet *activeAccountAliases; // ivar: _activeAccountAliases
@property (retain, nonatomic) IMBusinessNameManager *businessNameManager; // ivar: _businessNameManager
@property (retain, nonatomic) UNNotificationCategory *incomingFilesNotificationCategory; // ivar: _incomingFilesNotificationCategory
@property (retain, nonatomic) UNNotificationCategory *incomingMessageNotificationCategory; // ivar: _incomingMessageNotificationCategory
@property NSInteger lastAlertedFailedMessageDate;
@property NSInteger lastAlertedMessageDate;
@property NSInteger lastProcessingMessageDate;
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (retain, nonatomic) NSSet *meTokens; // ivar: _meTokens
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter


+(BOOL)_isFacetimeHighlighted:(id)arg0 ;
+(BOOL)isSpamFilteringOn;
+(BOOL)isUnknownSenderFilteringOn;
+(id)_IMDCoreSpotlightCNContactForAddress:(id)arg0 ;
+(id)_addressBookNameForAddress:(id)arg0 orContact:(id)arg1 ;
+(id)_addressForHandle:(id)arg0 ;
+(id)_countryCodeForHandle:(id)arg0 ;
+(id)_displayNameForBusinessChatAddress:(id)arg0 businessNameManager:(id)arg1 ;
+(id)_displayNameForHandle:(id)arg0 andContact:(id)arg1 businessNameManager:(id)arg2 suggestionProvider:(id)arg3 ;
+(id)_formattedDisplayStringForAddress:(id)arg0 countryCode:(id)arg1 ;
+(id)_lpLinkMetadataForMessage:(id)arg0 attachmentPaths:(id)arg1 originalURL:(id)arg2 ;
+(id)_pluginPayloadAttachmentPathsForMessage:(id)arg0 ;
+(id)_truncateNameIfNeeded:(id)arg0 ;
+(id)_uncanonicalizedAddressForHandle:(id)arg0 ;
+(id)sharedInstance;
+(int)reminderAlertCount;
+(int)validateAlertCount:(int)arg0 ;
-(BOOL)_UTITypeMightBeAnimated:(id)arg0 ;
-(BOOL)_amIMentionedInMessage:(id)arg0 ;
-(BOOL)_areAllMessagePartsRetractedForMessageDictionary:(id)arg0 ;
-(BOOL)_chatHasCategoryMuted:(id)arg0 isFromContact:(BOOL)arg1 ;
-(BOOL)_chatHasDNDSet:(id)arg0 ;
-(BOOL)_chatHasDNDSetBasedOnChatGUID:(id)arg0 chatIdentifier:(id)arg1 groupID:(id)arg2 handles:(id)arg3 lastAddressedHandleString:(id)arg4 originalGroupID:(id)arg5 style:(NSInteger)arg6 ;
-(BOOL)_chatHasDNDSetBasedOnDNDIdentifier:(id)arg0 ;
-(BOOL)_contentBodyHasLocationURL:(id)arg0 ;
-(BOOL)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
-(BOOL)_deviceUnderFirstUnlock;
-(BOOL)_fileURLIsActuallyAnimated:(id)arg0 ;
-(BOOL)_filteringSettingConfirmed;
-(BOOL)_handleIsSpokenMessageAllowlisted:(id)arg0 chat:(id)arg1 message:(id)arg2 ;
-(BOOL)_hasMigratedPreferences;
-(BOOL)_haveMigrated;
-(BOOL)_isRaiseGestureEnabled;
-(BOOL)_isUnknownSenders:(id)arg0 ;
-(BOOL)_messageIsBusiness:(id)arg0 ;
-(BOOL)_messageIsFromFavorite:(id)arg0 ;
-(BOOL)_messageIsFromKnownContact:(id)arg0 ;
-(BOOL)_messageIsStewieEmergency:(id)arg0 ;
-(BOOL)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)arg0 ;
-(BOOL)_messageShouldBeSpoken:(id)arg0 chatDictionary:(id)arg1 isMostActive:(BOOL)arg2 ;
-(BOOL)_notificationIsFromAFilteredSender:(id)arg0 messageDictionary:(id)arg1 ;
-(BOOL)_overrideDNDForMessagesAddressingMe;
-(BOOL)_shouldOverrideChatSilencingBecauseImMentioned:(id)arg0 ;
-(BOOL)_shouldPostNotificationForChat:(id)arg0 messageDictionary:(id)arg1 ;
-(BOOL)_shouldRepostNotification:(id)arg0 withAlreadyPostedNotification:(id)arg1 ;
-(BOOL)areMyTokens:(id)arg0 inMessage:(id)arg1 ;
-(NSInteger)_legacyDateForMessageWithRowIDPreference:(NSInteger)arg0 ;
-(NSInteger)_legacyRowIDPreference;
-(NSUInteger)_getMessagesSpokenAllowlistLevel:(*BOOL)arg0 ;
-(NSUInteger)_getSpokenMessageAllowlistLevelVersion;
-(NSUInteger)screenTimeNotificationOptionsForChatDictionary:(id)arg0 ;
-(NSUInteger)screenTimeNotificationOptionsForContext:(id)arg0 ;
-(id)SMSCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(id)_IMDContactStore;
-(id)_chatDictionaryForChatRecord:(id)arg0 ;
-(id)_chatDictionaryForMessageRecord:(id)arg0 ;
-(id)_coreSpotlightChatParticipantsFromChatDictionary:(id)arg0 senderHandleID:(id)arg1 ;
-(id)_displayNameForHandle:(id)arg0 andContact:(id)arg1 ;
-(id)_generateNotificationRequestForDeliveryError:(id)arg0 isCarouselUITriggered:(BOOL)arg1 ;
-(id)_generateNotificationRequestForMessageRecord:(id)arg0 isUrgentMessageTrigger:(BOOL)arg1 isCarouselUITriggered:(BOOL)arg2 isMostActive:(BOOL)arg3 shouldAdvanceLastAlertedMessageDate:(*BOOL)arg4 ;
-(id)_generateNotificationRequestForMessageRecord:(id)arg0 messageDictionary:(id)arg1 chatDictionary:(id)arg2 isUrgentMessageTrigger:(BOOL)arg3 isCarouselUITriggered:(BOOL)arg4 isMostActive:(BOOL)arg5 shouldAdvanceLastAlertedMessageDate:(*BOOL)arg6 ;
-(id)_groupHashForHandles:(id)arg0 lastAddressedHandle:(id)arg1 ;
-(id)_groupPhotoInternalFilePathForGroupPhotoGuid:(id)arg0 ;
-(id)_lastMessageTimeForChat:(id)arg0 ;
-(id)_lastTwoMessagesForChat:(id)arg0 ;
-(id)_legacyDatePreference;
-(id)_makeNotificationCategories;
-(id)_messageDictionaryForMessageRecord:(id)arg0 ;
-(id)_messageDictionaryForMessageRecord:(id)arg0 copyThreadOriginator:(BOOL)arg1 ;
-(id)_messages:(id)arg0 newerThanDate:(NSInteger)arg1 ;
-(id)_messagesSortedByDate:(id)arg0 ;
-(id)_nicknameDisplayNameForID:(id)arg0 ;
-(id)_previewFileURLForTransferURL:(id)arg0 utiType:(id)arg1 knownSender:(BOOL)arg2 ;
-(id)_suggestedDisplayNameForAddress:(id)arg0 ;
-(id)_synthesizedMessagingNotificationContentWithContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 isUrgentMessageTrigger:(BOOL)arg3 ;
-(id)allTokens;
-(id)defaultsSharedInstance;
-(id)init;
-(id)madridBusinessCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(id)madridCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(id)madridGroupCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(id)noRelayCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(void)__postNotificationsIsMostActiveDevice:(BOOL)arg0 ;
-(void)_coalescePostNotifications;
-(void)_isMostActiveDeviceWithCompletionBlock:(id)arg0 ;
-(void)_migrateLastedPostedPreferencesIfNeeded;
-(void)_populateAttachmentsForNotificationContent:(id)arg0 messageDictionary:(id)arg1 messageRecord:(id)arg2 knownSender:(BOOL)arg3 ;
-(void)_populateBasicNotificationIdentifyingContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 isCarouselUITriggered:(BOOL)arg3 ;
-(void)_populateBodyAndTitleForSendFailedNotificationContent:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_populateBodyForNotificationContent:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_populateIgnoresDoNotDisturb:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateNotificationCategoryContent:(id)arg0 messageDictionary:(id)arg1 chatDictionary:(id)arg2 ;
-(void)_populateNotificationContentForTranscriptSharing:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateRealertCountForNotificationContent:(id)arg0 ;
-(void)_populateSoundAndDisplayActivationForNotificationContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 isMostActive:(BOOL)arg3 ;
-(void)_populateSubtitleForNotificationContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateTitleForNotificationContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateUserInfoForMessageContent:(id)arg0 messageDictionary:(id)arg1 messageIsAddressedToMe:(BOOL)arg2 ;
-(void)_populateUserInfoOnContentForWatch:(id)arg0 messageDictionary:(id)arg1 chatDictionary:(id)arg2 isCarouselUITriggered:(BOOL)arg3 ;
-(void)_postNotifications;
-(void)_proceedMostActiveDevice:(BOOL)arg0 isBlockCalled:(*BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)arg0 isCarouselUITriggered:(BOOL)arg1 ;
-(void)_registerUserNotificationsForMessageRecords:(id)arg0 newerThanDate:(NSInteger)arg1 isUrgentMessageTrigger:(BOOL)arg2 isCarouselUITriggered:(BOOL)arg3 isMostActiveDevice:(BOOL)arg4 ;
-(void)_setContactInMessageDictionary:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_setHasMigratedPreferenceTrue;
-(void)_setLastPostedDateFromMigration:(id)arg0 ;
-(void)_setMessagesSpokenAllowlistLevelInPreferences:(NSUInteger)arg0 ;
-(void)_setSpokenMessageAllowlistLevelVersion:(NSUInteger)arg0 ;
-(void)_setUpNotificationCenter;
-(void)_setupBusinessNameManager;
-(void)_setupFirstLoad;
-(void)_setupMeContactAndTokens;
-(void)_shouldPostNotificationRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_storeLastAlertedFailedMessageDate:(NSInteger)arg0 ;
-(void)_storeLastAlertedMessageDate:(NSInteger)arg0 ;
-(void)advanceLastAlertedFailedMessageDate:(NSInteger)arg0 ;
-(void)advanceLastAlertedMessageDate:(NSInteger)arg0 ;
-(void)postFirstUnlockMessage:(id)arg0 forIdentifier:(id)arg1 ;
-(void)postNotificationsWithContext:(id)arg0 ;
-(void)postSharePlayNotificationForChatGUID:(id)arg0 faceTimeConversationUUID:(id)arg1 handleIdentifier:(id)arg2 localizedApplicationName:(id)arg3 ;
-(void)postUrgentNotificationForMessages:(id)arg0 withContext:(id)arg1 ;
-(void)repostNotificationsFromFirstUnlockWithContext:(id)arg0 ;
-(void)retractNotificationsForReadMessages:(id)arg0 ;
-(void)updatePostedNotificationsForMessages:(id)arg0 withContext:(id)arg1 ;


@end


#endif