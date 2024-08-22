// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARLOCKVIEW_H
#define _UISTATUSBARLOCKVIEW_H

@class NSString;
@protocol CAAnimationDelegate, _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"
#import "_UIStatusBarImageView.h"

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (retain, nonatomic) _UIStatusBarImageView *bodyView; // ivar: _bodyView
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (retain, nonatomic) _UIStatusBarImageView *shackleView; // ivar: _shackleView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)animateUnlockWithCompletionBlock:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)jiggleWithCompletionBlock:(id)arg0 ;
-(void)resetLock;


@end


#endif