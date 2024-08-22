// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIQUEUEINGPROXY_H
#define _UIQUEUEINGPROXY_H

@class UITargetedProxy, NSMutableArray;



@interface _UIQueueingProxy : UITargetedProxy {
    os_unfair_lock_s _lock;
    NSUInteger _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id *_shouldSuspendInvocationBlock;
}




+(id)proxyWithTarget:(id)arg0 ;
+(id)proxyWithTarget:(id)arg0 shouldSuspendInvocationBlock:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)description;
-(void)_dispatchSuspendedMessages;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeAllEnqueuedInvocations;
-(void)resume;
-(void)suspend;


@end


#endif