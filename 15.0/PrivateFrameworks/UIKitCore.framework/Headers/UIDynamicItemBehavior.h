// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDYNAMICITEMBEHAVIOR_H
#define UIDYNAMICITEMBEHAVIOR_H

@class NSMapTable, NSArray;


#import "UIDynamicBehavior.h"

@interface UIDynamicItemBehavior : UIDynamicBehavior {
    BOOL _useDefaultViewPropertiesApplier;
    ? _stateFlags;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
}


@property (nonatomic) BOOL allowsRotation; // ivar: _allowsRotation
@property (nonatomic, getter=isAnchored) BOOL anchored; // ivar: _anchored
@property (nonatomic) CGFloat angularResistance; // ivar: _angularResistance
@property (nonatomic) CGFloat charge; // ivar: _charge
@property (nonatomic) CGFloat density; // ivar: _density
@property (nonatomic) CGFloat elasticity; // ivar: _elasticity
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) CGFloat resistance; // ivar: _resistance


+(BOOL)_isPrimitiveBehavior;
-(BOOL)_rotationEnabledForItem:(id)arg0 ;
-(BOOL)useDefaultViewPropertiesApplier;
-(CGFloat)_angleForItem:(id)arg0 ;
-(CGFloat)_angularResistanceForItem:(id)arg0 ;
-(CGFloat)_densityForItem:(id)arg0 ;
-(CGFloat)_elasticityForItem:(id)arg0 ;
-(CGFloat)_frictionForItem:(id)arg0 ;
-(CGFloat)_massForItem:(id)arg0 ;
-(CGFloat)_resistanceForItem:(id)arg0 ;
-(CGFloat)angularVelocityForItem:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(struct CGPoint )_positionForItem:(id)arg0 ;
-(struct CGPoint )linearVelocityForItem:(id)arg0 ;
-(void)_associate;
-(void)_configureBody:(id)arg0 forView:(id)arg1 ;
-(void)_dissociate;
-(void)_reevaluate:(NSUInteger)arg0 ;
-(void)_setAngle:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)_setPosition:(struct CGPoint )arg0 forItem:(id)arg1 ;
-(void)addAngularVelocity:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)addItem:(id)arg0 ;
-(void)addLinearVelocity:(struct CGPoint )arg0 forItem:(id)arg1 ;
-(void)applyImpulse:(struct CGPoint )arg0 toItem:(id)arg1 ;
-(void)removeItem:(id)arg0 ;
-(void)setUseDefaultViewPropertiesApplier:(BOOL)arg0 ;


@end


#endif