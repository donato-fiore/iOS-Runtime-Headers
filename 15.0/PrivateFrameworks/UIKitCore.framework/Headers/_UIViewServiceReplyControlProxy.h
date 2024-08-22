// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICEREPLYCONTROLPROXY_H
#define _UIVIEWSERVICEREPLYCONTROLPROXY_H

@class NSLock;
@protocol _UIViewServiceProxy_ReplyControl;

#import <Foundation/Foundation.h>

#import "_UIViewServiceReplyControlTrampoline.h"
#import "_UIViewServiceReplyAwaitingTrampoline.h"

@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl>

 {
    id *_target;
    _UIViewServiceReplyControlTrampoline *_controlTrampoline;
    _UIViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}




+(id)proxyWithTarget:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_awaitingReply;
-(id)_deliveringRepliesAsynchronously;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;


@end


#endif