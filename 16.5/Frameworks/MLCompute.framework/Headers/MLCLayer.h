// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCLAYER_H
#define MLCLAYER_H

@class NSString, NSArray, NSMutableArray, NSNumber;
@protocol MLCLayerCompiling;

#import <Foundation/Foundation.h>

#import "MLCControlTreeNode.h"
#import "MLCDevice.h"
#import "MLCLayer.h"

@interface MLCLayer : NSObject <MLCLayerCompiling>



@property (nonatomic) BOOL allocateGradientTensors; // ivar: _allocateGradientTensors
@property (nonatomic) BOOL compileForInferenceOnly; // ivar: _compileForInferenceOnly
@property (retain, nonatomic) MLCControlTreeNode *conditionalTreeNode; // ivar: _conditionalTreeNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MLCDevice *device; // ivar: _device
@property (retain, nonatomic) NSArray *deviceOps; // ivar: _deviceOps
@property (readonly, nonatomic) int deviceType;
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (nonatomic) BOOL disableUpdate; // ivar: _disableUpdate
@property (readonly, retain, nonatomic) NSMutableArray *fusedLayers; // ivar: _fusedLayers
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger intermediateGradientTensorIndex; // ivar: _intermediateGradientTensorIndex
@property (retain, nonatomic) NSMutableArray *intermediateGradientTensors; // ivar: _intermediateGradientTensors
@property (retain, nonatomic) MLCLayer *intermediateSumLayer; // ivar: _intermediateSumLayer
@property (nonatomic) BOOL isDebuggingEnabled; // ivar: _isDebuggingEnabled
@property (readonly, nonatomic) BOOL isFirstLayer;
@property (nonatomic) BOOL isLastFusedLayer; // ivar: _isLastFusedLayer
@property (readonly, nonatomic) BOOL isLastLayer;
@property (nonatomic) BOOL isTrainable; // ivar: _isTrainable
@property (nonatomic) BOOL isUpdatable; // ivar: _isUpdatable
@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) NSNumber *key;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger layerID; // ivar: _layerID
@property (readonly, copy, nonatomic) NSString *originalLabel; // ivar: _originalLabel
@property (nonatomic) int paddingPolicy; // ivar: _paddingPolicy
@property (nonatomic) NSUInteger paddingSizeInX; // ivar: _paddingSizeInX
@property (nonatomic) NSUInteger paddingSizeInY; // ivar: _paddingSizeInY
@property (retain, nonatomic) NSMutableArray *resultGradientTensors; // ivar: _resultGradientTensors
@property (retain, nonatomic) NSMutableArray *resultTensors; // ivar: _resultTensors
@property (nonatomic) BOOL skipLayer; // ivar: _skipLayer
@property (retain, nonatomic) NSMutableArray *sourceGradientTensors; // ivar: _sourceGradientTensors
@property (retain, nonatomic) NSMutableArray *sourceTensors; // ivar: _sourceTensors
@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (readonly, nonatomic) NSString *summarizedDOTDescription;
@property (readonly) Class superclass;
@property (nonatomic) BOOL zeroIntermediateGradientTensors; // ivar: _zeroIntermediateGradientTensors


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 ;
-(BOOL)isGradientNeededForTensor:(id)arg0 ;
-(BOOL)isStaticBatchSize;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(BOOL)isTensorSharedAcrossMultipleTrainingLayers:(id)arg0 ;
-(BOOL)isValidTrainingParameters;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)deviceMemorySizeWithOptimizer:(id)arg0 device:(id)arg1 ;
-(NSUInteger)parametersCount;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(NSUInteger)resultSizeFromSourceSizes:(id)arg0 dimension:(NSUInteger)arg1 ;
-(id)getDeviceForInference;
-(id)getDeviceForTraining;
-(id)initWithLabel:(id)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)resultTensorsFromBroadcastableSources:(id)arg0 resultTensorDataType:(int)arg1 ;
-(void)allocateGradientsForParameters;
-(void)assignLayerID:(NSUInteger)arg0 ;
-(void)bindDevice:(id)arg0 deviceOps:(id)arg1 ;
-(void)linkAssociatedTensors;
-(void)setBatchSize:(NSUInteger)arg0 ;
-(void)unlinkAssociatedTensors;


@end


#endif