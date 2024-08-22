// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCACTIVATIONLAYER_H
#define MLCACTIVATIONLAYER_H



#import "MLCLayer.h"
#import "MLCActivationDescriptor.h"

@interface MLCActivationLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCActivationDescriptor *descriptor; // ivar: _descriptor


+(id)absoluteLayer;
+(id)celuLayer;
+(id)celuLayerWithA:(float)arg0 ;
+(id)clampLayerWithMinValue:(float)arg0 maxValue:(float)arg1 ;
+(id)eluLayer;
+(id)eluLayerWithA:(float)arg0 ;
+(id)geluLayer;
+(id)hardShrinkLayer;
+(id)hardShrinkLayerWithA:(float)arg0 ;
+(id)hardSigmoidLayer;
+(id)hardSwishLayer;
+(id)layerWithDescriptor:(id)arg0 ;
+(id)leakyReLULayer;
+(id)leakyReLULayerWithNegativeSlope:(float)arg0 ;
+(id)linearLayerWithScale:(float)arg0 bias:(float)arg1 ;
+(id)logSigmoidLayer;
+(id)relu6Layer;
+(id)reluLayer;
+(id)relunLayerWithA:(float)arg0 b:(float)arg1 ;
+(id)seluLayer;
+(id)sigmoidLayer;
+(id)softPlusLayer;
+(id)softPlusLayerWithBeta:(float)arg0 ;
+(id)softShrinkLayer;
+(id)softShrinkLayerWithA:(float)arg0 ;
+(id)softSignLayer;
+(id)tanhLayer;
+(id)tanhShrinkLayer;
+(id)thresholdLayerWithThreshold:(float)arg0 replacement:(float)arg1 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif