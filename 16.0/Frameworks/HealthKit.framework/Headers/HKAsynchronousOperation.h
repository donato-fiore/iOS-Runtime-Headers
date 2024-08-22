// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKASYNCHRONOUSOPERATION_H
#define HKASYNCHRONOUSOPERATION_H

@class NSOperation;



@interface HKAsynchronousOperation : NSOperation {
    id *_operationBlock;
    BOOL _executing;
    BOOL _finished;
    os_unfair_lock_s _lock;
    CGFloat _startedTime;
}


@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;


-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithName:(id)arg0 operationBlock:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;


@end


#endif