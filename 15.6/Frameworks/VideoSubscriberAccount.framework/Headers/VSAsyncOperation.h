// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSASYNCOPERATION_H
#define VSASYNCOPERATION_H

@class NSOperation;



@interface VSAsyncOperation : NSOperation {
    int _state;
}




-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)cancel;
-(void)executionDidBegin;
-(void)finishExecutionIfPossible;
-(void)start;


@end


#endif