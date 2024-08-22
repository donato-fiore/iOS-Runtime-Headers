// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGSETDOWNITEMANIMATION_H
#define _UIDRAGSETDOWNITEMANIMATION_H

@protocol UIViewSpringAnimationBehaviorDescribing, _UIDragSetDownItemAnimationDelegate, _UIDragSetDownAnimationTarget;

#import <Foundation/Foundation.h>

#import "_UIPlatterView.h"
#import "_DUIVisibleDroppedItem.h"
#import "UIDragItem.h"
#import "_UIPlatterContainerView.h"
#import "UIViewPropertyAnimator.h"
#import "_UIPortalView.h"
#import "UIView.h"
#import "UIWindow.h"
#import "UITargetedDragPreview.h"

@interface _UIDragSetDownItemAnimation : NSObject

@property (nonatomic) BOOL almostToTarget; // ivar: _almostToTarget
@property (nonatomic) int animationCount; // ivar: _animationCount
@property (retain, nonatomic) _UIPlatterView *appPlatterView; // ivar: _appPlatterView
@property (nonatomic) CGPoint center; // ivar: _center
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<UIViewSpringAnimationBehaviorDescribing> *customSpringAnimationBehavior; // ivar: _customSpringAnimationBehavior
@property (nonatomic) BOOL defaultAnimation; // ivar: _defaultAnimation
@property (retain, nonatomic) _UIPlatterView *defaultPlatterView; // ivar: _defaultPlatterView
@property (weak, nonatomic) NSObject<_UIDragSetDownItemAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL done; // ivar: _done
@property (readonly, nonatomic) _DUIVisibleDroppedItem *droppedItem; // ivar: _droppedItem
@property (retain, nonatomic) _UIPlatterView *druidPlatterView; // ivar: _druidPlatterView
@property (nonatomic) BOOL hasStartedSpringAnimation; // ivar: _hasStartedSpringAnimation
@property (nonatomic) CGFloat initialDistanceFromTargetFrame; // ivar: _initialDistanceFromTargetFrame
@property (nonatomic) CGPoint initialTargetVelocity; // ivar: _initialTargetVelocity
@property (nonatomic) CGPoint initialVelocity; // ivar: _initialVelocity
@property (readonly, nonatomic) UIDragItem *item; // ivar: _item
@property (copy, nonatomic) id *midpointHandler; // ivar: _midpointHandler
@property (nonatomic) BOOL midwayToTarget; // ivar: _midwayToTarget
@property (copy, nonatomic) id *morphHandler; // ivar: _morphHandler
@property (copy, nonatomic) id *nearCompletionHandler; // ivar: _nearCompletionHandler
@property (copy, nonatomic) id *nonAnimatedMidpointHandler; // ivar: _nonAnimatedMidpointHandler
@property (retain, nonatomic) _UIPlatterContainerView *platterContainerView; // ivar: _platterContainerView
@property (copy, nonatomic) id *positionHandler; // ivar: _positionHandler
@property (readonly, nonatomic) NSInteger previewMode;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator
@property (readonly, nonatomic) BOOL reachedTarget; // ivar: _reachedTarget
@property (nonatomic) BOOL reparentingCrossfadeComplete; // ivar: _reparentingCrossfadeComplete
@property (retain, nonatomic) _UIPortalView *retargetingContainerPortalView; // ivar: _retargetingContainerPortalView
@property (retain, nonatomic) UIView *retargetingContainerView; // ivar: _retargetingContainerView
@property (nonatomic) BOOL sourceAnimation; // ivar: _sourceAnimation
@property (readonly, nonatomic) UIWindow *targetContainerWindow;
@property (nonatomic) CGRect targetFrame; // ivar: _targetFrame
@property (retain, nonatomic) UITargetedDragPreview *targetedDropPreview; // ivar: _targetedDropPreview
@property (retain, nonatomic) _UIPlatterView *updatedAppPlatterView; // ivar: _updatedAppPlatterView
@property (nonatomic) BOOL updatedPreviewWasAdded; // ivar: _updatedPreviewWasAdded
@property (retain, nonatomic) UITargetedDragPreview *updatedTargetedDropPreview; // ivar: _updatedTargetedDropPreview
@property (retain, nonatomic) NSObject<_UIDragSetDownAnimationTarget> *visualTarget; // ivar: _visualTarget
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)needsReparenting;
-(CGFloat)estimatedFractionCompleteOfAnimation;
-(id)animationCompletionHandler:(SEL)arg0 ;
-(id)initWithDragItem:(id)arg0 droppedItem:(id)arg1 window:(id)arg2 defaultAnimation:(BOOL)arg3 sourceAnimation:(BOOL)arg4 delegate:(id)arg5 ;
-(struct CGRect )getCurrentTargetFrame;
-(void)animationCompleted;
-(void)animationReachedTarget;
-(void)beginAnimation;
-(void)configureAnimation;
-(void)configureCrossfadingAnimationToTargetedPreview;
-(void)configureSystemDefaultAnimation;
-(void)performSpringAnimations:(id)arg0 ;
-(void)performTrackingAnimations:(id)arg0 ;
-(void)prepareAnimationInWindow;
-(void)prepareToBeginAnimation;
-(void)reparentRetargetingContainerViewInTargetContainer;
-(void)updateAnimationTargeting;
-(void)updateDroppedItem:(id)arg0 ;
-(void)updateTargetedDropPreview:(id)arg0 ;


@end


#endif