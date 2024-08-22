// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTUCONVERSATIONCHATITEM_H
#define IMTUCONVERSATIONCHATITEM_H

@class NSDate, TUConversation, NSUUID;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMTUConversationChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSUInteger conversationAVMode;
@property (readonly, nonatomic) IMHandle *conversationInitiator; // ivar: _conversationInitiator
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, weak, nonatomic) TUConversation *tuConversation;
@property (readonly, nonatomic) NSUUID *tuConversationUUID;


-(BOOL)canDelete;
-(id)_initWithItem:(id)arg0 conversationInitiator:(id)arg1 ;
-(id)activeCall;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif