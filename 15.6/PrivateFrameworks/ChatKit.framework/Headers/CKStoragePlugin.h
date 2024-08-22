// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSTORAGEPLUGIN_H
#define CKSTORAGEPLUGIN_H

@class STStoragePlugin, NSArray, NSDate, STStorageOptionTip, STStorageActionTip, IMCloudKitHooks, NSString, IMMessageDirectoryContents, IMDirectoryContentsSizes, NSDictionary;
@protocol STStorageOptionTipDelegate;



@interface CKStoragePlugin : STStoragePlugin <STStorageOptionTipDelegate>



@property (retain, nonatomic) NSArray *appSpecifiers; // ivar: _appSpecifiers
@property (nonatomic) BOOL cachedAttachmentsTakeUpSignificantSpace; // ivar: _cachedAttachmentsTakeUpSignificantSpace
@property (retain, nonatomic) NSDate *cachedAttachmentsTakeUpSignificantSpaceDate; // ivar: _cachedAttachmentsTakeUpSignificantSpaceDate
@property (retain, nonatomic) STStorageOptionTip *cachedAutoDeleteMessagesTip; // ivar: _cachedAutoDeleteMessagesTip
@property (retain, nonatomic) STStorageOptionTip *cachedMessagesOniCloudTip; // ivar: _cachedMessagesOniCloudTip
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeAttachmentsTip; // ivar: _cachedReviewLargeAttachmentsTip
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeConversationsTip; // ivar: _cachedReviewLargeConversationsTip
@property (nonatomic) NSUInteger cachedSpaceSavedByAutoDeletingMessages; // ivar: _cachedSpaceSavedByAutoDeletingMessages
@property (nonatomic) NSUInteger cachedSpaceSavedByDeletingNonSyncedAttachments; // ivar: _cachedSpaceSavedByDeletingNonSyncedAttachments
@property (nonatomic) NSUInteger cachedSpaceSavedByReviewingLargeConversations; // ivar: _cachedSpaceSavedByReviewingLargeConversations
@property (retain, nonatomic) NSArray *cloudAppSpecifiers; // ivar: _cloudAppSpecifiers
@property (retain, nonatomic) IMCloudKitHooks *cloudKitHooks; // ivar: _cloudKitHooks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastQuerySpaceSavedByAutoDeletingMessagesTime; // ivar: _lastQuerySpaceSavedByAutoDeletingMessagesTime
@property (nonatomic) CGFloat lastQuerySpaceSavedByNonSyncedDeletingAttachments; // ivar: _lastQuerySpaceSavedByNonSyncedDeletingAttachments
@property (nonatomic) CGFloat lastQuerySpaceSavedByReviewingLargeConversationsTime; // ivar: _lastQuerySpaceSavedByReviewingLargeConversationsTime
@property (readonly, nonatomic) IMMessageDirectoryContents *messageDirectoryContents; // ivar: _messageDirectoryContents
@property (readonly, nonatomic) IMDirectoryContentsSizes *messageDirectorySizes; // ivar: _messageDirectorySizes
@property (retain, nonatomic) NSDictionary *spaceTakenByAttachmentClass; // ivar: _spaceTakenByAttachmentClass
@property (readonly) Class superclass;


+(id)_representedApp;
-(BOOL)_attachmentsTakeUpMoreSpaceThanBytes:(NSUInteger)arg0 ;
-(BOOL)_attachmentsTakeUpSignificantSpace;
-(BOOL)_cloudKitEnabled;
-(BOOL)_forceShowingAutoDeleteMessagesTip;
-(BOOL)_forceShowingReviewLargeAttachmentsTip;
-(BOOL)_shouldDisplayAutoDeleteMessagesTip;
-(BOOL)_shouldDisplayReviewLargeAttachmentsTip;
-(NSInteger)_purgeableDiskSpace;
-(NSInteger)_totalSpaceOfAttachments;
-(NSInteger)externDataSizeForApp:(id)arg0 ;
-(NSUInteger)_spaceSavedByAutoDeleteMessages;
-(NSUInteger)_spaceSavedByDeletingNonSyncedAttachments;
-(NSUInteger)_spaceSavedByReviewingLargeConversations;
-(NSUInteger)_totalSpaceOfLargeConversations;
-(NSUInteger)messageDatabaseSize;
-(id)_autoDeleteMessagesTip;
-(id)_messagesOniCloudTip;
-(id)_reviewLargeAttachmentsTip;
-(id)_spaceTakenForSpecifier:(id)arg0 ;
-(id)cloudDocumentSpecifiers;
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg0 ;
-(id)externDataSizeAppIdentifiers;
-(id)init;
-(void)_displayICloudErrorMessage;
-(void)_enableAutoDeleteMessages;
-(void)_enableMessagesOniCloud;
-(void)_iCloudHooksSetEnabledReturned:(id)arg0 ;
-(void)_iCloudHooksValuesChanged:(id)arg0 ;
-(void)_loadAppSpecifiers;
-(void)_loadAttachmentSizes;
-(void)_loadTips;
-(void)_loadiCloudAppSpecifiers;
-(void)_refreshMessageOniCloudTipIfNeeded;
-(void)calculateDirectorySizesIfNeeded;
-(void)dealloc;
-(void)enableOptionForTip:(id)arg0 ;


@end


#endif