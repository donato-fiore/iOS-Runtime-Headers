// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTUCONVERSATIONCHATITEM_H
#define CKTUCONVERSATIONCHATITEM_H

@class NSUUID;


#import "CKBalloonChatItem.h"

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (readonly, nonatomic) char color;
@property (readonly, nonatomic) NSUInteger conversationAVMode;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown; // ivar: _senderUnknown
@property (readonly, weak, nonatomic) NSUUID *tuConversationUUID;


-(BOOL)isFromMe;
-(BOOL)isSendersUnknown;
-(BOOL)shouldCacheSize;
-(Class)balloonViewClass;
-(id)faceTimeConversation;
-(id)sender;
-(id)time;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif