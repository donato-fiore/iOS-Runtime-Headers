// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXACTIONCOALESCER_H
#define AXACTIONCOALESCER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXActionCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    id *_block;
    NSObject<OS_dispatch_queue> *_consistencyQueue;
    BOOL _coalescing;
}




+(id)mainQueueCoalescerWithBlock:(id)arg0 ;
-(id)initWithQueue:(id)arg0 block:(id)arg1 ;
-(void)performCoalescedAsynchronously;


@end


#endif