// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMDATAREGRESSIONMODEL_H
#define AXMDATAREGRESSIONMODEL_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AXMDataRegressionModel : NSObject

@property (readonly, nonatomic) *CGFloat bestFitParameters; // ivar: _bestFitParameters
@property (readonly, nonatomic) CGFloat confidence;
@property (readonly, nonatomic) BOOL dataSatisfiesInitialConditions;
@property (readonly, nonatomic) CGFloat error; // ivar: _error
@property (nonatomic) BOOL isDisqualified; // ivar: _isDisqualified
@property (readonly, nonatomic) int iterations; // ivar: _iterations
@property (readonly, nonatomic) NSString *modelDescription;
@property (readonly, nonatomic) id *modelFunction;
@property (readonly, nonatomic) int modelParameterCount;
@property (readonly, nonatomic) int n; // ivar: _n
@property (readonly, nonatomic) NSArray *partialDerivatives;
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) *CGFloat x; // ivar: _x
@property (readonly, nonatomic) *CGFloat y; // ivar: _y


+(id)getModelForX:(*CGFloat)arg0 y:(*CGFloat)arg1 n:(int)arg2 ;
-(CGFloat)fitDataWithModelParams:(*CGFloat)arg0 finalParams:(*CGFloat)arg1 ;
-(CGFloat)magnitude:(*CGFloat)arg0 size:(int)arg1 ;
-(CGFloat)roundNumber:(CGFloat)arg0 withSignificantFigures:(NSUInteger)arg1 ;
-(id)initWithXValues:(*CGFloat)arg0 yValues:(*CGFloat)arg1 count:(int)arg2 ;
-(id)modelFunctionStringForParameters:(*CGFloat)arg0 significantFigures:(int)arg1 ;
-(int)getMatrixInverse:(*CGFloat)arg0 size:(int)arg1 pivot:(*int)arg2 tmp:(*CGFloat)arg3 result:(*CGFloat)arg4 ;
-(void)computeScore;
-(void)dealloc;
-(void)getDiagonal:(*CGFloat)arg0 size:(int)arg1 result:(*CGFloat)arg2 ;
-(void)getGradientForX:(CGFloat)arg0 parameterValues:(*CGFloat)arg1 result:(*CGFloat)arg2 ;
-(void)getIdentityMatrixWithSize:(int)arg0 scalar:(CGFloat)arg1 result:(*CGFloat)arg2 ;
-(void)getInitialParams:(*CGFloat)arg0 ;
-(void)getJacobianForParameters:(*CGFloat)arg0 gradient:(*CGFloat)arg1 result:(*CGFloat)arg2 ;
-(void)getResidualsVector:(*CGFloat)arg0 result:(*CGFloat)arg1 ;
-(void)getSMA:(*CGFloat)arg0 lookback:(int)arg1 ;
-(void)printMatrix:(*CGFloat)arg0 rows:(int)arg1 cols:(int)arg2 ;


@end


#endif