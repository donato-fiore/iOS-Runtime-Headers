// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKDISTANCECONSTRAINT_H
#define SKDISTANCECONSTRAINT_H



#import "SKConstraint.h"
#import "SKRange.h"
#import "SKNode.h"

@interface SKDistanceConstraint : SKConstraint

@property (copy) SKRange *distanceRange; // ivar: _distanceRange
@property (weak) SKNode *node; // ivar: _node
@property CGPoint point; // ivar: _point


+(BOOL)supportsSecureCoding;
+(id)constraintWithNode:(id)arg0 distanceRange:(id)arg1 ;
+(id)constraintWithPoint:(struct CGPoint )arg0 distanceRange:(id)arg1 ;
+(id)constraintWithPoint:(struct CGPoint )arg0 inNode:(id)arg1 distanceRange:(id)arg2 ;
-(BOOL)isEqualToDistanceConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoint:(struct CGPoint )arg0 inNode:(id)arg1 distanceRange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif