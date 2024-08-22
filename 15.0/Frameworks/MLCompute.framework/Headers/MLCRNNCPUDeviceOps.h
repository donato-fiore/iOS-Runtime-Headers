// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCRNNCPUDEVICEOPS_H
#define MLCRNNCPUDEVICEOPS_H

@class NSMutableArray, NSData;


#import "MLCCPUDeviceOps.h"

@interface MLCRNNCPUDeviceOps : MLCCPUDeviceOps

@property (retain, nonatomic) NSMutableArray *auxBiasTerms; // ivar: _auxBiasTerms
@property (retain, nonatomic) NSMutableArray *auxBiasTermsAccumulators; // ivar: _auxBiasTermsAccumulators
@property (nonatomic) BOOL batchFirst; // ivar: _batchFirst
@property (nonatomic) BOOL biDirectional; // ivar: _biDirectional
@property (retain, nonatomic) NSMutableArray *bnnsDesc2DHiddenWeightAccumulators; // ivar: _bnnsDesc2DHiddenWeightAccumulators
@property (retain, nonatomic) NSMutableArray *bnnsDesc2DHiddenWeightGrads; // ivar: _bnnsDesc2DHiddenWeightGrads
@property (retain, nonatomic) NSMutableArray *bnnsDesc2DHiddenWeightParams; // ivar: _bnnsDesc2DHiddenWeightParams
@property (retain, nonatomic) NSMutableArray *bnnsDesc2DInputWeightAccumulators; // ivar: _bnnsDesc2DInputWeightAccumulators
@property (retain, nonatomic) NSMutableArray *bnnsDesc2DInputWeightGrads; // ivar: _bnnsDesc2DInputWeightGrads
@property (retain, nonatomic) NSMutableArray *bnnsDesc2DInputWeightParams; // ivar: _bnnsDesc2DInputWeightParams
@property (retain, nonatomic) NSMutableArray *bnnsHiddenWeightsDeltaPointers; // ivar: _bnnsHiddenWeightsDeltaPointers
@property (retain, nonatomic) NSMutableArray *bnnsHiddenWeightsMomentumPointers; // ivar: _bnnsHiddenWeightsMomentumPointers
@property (retain, nonatomic) NSMutableArray *bnnsInputWeightsDeltaPointers; // ivar: _bnnsInputWeightsDeltaPointers
@property (retain, nonatomic) NSMutableArray *bnnsInputWeightsMomentumPointers; // ivar: _bnnsInputWeightsMomentumPointers
@property (retain, nonatomic) NSMutableArray *combinedGateWeightsAndBias; // ivar: _combinedGateWeightsAndBias
@property (retain, nonatomic) NSMutableArray *combinedInputsBuffer; // ivar: _combinedInputsBuffer
@property (retain, nonatomic) NSMutableArray *combinedOutputsBuffer; // ivar: _combinedOutputsBuffer
@property (nonatomic) BOOL hasPeephole; // ivar: _hasPeephole
@property (nonatomic) NSUInteger hiddenSize; // ivar: _hiddenSize
@property (retain, nonatomic) NSMutableArray *hiddenWeightsDeltaPointers; // ivar: _hiddenWeightsDeltaPointers
@property (retain, nonatomic) NSMutableArray *hiddenWeightsMomentumDataBytesArray; // ivar: _hiddenWeightsMomentumDataBytesArray
@property (retain, nonatomic) NSMutableArray *hiddenWeightsMomentumDescData; // ivar: _hiddenWeightsMomentumDescData
@property (retain, nonatomic) NSMutableArray *hiddenWeightsMomentumDescDataPointer; // ivar: _hiddenWeightsMomentumDescDataPointer
@property (nonatomic) NSUInteger inputSize; // ivar: _inputSize
@property (retain, nonatomic) NSMutableArray *inputWeightsDeltaPointers; // ivar: _inputWeightsDeltaPointers
@property (retain, nonatomic) NSMutableArray *inputWeightsMomentumDataBytesArray; // ivar: _inputWeightsMomentumDataBytesArray
@property (retain, nonatomic) NSMutableArray *inputWeightsMomentumDescData; // ivar: _inputWeightsMomentumDescData
@property (retain, nonatomic) NSMutableArray *inputWeightsMomentumDescDataPointer; // ivar: _inputWeightsMomentumDescDataPointer
@property (retain, nonatomic) NSData *lstmDeltaParams; // ivar: _lstmDeltaParams
@property (nonatomic) NSUInteger numAccumulatorsPerParameter; // ivar: _numAccumulatorsPerParameter
@property (nonatomic) NSUInteger numLayers; // ivar: _numLayers
@property (nonatomic) NSUInteger numParametersForSingleLSTM; // ivar: _numParametersForSingleLSTM
@property (retain, nonatomic) NSMutableArray *parameterPointers; // ivar: _parameterPointers
@property (nonatomic) BOOL returnsSequences; // ivar: _returnsSequences
@property (retain, nonatomic) NSData *trainingCache; // ivar: _trainingCache
@property (retain, nonatomic) NSMutableArray *weightAndBiasGateDeltaBuffers; // ivar: _weightAndBiasGateDeltaBuffers


+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 ;
-(id)initWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 betaDeltaData:(id)arg8 gammaDeltaData:(id)arg9 betaMomentumData:(id)arg10 gammaMomentumData:(id)arg11 ;
-(void)dealloc;


@end


#endif