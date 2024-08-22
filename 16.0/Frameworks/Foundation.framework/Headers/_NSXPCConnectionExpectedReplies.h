// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSXPCCONNECTIONEXPECTEDREPLIES_H
#define _NSXPCCONNECTIONEXPECTEDREPLIES_H


#import <Foundation/Foundation.h>


@interface _NSXPCConnectionExpectedReplies : NSObject {
    *__CFDictionary _replyTable;
    NSUInteger _sequence;
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)dealloc;


@end


#endif