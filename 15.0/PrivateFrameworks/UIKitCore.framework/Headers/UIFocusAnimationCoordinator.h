// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFOCUSANIMATIONCOORDINATOR_H
#define UIFOCUSANIMATIONCOORDINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIFocusAnimationConfiguration.h"
#import "UIFocusUpdateContext.h"

@interface UIFocusAnimationCoordinator : NSObject

@property (readonly, nonatomic, getter=_activeAnimationDuration) CGFloat activeAnimationDuration;
@property (readonly, copy, nonatomic, getter=_activeConfiguration) _UIFocusAnimationConfiguration *activeConfiguration;
@property (readonly, nonatomic) NSInteger activeFocusAnimation; // ivar: _activeFocusAnimation
@property (readonly, nonatomic, getter=_animationDelay) CGFloat animationDelay;
@property (readonly, nonatomic, getter=_animationOptions) NSUInteger animationOptions;
@property (readonly, nonatomic, getter=_focusUpdateContext) UIFocusUpdateContext *focusUpdateContext; // ivar: _focusUpdateContext
@property (readonly, nonatomic, getter=_focusingAnimationDuration) CGFloat focusingAnimationDuration;
@property (readonly, nonatomic) NSMutableArray *focusingAnimations; // ivar: _focusingAnimations
@property (readonly, nonatomic) NSMutableArray *focusingCompletions; // ivar: _focusingCompletions
@property (retain, nonatomic) _UIFocusAnimationConfiguration *focusingConfiguration; // ivar: _focusingConfiguration
@property (readonly, nonatomic) NSMutableArray *legacyFocusingAnimations; // ivar: _legacyFocusingAnimations
@property (readonly, nonatomic) NSMutableArray *legacyUnfocusingAnimations; // ivar: _legacyUnfocusingAnimations
@property (readonly, nonatomic, getter=_isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic, getter=_unfocusingAnimationDuration) CGFloat unfocusingAnimationDuration;
@property (readonly, nonatomic) NSMutableArray *unfocusingAnimations; // ivar: _unfocusingAnimations
@property (readonly, nonatomic) NSMutableArray *unfocusingCompletions; // ivar: _unfocusingCompletions
@property (retain, nonatomic) _UIFocusAnimationConfiguration *unfocusingConfiguration; // ivar: _unfocusingConfiguration
@property (readonly, nonatomic, getter=_unfocusingRepositionAnimationDuration) CGFloat unfocusingRepositionAnimationDuration;


+(id)_focusAnimationCoordinatorForAnimationType:(NSInteger)arg0 withConfiguration:(id)arg1 inContext:(id)arg2 ;
+(id)_focusingAnimationCoordinatorWithConfiguration:(id)arg0 inContext:(id)arg1 ;
+(id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg0 inContext:(id)arg1 ;
-(id)_configurationForFocusAnimation:(NSInteger)arg0 ;
-(id)_initWithFocusUpdateContext:(id)arg0 ;
-(id)init;
-(void)_animate;
-(void)_animateFocusAnimation:(NSInteger)arg0 ;
-(void)_cancelFocusAnimation:(NSInteger)arg0 ;
-(void)_configureWithFocusUpdateContext:(id)arg0 ;
-(void)_consumeBlocks:(id)arg0 ;
-(void)_consumeBlocks:(id)arg0 withAnimationContext:(id)arg1 ;
-(void)_prepareForFocusAnimation:(NSInteger)arg0 ;
-(void)_setConfiguration:(id)arg0 forFocusAnimation:(NSInteger)arg1 ;
// -(void)addCoordinatedAnimations:(id)arg0 completion:(unk)arg1  ;
// -(void)addCoordinatedAnimationsForAnimation:(NSInteger)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// -(void)addCoordinatedFocusingAnimations:(id)arg0 completion:(unk)arg1  ;
// -(void)addCoordinatedUnfocusingAnimations:(id)arg0 completion:(unk)arg1  ;


@end


#endif