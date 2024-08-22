// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDATAREGRESSIONMODELSINE_H
#define AXMDATAREGRESSIONMODELSINE_H



#import "AXMDataRegressionModel.h"

@interface AXMDataRegressionModelSine : AXMDataRegressionModel



-(CGFloat)estimatedRadianFrequency;
-(id)modelDescription;
-(id)modelFunction:(SEL)arg0 ;
-(id)modelFunctionStringForParameters:(*CGFloat)arg0 significantFigures:(int)arg1 ;
-(id)partialDerivatives;
-(int)modelParameterCount;
-(void)disqualifyModelIfNecessary;
-(void)getInitialParams:(*CGFloat)arg0 ;


@end


#endif