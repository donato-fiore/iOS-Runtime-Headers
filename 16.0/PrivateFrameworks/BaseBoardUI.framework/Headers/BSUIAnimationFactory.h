// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIANIMATIONFACTORY_H
#define BSUIANIMATIONFACTORY_H

@class NSString, BSAnimationSettings;
@protocol _UIBasicAnimationFactory, NSCopying;

#import <Foundation/Foundation.h>


@interface BSUIAnimationFactory : NSObject <_UIBasicAnimationFactory, NSCopying>



@property (nonatomic) BOOL allowsAdditiveAnimations; // ivar: _allowsAdditiveAnimations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, copy, nonatomic) BSAnimationSettings *effectiveSettings;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) BSAnimationSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


+(CGFloat)globalSlowDownFactor;
+(id)factoryWithAnimationAttributes:(id)arg0 ;
+(id)factoryWithDuration:(CGFloat)arg0 ;
+(id)factoryWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 ;
+(id)factoryWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithDuration:(CGFloat)arg0 timingFunction:(id)arg1 ;
+(id)factoryWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 ;
+(id)factoryWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 ;
+(id)factoryWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 initialVelocity:(CGFloat)arg4 ;
+(id)factoryWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 timingFunction:(id)arg4 ;
+(id)factoryWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 timingFunction:(id)arg3 ;
+(id)factoryWithSettings:(id)arg0 ;
+(id)factoryWithSettings:(id)arg0 timingFunction:(id)arg1 ;
// +(void)addAlongsideAnimations:(id)arg0 completion:(unk)arg1  ;
+(void)animateWithFactory:(id)arg0 actions:(id)arg1 ;
// +(void)animateWithFactory:(id)arg0 actions:(id)arg1 completion:(unk)arg2  ;
+(void)animateWithFactory:(id)arg0 additionalDelay:(CGFloat)arg1 actions:(id)arg2 ;
// +(void)animateWithFactory:(id)arg0 additionalDelay:(CGFloat)arg1 actions:(id)arg2 completion:(unk)arg3  ;
+(void)animateWithFactory:(id)arg0 additionalDelay:(CGFloat)arg1 options:(NSUInteger)arg2 actions:(id)arg3 ;
// +(void)animateWithFactory:(id)arg0 additionalDelay:(CGFloat)arg1 options:(NSUInteger)arg2 actions:(id)arg3 completion:(unk)arg4  ;
+(void)animateWithFactory:(id)arg0 options:(NSUInteger)arg1 actions:(id)arg2 ;
// +(void)animateWithFactory:(id)arg0 options:(NSUInteger)arg1 actions:(id)arg2 completion:(unk)arg3  ;
+(void)animateWithSettings:(id)arg0 actions:(id)arg1 ;
// +(void)animateWithSettings:(id)arg0 actions:(id)arg1 completion:(unk)arg2  ;
+(void)animateWithSettings:(id)arg0 options:(NSUInteger)arg1 actions:(id)arg2 ;
// +(void)animateWithSettings:(id)arg0 options:(NSUInteger)arg1 actions:(id)arg2 completion:(unk)arg3  ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg0 withKeyPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)factoryWithTimingFunction:(id)arg0 ;
-(id)init;
-(void)applySettingsToCAAnimation:(id)arg0 ;


@end


#endif