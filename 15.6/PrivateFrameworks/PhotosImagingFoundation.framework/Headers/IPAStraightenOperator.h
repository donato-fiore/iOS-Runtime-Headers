// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPASTRAIGHTENOPERATOR_H
#define IPASTRAIGHTENOPERATOR_H



#import "IPAGeometryOperator.h"

@interface IPAStraightenOperator : IPAGeometryOperator {
    CGFloat _zAngle;
}




+(id)operatorWithAngleZ:(CGFloat)arg0 ;
+(id)operatorWithIdentifier:(id)arg0 angleZ:(CGFloat)arg1 ;
-(id)description;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif