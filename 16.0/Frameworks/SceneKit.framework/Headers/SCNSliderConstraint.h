// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNSLIDERCONSTRAINT_H
#define SCNSLIDERCONSTRAINT_H



#import "SCNConstraint.h"

@interface SCNSliderConstraint : SCNConstraint {
    NSUInteger _categoryBitMask;
    SCNVector3 _offset;
    float _radius;
}


@property (nonatomic) NSUInteger collisionCategoryBitMask;
@property (nonatomic) SCNVector3 offset;
@property (nonatomic) CGFloat radius;


+(BOOL)supportsSecureCoding;
+(id)sliderConstraint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif