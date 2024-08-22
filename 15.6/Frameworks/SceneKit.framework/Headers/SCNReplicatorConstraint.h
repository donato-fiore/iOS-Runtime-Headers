// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNREPLICATORCONSTRAINT_H
#define SCNREPLICATORCONSTRAINT_H



#import "SCNConstraint.h"
#import "SCNNode.h"

@interface SCNReplicatorConstraint : SCNConstraint {
    SCNNode *_target;
    BOOL _replicateOrientation;
    BOOL _replicatePosition;
    BOOL _replicateScale;
    SCNVector4 _orientationOffset;
    SCNVector3 _positionOffset;
    SCNVector3 _scaleOffset;
}


@property (nonatomic) SCNVector4 orientationOffset;
@property (nonatomic) SCNVector3 positionOffset;
@property (nonatomic) BOOL replicatesOrientation;
@property (nonatomic) BOOL replicatesPosition;
@property (nonatomic) BOOL replicatesScale;
@property (nonatomic) SCNVector3 scaleOffset;
@property (retain, nonatomic) SCNNode *target;


+(BOOL)supportsSecureCoding;
+(id)replicatorConstraint;
+(id)replicatorConstraintWithTarget:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_customDecodingOfSCNReplicatorConstraint:(id)arg0 ;
-(void)_customEncodingOfSCNReplicatorConstraint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif