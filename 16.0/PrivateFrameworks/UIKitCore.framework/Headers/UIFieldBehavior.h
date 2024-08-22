// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFIELDBEHAVIOR_H
#define UIFIELDBEHAVIOR_H

@class PKPhysicsField, NSArray;


#import "UIDynamicBehavior.h"
#import "UIRegion.h"

@interface UIFieldBehavior : UIDynamicBehavior {
    PKPhysicsField *_field;
    ? _fieldFlags;
}


@property (readonly, nonatomic) PKPhysicsField *_field;
@property (nonatomic) CGFloat animationSpeed;
@property (nonatomic) CGVector direction;
@property (nonatomic) CGFloat falloff;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) CGFloat minimumRadius;
@property (nonatomic) CGPoint position;
@property (retain, nonatomic) UIRegion *region; // ivar: _region
@property (nonatomic) CGFloat smoothness;
@property (nonatomic) CGFloat strength;


+(BOOL)_isPrimitiveBehavior;
+(id)dragField;
+(id)electricField;
+(id)fieldWithEvaluationBlock:(id)arg0 ;
+(id)linearGravityFieldWithVector:(struct CGVector )arg0 ;
+(id)magneticField;
+(id)noiseFieldWithSmoothness:(CGFloat)arg0 animationSpeed:(CGFloat)arg1 ;
+(id)radialGravityFieldWithPosition:(struct CGPoint )arg0 ;
+(id)springField;
+(id)turbulenceFieldWithSmoothness:(CGFloat)arg0 animationSpeed:(CGFloat)arg1 ;
+(id)velocityFieldWithVector:(struct CGVector )arg0 ;
+(id)vortexField;
-(BOOL)isEnabled;
-(id)_initWithField:(id)arg0 ;
-(id)init;
-(void)_addFieldItem:(id)arg0 ;
-(void)_associate;
-(void)_changedParameter;
-(void)_dissociate;
-(void)addItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif