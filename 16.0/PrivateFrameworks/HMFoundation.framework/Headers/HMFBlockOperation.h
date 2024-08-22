// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFBLOCKOPERATION_H
#define HMFBLOCKOPERATION_H

@class NSArray;


#import "HMFOperation.h"

@interface HMFBlockOperation : HMFOperation

@property (readonly, copy) NSArray *executionBlocks; // ivar: _executionBlocks


+(id)blockOperationWithBlock:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(void)addExecutionBlock:(id)arg0 ;
-(void)main;


@end


#endif