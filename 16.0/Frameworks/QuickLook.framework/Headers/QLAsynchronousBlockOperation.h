// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLASYNCHRONOUSBLOCKOPERATION_H
#define QLASYNCHRONOUSBLOCKOPERATION_H

@class QLAsynchronousOperation;



@interface QLAsynchronousBlockOperation : QLAsynchronousOperation

@property (copy, nonatomic) id *block; // ivar: _block


-(id)initWithBlock:(id)arg0 ;
-(void)main;


@end


#endif