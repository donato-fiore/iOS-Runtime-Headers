// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIVIEWCONTROLLERPINCHTRANSITION_H
#define PXUIVIEWCONTROLLERPINCHTRANSITION_H

@class UIView, UIPinchGestureRecognizer;
@protocol UIViewControllerContextTransitioning;


#import "PXUIViewControllerTransition.h"
#import "PXPinchTracker.h"
#import "PXRegionOfInterest.h"

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition

@property (retain, nonatomic, setter=_setDimmingView:) UIView *_dimmingView; // ivar: __dimmingView
@property (retain, nonatomic, setter=_setFromSnapshotView:) UIView *_fromSnapshotView; // ivar: __fromSnapshotView
@property (retain, nonatomic, setter=_setFromView:) UIView *_fromView; // ivar: __fromView
@property (retain, nonatomic, setter=_setPinchTracker:) PXPinchTracker *_pinchTracker; // ivar: __pinchTracker
@property (retain, nonatomic, setter=_setRegionOfInterest:) PXRegionOfInterest *_regionOfInterest; // ivar: __regionOfInterest
@property (nonatomic, setter=_setState:) NSInteger _state; // ivar: __state
@property (retain, nonatomic, setter=_setToSnapshotView:) UIView *_toSnapshotView; // ivar: __toSnapshotView
@property (retain, nonatomic, setter=_setToView:) UIView *_toView; // ivar: __toView
@property (retain, nonatomic, setter=_setTransitionContext:) NSObject<UIViewControllerContextTransitioning> *_transitionContext; // ivar: __transitionContext
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer


+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg0 detailViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_update;
-(void)animateTransition:(id)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif