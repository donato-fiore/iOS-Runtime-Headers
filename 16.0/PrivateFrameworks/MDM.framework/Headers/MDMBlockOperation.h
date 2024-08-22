// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMBLOCKOPERATION_H
#define MDMBLOCKOPERATION_H

@class CATOperation;



@interface MDMBlockOperation : CATOperation

@property (copy, nonatomic) id *block; // ivar: _block


+(id)blockOperationWithBlock:(id)arg0 ;
-(BOOL)isAsynchronous;
-(void)main;


@end


#endif