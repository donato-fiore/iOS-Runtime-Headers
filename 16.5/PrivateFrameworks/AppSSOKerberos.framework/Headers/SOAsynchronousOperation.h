// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOASYNCHRONOUSOPERATION_H
#define SOASYNCHRONOUSOPERATION_H

@class NSOperation;



@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) NSUInteger state; // ivar: _state


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)init;
-(void)finish;
-(void)main;
-(void)start;


@end


#endif