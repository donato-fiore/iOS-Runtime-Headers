// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAPERSPECTIVEOPERATOR_H
#define IPAPERSPECTIVEOPERATOR_H



#import "IPAGeometryOperator.h"

@interface IPAPerspectiveOperator : IPAGeometryOperator {
    CGFloat _xAngle;
    CGFloat _yAngle;
    CGFloat _dx;
    CGFloat _dy;
}




+(id)operatorWithAngleX:(CGFloat)arg0 Y:(CGFloat)arg1 dx:(CGFloat)arg2 dy:(CGFloat)arg3 ;
+(id)operatorWithIdentifier:(id)arg0 angleX:(CGFloat)arg1 Y:(CGFloat)arg2 dx:(CGFloat)arg3 dy:(CGFloat)arg4 ;
-(id)description;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif