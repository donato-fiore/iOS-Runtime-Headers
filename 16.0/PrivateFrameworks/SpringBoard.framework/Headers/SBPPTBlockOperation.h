// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPPTBLOCKOPERATION_H
#define SBPPTBLOCKOPERATION_H



#import "SBPPTOperation.h"

@interface SBPPTBlockOperation : SBPPTOperation {
    BOOL _cancelled;
}


@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) NSUInteger state; // ivar: _state
@property (weak, nonatomic) id *timeoutBlock; // ivar: _timeoutBlock
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)operationWithBlock:(id)arg0 ;
+(id)operationWithName:(id)arg0 block:(id)arg1 ;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)description;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithName:(id)arg0 block:(id)arg1 ;
-(void)cancel;
-(void)cancelAndFailTestWithReason:(id)arg0 ;
-(void)finish;
-(void)main;
-(void)start;


@end


#endif