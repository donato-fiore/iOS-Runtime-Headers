// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKASYNCOPERATION_H
#define WLKASYNCOPERATION_H

@class NSOperation;



@interface WLKAsyncOperation : NSOperation {
    int _state;
}




+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)executionDidBegin;
-(void)finishExecutionIfPossible;
-(void)start;


@end


#endif