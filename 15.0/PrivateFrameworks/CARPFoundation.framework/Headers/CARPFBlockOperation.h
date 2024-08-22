// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFBLOCKOPERATION_H
#define CARPFBLOCKOPERATION_H

@class NSArray;


#import "CARPFOperation.h"

@interface CARPFBlockOperation : CARPFOperation

@property (readonly, copy) NSArray *executionBlocks; // ivar: _executionBlocks


+(id)blockOperationWithBlock:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(void)addExecutionBlock:(id)arg0 ;
-(void)main;


@end


#endif