// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFUTURECOMPLETIONBLOCKS_H
#define CNFUTURECOMPLETIONBLOCKS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CNFutureCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}




-(BOOL)shouldCallImmediately;
-(id)init;
// -(void)addCompletionBlock:(id)arg0 orCallWithFutureResult:(unk)arg1  ;
// -(void)addFailureBlock:(id)arg0 orCallWithFutureResult:(unk)arg1  ;
// -(void)addSuccessBlock:(id)arg0 orCallWithFutureResult:(unk)arg1  ;
-(void)flushCompletionBlocksWithFutureResult:(id)arg0 ;
-(void)setShouldCallImmediately:(BOOL)arg0 ;


@end


#endif