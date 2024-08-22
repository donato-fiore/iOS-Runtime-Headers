// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDISPATCHQUEUEASYNCBLOCKPERFORMER_H
#define CALDISPATCHQUEUEASYNCBLOCKPERFORMER_H

@protocol CalAsyncBlockPerformer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;
-(id)performAfterDelay:(CGFloat)arg0 block:(id)arg1 ;
-(id)performAsync:(id)arg0 ;


@end


#endif