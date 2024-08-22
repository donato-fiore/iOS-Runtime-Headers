// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULOCKICONCONTENTVIEW_H
#define HULOCKICONCONTENTVIEW_H

@class NSString, UIVisualEffectView;
@protocol CAAnimationDelegate;


#import "HUPrimaryStateIconContentView.h"
#import "HULockIconStateTransition.h"
#import "HUVisualEffectContainerView.h"
#import "HUShapeLayerView.h"

@interface HULockIconContentView : HUPrimaryStateIconContentView <CAAnimationDelegate>



@property (retain, nonatomic) HULockIconStateTransition *activeTransition; // ivar: _activeTransition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize lastLayoutSize; // ivar: _lastLayoutSize
@property (retain, nonatomic) HUVisualEffectContainerView *lockBodyContainerView; // ivar: _lockBodyContainerView
@property (retain, nonatomic) HUShapeLayerView *lockBodyView; // ivar: _lockBodyView
@property (retain, nonatomic) HUVisualEffectContainerView *lockKeyholeContainerView; // ivar: _lockKeyholeContainerView
@property (retain, nonatomic) HUShapeLayerView *lockKeyholeFillView; // ivar: _lockKeyholeFillView
@property (retain, nonatomic) UIVisualEffectView *lockShackleContainerView; // ivar: _lockShackleContainerView
@property (retain, nonatomic) HUShapeLayerView *lockShackleView; // ivar: _lockShackleView
@property (nonatomic) NSUInteger lockState; // ivar: _lockState
@property (readonly) Class superclass;


+(id)_lockKeyholePathForBounds:(struct CGRect )arg0 ;
+(id)_lockShacklePathForBounds:(struct CGRect )arg0 ;
-(BOOL)wantsManagedVibrancyEffect;
-(id)_viewForTransitionAnimationType:(NSUInteger)arg0 ;
-(id)_viewsAnimatedForStateTransition;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)managedVisualEffectViews;
-(void)_applyAnimation:(id)arg0 ofType:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_performTransitionToLockState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_removeAllTransitionAnimations;
-(void)_removePendingBounceAnimations;
-(void)_rotateShackleForLockState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_translateShackleForLockState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)updateColorsForDisplayStyle:(NSUInteger)arg0 ;
-(void)updateIconFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif