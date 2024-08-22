// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16HEALTHEXPERIENCE21ASYNCHRONOUSOPERATION_H
#define _TTC16HEALTHEXPERIENCE21ASYNCHRONOUSOPERATION_H

@class NSOperation, NSString;



@interface _TtC16HealthExperience21AsynchronousOperation : NSOperation {
    ? _autoFinishesOnCancel;
    ? operationState;
    ? workLock;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL cancelled;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isCancelled;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)main;
-(void)start;


@end


#endif