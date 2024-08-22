// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSCALECONSTRAINT_H
#define SKSCALECONSTRAINT_H



#import "SKConstraint.h"
#import "SKRange.h"

@interface SKScaleConstraint : SKConstraint

@property (copy) SKRange *xRange; // ivar: _xRange
@property (copy) SKRange *yRange; // ivar: _yRange


+(BOOL)supportsSecureCoding;
+(id)constraintWithScaleRange:(id)arg0 ;
+(id)constraintWithXRange:(id)arg0 ;
+(id)constraintWithXRange:(id)arg0 YRange:(id)arg1 ;
+(id)constraintWithYRange:(id)arg0 ;
-(BOOL)isEqualToScaleConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXRange:(id)arg0 YRange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif