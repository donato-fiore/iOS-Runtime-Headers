// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCUSTOMLAYERWRAPPER_H
#define MLCUSTOMLAYERWRAPPER_H

@class NSString;
@protocol EspressoBrick, MLCustomLayer;

#import <Foundation/Foundation.h>


@interface MLCustomLayerWrapper : NSObject <EspressoBrick>



@property (readonly, nonatomic) NSString *className; // ivar: _className
@property (retain, nonatomic) NSObject<MLCustomLayer> *customImpl; // ivar: _customImpl
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ndMode; // ivar: _ndMode
@property (readonly) Class superclass;


+(id)coremlShapeToEspressoShape:(id)arg0 ndMode:(BOOL)arg1 ;
+(id)coremlShapesToEspressoShapes:(id)arg0 ndMode:(BOOL)arg1 ;
+(id)espressoShapeToCoremlShape:(id)arg0 ndMode:(BOOL)arg1 ;
+(id)espressoShapesToCoremlShapes:(id)arg0 ndMode:(BOOL)arg1 ;
+(id)espressoTensorToCoremlTensor:(id)arg0 ndMode:(BOOL)arg1 ;
+(id)espressoTensorsToCoremlTensors:(id)arg0 ndMode:(BOOL)arg1 ;
+(id)espressoTensorsToCoremlTensorsGPU:(id)arg0 ;
+(id)factory;
+(id)getStrides:(id)arg0 ;
-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg0 ;
-(id)setupForInputShapes:(id)arg0 withParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg0 outputTensors:(id)arg1 ;
-(void)encodeToMetalCommandBuffer:(id)arg0 inputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(void)setMappedWeights:(*void)arg0 sizeInBytes:(NSUInteger)arg1 ;


@end


#endif