// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JXOPERATION_H
#define JXOPERATION_H

@class NSOperation;
@protocol OS_dispatch_queue;



@interface JXOperation : NSOperation

@property BOOL isExecuting; // ivar: _isExecuting
@property BOOL isFinished; // ivar: _isFinished
@property (retain) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


-(BOOL)isConcurrent;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)finish;
-(void)start;
-(void)startAndWaitUntilFinished;
-(void)willFinish;


@end


#endif