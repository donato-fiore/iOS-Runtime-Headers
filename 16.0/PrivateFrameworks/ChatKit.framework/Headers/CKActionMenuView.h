// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKACTIONMENUVIEW_H
#define CKACTIONMENUVIEW_H

@class UIView, NSArray, UIBlurEffect, UIVisualEffectView;


#import "CKActionMenuController.h"

@interface CKActionMenuView : UIView

@property (weak, nonatomic) CKActionMenuController *actionMenuController; // ivar: _actionMenuController
@property (copy, nonatomic) NSArray *actionMenuItems; // ivar: _actionMenuItems
@property (retain, nonatomic) UIBlurEffect *blurEffect; // ivar: _blurEffect
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (nonatomic) NSUInteger defaultActionIndex; // ivar: _defaultActionIndex
@property (copy, nonatomic) NSArray *presentationActionMenuItems; // ivar: _presentationActionMenuItems
@property (nonatomic) NSUInteger presentationDefaultActionIndex; // ivar: _presentationDefaultActionIndex
@property (nonatomic) CGRect presentationTargetBounds; // ivar: _presentationTargetBounds
@property (nonatomic) CGPoint presentationTargetPosition; // ivar: _presentationTargetPosition
@property (nonatomic, getter=isTouchInside) BOOL touchInside; // ivar: _touchInside


// +(void)collapseAnimation:(id)arg0 completion:(unk)arg1  ;
-(id)actionMenuItemAtPoint:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(id)description;
-(id)initWithActionMenuItems:(id)arg0 defaultActionIndex:(NSUInteger)arg1 blurEffectStyle:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)actionMenuGestureRecognized:(id)arg0 ;
-(void)configureForPresentationAtPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(void)dismissActionMenuViewAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)layoutSubviews;
-(void)presentActionMenuViewFromPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif