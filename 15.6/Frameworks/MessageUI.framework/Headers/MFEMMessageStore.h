// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFEMMESSAGESTORE_H
#define MFEMMESSAGESTORE_H

@class MFMessageStore, NSData, EMContentRepresentation, NSMutableDictionary, NSString, MFMailMessage, MFMailboxUid, EMMessage;
@protocol EMContentItemRequestDelegate;



@interface MFEMMessageStore : MFMessageStore <EMContentItemRequestDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSData *bodyHTMLData; // ivar: _bodyHTMLData
@property (retain, nonatomic) EMContentRepresentation *bodyRepresentation; // ivar: _bodyRepresentation
@property (retain, nonatomic) NSMutableDictionary *contentIDsToContentItems; // ivar: _contentIDsToContentItems
@property (retain, nonatomic) NSMutableDictionary *contentIDsToRepresentations; // ivar: _contentIDsToRepresentations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFMailMessage *legacyMessage;
@property (retain, nonatomic) MFMailboxUid *mailboxUid; // ivar: _mailboxUid
@property (retain, nonatomic) EMMessage *message; // ivar: _message
@property (retain, nonatomic) Class messageClass; // ivar: _messageClass
@property (retain, nonatomic) NSString *mimeBoundary; // ivar: _mimeBoundary
@property (nonatomic) BOOL skipAttachmentDownload; // ivar: _skipAttachmentDownload
@property (readonly) Class superclass;


+(id)headersForDraftRestoration;
-(BOOL)_isDisplayableImageContentItem:(id)arg0 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)_markupStringForDisplayForContentItem:(id)arg0 ;
-(id)_requestMessageContentRepresentationFetchIfNotAvailable:(BOOL)arg0 ;
-(id)bodyForMessage:(id)arg0 fetchIfNotAvailable:(BOOL)arg1 updateFlags:(BOOL)arg2 ;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)headerDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)initWithEMMessage:(id)arg0 messageClass:(Class)arg1 mailboxUid:(id)arg2 skipAttachmentDownload:(BOOL)arg3 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(void)contentObjectID:(id)arg0 generateHTMLSnippetForRelatedContentItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)contentObjectID:(id)arg0 generateHTMLSnippetsForMailDropContentItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)contentObjectID:(id)arg0 generateHTMLSnippetsForRelatedContentItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)contentObjectID:(id)arg0 placeholderHTMLForEmptyContentWithCompletionHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif