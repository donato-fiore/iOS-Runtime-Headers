// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKROTATIONCONSTRAINT_H
#define SKROTATIONCONSTRAINT_H



#import "SKConstraint.h"
#import "SKRange.h"

@interface SKRotationConstraint : SKConstraint

@property (copy) SKRange *zRotationRange; // ivar: _zRotationRange


+(BOOL)supportsSecureCoding;
+(id)constraintWithZRotationRange:(id)arg0 ;
-(BOOL)isEqualToRotationConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZRotationRange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif