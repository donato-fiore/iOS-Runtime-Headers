// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREVEALCONTINUOUSEXPOSESTRIPSGESTUREWORKSPACETRANSACTION_H
#define SBREVEALCONTINUOUSEXPOSESTRIPSGESTUREWORKSPACETRANSACTION_H



#import "SBFluidSwitcherGestureWorkspaceTransaction.h"

@interface SBRevealContinuousExposeStripsGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    BOOL _completedGestureWithTransitionRequest;
}




-(BOOL)_canBeInterrupted;
-(NSInteger)_gestureType;
-(void)completeGestureWithTransitionRequest:(id)arg0 ;


@end


#endif