// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPARTICIPANTCHANGECHATITEM_H
#define CKPARTICIPANTCHANGECHATITEM_H



#import "CKMultilineStampLabelChatItem.h"

@interface CKParticipantChangeChatItem : CKMultilineStampLabelChatItem



-(NSInteger)changeType;
-(id)activeTelephonyConversationUUID;
-(id)handle;
-(id)loadTranscriptText;
-(id)sender;


@end


#endif