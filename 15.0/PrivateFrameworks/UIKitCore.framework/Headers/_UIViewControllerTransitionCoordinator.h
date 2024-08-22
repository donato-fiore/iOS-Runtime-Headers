// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWCONTROLLERTRANSITIONCOORDINATOR_H
#define _UIVIEWCONTROLLERTRANSITIONCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "_UIViewControllerTransitionContext.h"
#import "UIView.h"

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>



@property (retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews; // ivar: __alongsideAnimationViews
@property (retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations; // ivar: __alongsideAnimations
@property (retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions; // ivar: __alongsideCompletions
@property (retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers; // ivar: __interactiveChangeHandlers
@property (nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext; // ivar: __mainContext
@property (retain, nonatomic, setter=_setSystemAlongsideAnimations:) NSMutableArray *_systemAlongsideAnimations; // ivar: __systemAlongsideAnimations
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionVelocity;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL initiallyInteractive;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL isInterruptible;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGAffineTransform targetTransform;
@property (readonly, nonatomic) CGFloat transitionDuration;


// -(BOOL)_animateAlongsideTransitionInView:(id)arg0 systemAnimation:(BOOL)arg1 systemCompletion:(BOOL)arg2 animation:(id)arg3 completion:(unk)arg4  ;
// -(BOOL)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
// -(BOOL)animateAlongsideTransitionInView:(id)arg0 animation:(id)arg1 completion:(unk)arg2  ;
-(BOOL)isCompleting;
-(BOOL)isRotating;
-(id)_alongsideAnimations:(BOOL)arg0 ;
-(id)_alongsideCompletions:(BOOL)arg0 ;
-(id)_interactiveChangeHandlers:(BOOL)arg0 ;
-(id)_systemAlongsideAnimations:(BOOL)arg0 ;
-(id)initWithMainContext:(id)arg0 ;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(struct CGAffineTransform )affineTransform;
-(void)_applyBlocks:(id)arg0 releaseBlocks:(id)arg1 ;
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0 ;
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0 ;


@end


#endif