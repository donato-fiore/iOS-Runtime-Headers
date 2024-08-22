// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPERCENTDRIVENINTERACTIVETRANSITION_H
#define UIPERCENTDRIVENINTERACTIVETRANSITION_H

@class NSUUID, NSString;
@protocol UIViewControllerInteractiveTransitioning, UIViewImplicitlyAnimating, UITimingCurveProvider;

#import <Foundation/Foundation.h>


@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>

 {
    CGFloat _duration;
    BOOL _didCommitAnimations;
    id<UIViewImplicitlyAnimating> *_interruptibleAnimator;
    NSUUID *_animationTrackingAnimatorUUID;
}


@property (retain, nonatomic, setter=_setOriginalFillMode:) NSString *_originalFillMode; // ivar: __originalFillMode
@property (nonatomic, getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:) BOOL _transitionInterrupted; // ivar: __transitionInterrupted
@property (retain, nonatomic, setter=_setUuid:) NSUUID *_uuid; // ivar: __uuid
@property (nonatomic) NSInteger completionCurve; // ivar: _completionCurve
@property (nonatomic) CGFloat completionSpeed; // ivar: _completionSpeed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat percentComplete;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UITimingCurveProvider> *timingCurve; // ivar: _timingCurve
@property (nonatomic) BOOL wantsInteractiveStart; // ivar: _wantsInteractiveStart


-(BOOL)_startInterruptibleTransition:(id)arg0 ;
-(BOOL)_useAnimatorTrackingToDriveTransition;
-(id)init;
-(void)_continueInterruptibleTransition:(id)arg0 reverse:(BOOL)arg1 ;
-(void)_resetInteractionController;
-(void)_stopInteractiveTransition;
-(void)_stopInteractiveTransition:(id)arg0 ;
-(void)_updateInteractiveTransition:(id)arg0 percent:(CGFloat)arg1 isFinished:(BOOL)arg2 didComplete:(BOOL)arg3 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)pauseInteractiveTransition;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)startInteractiveTransition:(id)arg0 containerViews:(id)arg1 animation:(id)arg2 ;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif