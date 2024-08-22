// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSTOPPABLESCHEDULER_H
#define EFSTOPPABLESCHEDULER_H

@class NSString;
@protocol EFSuspendableScheduler, EFAssertableScheduler, EFScheduler;

#import <Foundation/Foundation.h>

#import "EFLocked.h"

@interface EFStoppableScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler, EFScheduler>

 {
    EFAtomicObject _scheduler;
    EFLocked *_tokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler;
@property (readonly) Class superclass;


+(id)assertableSchedulerWithScheduler:(id)arg0 ;
+(id)suspendableSchedulerWithScheduler:(id)arg0 ;
-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithScheduler:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
-(id)performWithObject:(id)arg0 ;
-(void)_addCancelationToken:(id)arg0 ;
-(void)_cancelAllTokens;
-(void)_removeCancelationToken:(id)arg0 ;
-(void)assertIsExecuting:(BOOL)arg0 ;
-(void)dealloc;
-(void)performBlock:(id)arg0 ;
-(void)performSyncBarrierBlock:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;
-(void)performVoucherPreservingBlock:(id)arg0 ;
-(void)resume;
-(void)stopAndWait;
-(void)suspend;


@end


#endif