// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFDYNAMICBARANIMATOR_H
#define _SFDYNAMICBARANIMATOR_H

@class CADisplayLink, NSPointerArray;
@protocol _SFDynamicBarAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface _SFDynamicBarAnimator : NSObject {
    CGFloat _topBarHeightForState;
    CGFloat _bottomBarOffsetForState;
    CADisplayLink *_displayLink;
    CGFloat _targetTopBarHeight;
    CGFloat _unroundedTopBarHeight;
    CGFloat _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    CGFloat _lastOffset;
    BOOL _inSteadyState;
    BOOL _performingBatchUpdates;
    NSPointerArray *_stateObservers;
}


@property (readonly, nonatomic) CGFloat bottomBarOffset; // ivar: _bottomBarOffset
@property (weak, nonatomic) NSObject<_SFDynamicBarAnimatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isInSteadyState;
@property (nonatomic) CGFloat minimumTopBarHeight; // ivar: _minimumTopBarHeight
@property (readonly, nonatomic, getter=isSendingOutputsDidChange) BOOL sendingOutputsDidChange; // ivar: _sendingOutputsDidChange
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger targetState;
@property (readonly, nonatomic) CGFloat topBarHeight; // ivar: _topBarHeight
@property (readonly, nonatomic, getter=isTrackingDrag) BOOL trackingDrag; // ivar: _dragging


-(BOOL)_canTransitionToState:(NSInteger)arg0 withMinimumTopBarHeight:(CGFloat)arg1 ;
-(BOOL)canTransitionToState:(NSInteger)arg0 ;
-(CGFloat)_bottomBarOffsetForTopBarHeight:(CGFloat)arg0 ;
-(CGFloat)_constrainTopBarHeight:(CGFloat)arg0 ;
-(CGFloat)_constrainTopBarHeight:(CGFloat)arg0 withMinimumTopBarHeight:(CGFloat)arg1 ;
-(id)init;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_endDraggingWithVelocity:(CGFloat)arg0 ;
-(void)_moveBarsWithDelta:(CGFloat)arg0 ;
-(void)_setInSteadyState:(BOOL)arg0 ;
-(void)_transitionToSteadyState;
-(void)_updateDisplayLink;
-(void)_updateOutputs;
-(void)addObserver:(id)arg0 ;
-(void)attemptTransitionToState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)beginDraggingWithOffset:(CGFloat)arg0 ;
-(void)dealloc;
-(void)endDraggingWithTargetOffset:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(void)endScrolling;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateDraggingWithOffset:(CGFloat)arg0 ;


@end


#endif