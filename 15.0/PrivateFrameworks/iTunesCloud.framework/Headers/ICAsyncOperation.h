// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICASYNCOPERATION_H
#define ICASYNCOPERATION_H

@class NSOperation, NSOperationQueue, NSError;



@interface ICAsyncOperation : NSOperation {
    os_unfair_lock_s _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    NSInteger _qualityOfServiceForChildOperationQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}


@property (readonly, copy, nonatomic) NSError *error; // ivar: _error


-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)_execute;
-(void)enqueueChildOperation:(id)arg0 ;
-(void)execute;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif