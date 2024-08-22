// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NALAZYFUTURE_H
#define _NALAZYFUTURE_H

@protocol OS_dispatch_queue, NAScheduler;


#import "NAFuture.h"

@interface _NALazyFuture : NAFuture

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSObject<NAScheduler> *scheduler; // ivar: _scheduler
@property (nonatomic) BOOL started; // ivar: _started


// -(id)initWithBlock:(id)arg0 scheduler:(unk)arg1  ;
-(void)willAddCompletionBlock;


@end


#endif