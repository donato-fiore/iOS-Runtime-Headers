// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBKEYVIEWANIMATOR_H
#define UIKBKEYVIEWANIMATOR_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect primaryGlyphNormalizedExitRect;
@property (readonly, nonatomic) CGRect secondaryGlyphNormalizedExitRect;
@property (readonly, nonatomic) BOOL shouldPurgeKeyViews;
@property (readonly) Class superclass;


+(id)normalizedAnimationWithKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 offset:(CGFloat)arg3 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg0 originallyFromValue:(id)arg1 toValue:(id)arg2 offset:(CGFloat)arg3 ;
+(id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg0 originallyFromValue:(id)arg1 toValue:(id)arg2 offset:(CGFloat)arg3 ;
-(BOOL)shouldAssertCurrentKeyState:(id)arg0 ;
-(BOOL)shouldTransitionKeyView:(id)arg0 fromState:(int)arg1 toState:(int)arg2 ;
-(CGFloat)delayedDeactivationTimeForKeyView:(id)arg0 ;
-(Class)_keyViewClassForSpecialtyKey:(id)arg0 screenTraits:(id)arg1 ;
-(Class)keyViewClassForKey:(id)arg0 renderTraits:(id)arg1 screenTraits:(id)arg2 ;
-(id)keycapAlternateDualStringTransform:(id)arg0 ;
-(id)keycapAlternateTransform:(id)arg0 ;
-(id)keycapLeftSelectLeftTransform;
-(id)keycapLeftSelectPrimaryTransform;
-(id)keycapLeftSelectRightTransform;
-(id)keycapLeftTransform;
-(id)keycapMeshTransformFromRect:(struct CGRect )arg0 toRect:(struct CGRect )arg1 ;
-(id)keycapNullTransform;
-(id)keycapPrimaryDualStringTransform:(id)arg0 ;
-(id)keycapPrimaryExitTransform;
-(id)keycapPrimaryTransform;
-(id)keycapRightSelectLeftTransform;
-(id)keycapRightSelectPrimaryTransform;
-(id)keycapRightSelectRightTransform;
-(id)keycapRightTransform;
-(void)_fadeInKeyView:(id)arg0 duration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_fadeOutKeyView:(id)arg0 duration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)endTransitionForKeyView:(id)arg0 ;
-(void)reset;
-(void)transitionEndedForKeyView:(id)arg0 alternateCount:(NSUInteger)arg1 ;
-(void)transitionKeyView:(id)arg0 fromState:(int)arg1 toState:(int)arg2 completion:(id)arg3 ;
-(void)transitionOutKeyView:(id)arg0 fromState:(int)arg1 toState:(int)arg2 completion:(id)arg3 ;
-(void)transitionStartedForKeyView:(id)arg0 alternateCount:(NSUInteger)arg1 toLeft:(BOOL)arg2 ;
-(void)updateTransitionForKeyView:(id)arg0 normalizedDragSize:(struct CGSize )arg1 ;


@end


#endif