// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMUTABLECHATCONTEXT_H
#define IMMUTABLECHATCONTEXT_H

@class NSUUID;


#import "IMChatContext.h"

@interface IMMutableChatContext : IMChatContext

@property (retain, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic) NSInteger filterCategory;
@property (nonatomic, getter=hasResponded) BOOL responded;
@property (nonatomic, getter=areSendersUnknown) BOOL sendersUnknown;
@property (nonatomic) NSInteger serviceType;
@property (nonatomic, getter=isSpam) BOOL spam;


+(id)chatContextForPinnedChat:(id)arg0 ;


@end


#endif