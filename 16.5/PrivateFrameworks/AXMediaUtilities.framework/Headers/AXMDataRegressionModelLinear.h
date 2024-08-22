// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMDATAREGRESSIONMODELLINEAR_H
#define AXMDATAREGRESSIONMODELLINEAR_H



#import "AXMDataRegressionModel.h"

@interface AXMDataRegressionModelLinear : AXMDataRegressionModel

@property (readonly, nonatomic) CGFloat rSquared; // ivar: _rSquared


-(CGFloat)fitDataWithModelParams:(*CGFloat)arg0 finalParams:(*CGFloat)arg1 ;
-(id)modelDescription;
-(id)modelFunction:(SEL)arg0 ;
-(id)modelFunctionStringForParameters:(*CGFloat)arg0 significantFigures:(int)arg1 ;
-(id)partialDerivatives;
-(int)modelParameterCount;
-(void)getInitialParams:(*CGFloat)arg0 ;


@end


#endif