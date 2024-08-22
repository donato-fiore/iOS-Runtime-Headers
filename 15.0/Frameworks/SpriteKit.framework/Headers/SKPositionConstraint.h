// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPOSITIONCONSTRAINT_H
#define SKPOSITIONCONSTRAINT_H



#import "SKConstraint.h"
#import "SKRange.h"

@interface SKPositionConstraint : SKConstraint

@property (copy) SKRange *xRange; // ivar: _xRange
@property (copy) SKRange *yRange; // ivar: _yRange


+(BOOL)supportsSecureCoding;
+(id)constraintWithXRange:(id)arg0 ;
+(id)constraintWithXRange:(id)arg0 YRange:(id)arg1 ;
+(id)constraintWithYRange:(id)arg0 ;
-(BOOL)isEqualToPositionConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXRange:(id)arg0 YRange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif