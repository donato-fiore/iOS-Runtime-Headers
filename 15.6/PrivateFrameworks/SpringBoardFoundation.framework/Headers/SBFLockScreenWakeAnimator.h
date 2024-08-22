// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLOCKSCREENWAKEANIMATOR_H
#define SBFLOCKSCREENWAKEANIMATOR_H

@class NSString, UIView, UIVisualEffectView;
@protocol SBFScreenWakeAnimationTarget;

#import <Foundation/Foundation.h>

#import "SBFLockScreenDateView.h"

@interface SBFLockScreenWakeAnimator : NSObject <SBFScreenWakeAnimationTarget>



@property (retain, nonatomic) SBFLockScreenDateView *dateView; // ivar: _dateView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *superviewForDateViewAnimation; // ivar: _superviewForDateViewAnimation
@property (weak, nonatomic) UIVisualEffectView *wakeEffectView; // ivar: _wakeEffectView
@property (nonatomic) NSInteger wakeState; // ivar: _wakeState


-(NSInteger)_targetWakeStateForFadeIn:(BOOL)arg0 ;
-(id)_wakeEffectsForAnimatingWakeState:(NSInteger)arg0 ;
-(id)_wakeEffectsForPersistentWakeState:(NSInteger)arg0 ;
-(void)updateWakeEffectsForWake:(BOOL)arg0 ;
-(void)updateWakeEffectsForWake:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif