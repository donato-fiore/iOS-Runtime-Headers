// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIACEOBJECTCONTROLLERCELL_H
#define SIRIUIACEOBJECTCONTROLLERCELL_H

@class UIView, NSString;
@protocol CAAnimationDelegate;


#import "SiriUIClearBackgroundCell.h"
#import "SiriUIAceObjectViewController.h"

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell <CAAnimationDelegate>

 {
    UIView *_animationView;
    CGFloat _topPadding;
}


@property (retain, nonatomic) SiriUIAceObjectViewController *aceViewController; // ivar: _aceViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger insertionAnimationType; // ivar: _insertionAnimationType
@property (retain, nonatomic) UIView *replacedView; // ivar: _replacedView
@property (nonatomic) NSInteger replacementAnimationType; // ivar: _replacementAnimationType
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)_flyInAnimationForAceViewController:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_animateInsertionFadeIn;
-(void)_animateInsertionFlyIn;
-(void)_animateReplacementCrossFade;
-(void)_parentPreviousViewInCell;
-(void)_parentViewInCell;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)beginAnimation;
-(void)configureSubviewsForAnimationType;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setTopPadding:(CGFloat)arg0 ;


@end


#endif