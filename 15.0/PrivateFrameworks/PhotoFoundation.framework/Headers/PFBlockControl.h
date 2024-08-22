// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFBLOCKCONTROL_H
#define PFBLOCKCONTROL_H

@class NSString;
@protocol PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PFDispatchQueue.h"

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution>

 {
    PFDispatchQueue *_queue;
    id *_block;
    NSObject<OS_dispatch_group> *_workGroup;
    uint8_t _status;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL executeOnDealloc; // ivar: _executeOnDealloc
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)blockHasFinished;
-(BOOL)blockHasStarted;
-(BOOL)blockWasCanceled;
-(BOOL)cancelBlock;
-(BOOL)dequeue;
-(BOOL)enqueue;
-(BOOL)enqueueWithDelay:(NSUInteger)arg0 ;
-(BOOL)executeBlock;
-(BOOL)groupNotify:(id)arg0 ;
-(BOOL)tryCancelBlock;
-(NSUInteger)_shouldEnqueue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithQueue:(id)arg0 block:(id)arg1 ;
-(void)_execute;
-(void)dealloc;
-(void)invoke:(NSUInteger)arg0 ;
-(void)notifyOnQueue:(id)arg0 whenFinished:(id)arg1 ;
-(void)waitForBlock;


@end


#endif