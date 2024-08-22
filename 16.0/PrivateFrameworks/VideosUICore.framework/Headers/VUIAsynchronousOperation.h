// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIASYNCHRONOUSOPERATION_H
#define VUIASYNCHRONOUSOPERATION_H

@class NSOperation;



@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}




-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)executionDidBegin;
-(void)finishExecutionIfPossible;
-(void)start;


@end


#endif