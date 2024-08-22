// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCBLOCKOPERATION_H
#define DMCBLOCKOPERATION_H

@class CATOperation;



@interface DMCBlockOperation : CATOperation

@property (copy, nonatomic) id *block; // ivar: _block


+(id)blockOperationWithBlock:(id)arg0 ;
-(BOOL)isAsynchronous;
-(void)main;


@end


#endif