// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWCONTROLLERNULLANIMATIONTRANSITIONCOORDINATOR_H
#define _UIVIEWCONTROLLERNULLANIMATIONTRANSITIONCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>

 {
    BOOL _transitionIsInFlight;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
}


@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionVelocity;
@property (nonatomic) UIView *containerView; // ivar: _containerView
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
-(BOOL)isRotating;
-(id)_alongsideAnimations:(BOOL)arg0 ;
-(id)_alongsideCompletions:(BOOL)arg0 ;
-(id)_mainContext;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(void)_applyBlocks:(id)arg0 releaseBlocks:(id)arg1 ;
-(void)_runAlongsideAnimations;
-(void)_runAlongsideCompletions;
-(void)_runAlongsideCompletionsAfterCommit;
-(void)_runAlongsideCompletionsAndClearAlongsideAnimations;
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0 ;
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0 ;


@end


#endif