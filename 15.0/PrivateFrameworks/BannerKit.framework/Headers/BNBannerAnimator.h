// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNBANNERANIMATOR_H
#define BNBANNERANIMATOR_H

@class BSAnimationSettings, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface BNBannerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    BSAnimationSettings *_animationSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRetargetable) BOOL retargetable;
@property (readonly) Class superclass;


+(id)defaultResizeAnimationSettings;
// +(void)_animateInteractive:(BOOL)arg0 settings:(id)arg1 animations:(id)arg2 completion:(unk)arg3  ;
// +(void)animateInteractive:(BOOL)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// +(void)animateWithSettings:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithAnimationSettings:(id)arg0 ;
-(void)actionsForTransition:(id)arg0 ;
// -(void)animateByRetargetingAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)animateTransition:(id)arg0 ;


@end


#endif