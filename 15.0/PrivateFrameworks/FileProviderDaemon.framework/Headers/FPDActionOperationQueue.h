// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDACTIONOPERATIONQUEUE_H
#define FPDACTIONOPERATIONQUEUE_H

@class NSMutableArray;
@protocol FPCancellable, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface FPDActionOperationQueue : NSObject <FPCancellable>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _maxLength;
    NSMutableArray *_fifo;
    NSObject<OS_dispatch_semaphore> *_enqueueSema;
    NSObject<OS_dispatch_semaphore> *_dequeueSema;
    BOOL _finishedEnqueuing;
    BOOL _cancelled;
}




-(id)dequeue;
-(id)initWithMoveInfo:(id)arg0 ;
-(void)cancel;
-(void)dumpStateTo:(id)arg0 ;
-(void)enqueue:(id)arg0 ;
-(void)finishedEnqueuing;


@end


#endif