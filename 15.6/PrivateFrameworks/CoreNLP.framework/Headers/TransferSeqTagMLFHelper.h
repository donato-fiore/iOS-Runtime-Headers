// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSFERSEQTAGMLFHELPER_H
#define TRANSFERSEQTAGMLFHELPER_H


#import <Foundation/Foundation.h>


@interface TransferSeqTagMLFHelper : NSObject



-(BOOL)loadModelLayersFromWeights:(id)arg0 labelSize:(NSUInteger)arg1 embeddingDimension:(NSInteger)arg2 modelLayers:(*void)arg3 modelType:(int)arg4 ;
-(float)evaluateInferenceGraphOnData:(*void)arg0 batchedLabels:(*void)arg1 inferenceGraph:(id)arg2 elmoEmbeddingRef:(*void)arg3 modelType:(int)arg4 inputPlaceholders:(*void)arg5 inferenceParams:(*void)arg6 scalarParams:(*void)arg7 labelArray:(*void)arg8 dataTypeString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg9 trainingLogger:(id)arg10 ;
// -(float)evaluateMontrealModelOnData:(*void)arg0 evalLabels:(*void)arg1 evalEmbeddingsCache:(*void)arg2 elmoEmbeddingRef:(*void)arg3 montrealModel:(*void)arg4 labelArray:(*void)arg5 trainingLogger:(id)arg6 dataTypeString:(unk)arg7 predictedLabels:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg8  ;
// -(float)showF1ResultsMatrix:(*void)arg0 labelCounts:(struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int>>> )arg1 perLabelResults:(*void)arg2 trainingLogger:(id)arg3 dataTypeString:(unk)arg4  ;
-(id)createConvLayerFromData:(NSUInteger)arg0 width:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 outputChannels:(NSUInteger)arg3 strideInX:(NSUInteger)arg4 strideInY:(NSUInteger)arg5 kernelWeight:(id)arg6 kernelBias:(id)arg7 ;
-(id)createConvLayerWithKernelHeight:(NSUInteger)arg0 width:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 outputChannels:(NSUInteger)arg3 strideInX:(NSUInteger)arg4 strideInY:(NSUInteger)arg5 ;
-(id)createDataWithFloatValue:(float)arg0 count:(NSUInteger)arg1 ;
-(id)createFullyConnectedLayer:(NSUInteger)arg0 outputSize:(NSUInteger)arg1 ;
-(id)createFullyConnectedLayerFromData:(NSUInteger)arg0 outputSize:(NSUInteger)arg1 weightData:(id)arg2 biasData:(id)arg3 ;
-(id)createGraphObjectFromLayers:(*void)arg0 graphObject:(id)arg1 inputPlaceholders:(*void)arg2 modelType:(int)arg3 ;
-(id)createInferenceGraphFromGraphObject:(id)arg0 inputPlaceholders:(*void)arg1 scalarWeights:(*void)arg2 finalLayerTensor:(id)arg3 device:(id)arg4 ;
-(id)createLSTM:(NSUInteger)arg0 outputSize:(NSUInteger)arg1 useBiLSTM:(BOOL)arg2 ;
-(id)createLSTMFromWeights:(NSUInteger)arg0 outputSize:(NSUInteger)arg1 useBiLSTM:(BOOL)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 biasTerms:(id)arg5 ;
-(id)createNSDataWithFloatValue:(float)arg0 count:(NSUInteger)arg1 ;
-(id)createTrainingGraphFromGraphObject:(id)arg0 inputPlaceholders:(*void)arg1 scalarWeights:(*void)arg2 targetLabels:(id)arg3 targeLabelWeights:(id)arg4 device:(id)arg5 ;
-(id)findMaxIndexWithData:(id)arg0 batchSize:(NSUInteger)arg1 sequenceLength:(NSUInteger)arg2 numClasses:(NSUInteger)arg3 ;
-(id)getModelLayerWeights:(struct vector<void *, std::allocator<void *>> )arg0 modelType:(int)arg1 ;
-(struct __CFDictionary *)doSeqTagTrainingAndEvalFromData:(*void)arg0 batchedLabels:(*void)arg1 batchedPaddedLabelDatasets:(*void)arg2 trainingParams:(*void)arg3 labelArray:(*void)arg4 elmoEmbeddingRef:(*void)arg5 modeLayerList:(*void)arg6 modelType:(int)arg7 trainingGraph:(id)arg8 inferenceGraph:(id)arg9 scalarParams:(*void)arg10 inputPlaceholders:(*void)arg11 targetLabelPlaceholders:(id)arg12 targetLabelWeightsPlaceholders:(id)arg13 trainingLogger:(id)arg14 ;
-(void)createGraphObjectAndLayersFromInputPlaceholders:(*void)arg0 scalarWeights:(*void)arg1 labelSize:(NSUInteger)arg2 embeddingDimension:(NSInteger)arg3 graphObject:(id)arg4 graphLayerList:(*void)arg5 modelType:(int)arg6 ;
-(void)createInferenceGraphWithLayers:(*void)arg0 labelArray:(*void)arg1 inferenceParams:(*void)arg2 modelType:(int)arg3 inputSentences:(*void)arg4 inputPlaceholders:(*void)arg5 inferenceGraph:(*id)arg6 ;
-(void)doInferenceWithInferenceGraph:(id)arg0 scalarParams:(*void)arg1 labelArray:(*void)arg2 inferenceParams:(*void)arg3 elmoEmbeddingRef:(*void)arg4 modelType:(int)arg5 inputPlaceholders:(*void)arg6 testSentences:(*void)arg7 predictedLabels:(*void)arg8 ;
// -(void)evaluateInferenceGraphWithInputTensorData:(*void)arg0 batchedInputSentences:(*void)arg1 batchedLabels:(*void)arg2 inferenceGraph:(id)arg3 modelType:(int)arg4 inputPlaceholders:(*void)arg5 inferenceParams:(*void)arg6 scalarParams:(*void)arg7 labelArray:(*void)arg8 dataTypeString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg9 trainingLogger:(id)arg10 predictedLabels:(unk)arg11  ;
-(void)executeInferenceGraph:(id)arg0 inputsDictionary:(id)arg1 batchSize:(int)arg2 maxLength:(int)arg3 labelSize:(int)arg4 predictedLabels:(*void)arg5 ;
-(void)flattenBatchOfOneHotSequences:(*void)arg0 flattenedBatch:(*void)arg1 ;
-(void)getElmoEmbeddingsForSequenceData:(*void)arg0 batchSize:(int)arg1 maxLength:(int)arg2 embeddingRef:(*void)arg3 inputTensorDataItems:(*void)arg4 splitElmo:(BOOL)arg5 ;
-(void)getInputEmbeddingsAndTargetTensorsForSequenceData:(*void)arg0 seqLabels:(*void)arg1 batchSize:(int)arg2 maxLength:(int)arg3 numClasses:(int)arg4 embeddingRef:(*void)arg5 modelType:(int)arg6 inputTensorDataItems:(*void)arg7 targetTensorData:(*id)arg8 targetWeightTensorData:(*id)arg9 ;
-(void)getMaxIndicesFromOneHotVectors:(*void)arg0 maxIndicesBatch:(*void)arg1 ;
-(void)getNSSequenceFromStdSequence:(*void)arg0 nsSentences:(id)arg1 nsSeqLengths:(id)arg2 maxLength:(int)arg3 ;
-(void)labelIdsToString:(*void)arg0 labelArray:(*void)arg1 labelStrings:(*void)arg2 ;
-(void)printLstmWeights:(id)arg0 ;
-(void)removeBatchingFromDataAndLabels:(*void)arg0 batchedLabels:(*void)arg1 inputSentences:(*void)arg2 inputLabels:(*void)arg3 maxLength:(int)arg4 ;
-(void)trainAndSaveSeqTagModelFromData:(*void)arg0 batchedLabels:(*void)arg1 trainingParams:(*void)arg2 modelType:(int)arg3 labelArray:(*void)arg4 trainedModelDict:(struct __CFDictionary **)arg5 trainingLogger:(id)arg6 ;


@end


#endif