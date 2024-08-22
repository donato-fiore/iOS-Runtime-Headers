// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEXPIRABLEMESSAGECHATITEM_H
#define CKEXPIRABLEMESSAGECHATITEM_H



#import "CKAttachmentMessagePartChatItem.h"

@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;


-(BOOL)canCopy;
-(BOOL)canExport;
-(BOOL)canForward;
-(BOOL)canSendAsTextMessage;


@end


#endif