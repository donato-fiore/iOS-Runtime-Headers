// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSXPCCONNECTIONEXPECTEDREPLYINFO_H
#define _NSXPCCONNECTIONEXPECTEDREPLYINFO_H

@class NSBlock, NSDictionary;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NSXPCInterface.h"

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {
    NSBlock *_replyBlock;
    id *_errorBlock;
    NSObject<OS_dispatch_semaphore> *_timeoutSemaphore;
    SEL _selector;
    NSXPCInterface *_interface;
    NSDictionary *_userInfo;
    NSUInteger _proxyNumber;
}




-(void)dealloc;


@end


#endif