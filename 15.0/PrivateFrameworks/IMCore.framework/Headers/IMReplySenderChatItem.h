// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMREPLYSENDERCHATITEM_H
#define IMREPLYSENDERCHATITEM_H

@class NSString;


#import "IMSenderChatItem.h"

@interface IMReplySenderChatItem : IMSenderChatItem

@property (readonly, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier


-(id)_initWithItem:(id)arg0 handle:(id)arg1 threadIdentifier:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif