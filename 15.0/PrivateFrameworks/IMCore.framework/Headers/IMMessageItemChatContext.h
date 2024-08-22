// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMESSAGEITEMCHATCONTEXT_H
#define IMMESSAGEITEMCHATCONTEXT_H



#import "IMItemChatContext.h"
#import "IMMessage.h"

@interface IMMessageItemChatContext : IMItemChatContext {
    IMMessage *_message;
    BOOL _invitation;
}




-(void)dealloc;


@end


#endif