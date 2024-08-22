// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWCELLFOCUSABLEREORDERCONTROL_H
#define UITABLEVIEWCELLFOCUSABLEREORDERCONTROL_H

@class NSString;
@protocol _UIFloatingContentViewDelegate;


#import "UITableViewCellReorderControl.h"
#import "_UIFloatingContentView.h"
#import "UIPanGestureRecognizer.h"
#import "UITapGestureRecognizer.h"

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate>

 {
    _UIFloatingContentView *_floatingContentView;
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_upArrowButtonRecognizer;
    UITapGestureRecognizer *_downArrowButtonRecognizer;
    BOOL _cellHasReorderingAppearance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldHandlePressEvent:(id)arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)initWithTableViewCell:(id)arg0 ;
-(void)_arrowButton:(NSInteger)arg0 ;
-(void)_beginIndirectTracking;
-(void)_downArrowButton:(id)arg0 ;
-(void)_endIndirectTracking;
-(void)_panRecognizer:(id)arg0 ;
-(void)_upArrowButton:(id)arg0 ;
-(void)_updateFloatingViewForCurrentTraits;
-(void)_updateFocusedFloatingContentView:(BOOL)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)floatingContentView:(id)arg0 didFinishTransitioningToState:(NSUInteger)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif