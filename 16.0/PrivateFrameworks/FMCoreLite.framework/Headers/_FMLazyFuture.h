// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FMLAZYFUTURE_H
#define _FMLAZYFUTURE_H

@protocol OS_dispatch_queue, FMScheduler;


#import "FMFuture.h"

@interface _FMLazyFuture : FMFuture

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSObject<FMScheduler> *scheduler; // ivar: _scheduler
@property (nonatomic) BOOL started; // ivar: _started


-(id)addCompletionBlock:(id)arg0 ;
-(id)addFailureBlock:(id)arg0 ;
-(id)addSuccessBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 scheduler:(unk)arg1  ;
-(void)_runIfNecessary;


@end


#endif