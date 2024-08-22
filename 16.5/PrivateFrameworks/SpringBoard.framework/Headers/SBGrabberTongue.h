// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBGRABBERTONGUE_H
#define SBGRABBERTONGUE_H

@class UIPanGestureRecognizer, UITapGestureRecognizer, UIView, _UIBackdropView, UIImageView, NSString;
@protocol SBSystemGestureRecognizerDelegate, BSInvalidatable, SBGrabberTongueDelegate;

#import <Foundation/Foundation.h>

#import "SBIndirectPanGestureRecognizer.h"
#import "SBWindowScene.h"

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate>

 {
    BOOL _invalidated;
    UIPanGestureRecognizer *_edgePullGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBIndirectPanGestureRecognizer *_indirectEdgePullGestureRecognizer;
    UIView *_tongueContainer;
    _UIBackdropView *_tongueBackdropView;
    UIImageView *_tongueChevron;
    BOOL _tongueVisible;
    BOOL _inPullGesture;
    BOOL _inShowTongueGesture;
    BOOL _inDismissTongueGesture;
    BOOL _inAmbiguousGesture;
    BOOL _beganAmbiguousPullGesture;
    NSUInteger _systemGestureType;
    UIView *_containingView;
    CGFloat _gestureStartTime;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
    SBWindowScene *_windowScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBGrabberTongueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger screenEdge; // ivar: _screenEdge
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


-(BOOL)_shouldAllowSecondSwipeWithRecognizer:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 ;
-(BOOL)_shouldSecondSwipeDismissTongueWithRecognizer:(id)arg0 ;
-(BOOL)_shouldShowTongueOnFirstSwipeWithRecognizer:(id)arg0 ;
-(BOOL)_tongueOrPullEnabledForGestureRecognizer:(id)arg0 ;
-(BOOL)dismissWithStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isEdgeLocationInGrabberRegion:(CGFloat)arg0 ;
-(CGFloat)_ambiguousActivationMargin;
-(CGFloat)_ambiguousActivationMarginIfHonored;
-(CGFloat)_centerOnScreenEdge;
-(CGFloat)_distanceFromEdgeForRecognizer:(id)arg0 ;
-(CGFloat)_edgeOrientedVelocityForRecognizer:(id)arg0 ;
-(CGFloat)distanceFromEdge;
-(CGFloat)edgeLocationForTouch:(id)arg0 ;
-(CGFloat)edgeOrientedVelocity;
-(id)_createEdgePullGestureRecognizerWithAction:(SEL)arg0 ;
-(id)_createTapGestureRecognizerWithAction:(SEL)arg0 ;
-(id)_newBackdropViewWithColorStyle:(NSInteger)arg0 ;
-(id)_newChevronView;
-(id)edgePullGestureRecognizer;
-(id)indirectEdgePullGestureRecognizer;
-(id)init;
-(id)initWithDelegate:(id)arg0 edge:(NSUInteger)arg1 type:(NSUInteger)arg2 windowScene:(id)arg3 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGAffineTransform )_transformForTongueContainer;
-(struct CGRect )_chevronFrameForTongueBounds:(struct CGRect )arg0 ;
-(struct CGRect )_frameForTongueWhenVisible:(BOOL)arg0 ;
-(struct UIEdgeInsets )_grabberTongueScreenInsets;
-(void)_cancelPendingTongueDismissRequests;
-(void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(NSInteger)arg0 ;
-(void)_didDismiss;
-(void)_didPresentInteractively:(id)arg0 ;
-(void)_dismissTongue:(id)arg0 ;
-(void)_dismissTongueWithStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_handlePullGesture:(id)arg0 ;
-(void)_handleTapped:(id)arg0 ;
-(void)_presentTongueAnimated:(BOOL)arg0 autoDismiss:(BOOL)arg1 ;
-(void)_pullGestureBegan:(id)arg0 ;
-(void)_pullGestureCanceled:(id)arg0 ;
-(void)_pullGestureEnded:(id)arg0 ;
-(void)_pullGestureUpdated:(id)arg0 ;
-(void)_updateCancelsTouchesWithRecognizerIfNeeded:(id)arg0 ;
-(void)_willDismiss;
-(void)_willPresent;
-(void)_willPresentInteractively:(id)arg0 ;
-(void)dealloc;
-(void)installInView:(id)arg0 withColorStyle:(NSInteger)arg1 ;
-(void)invalidate;
-(void)presentAnimated:(BOOL)arg0 ;
-(void)presentAnimated:(BOOL)arg0 autoDismiss:(BOOL)arg1 ;
-(void)uninstall;


@end


#endif