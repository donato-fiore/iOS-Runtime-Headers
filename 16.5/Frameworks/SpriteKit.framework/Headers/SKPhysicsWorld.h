// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPHYSICSWORLD_H
#define SKPHYSICSWORLD_H

@protocol NSSecureCoding, SKPhysicsContactDelegate;

#import <Foundation/Foundation.h>


@interface SKPhysicsWorld : NSObject <NSSecureCoding>



@property (nonatomic) NSObject<SKPhysicsContactDelegate> *contactDelegate; // ivar: _contactDelegate
@property (nonatomic) CGVector gravity; // ivar: _gravity
@property (nonatomic) CGFloat speed; // ivar: speed


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(BOOL)stepWithTime:(CGFloat)arg0 velocityIterations:(NSUInteger)arg1 positionIterations:(NSUInteger)arg2 ;
-(id)bodies;
-(id)bodyAlongRayStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 ;
-(id)bodyAtPoint:(struct CGPoint )arg0 ;
-(id)bodyInRect:(struct CGRect )arg0 ;
-(id)fields;
-(id)initWithCoder:(id)arg0 ;
-(id)sampleFields;
-(id)sampleFieldsAt;
-(void)addBody:(id)arg0 ;
-(void)addJoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateBodiesAlongRayStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 usingBlock:(id)arg2 ;
-(void)enumerateBodiesAtPoint:(struct CGPoint )arg0 usingBlock:(id)arg1 ;
-(void)enumerateBodiesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)removeAllBodies;
-(void)removeAllJoints;
-(void)removeBody:(id)arg0 ;
-(void)removeJoint:(id)arg0 ;


@end


#endif