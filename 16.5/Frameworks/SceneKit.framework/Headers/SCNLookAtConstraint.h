// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNLOOKATCONSTRAINT_H
#define SCNLOOKATCONSTRAINT_H



#import "SCNConstraint.h"
#import "SCNNode.h"

@interface SCNLookAtConstraint : SCNConstraint {
    SCNNode *_target;
    BOOL _gimbalLockEnabled;
    SCNVector3 _targetOffset;
    SCNVector3 _upVector;
    SCNVector3 _localFront;
}


@property (nonatomic) BOOL gimbalLockEnabled;
@property (nonatomic) SCNVector3 localFront;
@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) SCNVector3 targetOffset;
@property (nonatomic) SCNVector3 worldUp;


+(BOOL)supportsSecureCoding;
+(id)lookAtConstraintWithTarget:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(struct SCNVector3 )upVector;
-(void)_customDecodingOfSCNLookAtConstraint:(id)arg0 ;
-(void)_customEncodingOfSCNLookAtConstraint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setUpVector:(struct SCNVector3 )arg0 ;


@end


#endif