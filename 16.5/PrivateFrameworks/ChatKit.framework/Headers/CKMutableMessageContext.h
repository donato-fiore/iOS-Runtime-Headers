// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMUTABLEMESSAGECONTEXT_H
#define CKMUTABLEMESSAGECONTEXT_H

@class IMChatContext;


#import "CKMessageContext.h"

@interface CKMutableMessageContext : CKMessageContext

@property (nonatomic, getter=isAudioMessage) BOOL audioMessage;
@property (copy, nonatomic) IMChatContext *chatContext;
@property (nonatomic, getter=isFromMe) BOOL fromMe;
@property (nonatomic, getter=isSenderUnauthenticated) BOOL senderUnauthenticated;
@property (nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (nonatomic, getter=isSpam) BOOL spam;




@end


#endif