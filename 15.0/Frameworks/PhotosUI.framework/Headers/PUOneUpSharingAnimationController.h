// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUONEUPSHARINGANIMATIONCONTROLLER_H
#define PUONEUPSHARINGANIMATIONCONTROLLER_H

@class UISheetAnimationController, NSString, UIViewController<PUOneUpAssetTransitionViewController>;
@protocol PUOneUpAssetTransition, PUOneUpSharingAnimationControllerDelegate;


#import "PUOneUpPhotosSharingTransitionContext.h"

@interface PUOneUpSharingAnimationController : UISheetAnimationController <PUOneUpAssetTransition>

 {
    BOOL _interruptibleAnimatorForTransitionWasCalled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpSharingAnimationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpTransitionContext; // ivar: _oneUpTransitionContext
@property (readonly, weak, nonatomic) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


+(id)new;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithTransitionContext:(id)arg0 presentingViewController:(id)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)_configurePhotoView:(id)arg0 withContentHelper:(id)arg1 ;
-(void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg0 inTransitioningView:(id)arg1 ;


@end


#endif