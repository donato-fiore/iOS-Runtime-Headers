// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCEMBEDDINGLAYER_H
#define MLCEMBEDDINGLAYER_H



#import "MLCLayer.h"
#import "MLCEmbeddingDescriptor.h"
#import "MLCTensor.h"
#import "MLCTensorParameter.h"

@interface MLCEmbeddingLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCEmbeddingDescriptor *descriptor; // ivar: _descriptor
@property (readonly, retain, nonatomic) MLCTensor *weights; // ivar: _weights
@property (readonly, retain, nonatomic) MLCTensorParameter *weightsParameter; // ivar: _weightsParameter


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithDescriptor:(id)arg0 weights:(id)arg1 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(id)description;
-(id)initWithDescriptor:(id)arg0 weight:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;
-(void)allocateGradientsForParameters;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif