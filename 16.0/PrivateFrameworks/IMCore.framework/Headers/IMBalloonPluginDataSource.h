// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMBALLOONPLUGINDATASOURCE_H
#define IMBALLOONPLUGINDATASOURCE_H

@class NSURL, NSString, NSArray, DDScannerResult, NSData, LPLinkMetadata, NSAttributedString, NSMutableSet;
@protocol IMBalloonPluginDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "IMChat.h"
#import "IMMessage.h"
#import "IMPluginPayload.h"

@interface IMBalloonPluginDataSource : NSObject

@property (readonly, nonatomic) NSURL *URLToOpenOnTapAction; // ivar: _URLToOpenOnTapAction
@property (retain, nonatomic) NSString *_imMessageGUID; // ivar: __imMessageGUID
@property (readonly, nonatomic) NSArray *allPayloads;
@property (nonatomic) BOOL allowedByScreenTime; // ivar: _allowedByScreenTime
@property (retain, nonatomic) NSArray *attachmentGUIDs; // ivar: _attachmentGUIDs
@property (readonly, retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) IMChat *chat; // ivar: _chat
@property (retain, nonatomic) NSArray *consumedPayloads; // ivar: _consumedPayloads
@property (retain, nonatomic) DDScannerResult *dataDetectedResult; // ivar: _dataDetectedResult
@property (readonly, retain, nonatomic) NSString *guidOfLastMessageInSession; // ivar: _guidOfLastMessageInSession
@property (nonatomic) BOOL hasInvalidatedSize; // ivar: _hasInvalidatedSize
@property (readonly, nonatomic) IMMessage *imMessage;
@property (nonatomic) BOOL initialMessageIsFromMe; // ivar: _initialMessageIsFromMe
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic, setter=setLast:) BOOL isLast; // ivar: _isLast
@property (readonly, nonatomic) BOOL isPlayed;
@property (nonatomic, setter=setShowingLatestMessageAsBreadcrumb:) BOOL isShowingLatestMessageAsBreadcrumb; // ivar: _isShowingLatestMessageAsBreadcrumb
@property (retain, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly, nonatomic) NSInteger messageIDOfLastMessageInSession; // ivar: _messageIDOfLastMessageInSession
@property (readonly, retain, nonatomic) NSData *messagePayloadDataForSending;
@property (nonatomic) BOOL parentChatHasAllUnknownRecipients; // ivar: _parentChatHasAllUnknownRecipients
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) BOOL payloadInShelf; // ivar: _payloadInShelf
@property (retain, nonatomic) NSArray *pendingAttachmentData; // ivar: _pendingAttachmentData
@property (weak, nonatomic) NSObject<IMBalloonPluginDataSourceDelegate> *pluginDataSourceDelegate; // ivar: _pluginDataSourceDelegate
@property (retain, nonatomic) IMPluginPayload *pluginPayload; // ivar: _pluginPayload
@property (readonly, nonatomic) LPLinkMetadata *richLinkMetadata;
@property (retain, nonatomic) NSString *sessionGUID; // ivar: _sessionGUID
@property (readonly, nonatomic, getter=isShowingLatestMessageAsBreadcrumb) BOOL showingLatestMessageAsBreadcrumb; // ivar: _showingLatestMessageAsBreadcrumb
@property (readonly, retain, nonatomic) NSAttributedString *statusAttributedString;
@property (readonly, retain, nonatomic) NSString *statusString;
@property (readonly, nonatomic) BOOL supportsDynamicSize;
@property (retain, nonatomic) NSMutableSet *temporaryAttachmentURLs; // ivar: _temporaryAttachmentURLs
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) BOOL wantsReplyFromContentView;
@property (readonly, nonatomic) BOOL wantsStatusItem;


+(BOOL)isPayloadServiceManatee:(id)arg0 ;
+(BOOL)supportsIndividualPreviewSummaries;
+(BOOL)supportsURL:(id)arg0 ;
+(id)URLForDugongShareURL:(id)arg0 handle:(id)arg1 metadata:(id)arg2 ;
+(id)URLForDugongShareURL:(id)arg0 handle:(id)arg1 payload:(id)arg2 ;
+(id)individualPreviewSummaryForPluginPayload:(id)arg0 ;
+(id)lastAddressedHandleIDFromChat:(id)arg0 ;
+(id)previewSummary;
+(id)previewSummaryForPluginBundle:(id)arg0 ;
+(id)previewSummaryForPluginPayload:(id)arg0 withBundleID:(id)arg1 previewAttachmentURL:(*id)arg2 previewAttachmentUTI:(*id)arg3 ;
+(id)replaceHandleWithContactNameInString:(id)arg0 forAccount:(id)arg1 additionalHandles:(id)arg2 ;
+(id)unlocalizedPreviewSummaryForPluginBundle:(id)arg0 pluginDisplayName:(id)arg1 ;
-(BOOL)_senderIsSameBetweenPayload:(id)arg0 andOtherPayload:(id)arg1 ;
-(NSUInteger)_updateWithPluginPayload:(id)arg0 messageID:(NSInteger)arg1 messageGUID:(id)arg2 ;
-(NSUInteger)playbackType;
-(id)_replaceHandleWithContactNameInString:(id)arg0 ;
-(id)_summaryText;
-(id)description;
-(id)individualPreviewAttachmentFileAndUTI:(*id)arg0 ;
-(id)individualPreviewSummary;
-(id)initWithMessageGUID:(id)arg0 payload:(id)arg1 dataDetectedResult:(id)arg2 url:(id)arg3 ;
-(id)initWithPluginPayload:(id)arg0 ;
-(id)overrideURLForOpeningURL:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadLatestUnconsumedBreadcrumb;
-(void)_removeTemporaryAttachmentURLs;
-(void)_updatePayload:(id)arg0 messageID:(NSInteger)arg1 messageGUID:(id)arg2 ;
-(void)_updateTemporaryAttachmentURLsForPluginPayload;
-(void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg0 ;
-(void)checkForAllowedByScreenTime;
-(void)chooseOptions;
-(void)datasourceWasMovedToNewGuid:(id)arg0 ;
-(void)didTapStatusItem;
-(void)endShowingLastConsumedBreadcrumb;
-(void)markAsPlayed;
-(void)needsResize;
-(void)playbackWithCompletionBlock:(id)arg0 ;
-(void)pluginPayloadDidChange:(NSUInteger)arg0 ;
-(void)sendPayload:(id)arg0 ;
-(void)sendPayload:(id)arg0 attachments:(id)arg1 ;
-(void)stopPlayback;
-(void)thumbnailURLWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)updatePayload:(id)arg0 ;
-(void)updatePayload:(id)arg0 attachments:(id)arg1 ;
-(void)updatePayloadForShelfAnimation:(id)arg0 ;


@end


#endif