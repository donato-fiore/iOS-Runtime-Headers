// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKFIELDNODE_H
#define SKFIELDNODE_H

@class PKPhysicsField;


#import "SKNode.h"
#import "SKRegion.h"
#import "SKTexture.h"

@interface SKFieldNode : SKNode {
    PKPhysicsField *_field;
}


@property (nonatomic) float animationSpeed; // ivar: _animationSpeed
@property (nonatomic) unsigned int categoryBitMask;
@property ? direction;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isExclusive) BOOL exclusive; // ivar: _exclusive
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (retain, nonatomic) SKRegion *region; // ivar: _region
@property (nonatomic) float smoothness; // ivar: _smoothness
@property (nonatomic) float strength;
@property (retain, nonatomic) SKTexture *texture; // ivar: _texture


+(id)customFieldWithEvaluationBlock:(id)arg0 ;
+(id)linearGravityFieldWithVector;
+(id)noiseFieldWithSmoothness:(CGFloat)arg0 animationSpeed:(CGFloat)arg1 ;
+(id)turbulenceFieldWithSmoothness:(CGFloat)arg0 animationSpeed:(CGFloat)arg1 ;
+(id)velocityFieldWithTexture:(id)arg0 ;
+(id)velocityFieldWithVector;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 field:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif