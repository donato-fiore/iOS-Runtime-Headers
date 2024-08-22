// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCCPUDEVICEOPS_H
#define MLCCPUDEVICEOPS_H

@class NSData, NSMutableArray, NSArray, NSNumber;


#import "MLCDeviceOps.h"
#import "_MLCCPULayer.h"
#import "MLCTensor.h"

@interface MLCCPUDeviceOps : MLCDeviceOps

@property (nonatomic) *void BNNSFilter; // ivar: _BNNSFilter
@property (retain, nonatomic) NSData *arithmeticParamsData; // ivar: _arithmeticParamsData
@property (retain, nonatomic) NSData *betaDeltaData; // ivar: _betaDeltaData
@property (retain, nonatomic) NSData *betaDeltaDataBytes; // ivar: _betaDeltaDataBytes
@property (retain, nonatomic) NSMutableArray *betaMomentumData; // ivar: _betaMomentumData
@property (retain, nonatomic) NSMutableArray *betaMomentumDataBytes; // ivar: _betaMomentumDataBytes
@property (readonly, retain, nonatomic) NSData *biasDeltaData; // ivar: _biasDeltaData
@property (retain, nonatomic) NSData *biasDeltaDataBytes; // ivar: _biasDeltaDataBytes
@property (retain, nonatomic) NSMutableArray *biasDeltaDataBytesArray; // ivar: _biasDeltaDataBytesArray
@property (readonly, retain, nonatomic) NSMutableArray *biasMomentumData; // ivar: _biasMomentumData
@property (retain, nonatomic) NSMutableArray *biasMomentumDataBytes; // ivar: _biasMomentumDataBytes
@property (retain, nonatomic) NSMutableArray *biasMomentumDataBytesArray; // ivar: _biasMomentumDataBytesArray
@property (nonatomic) BOOL binaryOperation; // ivar: _binaryOperation
@property (nonatomic) BOOL computeWeightsAndBiasOnly; // ivar: _computeWeightsAndBiasOnly
@property (readonly, nonatomic) int deviceOpType; // ivar: _deviceOpType
@property (copy, nonatomic) NSArray *embeddingParams; // ivar: _embeddingParams
@property (retain, nonatomic) NSData *fusedPrimitiveParams; // ivar: _fusedPrimitiveParams
@property (retain, nonatomic) NSData *gammaDeltaData; // ivar: _gammaDeltaData
@property (retain, nonatomic) NSData *gammaDeltaDataBytes; // ivar: _gammaDeltaDataBytes
@property (retain, nonatomic) NSMutableArray *gammaMomentumData; // ivar: _gammaMomentumData
@property (retain, nonatomic) NSMutableArray *gammaMomentumDataBytes; // ivar: _gammaMomentumDataBytes
@property (nonatomic) BOOL hasBias; // ivar: _hasBias
@property (readonly, retain, nonatomic) NSArray *inDeltaData; // ivar: _inDeltaData
@property (nonatomic) BOOL inferenceOnly; // ivar: _inferenceOnly
@property (nonatomic) BOOL isFusedBNNSFilter; // ivar: _isFusedBNNSFilter
@property (retain, nonatomic) _MLCCPULayer *layer; // ivar: _layer
@property (nonatomic) BOOL leftIsAWeight; // ivar: _leftIsAWeight
@property (nonatomic) float lossWeight; // ivar: _lossWeight
@property (retain, nonatomic) MLCTensor *movingMean; // ivar: _movingMean
@property (retain, nonatomic) MLCTensor *movingVariance; // ivar: _movingVariance
@property (readonly, retain, nonatomic) NSArray *outDeltaData; // ivar: _outDeltaData
@property (copy, nonatomic) NSNumber *paddingIndex; // ivar: _paddingIndex
@property (nonatomic) int paddingPolicy; // ivar: _paddingPolicy
@property (readonly, nonatomic) NSData *params; // ivar: _params
@property (retain, nonatomic) NSData *poolingIndicesBuffer; // ivar: _poolingIndicesBuffer
@property (nonatomic) NSUInteger resultDataOffset; // ivar: _resultDataOffset
@property (nonatomic) NSUInteger resultStride; // ivar: _resultStride
@property (nonatomic) BOOL rightIsAWeight; // ivar: _rightIsAWeight
@property (nonatomic) BOOL scaleGradientByFrequency; // ivar: _scaleGradientByFrequency
@property (nonatomic) NSUInteger scatterGatherDimension; // ivar: _scatterGatherDimension
@property (nonatomic) int scatterReduceType; // ivar: _scatterReduceType
@property (nonatomic) NSUInteger secondarySourceDataOffset; // ivar: _secondarySourceDataOffset
@property (nonatomic) NSUInteger softmaxDimension; // ivar: _softmaxDimension
@property (nonatomic) NSUInteger sourceDataOffset; // ivar: _sourceDataOffset
@property (nonatomic) NSUInteger sourceStride; // ivar: _sourceStride
@property (nonatomic) NSUInteger sourceStrideSecondary; // ivar: _sourceStrideSecondary
@property (nonatomic) NSUInteger sourceStrideTertiary; // ivar: _sourceStrideTertiary
@property (nonatomic) NSUInteger tertiarySourceDataOffset; // ivar: _tertiarySourceDataOffset
@property (nonatomic) BOOL transposeX; // ivar: _transposeX
@property (nonatomic) BOOL transposeY; // ivar: _transposeY
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor; // ivar: _useSourceGradientDeviceMemoryForResultGradientTensor
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor; // ivar: _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor
@property (readonly, retain, nonatomic) NSData *weightsDeltaData; // ivar: _weightsDeltaData
@property (retain, nonatomic) NSData *weightsDeltaDataBytes; // ivar: _weightsDeltaDataBytes
@property (retain, nonatomic) NSMutableArray *weightsDeltaDataBytesArray; // ivar: _weightsDeltaDataBytesArray
@property (readonly, retain, nonatomic) NSMutableArray *weightsMomentumData; // ivar: _weightsMomentumData
@property (retain, nonatomic) NSMutableArray *weightsMomentumDataBytes; // ivar: _weightsMomentumDataBytes
@property (retain, nonatomic) NSMutableArray *weightsMomentumDataBytesArray; // ivar: _weightsMomentumDataBytesArray


+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 ;
+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 betaDeltaData:(id)arg4 gammaDeltaData:(id)arg5 betaMomentumData:(id)arg6 gammaMomentumData:(id)arg7 ;
+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 ;
-(id)initWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 betaDeltaData:(id)arg4 gammaDeltaData:(id)arg5 betaMomentumData:(id)arg6 gammaMomentumData:(id)arg7 ;
-(id)initWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 ;
-(id)initWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 betaDeltaData:(id)arg8 gammaDeltaData:(id)arg9 betaMomentumData:(id)arg10 gammaMomentumData:(id)arg11 ;
-(void)dealloc;


@end


#endif