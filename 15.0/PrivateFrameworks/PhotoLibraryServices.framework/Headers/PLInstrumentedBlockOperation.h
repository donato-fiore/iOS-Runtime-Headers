// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLINSTRUMENTEDBLOCKOPERATION_H
#define PLINSTRUMENTEDBLOCKOPERATION_H

@class NSBlockOperation;



@interface PLInstrumentedBlockOperation : NSBlockOperation

@property (nonatomic) CGFloat creationTime; // ivar: _creationTime
@property (nonatomic) CGFloat executionEndTime; // ivar: _executionEndTime
@property (nonatomic) CGFloat executionStartTime; // ivar: _executionStartTime
@property (readonly, nonatomic) CGFloat executionTime;
@property (nonatomic) BOOL postambleAdded; // ivar: _postambleAdded
@property (readonly, nonatomic) CGFloat timeSpentWaitingInQueue;


+(id)blockOperationWithBlock:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addExecutionBlock:(id)arg0 ;


@end


#endif