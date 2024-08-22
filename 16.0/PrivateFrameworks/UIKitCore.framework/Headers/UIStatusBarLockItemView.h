// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARLOCKITEMVIEW_H
#define UISTATUSBARLOCKITEMVIEW_H

@class NSString;
@protocol CAAnimationDelegate;


#import "UIStatusBarItemView.h"
#import "_UIStatusBarLockItemPadlockView.h"
#import "UIView.h"
#import "_UIExpandingGlyphsView.h"

@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate>



@property (nonatomic) BOOL alongsideViewIsBecomingVisible; // ivar: _alongsideViewIsBecomingVisible
@property (copy, nonatomic) id *animationCompletionBlock; // ivar: _animationCompletionBlock
@property (nonatomic) int animationCount; // ivar: _animationCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIStatusBarLockItemPadlockView *padlockView; // ivar: _padlockView
@property (nonatomic) CGFloat padlockViewCenterOffsetFromForegroundViewCenter; // ivar: _padlockViewCenterOffsetFromForegroundViewCenter
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *textClippingView; // ivar: _textClippingView
@property (retain, nonatomic) _UIExpandingGlyphsView *textView; // ivar: _textView
@property (retain, nonatomic) UIView *timeItemSnapshot; // ivar: _timeItemSnapshot
@property (nonatomic) CGFloat timeItemSnapshotCenterOffsetFromForegroundViewCenter; // ivar: _timeItemSnapshotCenterOffsetFromForegroundViewCenter
@property (weak, nonatomic) UIView *viewToAnimateAlongside; // ivar: _viewToAnimateAlongside
@property (nonatomic) CGFloat widthNeededDuringAnimation; // ivar: _widthNeededDuringAnimation
@property (nonatomic) CGFloat widthNeededForFinalState; // ivar: _widthNeededForFinalState


+(CGFloat)lockSlideAnimationDuration;
-(BOOL)_isAnimating;
-(BOOL)isExclusive;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)updateContentsAndWidth;
-(id)accessibilityHUDRepresentation;
-(void)_beginAnimation;
-(void)_endAnimation;
-(void)animateUnlockForegroundView:(id)arg0 timeItemSnapshot:(id)arg1 completionBlock:(id)arg2 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)jiggleCompletionBlock:(id)arg0 ;
-(void)setVisible:(BOOL)arg0 frame:(struct CGRect )arg1 duration:(CGFloat)arg2 ;


@end


#endif