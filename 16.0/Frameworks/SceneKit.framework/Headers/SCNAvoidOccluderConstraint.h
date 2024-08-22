// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNAVOIDOCCLUDERCONSTRAINT_H
#define SCNAVOIDOCCLUDERCONSTRAINT_H

@protocol SCNAvoidOccluderConstraintDelegate;


#import "SCNConstraint.h"
#import "SCNNode.h"

@interface SCNAvoidOccluderConstraint : SCNConstraint {
    SCNNode *_target;
    NSUInteger _categoryBitMask;
    float _offset;
    id *_delegate;
}


@property (nonatomic) CGFloat bias;
@property (nonatomic) NSObject<SCNAvoidOccluderConstraintDelegate> *delegate;
@property (nonatomic) NSUInteger occluderCategoryBitMask;
@property (retain, nonatomic) SCNNode *target;


+(BOOL)supportsSecureCoding;
+(id)avoidOccluderConstraint;
+(id)avoidOccluderConstraintWithTarget:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg0 ;
-(void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif