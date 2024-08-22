// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREMESHANIMATEDWRAPPERVIEWCONTROLLER_H
#define SBSYSTEMAPERTUREMESHANIMATEDWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIView, UIViewFloatAnimatableProperty;


#import "SBPortalView.h"

@interface SBSystemApertureMeshAnimatedWrapperViewController : UIViewController {
    UIView *_containerView;
    SBPortalView *_portalView;
    UIViewFloatAnimatableProperty *_activeAnimationProgressProperty;
    CGPoint _inProgressTransitionTarget;
    CGPoint _transitionVelocity;
    NSUInteger _inflectionPointReached;
    NSUInteger _transitionState;
    NSUInteger _positionAnimationCount;
    NSUInteger _meshAnimationCount;
    BOOL _expanded;
}


@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) UIView *sourceView;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isMeshAnimating;
-(BOOL)_isPositionAnimating;
-(id)_animatablePropertyWithNotifications:(id)arg0 forAnimationDirection:(NSUInteger)arg1 ;
-(id)_animationInflectionPointsForDirection:(NSUInteger)arg0 ;
-(id)_collapsedMesh;
-(id)_collapsingMesh1;
-(id)_collapsingMesh2;
-(id)_expandingMesh1;
-(id)_expandingMesh2;
-(id)_identityMesh;
-(id)_meshAnimationSettingsForDirection:(NSUInteger)arg0 ;
-(id)_meshTransformAtIndex:(NSUInteger)arg0 forDirection:(NSUInteger)arg1 ;
-(struct CGPoint )_systemApertureTransitionTargetCenter;
-(struct CGRect )_containerViewFrameForState:(NSUInteger)arg0 ;
-(struct CGRect )_fullyExpandedSourceViewRect;
-(struct CGRect )_systemApertureDefaultFrame;
-(void)_animationReachedProgress:(CGFloat)arg0 direction:(NSUInteger)arg1 ;
-(void)_decrementActiveMeshAnimationCount;
-(void)_decrementActivePositionAnimationCount;
-(void)_incrementActiveMeshAnimationCount;
-(void)_incrementActivePositionAnimationCount;
-(void)_updatePortalEnablement;
-(void)viewDidLoad;


@end


#endif