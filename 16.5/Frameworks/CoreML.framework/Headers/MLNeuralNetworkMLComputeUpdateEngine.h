// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLNEURALNETWORKMLCOMPUTEUPDATEENGINE_H
#define MLNEURALNETWORKMLCOMPUTEUPDATEENGINE_H

@class NSDictionary, NSString;
@protocol MLUpdatable, OS_dispatch_queue;


#import "MLNeuralNetworkV1Engine.h"
#import "MLNeuralNetworkMLComputeGraph.h"
#import "MLParameterContainer.h"
#import "MLUpdateProgressHandlers.h"
#import "MLShufflingBatchProvider.h"

@interface MLNeuralNetworkMLComputeUpdateEngine : MLNeuralNetworkV1Engine <MLUpdatable>



@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, nonatomic) NSDictionary *classLabelToIndexMap; // ivar: _classLabelToIndexMap
@property (nonatomic) BOOL classifierOutputIsSigmoidOutput; // ivar: _classifierOutputIsSigmoidOutput
@property (nonatomic) BOOL continueWithUpdate; // ivar: _continueWithUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float finalLossValue; // ivar: _finalLossValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lossTargetName; // ivar: _lossTargetName
@property (retain, nonatomic) MLNeuralNetworkMLComputeGraph *mlcGraph; // ivar: _mlcGraph
@property (retain, nonatomic) MLParameterContainer *parameterContainer; // ivar: _parameterContainer
@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // ivar: _progressHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // ivar: _progressHandlersDispatchQueue
@property (retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData; // ivar: _shuffableTrainingData
@property (readonly) Class superclass;


+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(BOOL)performTrainingWith:(id)arg0 callBacks:(id)arg1 numberOfEpochs:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCompiledArchive:(*void)arg0 nnContainer:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;
-(id)loadLossTargetName:(*void)arg0 ;
-(id)parameterValueForKey:(id)arg0 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)performInferenceWith:(id)arg0 outputNameToLayerMap:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)updateParameters;
-(void)cancelUpdate;
-(void)resumeUpdate;
-(void)resumeUpdateWithParameters:(id)arg0 ;
-(void)setUpdateProgressHandlers:(id)arg0 dispatchQueue:(id)arg1 ;
-(void)updateLearningRateWithValue:(float)arg0 ;
-(void)updateModelWithData:(id)arg0 ;


@end


#endif