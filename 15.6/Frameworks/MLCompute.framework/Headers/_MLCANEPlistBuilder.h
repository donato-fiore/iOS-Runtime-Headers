// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCANEPLISTBUILDER_H
#define _MLCANEPLISTBUILDER_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>

#import "_MLCANEWeightOps.h"

@interface _MLCANEPlistBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *plist; // ivar: _plist
@property (readonly, nonatomic) _MLCANEWeightOps *weightOps; // ivar: _weightOps
@property (readonly, nonatomic) NSMutableSet *weightTensorsWithDeviceMemory; // ivar: _weightTensorsWithDeviceMemory


+(BOOL)createReshapeUnitsWithLayer:(id)arg0 reshapeUnits:(*id)arg1 reshapeResultTensors:(*id)arg2 ;
+(id)buildBiasParamsWithBiases:(id)arg0 ;
+(id)constantTensorWithShape:(id)arg0 data:(id)arg1 dataType:(int)arg2 tensorLabel:(id)arg3 ;
+(id)createConstantTensorUnitWithTensor:(id)arg0 ;
+(id)createReshapeUnitWithSourceTensor:(id)arg0 layer:(id)arg1 resultShape:(id)arg2 ;
+(id)createUnitWithLayer:(id)arg0 unitParams:(id)arg1 ;
+(int)createBroadcastUnitWithSourceTensor:(id)arg0 targetShape:(id)arg1 layer:(id)arg2 broadcastUnit:(*id)arg3 broadcastResultTensor:(*id)arg4 ;
-(BOOL)addConstantTensor:(id)arg0 toNetwork:(id)arg1 ;
-(BOOL)addInputs:(id)arg0 ofUnit:(id)arg1 ofOperation:(id)arg2 toProcedure:(id)arg3 toNetwork:(id)arg4 ;
-(BOOL)addOutputs:(id)arg0 ofOperation:(id)arg1 toProcedure:(id)arg2 toNetwork:(id)arg3 ;
-(BOOL)addScalesAndBiasesOfGocUnit:(id)arg0 tensorWithBiases:(id)arg1 tensorWithScales:(id)arg2 ;
-(BOOL)addUnitsAndInputsAndOutpusOfLayer:(id)arg0 toNetwork:(id)arg1 toProcedure:(id)arg2 operationName:(id)arg3 liveInputs:(id)arg4 liveOutputs:(id)arg5 ;
-(BOOL)addWeightsOfConvolutionLayer:(id)arg0 ;
-(BOOL)addWeightsOfFullyConnectedLayer:(id)arg0 toNetwork:(id)arg1 ;
-(BOOL)addWeightsOfLayer:(id)arg0 toNetwork:(id)arg1 ;
-(BOOL)addWeightsOfLayerNormalizationLayer:(id)arg0 toNetwork:(id)arg1 ;
-(BOOL)addWeightsOfNormalizationLayer:(id)arg0 ;
-(BOOL)buildProcedureWithLayer:(id)arg0 ;
-(BOOL)buildProcedureWithRootLayer:(id)arg0 aneSubgraphLayerList:(id)arg1 liveInputs:(id)arg2 liveOutputs:(id)arg3 ;
-(BOOL)queryAndAddConstantTensors:(id)arg0 ofLayer:(id)arg1 toNetwork:(id)arg2 ;
-(id)init;
-(void)releaseWeights;
-(void)unitBottomNamesWithSourceTensor:(id)arg0 liveInputs:(id)arg1 unitBottomNames:(id)arg2 sourceTensorsToLiveUp:(id)arg3 ;


@end


#endif