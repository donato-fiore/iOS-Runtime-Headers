// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWASYNCBLOCKOPERATION_H
#define SCWASYNCBLOCKOPERATION_H

@class NSOperation;



@interface SCWAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}


@property (readonly, copy, nonatomic) id *block; // ivar: _block


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithBlock:(id)arg0 ;
-(void)start;


@end


#endif