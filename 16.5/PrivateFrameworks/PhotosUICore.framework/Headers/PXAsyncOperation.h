// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASYNCOPERATION_H
#define PXASYNCOPERATION_H

@class NSOperation;



@interface PXAsyncOperation : NSOperation {
    os_unfair_lock_s _stateLock;
    int _operationState;
}


@property (readonly, nonatomic) BOOL px_shouldWaitForCancel;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)px_finishIfPossible;
-(void)px_start;
-(void)start;


@end


#endif