// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNDISTANCECONSTRAINT_H
#define SCNDISTANCECONSTRAINT_H



#import "SCNConstraint.h"
#import "SCNNode.h"

@interface SCNDistanceConstraint : SCNConstraint {
    SCNNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    BOOL _keepTargetDirection;
    SCNVector3 _targetDirection;
    float _maximumDirectionAngle;
}


@property (nonatomic) CGFloat maximumDistance;
@property (nonatomic) CGFloat minimumDistance;
@property (retain, nonatomic) SCNNode *target;


+(BOOL)supportsSecureCoding;
+(id)distanceConstraint;
+(id)distanceConstraintWithTarget:(id)arg0 ;
-(BOOL)keepTargetDirection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_customDecodingOfSCNDistanceConstraint:(id)arg0 ;
-(void)_customEncodingOfSCNDistanceConstraint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setKeepTargetDirection:(BOOL)arg0 ;


@end


#endif