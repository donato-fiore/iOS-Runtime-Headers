// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMESSAGEITEMCHATCONTEXT_H
#define IMMESSAGEITEMCHATCONTEXT_H



#import "IMItemChatContext.h"
#import "IMMessage.h"

@interface IMMessageItemChatContext : IMItemChatContext

@property (nonatomic) BOOL invitation; // ivar: _invitation
@property (retain, nonatomic) IMMessage *message; // ivar: _message


-(void)dealloc;


@end


#endif