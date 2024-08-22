// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFENCEDANIMATIONQUEUE_H
#define BWFENCEDANIMATIONQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BWFencedAnimationQueue : NSObject {
    NSMutableArray *_fencedAnimationQueue;
    NSObject<OS_dispatch_semaphore> *_fencedAnimationQueueSemaphore;
    unsigned int _fencedAnimationFramerateThrottle;
    CGFloat _timeOfLastFencedAnimation;
    os_unfair_lock_s _queueLock;
}


@property (readonly) NSUInteger count;


-(id)dequeueFencedAnimation;
-(id)initWithQueueSize:(unsigned int)arg0 ;
-(void)dealloc;
-(void)enqueueFencedAnimation:(id)arg0 ;
-(void)flush;


@end


#endif