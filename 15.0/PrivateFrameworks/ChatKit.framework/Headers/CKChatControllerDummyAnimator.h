// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCHATCONTROLLERDUMMYANIMATOR_H
#define CKCHATCONTROLLERDUMMYANIMATOR_H

@class NSString, CAEmitterLayer;
@protocol CAAnimationDelegate, CKImpactEffectAnimationProvider, CKSendAnimationManager, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider>



@property (weak, nonatomic) NSObject<CKSendAnimationManager> *animationDelegate; // ivar: _animationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CAEmitterLayer *dustEmitter; // ivar: _dustEmitter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup; // ivar: _throwAnimationGroup


-(void)_beginFocusAnimationWithContext:(id)arg0 ;
-(void)_beginGentleAnimationWithContext:(id)arg0 ;
-(void)_beginImpactAnimationWithContext:(id)arg0 ;
-(void)_beginLoudAnimationsWithContext:(id)arg0 ;
-(void)_beginThrowAnimationWithContext:(id)arg0 ;
-(void)_configureForVFD:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)beginAnimationWithSendAnimationContext:(id)arg0 ;
-(void)stopAnimationWithSendAnimationContext:(id)arg0 ;


@end


#endif