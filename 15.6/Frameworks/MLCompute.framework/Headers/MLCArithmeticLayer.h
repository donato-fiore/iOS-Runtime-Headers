// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCARITHMETICLAYER_H
#define MLCARITHMETICLAYER_H



#import "MLCLayer.h"

@interface MLCArithmeticLayer : MLCLayer

@property (readonly, nonatomic) BOOL binaryOperation; // ivar: _binaryOperation
@property (readonly, nonatomic) int operation; // ivar: _operation


+(id)layerWithOperation:(int)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(BOOL)skipGradientComputationForSourceTensor:(id)arg0 resultTensor:(id)arg1 ;
-(NSUInteger)deviceMemorySizeWithOptimizer:(id)arg0 device:(id)arg1 ;
-(id)description;
-(id)initWithArithmeticOperation:(int)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif