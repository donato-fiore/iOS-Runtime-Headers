// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLASYNCHRONOUSOPERATION_H
#define QLASYNCHRONOUSOPERATION_H

@class NSOperation;



@interface QLAsynchronousOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished


-(BOOL)isConcurrent;
-(void)finish;
-(void)start;


@end


#endif