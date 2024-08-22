// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSERIALQUEUE_H
#define FBSSERIALQUEUE_H

@class NSMutableArray, NSArray, NSString;
@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_blocks;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
    *__CFRunLoopSource _runLoopSource;
    BOOL _targetQueue_callingOut;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)queueWithDispatchQueue:(id)arg0 ;
+(id)queueWithMainRunLoopModes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)backingQueueIfExists;
-(id)init;
-(void)assertBarrierOnQueue;
-(void)assertOnQueue;
-(void)dealloc;
-(void)performAfter:(CGFloat)arg0 withBlock:(id)arg1 ;
-(void)performAsync:(id)arg0 ;
// -(void)performAsync:(id)arg0 withHandoff:(unk)arg1  ;


@end


#endif