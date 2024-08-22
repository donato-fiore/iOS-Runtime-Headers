// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPASCALEOPERATOR_H
#define IPASCALEOPERATOR_H



#import "IPAGeometryOperator.h"

@interface IPAScaleOperator : IPAGeometryOperator {
    CGFloat _xScale;
    CGFloat _yScale;
}




+(id)operatorWithIdentifier:(id)arg0 scaleX:(CGFloat)arg1 Y:(CGFloat)arg2 ;
+(id)operatorWithScaleX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
-(id)description;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif