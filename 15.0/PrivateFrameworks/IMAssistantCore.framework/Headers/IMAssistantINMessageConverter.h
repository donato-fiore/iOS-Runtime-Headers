// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMASSISTANTINMESSAGECONVERTER_H
#define IMASSISTANTINMESSAGECONVERTER_H


#import <Foundation/Foundation.h>


@interface IMAssistantINMessageConverter : NSObject



+(NSInteger)messageEffectTypeFromExpressiveSendId:(id)arg0 ;
+(id)GroupAttachments:(id)arg0 ;
+(id)INMessageForOutgoingIMMessage:(id)arg0 toChat:(id)arg1 personProvider:(id)arg2 ;
+(id)INMessageForSPIMessage:(id)arg0 personProvider:(id)arg1 ;
+(id)INMessagesForSPIMessage:(id)arg0 personProvider:(id)arg1 ;
+(id)INPersonsForSPIHandles:(id)arg0 personProvider:(id)arg1 ;
+(id)__INMessageLinkMetadataForLPLinkMetadata:(id)arg0 ;
+(id)__INSpeakableStringForChat:(id)arg0 ;
+(id)__INSpeakableStringForMessage:(id)arg0 ;
+(id)expressiveSendIdFromMessageEffectType:(NSInteger)arg0 ;
+(id)makeINMessage:(NSInteger)arg0 message:(id)arg1 numberOfAttachments:(id)arg2 personProvider:(id)arg3 referencedINMessage:(id)arg4 content:(id)arg5 ;
+(id)messageEffectTypeToExpressiveSendIdDictionary;
+(id)spiHandleForIMHandle:(id)arg0 isMe:(BOOL)arg1 ;


@end


#endif