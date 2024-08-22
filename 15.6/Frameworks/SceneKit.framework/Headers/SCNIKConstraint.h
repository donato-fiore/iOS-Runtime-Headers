// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNIKCONSTRAINT_H
#define SCNIKCONSTRAINT_H

@class NSMutableDictionary;


#import "SCNConstraint.h"
#import "SCNNode.h"

@interface SCNIKConstraint : SCNConstraint {
    SCNNode *_chainRootNode;
    SCNVector3 _ikTarget;
    NSMutableDictionary *_jointsPerNode;
}


@property (readonly, nonatomic) SCNNode *chainRootNode;
@property (nonatomic) SCNVector3 targetPosition;


+(BOOL)supportsSecureCoding;
+(id)inverseKinematicsConstraintWithChainRootNode:(id)arg0 ;
-(CGFloat)maxAllowedRotationAngleForJoint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChainRootNode:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jointForNode:(id)arg0 ;
-(void)_customDecodingOfSCNIKConstraint:(id)arg0 ;
-(void)_customEncodingOfSCNIKConstraint:(id)arg0 ;
-(void)_didDecodeSCNIKConstraint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMaxAllowedRotationAngle:(CGFloat)arg0 forJoint:(id)arg1 ;


@end


#endif