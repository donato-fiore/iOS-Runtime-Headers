// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDATAREGRESSIONMODELLOGARITHMIC_H
#define AXMDATAREGRESSIONMODELLOGARITHMIC_H



#import "AXMDataRegressionModel.h"

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel



-(id)modelDescription;
-(id)modelFunction:(SEL)arg0 ;
-(id)modelFunctionStringForParameters:(*CGFloat)arg0 significantFigures:(int)arg1 ;
-(id)partialDerivatives;
-(int)modelParameterCount;
-(void)getInitialParams:(*CGFloat)arg0 ;


@end


#endif