// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUONEUPPHOTOSSHARINGTRANSITION_H
#define PUONEUPPHOTOSSHARINGTRANSITION_H

@class UICollectionViewLayout, NSString, UIViewController<PUOneUpAssetTransitionViewController>, UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController>;
@protocol PUOneUpAssetTransition, PUOneUpPhotosSharingTransitionDelegate;


#import "PUModalTransition.h"
#import "PUOneUpPhotosSharingTransitionContext.h"

@interface PUOneUpPhotosSharingTransition : PUModalTransition <PUOneUpAssetTransition>



@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // ivar: __transitionLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpPhotosSharingTransitionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpPhotosSharingTransitionContext; // ivar: _oneUpPhotosSharingTransitionContext
@property (weak, nonatomic) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController; // ivar: _presentingViewController
@property (weak, nonatomic) UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *sharingTransitionViewController; // ivar: _sharingTransitionViewController
@property (readonly) Class superclass;


-(void)animateDismissTransition;
-(void)animatePresentTransition;


@end


#endif