// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKIMESSAGESINVOCATION_H
#define SKIMESSAGESINVOCATION_H


#import <Foundation/Foundation.h>


@interface SKIMessagesInvocation : NSObject



+(id)announceMessagesRequestFromNotificationIdentifier:(id)arg0 fromApp:(id)arg1 ;
+(id)announceMessagesRequestFromNotificationIdentifier:(id)arg0 fromApp:(id)arg1 synchronousBurstIndex:(id)arg2 ;
+(id)beginSiriRequestForApp:(id)arg0 ;
+(id)composeNewMessageRequestInApp:(id)arg0 ;
+(id)composeNewMessageRequestToContact:(id)arg0 phoneNumber:(id)arg1 emailAddress:(id)arg2 inApp:(id)arg3 ;
+(id)composeReplyRequestToConversationIdentifier:(id)arg0 inApp:(id)arg1 ;
+(id)makeParameterMetadataForIntent:(id)arg0 ;
+(id)makeParameterMetadataForParameterNamed:(id)arg0 ;
+(id)readMessagesRequestFromConversationIdentifier:(id)arg0 inApp:(id)arg1 ;
+(id)readMessagesRequestFromNotificationIdentifier:(id)arg0 fromApp:(id)arg1 ;
+(id)sendMessageFromInteractiveSnippetWithUpdatedContent:(id)arg0 withContext:(id)arg1 ;
+(id)updateMessageContentFromInteractiveSnippet:(id)arg0 withContext:(id)arg1 ;


@end


#endif