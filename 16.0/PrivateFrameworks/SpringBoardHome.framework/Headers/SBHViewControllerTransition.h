// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHVIEWCONTROLLERTRANSITION_H
#define SBHVIEWCONTROLLERTRANSITION_H

@class NSString;
@protocol SBViewControllerTransitionContextDelegate, SBHViewControllerTransitionAnimationContext, BSDescriptionProviding, SBHViewControllerTransitionDelegate;

#import <Foundation/Foundation.h>

#import "SBViewControllerTransitionContext.h"

@interface SBHViewControllerTransition : NSObject <SBViewControllerTransitionContextDelegate, SBHViewControllerTransitionAnimationContext, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHViewControllerTransitionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger targetEndpoint;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext; // ivar: _transitionContext
@property (nonatomic) NSInteger transitionEndpoint; // ivar: _transitionEndpoint
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) BOOL wantsAnimation;


-(id)_newTransitionAnimator;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_handleDidProgressToEndState;
-(void)_handleDidReturnToBeginningState;
-(void)progressToEndStateWithAnimation:(BOOL)arg0 ;
-(void)returnToBeginningStateWithAnimation:(BOOL)arg0 ;
-(void)transitionDidFinish:(id)arg0 ;
-(void)transitionToEndpoint:(NSInteger)arg0 withAnimation:(BOOL)arg1 ;


@end


#endif