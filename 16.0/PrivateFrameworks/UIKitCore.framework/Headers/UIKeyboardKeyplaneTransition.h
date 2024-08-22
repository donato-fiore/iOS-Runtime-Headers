// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDKEYPLANETRANSITION_H
#define UIKEYBOARDKEYPLANETRANSITION_H

@class CADisplayLink, NSMutableArray;
@protocol UIKeyboardKeyplaneTransitionDelegate;

#import <Foundation/Foundation.h>

#import "UIKBTree.h"
#import "UIView.h"
#import "UIKBKeyViewAnimator.h"

@interface UIKeyboardKeyplaneTransition : NSObject {
    CGFloat _currentProgress;
    CGFloat _liftOffProgress;
    CGFloat _finishProgress;
    CGFloat _finishDuration;
    CGFloat _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;
    NSMutableArray *_transitionViews;
}


@property (copy) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) CGFloat endHeight;
@property (nonatomic) BOOL initiallyAtEnd; // ivar: _initiallyAtEnd
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // ivar: _keyViewAnimator
@property (retain, nonatomic) UIKBTree *keyboard; // ivar: _keyboard
@property (readonly, nonatomic) CGFloat nonInteractiveDuration;
@property (readonly, nonatomic) CGFloat startHeight;
@property (weak, nonatomic) NSObject<UIKeyboardKeyplaneTransitionDelegate> *transitionDelegate; // ivar: _transitionDelegate


-(BOOL)canDisplayTransitionFromKeyplane:(id)arg0 toKeyplane:(id)arg1 ;
-(void)addTransitionView:(id)arg0 startFrame:(struct CGRect )arg1 endFrame:(struct CGRect )arg2 ;
-(void)cancelNonInteractiveAnimation;
-(void)commitTransitionRebuild;
-(void)dealloc;
-(void)finalizeTransition;
-(void)finishWithProgress:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(void)rebuildWithStartKeyplane:(id)arg0 startView:(id)arg1 endKeyplane:(id)arg2 endView:(id)arg3 ;
-(void)removeAllAnimations;
-(void)runNonInteractivelyWithCompletion:(id)arg0 ;
-(void)transitionToFinalState:(id)arg0 ;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif