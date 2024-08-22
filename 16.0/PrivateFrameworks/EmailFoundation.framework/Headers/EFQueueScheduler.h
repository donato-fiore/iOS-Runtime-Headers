// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFQUEUESCHEDULER_H
#define EFQUEUESCHEDULER_H

@class NSString;
@protocol EFSuspendableScheduler, EFAssertableScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EFQueueScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL prefersImmediateExecution;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
-(id)performWithObject:(id)arg0 ;
-(void)assertIsExecuting:(BOOL)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performSyncBarrierBlock:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;
-(void)performVoucherPreservingBlock:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif