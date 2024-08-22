// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISWIPEOCCURRENCE_H
#define UISWIPEOCCURRENCE_H

@class NSString, NSIndexPath, UIView<_UISwipedView>;
@protocol UISwipeActionPullViewDelegate, _UISwipeViewManipulator;

#import <Foundation/Foundation.h>

#import "UISwipeActionController.h"
#import "UISwipeActionPullView.h"
#import "UIContextualAction.h"

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate>

 {
    ? _flags;
    NSUInteger _actionExecutionCounter;
    UISwipeActionController *_controller;
    NSUInteger _style;
    NSUInteger _defaultStyle;
    CGFloat _roundedStyleCornerRadius;
    UISwipeActionPullView *_leadingPullView;
    UISwipeActionPullView *_trailingPullView;
    id<_UISwipeViewManipulator> *_manipulator;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) NSUInteger configuredDirection; // ivar: _configuredDirection
@property (retain, nonatomic) UIContextualAction *currentAction; // ivar: _currentAction
@property (nonatomic) ? currentSwipeInfo; // ivar: _currentSwipeInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) UIEdgeInsets extraInsets; // ivar: _extraInsets
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView<_UISwipedView> *swipedView; // ivar: _swipedView
@property (nonatomic) BOOL swipedViewMaskWasRemoved; // ivar: _swipedViewMaskWasRemoved


-(BOOL)_didReloadData;
-(BOOL)_hasAmbiguousIndexPath;
-(BOOL)_isSwipeDirectionExposingLeadingEdgePullView:(NSUInteger)arg0 ;
-(BOOL)shouldDismissWithTouchLocation:(struct CGPoint )arg0 ;
-(CGFloat)_extraOffsetForOffset:(CGFloat)arg0 withDirection:(NSUInteger)arg1 ;
-(CGFloat)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg0 ;
-(CGFloat)velocity;
-(NSUInteger)_style;
-(NSUInteger)_styleForConfiguration:(id)arg0 ;
-(NSUInteger)_swipeDirectionForPullView:(id)arg0 ;
-(id)_actionView;
-(id)_pullViewForLeadingEdge:(BOOL)arg0 ;
-(id)_pullViewForSwipeDirection:(NSUInteger)arg0 ;
-(id)actionView;
-(id)initWithController:(id)arg0 indexPath:(id)arg1 defaultStyle:(NSUInteger)arg2 ;
-(id)lockActionViewForAnimation;
-(struct ? )prepareWithSwipeDirection:(NSUInteger)arg0 configuration:(id)arg1 ;
-(struct CGRect )_frameForPullView:(id)arg0 inSwipedItem:(id)arg1 withContainer:(id)arg2 ;
-(void)_executeLifecycleForPerformedAction:(id)arg0 sourceView:(id)arg1 completionHandler:(id)arg2 ;
-(void)_forceTeardown;
-(void)_freezeSwipedViewInsets;
// -(void)_moveItemWithSwipeInfo:(struct ? )arg0 alongsideAnimations:(id)arg1 completion:(unk)arg2  ;
-(void)_performSwipeAction:(id)arg0 inPullView:(id)arg1 swipeInfo:(struct ? )arg2 ;
-(void)_removeAndResetPullViewImmediately:(id)arg0 ;
-(void)_resetItemWithSwipeInfo:(struct ? )arg0 animated:(BOOL)arg1 deletion:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setDidReloadData;
-(void)_setHasAmbiguousIndexPath;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)_unfreezeSwipedViewInsets;
-(void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)arg0 ;
-(void)_updatePullView:(id)arg0 ;
-(void)_updateSwipedStateOnSwipedView:(BOOL)arg0 ;
-(void)beginSwipeTracking:(BOOL)arg0 ;
-(void)endSwipe;
-(void)performPrimaryActionWithSwipeInfo:(struct ? )arg0 ;
-(void)resetAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)resetForReconfiguration;
-(void)setupManipulatorWithController:(id)arg0 ;
-(void)swipeActionPullView:(id)arg0 tappedAction:(id)arg1 ;
-(void)unlockActionViewForAnimation:(id)arg0 ;
-(void)updateLayout;
-(void)updateOffsetWithSwipeInfo:(struct ? )arg0 isTracking:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateSwipedView;


@end


#endif