// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFDISPATCHCONTEXT_H
#define HMFDISPATCHCONTEXT_H

@protocol HMFAsyncContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMFDispatchContext : NSObject <HMFAsyncContext>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _alwaysDispatch;
}


@property (readonly) NSObject<OS_dispatch_queue> *queue;


+(void)blessWithImplicitContext:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 alwaysDispatch:(BOOL)arg1 ;
-(void)assertIsExecuting;
-(void)dealloc;
-(void)performBlock:(id)arg0 ;


@end


#endif