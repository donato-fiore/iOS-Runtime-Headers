// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSTACKEDALBUMTRANSITION_H
#define PUSTACKEDALBUMTRANSITION_H

@class NSSet, UIView, NSString, UIViewController<PUStackedAlbumControllerTransition>, PHCollection;
@protocol PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate, PUStackedAlbumTransitionDelegate, PLAssetContainer;


#import "PUNavigationTransition.h"
#import "PUStackedAlbumTransitionLayout.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUStackedAlbumLayout.h"
#import "PUTransitionViewAnimator.h"

@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate>

 {
    CGRect _popTransitionInitialVisibleBounds;
    NSSet *_popTransitionInitialVisibleStackedAssetIndexPaths;
    UIView *_animatorView;
    BOOL _didAnimateRoundedCorners;
}


@property (retain, nonatomic, setter=_setDisableToken:) id *_disableToken; // ivar: __disableToken
@property (retain, nonatomic, setter=_setInteractiveTransitionLayout:) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout; // ivar: __interactiveTransitionLayout
@property (retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // ivar: __photoPinchGestureRecognizer
@property (weak, nonatomic, setter=_setTransitionLayout:) PUStackedAlbumLayout *_transitionLayout; // ivar: __transitionLayout
@property (retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator; // ivar: __transitionViewAnimator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUStackedAlbumTransitionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForFolder) BOOL forFolder; // ivar: _forFolder
@property (readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *fromViewController;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint interactionCenter; // ivar: _interactionCenter
@property (nonatomic, setter=_setExpanding:) BOOL isExpanding; // ivar: _isExpanding
@property (nonatomic, setter=setForStandInAlbum:) BOOL isForStandInAlbum; // ivar: _isForStandInAlbum
@property (retain, nonatomic, setter=ph_setPhotoCollection:) PHCollection *ph_photoCollection; // ivar: _ph_photoCollection
@property (retain, nonatomic) NSObject<PLAssetContainer> *photoCollection; // ivar: _photoCollection
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *toViewController;


-(BOOL)collectionViewLayoutShouldProvideCustomAnimations:(id)arg0 ;
-(id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg0 collectionView:(id)arg1 ;
-(id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg0 otherLayout:(id)arg1 forPush:(BOOL)arg2 ;
-(id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg0 ;
-(id)init;
-(void)animatePopTransition;
-(void)animatePushTransition;
-(void)collectionViewLayout:(id)arg0 willSupplyLayoutAttributes:(id)arg1 ;
-(void)completeInteractiveOperation:(NSInteger)arg0 finished:(BOOL)arg1 ;
-(void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg0 isExpanding:(BOOL)arg1 ;
-(void)transitionViewAnimatorDidEnd:(id)arg0 finished:(BOOL)arg1 ;
-(void)transitionViewAnimatorDidUpdate:(id)arg0 ;
-(void)transitionViewAnimatorWillEnd:(id)arg0 withTargetTranslation:(struct CGPoint *)arg1 ;
-(void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg0 ;


@end


#endif