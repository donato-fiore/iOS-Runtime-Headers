// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLNEURALNETWORKUPDATEENGINE_H
#define MLNEURALNETWORKUPDATEENGINE_H

@class NSDictionary, NSString, ETTaskState, ETTaskDefinition;
@protocol MLUpdatable, OS_dispatch_queue;


#import "MLNeuralNetworkV1Engine.h"
#import "MLParameterContainer.h"
#import "MLUpdateProgressHandlers.h"
#import "MLShufflingBatchProvider.h"

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkV1Engine <MLUpdatable>



@property (readonly, nonatomic) NSDictionary *classLabelToIndexMap; // ivar: _classLabelToIndexMap
@property (nonatomic) BOOL continueWithUpdate; // ivar: _continueWithUpdate
@property (retain, nonatomic) NSDictionary *coreMLToEspressoParamsMap; // ivar: _coreMLToEspressoParamsMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lossOutputName; // ivar: _lossOutputName
@property (retain, nonatomic) NSString *lossTargetName; // ivar: _lossTargetName
@property (retain, nonatomic) MLParameterContainer *parameterContainer; // ivar: _parameterContainer
@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // ivar: _progressHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // ivar: _progressHandlersDispatchQueue
@property (retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData; // ivar: _shuffableTrainingData
@property (retain, nonatomic) ETTaskState *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;
@property (retain, nonatomic) ETTaskDefinition *task; // ivar: _task


+(BOOL)supportsSecureCoding;
+(id)createCoreMLToEspressoParamsMap;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(BOOL)setWeightsOrBiasesForLayer:(id)arg0 layerType:(NSUInteger)arg1 value:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateLearningRateWithTaskContext:(id)arg0 isInCallBack:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateWeightsAndBiasesFromConfigParams:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)biasForLayer:(id)arg0 error:(*id)arg1 ;
-(id)collectMetricsFromTaskContext:(id)arg0 isInCallBack:(BOOL)arg1 ;
-(id)createEspressoTaskFrom:(id)arg0 updateParameters:(*void)arg1 lossInputName:(id)arg2 lossTargetName:(id)arg3 lossOutputName:(id)arg4 updatableLayerNames:(id)arg5 configuration:(id)arg6 error:(*id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompiledArchive:(*void)arg0 nnContainer:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;
-(id)parameterValueForKey:(id)arg0 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)paramsForLayer:(id)arg0 parameterType:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)stringForDataType:(NSUInteger)arg0 ;
-(id)updateParameters;
-(id)weightsForLayer:(id)arg0 error:(*id)arg1 ;
-(void)cancelUpdate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadLossInputName:(*id)arg0 updatableLayerNames:(*id)arg1 fromCompiledArchive:(*void)arg2 ;
-(void)loadLossTargetName:(*id)arg0 lossOutputName:(*id)arg1 fromUpdateParameters:(*void)arg2 ;
-(void)resumeUpdate;
-(void)resumeUpdateWithParameters:(id)arg0 ;
-(void)setUpdateProgressHandlers:(id)arg0 dispatchQueue:(id)arg1 ;
-(void)updateModelWithData:(id)arg0 ;


@end


#endif