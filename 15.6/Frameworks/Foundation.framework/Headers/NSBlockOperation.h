// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSBLOCKOPERATION_H
#define NSBLOCKOPERATION_H

@class NSMutableArray, NSArray;


#import "NSOperation.h"

@interface NSBlockOperation : NSOperation {
    NSMutableArray *_executionBlocks;
    id *_block;
}


@property (readonly, copy) NSArray *executionBlocks;


+(id)blockOperationWithBlock:(id)arg0 ;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)addExecutionBlock:(id)arg0 ;
-(void)dealloc;
-(void)main;


@end


#endif