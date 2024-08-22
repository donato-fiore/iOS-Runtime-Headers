// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPOPERATION_H
#define FPOPERATION_H

@class NSOperation;
@protocol FPOperationClient, OS_dispatch_queue, FPCancellable;



@interface FPOperation : NSOperation <FPOperationClient>

 {
    unsigned char _uuid;
    id *_executionTransaction;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _queue
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished; // ivar: _finished
@property (copy) id *finishedBlock; // ivar: _finishedBlock
@property (retain, nonatomic) NSObject<FPCancellable> *remoteOperation; // ivar: _remoteOperation


-(BOOL)_finishIfCancelled;
-(BOOL)finishIfCancelled;
-(id)description;
-(id)init;
-(id)operationDescription;
-(id)proxifiedDescription;
-(void)_setRemoteCancellationHandler:(id)arg0 ;
-(void)cancel;
-(void)completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)operationDidProgressWithInfo:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCancellationHandler:(id)arg0 ;
-(void)start;


@end


#endif