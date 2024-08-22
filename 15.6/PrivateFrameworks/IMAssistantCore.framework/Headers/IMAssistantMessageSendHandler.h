// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTMESSAGESENDHANDLER_H
#define IMASSISTANTMESSAGESENDHANDLER_H

@class NSString;
@protocol INSendMessageIntentHandling, IMAssistantMessageSendHandlerDelegate;


#import "IMAssistantMessageHandler.h"

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling>

 {
    NSString *_conversationIdentifierResolvedDuringRecipientResolution;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<IMAssistantMessageSendHandlerDelegate> *messageSendHandlerDelegate; // ivar: _messageSendHandlerDelegate
@property (readonly) Class superclass;


-(BOOL)__im_ff_commSafetyUIEnabled;
-(BOOL)canSendLocationMessageWithLocationManager:(id)arg0 withError:(*NSInteger)arg1 ;
-(BOOL)isMemberOfChat:(id)arg0 ;
-(BOOL)recipientHandleResolutionResultsAllowedByScreentime:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendMessageWithDraft:(id)arg0 expressiveSendStyleID:(id)arg1 idsIdentifier:(id)arg2 executionContext:(NSInteger)arg3 sourceApplicationID:(id)arg4 toChat:(id)arg5 ;
-(BOOL)shouldContinueToExamineRelevantChatsWithMatches:(id)arg0 nextChat:(id)arg1 ;
-(BOOL)updateSenderIdentityForNewlyCreatedChat:(id)arg0 ;
-(NSInteger)sendLocationMessageToChat:(id)arg0 sourceApplicationID:(id)arg1 ;
-(id)contactResolutionResultForContacts:(id)arg0 matchingRecipient:(id)arg1 ;
-(id)contactsWithDuplicateNamesAmongContacts:(id)arg0 ;
-(id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg0 ;
-(id)handleResolutionResultForHandles:(id)arg0 resolvedContactForAlternatives:(id)arg1 recipient:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)makeIMMessageFromSharedLinkURL:(id)arg0 ;
-(id)makeIMMessageFromText:(id)arg0 ;
-(id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)arg0 ;
-(id)recipientsResolutionFailureResultWithResult:(id)arg0 forRecipient:(id)arg1 amongRecipients:(id)arg2 ;
-(id)resolveMessageContentWithString:(id)arg0 ;
-(id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)arg0 withMatchingHandlesByRecipient:(id)arg1 fromChats:(id)arg2 ;
-(id)resolveRecipientsWithGroupNameOrConversationIdentifier:(id)arg0 forIntent:(id)arg1 ;
-(id)resolvedRecipientsFromChat:(id)arg0 ;
-(void)confirmSendMessage:(id)arg0 completion:(id)arg1 ;
-(void)handleSendMessage:(id)arg0 completion:(id)arg1 ;
-(void)isSensitiveFileAttachmentURLs:(id)arg0 chat:(id)arg1 completion:(id)arg2 ;
-(void)resolveContentForSendMessage:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOutgoingMessageTypeForSendMessage:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveRecipientsForSendMessage:(id)arg0 completion:(id)arg1 ;
-(void)resolveRecipientsWithCRR:(id)arg0 forIntent:(id)arg1 completion:(id)arg2 ;
-(void)resolveRecipientsWithoutCRR:(id)arg0 forIntent:(id)arg1 completion:(id)arg2 ;
-(void)resolveSpeakableGroupNameForSendMessage:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendFileAttachmentURLs:(id)arg0 chat:(id)arg1 executionContext:(NSInteger)arg2 expressiveSendStyleID:(id)arg3 idsIdentifier:(id)arg4 sourceApplicationID:(id)arg5 completion:(id)arg6 ;
-(void)sendLocalFileAttachmentURLs:(id)arg0 chat:(id)arg1 executionContext:(NSInteger)arg2 expressiveSendStyleID:(id)arg3 idsIdentifier:(id)arg4 sourceApplicationID:(id)arg5 completion:(id)arg6 ;
-(void)sendMessagesWithText:(id)arg0 currentLocation:(BOOL)arg1 sharedLinkURL:(id)arg2 audioMessageAttachment:(id)arg3 photoLibraryAttachment:(id)arg4 fileAttachments:(id)arg5 expressiveSendStyleID:(id)arg6 idsIdentifier:(id)arg7 executionContext:(NSInteger)arg8 toChat:(id)arg9 completion:(id)arg10 ;


@end


#endif