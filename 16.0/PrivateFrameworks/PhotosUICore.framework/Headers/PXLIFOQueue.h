// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLIFOQUEUE_H
#define PXLIFOQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


-(id)initWithTargetQueue:(id)arg0 ;
-(void)_executeNextPendingBlock;
-(void)dispatchAsync:(id)arg0 ;


@end


#endif