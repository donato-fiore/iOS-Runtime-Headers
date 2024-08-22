// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITRANSITIONVIEW_H
#define UITRANSITIONVIEW_H

@class NSMutableArray;
@protocol NSCoding;


#import "UIView.h"
#import "UIResponder.h"
#import "UIWindow.h"

@interface UITransitionView : UIView <NSCoding>

 {
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id *_delegate;
    UIWindow *_originalWindow;
    ? _transitionViewFlags;
    CGFloat _curlUpRevealedHeight;
    int _textEffectsVisibilityLevel;
}


@property (readonly, nonatomic) CGFloat _curlUpRevealedHeight;
@property (nonatomic) NSInteger animationTimingCurve; // ivar: _animationTimingCurve
@property (nonatomic) BOOL ignoreDirectTouchEvents; // ivar: _ignoreDirectTouchEvents
@property (nonatomic) BOOL shouldNotifyDidCompleteImmediately;


+(CGFloat)defaultDurationForTransition:(int)arg0 ;
-(BOOL)_isTransitioningFromFromView:(id)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldDisableGroupOpacityOnAlphaTransitions;
-(BOOL)ignoresInteractionEvents;
-(BOOL)isTransitioning;
-(BOOL)rasterizesOnTransition;
-(BOOL)transition:(int)arg0 fromView:(id)arg1 toView:(id)arg2 ;
-(BOOL)transition:(int)arg0 fromView:(id)arg1 toView:(id)arg2 removeFromView:(BOOL)arg3 ;
-(BOOL)transition:(int)arg0 toView:(id)arg1 ;
-(CGFloat)durationForTransition:(int)arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)delegate;
-(id)fromView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)toView;
-(int)textEffectsVisibilityLevel;
-(void)_didCompleteTransition:(BOOL)arg0 ;
-(void)_didStartTransition;
-(void)_startTransition:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)_transitionDidStopFinished:(BOOL)arg0 ;
-(void)_viewDidMoveFromScreen:(id)arg0 toScreen:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)notifyDidCompleteTransition:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setIgnoresInteractionEvents:(BOOL)arg0 ;
-(void)setRasterizesOnTransition:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif