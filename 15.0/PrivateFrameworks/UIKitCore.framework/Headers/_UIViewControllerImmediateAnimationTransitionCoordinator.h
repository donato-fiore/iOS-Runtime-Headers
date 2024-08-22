// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWCONTROLLERIMMEDIATEANIMATIONTRANSITIONCOORDINATOR_H
#define _UIVIEWCONTROLLERIMMEDIATEANIMATIONTRANSITIONCOORDINATOR_H

@class NSString;
@protocol UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIViewControllerImmediateAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>



@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionVelocity;
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
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


// -(BOOL)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
// -(BOOL)animateAlongsideTransitionInView:(id)arg0 animation:(id)arg1 completion:(unk)arg2  ;
-(id)initWithContainerView:(id)arg0 ;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0 ;
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0 ;


@end


#endif