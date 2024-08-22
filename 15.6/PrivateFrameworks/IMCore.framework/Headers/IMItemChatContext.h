// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMITEMCHATCONTEXT_H
#define IMITEMCHATCONTEXT_H


#import <Foundation/Foundation.h>

#import "IMHandle.h"

@interface IMItemChatContext : NSObject {
    IMHandle *_senderHandle;
    IMHandle *_otherHandle;
}




-(void)dealloc;


@end


#endif