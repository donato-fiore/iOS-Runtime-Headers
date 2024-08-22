// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGECONTENTREQUEST_H
#define MFMESSAGECONTENTREQUEST_H

@class NSString, EDListUnsubscribeHandler, EDMailDropMetadataGenerator, EDMessagePersistence, EDMessageTransformer, EMMessageObjectID, EMContentRequestOptions;
@protocol EMContentItemRequestDelegate, EFScheduler;

#import <Foundation/Foundation.h>

#import "MFMailMessage.h"

@interface MFMessageContentRequest : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSObject<EMContentItemRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MFMailMessage *legacyMessage; // ivar: _legacyMessage
@property (readonly, nonatomic) EDListUnsubscribeHandler *listUnsubscribeHandler; // ivar: _listUnsubscribeHandler
@property (readonly, nonatomic) EDMailDropMetadataGenerator *mailDropAttachmentGenerator; // ivar: _mailDropAttachmentGenerator
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EDMessageTransformer *messageTransformer; // ivar: _messageTransformer
@property (readonly, nonatomic) EMMessageObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) EMContentRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler


+(id)metadataWithDictionary:(id)arg0 ;
+(id)onScheduler:(id)arg0 requestContentForObjectID:(id)arg1 messagePersistence:(id)arg2 legacyMessage:(id)arg3 messageTransformer:(id)arg4 mailDropAttachmentGenerator:(id)arg5 listUnsubscribeHandler:(id)arg6 clientIdentifier:(id)arg7 options:(id)arg8 delegate:(id)arg9 completionHandler:(id)arg10 ;
+(id)onScheduler:(id)arg0 requestID:(NSUInteger)arg1 requestContentForObjectID:(id)arg2 messagePersistence:(id)arg3 legacyMessage:(id)arg4 messageTransformer:(id)arg5 mailDropAttachmentGenerator:(id)arg6 listUnsubscribeHandler:(id)arg7 clientIdentifier:(id)arg8 options:(id)arg9 delegate:(id)arg10 completionHandler:(id)arg11 ;
-(id)_attachmentContentItemsForMailDropNodes:(id)arg0 withContext:(id)arg1 ;
-(id)_attachmentForMailDropMetaData:(id)arg0 context:(id)arg1 ;
-(id)_contentItemForAttachment:(id)arg0 manager:(id)arg1 managed:(BOOL)arg2 ;
-(id)_contentRepresentationForEvent:(id)arg0 contentURL:(id)arg1 relatedItems:(id)arg2 existingRepresentation:(id)arg3 invocable:(id)arg4 ;
-(id)_contentRepresentationForLoadingEvent:(id)arg0 existingRepresentation:(id)arg1 ;
-(id)_dataHolderWithCancelationToken:(id)arg0 ;
-(id)_generateRepresentationForLoadingContext:(id)arg0 existingRepresentation:(id)arg1 completion:(id)arg2 ;
-(id)_init;
-(id)_maildropMetadataFromContext:(id)arg0 ;
-(id)_messageForLegacyMessage:(id)arg0 ;
-(id)_processContentLoadingContextEvent:(id)arg0 ;
-(id)_requestContentForAttachment:(id)arg0 manager:(id)arg1 options:(id)arg2 managed:(BOOL)arg3 completion:(id)arg4 ;
-(id)beginRequestWithCompletionHandler:(id)arg0 ;
-(id)delegateWithErrorHandler:(id)arg0 ;
-(id)requestHTMLRepresentationWithCompletionHandler:(id)arg0 ;
-(id)requestRawRepresentationWithCompletionHandler:(id)arg0 ;
-(void)_includeHeadersIfNeededForRepresentation:(id)arg0 message:(id)arg1 options:(id)arg2 ;
-(void)_includeSuggestionItemsIfNeededForRepresentation:(id)arg0 message:(id)arg1 ;


@end


#endif