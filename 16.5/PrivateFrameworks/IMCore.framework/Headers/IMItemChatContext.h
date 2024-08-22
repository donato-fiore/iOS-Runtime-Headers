// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMITEMCHATCONTEXT_H
#define IMITEMCHATCONTEXT_H


#import <Foundation/Foundation.h>

#import "IMHandle.h"

@interface IMItemChatContext : NSObject

@property (retain, nonatomic) IMHandle *otherHandle; // ivar: _otherHandle
@property (retain, nonatomic) IMHandle *senderHandle; // ivar: _senderHandle


-(void)dealloc;


@end


#endif