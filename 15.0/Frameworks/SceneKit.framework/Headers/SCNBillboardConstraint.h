// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNBILLBOARDCONSTRAINT_H
#define SCNBILLBOARDCONSTRAINT_H



#import "SCNConstraint.h"

@interface SCNBillboardConstraint : SCNConstraint {
    BOOL _preserveScale;
}


@property (nonatomic) NSUInteger freeAxes; // ivar: _freeAxes


+(BOOL)supportsSecureCoding;
+(id)billboardConstraint;
-(BOOL)preserveScale;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPreserveScale:(BOOL)arg0 ;


@end


#endif