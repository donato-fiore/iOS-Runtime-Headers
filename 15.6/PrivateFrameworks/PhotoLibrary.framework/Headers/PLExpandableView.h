// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLEXPANDABLEVIEW_H
#define PLEXPANDABLEVIEW_H

@class UIView;
@protocol PLExpandableViewDelegate;



@interface PLExpandableView : UIView {
    id<PLExpandableViewDelegate> *_delegate;
    id *_collapsingCompletionHandler;
    id *_expansionCompletionHandler;
    CGRect _contractedFrame;
    CGRect _expandedFrame;
    CGPoint _leftTouchLocation;
    CGPoint _rightTouchLocation;
    CGPoint _previousLeftLocation;
    CGPoint _previousRightLocation;
    NSUInteger _leftTouchIndex;
    NSUInteger _rightTouchIndex;
    CGFloat _pinchVelocity;
    CGFloat _trackingTimeInterval;
    CGFloat _expansionFraction;
    ? _expandFlags;
}


@property (nonatomic) BOOL allowsExpansion;
@property (nonatomic) CGRect contractedFrame;
@property (nonatomic) CGRect expandedFrame;


-(BOOL)_canPinch;
-(BOOL)canCollapse;
-(BOOL)isTracking;
-(CGFloat)expansionFraction;
-(float)completeTrackingPinch:(id)arg0 toState:(int)arg1 duration:(CGFloat)arg2 ;
-(float)continueTrackingPinch:(id)arg0 ;
-(id)delegate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)previousState;
-(int)snapState:(BOOL)arg0 ;
-(int)state;
-(struct CGRect )pinchRect:(struct CGRect )arg0 inView:(id)arg1 insetTouches:(BOOL)arg2 ;
-(void)_notifyDidCancelCollapsing;
-(void)_notifyDidCancelExpanding;
-(void)_notifyDidCompleteCollapsing;
-(void)_notifyDidCompleteExpanding;
-(void)_notifyWillBeginCollapsing;
-(void)_notifyWillBeginExpanding;
-(void)_notifyWillCancelCollapsingWithDuration:(CGFloat)arg0 ;
-(void)_notifyWillCancelExpandingWithDuration:(CGFloat)arg0 ;
-(void)_notifyWillCompleteCollapsingWithDuration:(CGFloat)arg0 ;
-(void)_notifyWillCompleteExpandingWithDuration:(CGFloat)arg0 ;
-(void)_setAutorotationDisabled:(BOOL)arg0 ;
-(void)_transitionFromCancelContract:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromCancelExpand:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromCompleteContract:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromCompleteExpand:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromContracted:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromContracting:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromExpanded:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionFromExpanding:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)beginTrackingPinch:(id)arg0 ;
-(void)canceledPinch:(id)arg0 ;
-(void)collapseWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)continuedPinch:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)expandWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)finishTransition;
-(void)finishTransitionToState:(int)arg0 ;
-(void)finishedPinch:(id)arg0 ;
-(void)notifyExpansionFraction:(float)arg0 force:(BOOL)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setExpansionFraction:(CGFloat)arg0 ;
-(void)setState:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)startedPinch:(id)arg0 ;
-(void)stateDidChangeFrom:(int)arg0 ;
-(void)stateWillChangeTo:(int)arg0 ;
-(void)updatePinchState:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif