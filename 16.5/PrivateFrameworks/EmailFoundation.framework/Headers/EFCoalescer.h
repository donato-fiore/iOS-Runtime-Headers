// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFCOALESCER_H
#define EFCOALESCER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface EFCoalescer : NSObject {
    id *_coalescerAction;
    os_unfair_lock_s _lock;
    id *_coalescedValue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescer;
}




-(id)initWithCoalescingAction:(id)arg0 ;
-(void)_handleCoalesceEvent;
-(void)coalesceValue:(id)arg0 ;
-(void)dealloc;


@end


#endif