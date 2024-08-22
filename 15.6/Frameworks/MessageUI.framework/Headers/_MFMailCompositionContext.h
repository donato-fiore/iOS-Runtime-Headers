// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFMAILCOMPOSITIONCONTEXT_H
#define _MFMAILCOMPOSITIONCONTEXT_H

@class MFAttachmentComposeManager, EMMessageList, NSArray, MFAttachmentCompositionContext, MFAttachmentManager, NSString, NSMutableArray, MFMailMessage, MFMessageLoadingContext, NSURL, EMMessage, EFFuture, NSData;
@protocol EMCollectionChangeObserver, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients, _MFMailCompositionContextDelegate, EFScheduler;

#import <Foundation/Foundation.h>

#import "MFComposeWebView.h"
#import "MFMailCompositionValues.h"

@interface _MFMailCompositionContext : NSObject <EMCollectionChangeObserver, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients>

 {
    id *_originalContent;
    MFAttachmentComposeManager *_attachmentManager;
    BOOL _registeredForDraw;
    EMMessageList *_messageList;
}


@property (copy, nonatomic) NSArray *UTITypes;
@property (readonly, nonatomic) MFAttachmentCompositionContext *attachmentContext; // ivar: _attachmentContext
@property (readonly, nonatomic) MFAttachmentManager *attachmentManager;
@property (retain, nonatomic) NSString *attachmentToMarkupContentID; // ivar: _attachmentToMarkupContentID
@property (copy, nonatomic) NSString *autosaveIdentifier;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (nonatomic) NSUInteger caretPosition;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (nonatomic) NSInteger composeType;
@property MFComposeWebView *composeWebView; // ivar: _composeWebView
@property (retain, nonatomic) MFMailCompositionValues *compositionValues; // ivar: _compositionValues
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (copy, nonatomic) NSString *contentVariationAttachmentCID; // ivar: _contentVariationAttachmentCID
@property (copy, nonatomic) NSMutableArray *contentVariations;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultContentVariationIndex;
@property (retain, nonatomic) NSMutableArray *deferredAttachments;
@property (weak, nonatomic) NSObject<_MFMailCompositionContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *draftSubject; // ivar: _draftSubject
@property (copy, nonatomic) NSString *from;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hideMyEmailFrom;
@property (nonatomic) BOOL includeAttachments;
@property (nonatomic) BOOL includeAttachmentsWhenAdding; // ivar: _includeAttachmentsWhenAdding
@property (nonatomic) BOOL isHTML;
@property (readonly, nonatomic) BOOL isLoadingMessageData; // ivar: _isLoadingMessageData
@property (nonatomic) BOOL isUsingDefaultAccount;
@property (readonly, nonatomic) MFMailMessage *legacyMessage; // ivar: _legacyMessage
@property (nonatomic) BOOL loadRest; // ivar: _loadRest
@property (retain, nonatomic) MFMessageLoadingContext *loadingContext; // ivar: _loadingContext
@property (retain, nonatomic) NSURL *mailtoURL;
@property (copy, nonatomic) NSString *messageBody;
@property (retain, nonatomic) NSObject<EFScheduler> *observationScheduler; // ivar: _observationScheduler
@property (retain, nonatomic) NSArray *originalContent;
@property (retain, nonatomic) EMMessage *originalMessage; // ivar: _originalMessage
@property (copy, nonatomic) NSString *originatingBundleID; // ivar: _originatingBundleID
@property (nonatomic) BOOL originatingFromAttachmentMarkup; // ivar: _originatingFromAttachmentMarkup
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSString *preferredSendingEmailAddress;
@property (nonatomic) BOOL prefersFirstLineSelection;
@property (retain, nonatomic) EFFuture *rawContentRepresentation; // ivar: _rawContentRepresentation
@property (retain, nonatomic) NSString *remoteDelegateIdentifier; // ivar: _remoteDelegateIdentifier
@property (copy, nonatomic) NSData *serializedMailboxObjectID;
@property (copy, nonatomic) NSData *serializedMessageObjectID;
@property (copy, nonatomic) NSString *shareSheetSessionID;
@property (nonatomic) BOOL showContentImmediately;
@property (nonatomic) BOOL showKeyboardImmediately;
@property (nonatomic) int sourceAccountManagement;
@property (copy, nonatomic) NSString *subject;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *toRecipients;


+(id)log;
+(id)processMessageBody:(id)arg0 asHTML:(BOOL)arg1 ;
-(BOOL)hasDuetDonationContext;
-(id)addAttachmentData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(id)addAttachmentData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 contentID:(id)arg3 ;
-(id)addAttachmentDataItemProvider:(id)arg0 mimeType:(id)arg1 filename:(id)arg2 contentID:(id)arg3 ;
-(id)attachments;
-(id)init;
-(id)initDraftRestoreOfMessage:(id)arg0 legacyMessage:(id)arg1 ;
-(id)initForwardOfMessage:(id)arg0 legacyMessage:(id)arg1 ;
-(id)initForwardOfMessage:(id)arg0 legacyMessage:(id)arg1 isEML:(BOOL)arg2 ;
-(id)initOutboxRestoreOfMessage:(id)arg0 legacyMessage:(id)arg1 ;
-(id)initRecoveredAutosavedMessageWithIdentifier:(id)arg0 draftSubject:(id)arg1 ;
-(id)initRecoveredAutosavedMessageWithIdentifier:(id)arg0 draftSubject:(id)arg1 composeType:(NSInteger)arg2 ;
-(id)initReplyAllToMessage:(id)arg0 legacyMessage:(id)arg1 ;
-(id)initReplyAllToMessage:(id)arg0 legacyMessage:(id)arg1 isEML:(BOOL)arg2 ;
-(id)initReplyToMessage:(id)arg0 legacyMessage:(id)arg1 ;
-(id)initReplyToMessage:(id)arg0 legacyMessage:(id)arg1 isEML:(BOOL)arg2 ;
-(id)initSendAgainDraftOfMessage:(id)arg0 legacyMessage:(id)arg1 ;
-(id)initWithComposeType:(NSInteger)arg0 ;
-(id)initWithComposeType:(NSInteger)arg0 RFC822Data:(id)arg1 ;
-(id)initWithComposeType:(NSInteger)arg0 objectID:(id)arg1 mailboxID:(id)arg2 subject:(id)arg3 autosaveID:(id)arg4 messageRepository:(id)arg5 mailboxProvider:(id)arg6 ;
-(id)initWithComposeType:(NSInteger)arg0 originalMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(id)initWithComposeType:(NSInteger)arg0 originalMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(BOOL)arg3 ;
-(id)initWithCompositionValueRepresentation:(id)arg0 hostApplicationBundleIdentifier:(id)arg1 ;
-(id)initWithCompositionValues:(id)arg0 hostApplicationBundleIdentifier:(id)arg1 ;
-(id)initWithCompositionValues:(id)arg0 hostApplicationBundleIdentifier:(id)arg1 messageRepository:(id)arg2 mailboxProvider:(id)arg3 ;
-(id)initWithHandoffActivityPayload:(id)arg0 ;
-(id)initWithOpenMailComposeContext:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 composeType:(NSInteger)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3 ;
-(id)initWithURL:(id)arg0 composeType:(NSInteger)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3 isEML:(BOOL)arg4 ;
-(void)_loadMessageWithAutosaveIdentifier:(id)arg0 ;
-(void)_loadMessageWithObjectID:(id)arg0 mailboxObjectID:(id)arg1 messageRepository:(id)arg2 mailboxProvider:(id)arg3 ;
-(void)collection:(id)arg0 addedItemIDs:(id)arg1 after:(id)arg2 ;
-(void)collection:(id)arg0 addedItemIDs:(id)arg1 before:(id)arg2 ;
-(void)collection:(id)arg0 changedItemIDs:(id)arg1 ;
-(void)collection:(id)arg0 deletedItemIDs:(id)arg1 ;
-(void)collection:(id)arg0 movedItemIDs:(id)arg1 after:(id)arg2 ;
-(void)collection:(id)arg0 movedItemIDs:(id)arg1 before:(id)arg2 ;
-(void)collection:(id)arg0 replacedExistingItemID:(id)arg1 withNewItemID:(id)arg2 ;
-(void)dealloc;
-(void)insertAttachmentWithData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
-(void)insertAttachmentWithURL:(id)arg0 ;
-(void)insertDeferredAttachmentsIntoComposeWebView:(id)arg0 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg0 ;
-(void)recordUndoAttachmentsForURLs:(id)arg0 ;
-(void)removeAttachment:(id)arg0 ;
-(void)switchToReplyAllWithDelegate:(id)arg0 ;
-(void)switchToReplyWithDelegate:(id)arg0 ;


@end


#endif