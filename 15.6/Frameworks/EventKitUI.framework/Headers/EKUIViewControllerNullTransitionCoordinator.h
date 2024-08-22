// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIVIEWCONTROLLERNULLTRANSITIONCOORDINATOR_H
#define EKUIVIEWCONTROLLERNULLTRANSITIONCOORDINATOR_H

@class UIView, NSString;
@protocol UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>


@interface EKUIViewControllerNullTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>



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


// -(BOOL)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
// -(BOOL)animateAlongsideTransitionInView:(id)arg0 animation:(id)arg1 completion:(unk)arg2  ;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0 ;
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0 ;


@end


#endif