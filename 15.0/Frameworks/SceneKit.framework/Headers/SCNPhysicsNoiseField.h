// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNPHYSICSNOISEFIELD_H
#define SCNPHYSICSNOISEFIELD_H



#import "SCNPhysicsField.h"

@interface SCNPhysicsNoiseField : SCNPhysicsField {
    CGFloat _smoothness;
    CGFloat _animationSpeed;
}


@property (nonatomic) CGFloat animationSpeed;
@property (nonatomic) CGFloat smoothness;


+(BOOL)supportsSecureCoding;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct c3dPhysicsField *)_createField;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif