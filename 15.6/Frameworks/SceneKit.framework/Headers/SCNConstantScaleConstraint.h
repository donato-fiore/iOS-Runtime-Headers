// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNCONSTANTSCALECONSTRAINT_H
#define SCNCONSTANTSCALECONSTRAINT_H



#import "SCNConstraint.h"

@interface SCNConstantScaleConstraint : SCNConstraint {
    float _scale;
    BOOL _screenSpace;
}


@property (nonatomic) float scale;
@property (nonatomic) BOOL screenSpace;


+(BOOL)supportsSecureCoding;
+(id)constantScaleConstraint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif