// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWANIMATIONBLOCKDELEGATE_H
#define UIVIEWANIMATIONBLOCKDELEGATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIViewAnimationState.h"

@interface UIViewAnimationBlockDelegate : NSObject {
    BOOL _didBeginBlockAnimation;
    BOOL _isZeroDuration;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    BOOL _animationDidStopSent;
    id *_start;
    id *_completion;
    NSMutableArray *_systemPostAnimationActions;
}


@property (readonly, nonatomic) BOOL _allowsUserInteraction; // ivar: _allowUserInteraction
@property (weak, nonatomic) UIViewAnimationState *_animationState; // ivar: _animationState
@property (nonatomic, setter=_setForcingImmediateCompletion:) BOOL _forcingImmediateCompletion; // ivar: __forcingImmediateCompletion


// +(id)animationBlockDelegateWithDuration:(CGFloat)arg0 options:(NSUInteger)arg1 start:(id)arg2 completion:(unk)arg3  ;
// +(void)setAnimationBlockDelegateWithDuration:(CGFloat)arg0 options:(NSUInteger)arg1 start:(id)arg2 completion:(unk)arg3  ;
-(BOOL)_allowsHitTesting;
-(void)_didEndBlockAnimation:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)_sendDeferredCompletion:(id)arg0 ;
-(void)_willBeginBlockAnimation:(id)arg0 context:(id)arg1 ;


@end


#endif