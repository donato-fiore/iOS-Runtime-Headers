// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARLOCKITEMPADLOCKVIEW_H
#define _UISTATUSBARLOCKITEMPADLOCKVIEW_H

@class NSString;
@protocol CAAnimationDelegate;


#import "UIView.h"
#import "UIImageView.h"
#import "UIStatusBarLockItemView.h"

@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate>



@property (retain, nonatomic) UIImageView *bodyView; // ivar: _bodyView
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIStatusBarLockItemView *owner; // ivar: _owner
@property (retain, nonatomic) UIImageView *shackleView; // ivar: _shackleView
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 owner:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animateUnlockCompletionBlock:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)jiggleCompletionBlock:(id)arg0 ;
-(void)reset;


@end


#endif