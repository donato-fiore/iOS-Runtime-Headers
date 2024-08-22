// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCLOSSLAYER_H
#define MLCLOSSLAYER_H



#import "MLCLayer.h"
#import "MLCLossDescriptor.h"
#import "MLCTensor.h"

@interface MLCLossLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCLossDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) MLCTensor *lossLabels; // ivar: _lossLabels
@property (readonly, retain, nonatomic) MLCTensor *weights; // ivar: _weights


+(id)categoricalCrossEntropyLossWithReductionType:(int)arg0 labelSmoothing:(float)arg1 classCount:(NSUInteger)arg2 weight:(float)arg3 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg0 labelSmoothing:(float)arg1 classCount:(NSUInteger)arg2 weights:(id)arg3 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg0 weight:(float)arg1 ;
+(id)categoricalCrossEntropyLossWithReductionType:(int)arg0 weights:(id)arg1 ;
+(id)cosineDistanceLossWithReductionType:(int)arg0 weight:(float)arg1 ;
+(id)cosineDistanceLossWithReductionType:(int)arg0 weights:(id)arg1 ;
+(id)hingeLossWithReductionType:(int)arg0 weight:(float)arg1 ;
+(id)hingeLossWithReductionType:(int)arg0 weights:(id)arg1 ;
+(id)huberLossWithReductionType:(int)arg0 delta:(float)arg1 weight:(float)arg2 ;
+(id)huberLossWithReductionType:(int)arg0 delta:(float)arg1 weights:(id)arg2 ;
+(id)layerWithDescriptor:(id)arg0 ;
+(id)layerWithDescriptor:(id)arg0 weights:(id)arg1 ;
+(id)logLossWithReductionType:(int)arg0 epsilon:(float)arg1 weight:(float)arg2 ;
+(id)logLossWithReductionType:(int)arg0 epsilon:(float)arg1 weights:(id)arg2 ;
+(id)meanAbsoluteErrorLossWithReductionType:(int)arg0 weight:(float)arg1 ;
+(id)meanAbsoluteErrorLossWithReductionType:(int)arg0 weights:(id)arg1 ;
+(id)meanSquaredErrorLossWithReductionType:(int)arg0 weight:(float)arg1 ;
+(id)meanSquaredErrorLossWithReductionType:(int)arg0 weights:(id)arg1 ;
+(id)sigmoidCrossEntropyLossWithReductionType:(int)arg0 labelSmoothing:(float)arg1 weight:(float)arg2 ;
+(id)sigmoidCrossEntropyLossWithReductionType:(int)arg0 labelSmoothing:(float)arg1 weights:(id)arg2 ;
+(id)softmaxCrossEntropyLossWithReductionType:(int)arg0 labelSmoothing:(float)arg1 classCount:(NSUInteger)arg2 weight:(float)arg3 ;
+(id)softmaxCrossEntropyLossWithReductionType:(int)arg0 labelSmoothing:(float)arg1 classCount:(NSUInteger)arg2 weights:(id)arg3 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 weights:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif