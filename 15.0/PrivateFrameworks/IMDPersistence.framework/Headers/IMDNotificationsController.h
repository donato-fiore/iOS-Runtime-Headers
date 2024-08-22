// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDNOTIFICATIONSCONTROLLER_H
#define IMDNOTIFICATIONSCONTROLLER_H

@class NSSet, IMBusinessNameManager, UNNotificationCategory, CNContact, UNUserNotificationCenter;

#import <Foundation/Foundation.h>


@interface IMDNotificationsController : NSObject {
    NSInteger _lastAlertedMessageDate;
    NSInteger _lastAlertedFailedMessageDate;
}


@property (retain, nonatomic) NSSet *activeAccountAliases; // ivar: _activeAccountAliases
@property (retain, nonatomic) IMBusinessNameManager *businessNameManager; // ivar: _businessNameManager
@property (retain, nonatomic) UNNotificationCategory *incomingFilesNotificationCategory; // ivar: _incomingFilesNotificationCategory
@property (retain, nonatomic) UNNotificationCategory *incomingMessageNotificationCategory; // ivar: _incomingMessageNotificationCategory
@property NSInteger lastAlertedFailedMessageDate;
@property NSInteger lastAlertedMessageDate;
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (retain, nonatomic) NSSet *meTokens; // ivar: _meTokens
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter


+(BOOL)isSpamFilteringOn;
+(BOOL)isUnknownSenderFilteringOn;
+(id)_IMDCoreSpotlightCNContactForAddress:(id)arg0 ;
+(id)_addressBookNameForAddress:(id)arg0 orContact:(id)arg1 ;
+(id)_addressForHandle:(struct _IMDHandleRecordStruct *)arg0 ;
+(id)_countryCodeForHandle:(struct _IMDHandleRecordStruct *)arg0 ;
+(id)_displayNameForBusinessChatAddress:(id)arg0 businessNameManager:(id)arg1 ;
+(id)_displayNameForHandle:(struct _IMDHandleRecordStruct *)arg0 andContact:(id)arg1 suggestionProvider:(id)arg2 ;
+(id)_formattedDisplayStringForAddress:(id)arg0 countryCode:(id)arg1 ;
+(id)_truncateNameIfNeeded:(id)arg0 ;
+(id)_uncanonicalizedAddressForHandle:(struct _IMDHandleRecordStruct *)arg0 ;
+(id)sharedInstance;
+(int)reminderAlertCount;
+(int)validateAlertCount:(int)arg0 ;
-(?)_chatDictionaryForMessageRecord;
-(?)_generateNotificationRequestForDeliveryErrorisCarouselUITriggered;
-(?)_generateNotificationRequestForMessageRecord:(?)arg0 isUrgentMessage:(?)arg1 isCarouselUITriggered:(?)arg2 isMostActiveshouldAdvanceLastAlertedMessageDate;
-(?)_messageDictionaryForMessageRecord;
-(?)_messageDictionaryForMessageRecordcopyThreadOriginator;
-(?)_populateAttachmentsForNotificationContent:(?)arg0 messageDictionarymessageRecord;
-(BOOL)_UTITypeMightBeAnimated:(id)arg0 ;
-(BOOL)_amIMentionedInMessage:(id)arg0 ;
-(BOOL)_chatHasCategoryMuted:(id)arg0 isFromContact:(BOOL)arg1 ;
-(BOOL)_chatHasDNDSet:(id)arg0 ;
-(BOOL)_chatHasDNDSetBasedOnChatGUID:(id)arg0 chatIdentifier:(id)arg1 groupID:(id)arg2 handles:(id)arg3 lastAddressedHandleString:(id)arg4 originalGroupID:(id)arg5 style:(NSInteger)arg6 ;
-(BOOL)_chatHasDNDSetBasedOnDNDIdentifier:(id)arg0 ;
-(BOOL)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
-(BOOL)_fileURLIsActuallyAnimated:(id)arg0 ;
-(BOOL)_filteringSettingConfirmed;
-(BOOL)_handleIsSpokenMessageAllowlisted:(struct _IMDHandleRecordStruct *)arg0 chat:(id)arg1 message:(id)arg2 ;
-(BOOL)_hasMigratedPreferences;
-(BOOL)_haveMigrated;
-(BOOL)_isRaiseGestureEnabled;
-(BOOL)_isUnknownSenders:(id)arg0 ;
-(BOOL)_messageIsBusiness:(id)arg0 ;
-(BOOL)_messageIsFromFavorite:(id)arg0 ;
-(BOOL)_messageIsFromKnownContact:(id)arg0 ;
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
-(id)_coreSpotlightChatParticipantsFromChatDictionary:(id)arg0 senderHandleID:(id)arg1 ;
-(id)_displayNameForBusinessChatAddress:(id)arg0 ;
-(id)_displayNameForHandle:(struct _IMDHandleRecordStruct *)arg0 andContact:(id)arg1 ;
-(id)_groupHashForHandles:(id)arg0 lastAddressedHandle:(id)arg1 ;
-(id)_groupPhotoInternalFilePathForGroupPhotoGuid:(id)arg0 ;
-(id)_lastMessageTimeForChat:(struct _IMDChatRecordStruct *)arg0 ;
-(id)_lastTwoMessagesForChat:(struct _IMDChatRecordStruct *)arg0 ;
-(id)_legacyDatePreference;
-(id)_makeNotificationCategories;
-(id)_messages:(id)arg0 newerThanDate:(NSInteger)arg1 ;
-(id)_messagesSortedByDate:(id)arg0 ;
-(id)_nicknameDisplayNameForID:(id)arg0 ;
-(id)_previewFileURLForTransferURL:(id)arg0 ;
-(id)_previewFileURLForTransferURL:(id)arg0 utiType:(id)arg1 ;
-(id)_suggestedDisplayNameForAddress:(id)arg0 ;
-(id)_synthesizedMessagingNotificationContentWithContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 isUrgentMessage:(BOOL)arg3 ;
-(id)allTokens;
-(id)defaultsSharedInstance;
-(id)init;
-(id)madridBusinessCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(id)madridCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(id)madridGroupCategoryWithIdentifier:(id)arg0 actions:(id)arg1 ;
-(void)__postNotificationsIsMostActiveDevice:(BOOL)arg0 ;
-(void)_coalescePostNotifications;
-(void)_isMostActiveDeviceWithCompletionBlock:(id)arg0 ;
-(void)_migrateLastedPostedPreferencesIfNeeded;
-(void)_populateBasicNotificationIdentifyingContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 isCarouselUITriggered:(BOOL)arg3 ;
-(void)_populateBodyAndTitleForSendFailedNotificationContent:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_populateBodyForNotificationContent:(id)arg0 messageDictionary:(id)arg1 ;
-(void)_populateIgnoresDoNotDisturb:(id)arg0 messageDictionary:(id)arg1 isUrgentMessage:(BOOL)arg2 ;
-(void)_populateNotificationCategoryContent:(id)arg0 messageDictionary:(id)arg1 chatDictionary:(id)arg2 ;
-(void)_populateRealertCountForNotificationContent:(id)arg0 ;
-(void)_populateSoundAndDisplayActivationForNotificationContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 isMostActive:(BOOL)arg3 ;
-(void)_populateSubtitleForNotificationContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateTitleForNotificationContent:(id)arg0 chatDictionary:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateUserInfoForMessageContent:(id)arg0 messageDictionary:(id)arg1 messageIsAddressedToMe:(BOOL)arg2 ;
-(void)_populateUserInfoOnContentForWatch:(id)arg0 messageDictionary:(id)arg1 chatDictionary:(id)arg2 isCarouselUITriggered:(BOOL)arg3 ;
-(void)_postNotifications;
-(void)_proceedMostActiveDevice:(BOOL)arg0 isBlockCalled:(*BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)arg0 isCarouselUITriggered:(BOOL)arg1 ;
-(void)_registerUserNotificationsForMessageRecords:(id)arg0 newerThanDate:(NSInteger)arg1 areUrgentMessages:(BOOL)arg2 isCarouselUITriggered:(BOOL)arg3 isMostActiveDevice:(BOOL)arg4 ;
-(void)_setContactInMessageDictionary:(struct _IMDHandleRecordStruct *)arg0 messageDictionary:(id)arg1 ;
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
-(void)dealloc;
-(void)postFirstUnlockMessage:(id)arg0 forIdentifier:(id)arg1 ;
-(void)postNotificationsWithContext:(id)arg0 ;
-(void)postUrgentNotificationForMessages:(id)arg0 withContext:(id)arg1 ;
-(void)repostNotificationsFromFirstUnlockWithContext:(id)arg0 ;
-(void)retractNotificationsForReadMessages:(id)arg0 ;


@end


#endif