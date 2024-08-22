// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FKDELAYEDOPERATION_H
#define FKDELAYEDOPERATION_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FKDelayedOperation : NSObject {
    id *_block;
    NSObject<OS_dispatch_queue> *_queue;
    int _blockEnqueued;
    CGFloat _lastExecution;
    NSObject<OS_dispatch_source> *_timerSource;
    CGFloat _delay;
}




-(id)initWithQueue:(id)arg0 delay:(CGFloat)arg1 block:(id)arg2 ;
-(void)_queue_executeBlock;
-(void)_queue_updateLastExecution;
-(void)execute;
-(void)invalidate;


@end


#endif