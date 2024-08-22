// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCCONNECTIONEXPECTEDREPLIES_H
#define _NSXPCCONNECTIONEXPECTEDREPLIES_H


#import <Foundation/Foundation.h>


@interface _NSXPCConnectionExpectedReplies : NSObject {
    *__CFDictionary _replyTable;
    _opaque_pthread_mutex_t _lock;
    NSUInteger _sequence;
}




-(id)init;
-(void)dealloc;


@end


#endif