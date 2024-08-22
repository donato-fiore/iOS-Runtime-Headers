// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKBLOCKOPERATION_H
#define CRKBLOCKOPERATION_H

@class CATOperation;



@interface CRKBlockOperation : CATOperation

@property (readonly, nonatomic) id *operationBlock; // ivar: _operationBlock


+(id)blockOperationWithBlock:(id)arg0 ;
-(BOOL)isAsynchronous;
-(id)initWithOperationBlock:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif