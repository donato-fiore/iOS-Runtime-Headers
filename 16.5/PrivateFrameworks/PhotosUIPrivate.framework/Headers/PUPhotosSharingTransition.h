// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSSHARINGTRANSITION_H
#define PUPHOTOSSHARINGTRANSITION_H

@class UICollectionViewLayout, UIViewController<PUPhotosSharingTransitionViewController>;
@protocol PUPhotosSharingTransitionDelegate;


#import "PUModalTransition.h"
#import "PUPhotosSharingTransitionContext.h"

@interface PUPhotosSharingTransition : PUModalTransition

@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // ivar: __transitionLayout
@property (weak, nonatomic) NSObject<PUPhotosSharingTransitionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // ivar: _photosSharingTransitionContext
@property (retain, nonatomic) UIViewController<PUPhotosSharingTransitionViewController> *sharingTransitionViewController; // ivar: _sharingTransitionViewController


-(void)animateDismissTransition;
-(void)animatePresentTransition;


@end


#endif