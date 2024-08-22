// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUDYNAMICBARANIMATOR_H
#define TUDYNAMICBARANIMATOR_H

@class CADisplayLink;
@protocol TUDynamicBarAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface TUDynamicBarAnimator : NSObject {
    CGFloat _topBarHeightForState;
    CGFloat _bottomBarOffsetForState;
    BOOL _dragging;
    CADisplayLink *_displayLink;
    CGFloat _targetTopBarHeight;
    CGFloat _unroundedTopBarHeight;
    CGFloat _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    CGFloat _lastOffset;
    BOOL _inSteadyState;
}


@property (readonly, nonatomic) CGFloat bottomBarOffset; // ivar: _bottomBarOffset
@property (weak, nonatomic) NSObject<TUDynamicBarAnimatorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maximumBottomBarOffset; // ivar: _maximumBottomBarOffset
@property (readonly, nonatomic) CGFloat maximumTopBarHeight;
@property (readonly, nonatomic) CGFloat minimumBottomBarOffset;
@property (nonatomic) CGFloat minimumTopBarHeight; // ivar: _minimumTopBarHeight
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger targetState;
@property (readonly, nonatomic) CGFloat topBarHeight; // ivar: _topBarHeight


-(BOOL)canTransitionToState:(NSInteger)arg0 ;
-(CGFloat)_bottomBarOffsetForTopBarHeight:(CGFloat)arg0 ;
-(CGFloat)_constrainTopBarHeight:(CGFloat)arg0 ;
-(id)init;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_moveBarsWithDelta:(CGFloat)arg0 ;
-(void)_setInSteadyState:(BOOL)arg0 ;
-(void)_transitionToSteadyState;
-(void)_updateDisplayLink;
-(void)_updateOutputs;
-(void)attemptTransitionToState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)beginScrollingWithOffset:(CGFloat)arg0 ;
-(void)endScrollingWithTargetOffset:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(void)updateScrollingWithOffset:(CGFloat)arg0 ;


@end


#endif