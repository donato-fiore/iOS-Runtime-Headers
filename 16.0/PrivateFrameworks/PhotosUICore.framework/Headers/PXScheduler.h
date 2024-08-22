// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSCHEDULER_H
#define PXSCHEDULER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXScheduler : NSObject {
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}




+(id)sharedScheduler;
-(id)init;
-(void)_enteredDefaultRunLoopMode;
-(void)_performBlock:(id)arg0 ;
-(void)_performPendingBlocks;
-(void)_performPendingBlocksIfNeeded;
-(void)dispatchInMainTransaction:(id)arg0 ;
-(void)dispatchInMainTransactionAfterDelay:(CGFloat)arg0 block:(id)arg1 ;
-(void)dispatchOnMainThreadWhenNotScrolling:(id)arg0 ;
-(void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(CGFloat)arg0 block:(id)arg1 ;
-(void)scrollViewDidScroll;
-(void)scrollViewWillLayoutSubviews;


@end


#endif