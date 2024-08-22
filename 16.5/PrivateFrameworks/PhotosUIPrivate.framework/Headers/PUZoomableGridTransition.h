// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUZOOMABLEGRIDTRANSITION_H
#define PUZOOMABLEGRIDTRANSITION_H

@class UICollectionView, UICollectionViewTransitionLayout, NSIndexPath, NSString;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "PUMomentsZoomLevelManager.h"

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning>

 {
    UICollectionView *_collectionView;
}


@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewTransitionLayout *_transitionLayout; // ivar: __transitionLayout
@property (retain, nonatomic) NSIndexPath *anchorItemIndexPath; // ivar: _anchorItemIndexPath
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (nonatomic, setter=_setCurrentInteractiveCenterOffset:) CGSize currentInteractiveCenterOffset; // ivar: _currentInteractiveCenterOffset
@property (nonatomic, setter=_setCurrentInteractiveProgress:) CGFloat currentInteractiveProgress; // ivar: _currentInteractiveProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (nonatomic, setter=_setOriginZoomLevel:) NSUInteger originZoomLevel; // ivar: _originZoomLevel
@property (readonly) Class superclass;
@property (nonatomic, setter=_setTargetZoomLevel:) NSUInteger targetZoomLevel; // ivar: _targetZoomLevel
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (nonatomic, setter=_setTransitionState:) NSUInteger transitionState; // ivar: _transitionState
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly, weak, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // ivar: _zoomLevelManager


-(id)initWithOriginLevel:(NSUInteger)arg0 targetLevel:(NSUInteger)arg1 zoomLevelManager:(id)arg2 interactive:(BOOL)arg3 ;
-(void)cancelInteractiveTransitionAnimated;
-(void)finishInteractiveTransitionAnimated;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateInteractiveTransitionForProgress:(CGFloat)arg0 centerOffset:(struct CGSize )arg1 ;


@end


#endif