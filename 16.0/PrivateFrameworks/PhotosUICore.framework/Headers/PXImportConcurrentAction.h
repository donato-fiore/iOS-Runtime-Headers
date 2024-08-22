// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTCONCURRENTACTION_H
#define PXIMPORTCONCURRENTACTION_H

@class NSOperation;



@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}




-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)performAction;
-(void)finish;
-(void)start;


@end


#endif