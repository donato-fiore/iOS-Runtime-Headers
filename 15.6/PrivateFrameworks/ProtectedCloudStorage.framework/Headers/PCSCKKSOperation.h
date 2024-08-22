// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCSCKKSOPERATION_H
#define PCSCKKSOPERATION_H

@class NSOperation, NSError, NSMutableArray;



@interface PCSCKKSOperation : NSOperation

@property (getter=isCancelled) BOOL cancelled; // ivar: cancelled
@property (retain) NSError *error; // ivar: _error
@property (getter=isExecuting) BOOL executing; // ivar: executing
@property (getter=isFinished) BOOL finished; // ivar: finished
@property (retain) NSMutableArray *successDependencies; // ivar: _successDependencies


+(id)operation:(id)arg0 block:(id)arg1 ;
-(BOOL)checkDependencies;
-(BOOL)startOperation;
-(void)addSuccessDependency:(id)arg0 ;
-(void)completeOperation;


@end


#endif