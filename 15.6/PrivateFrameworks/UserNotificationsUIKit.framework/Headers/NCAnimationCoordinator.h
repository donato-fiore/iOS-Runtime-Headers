// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCANIMATIONCOORDINATOR_H
#define NCANIMATIONCOORDINATOR_H

@class BSUIAnimationFactory, _UIViewControllerTransitionContext, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>


@interface NCAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    BSUIAnimationFactory *_factory;
    _UIViewControllerTransitionContext *_transitionContext;
}


@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions
@property (copy, nonatomic) id *animations; // ivar: _animations
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDurationInherited) BOOL durationInherited; // ivar: _durationInherited
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator;


+(id)animationCoordinatorWithDuration:(CGFloat)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAnimationFactory:(id)arg0 ;
// -(void)animate:(id)arg0 completion:(unk)arg1  ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)viewOfChildContainer:(id)arg0 willChangeToSize:(struct CGSize )arg1 ;


@end


#endif