// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMULTIFUNCTIONPROGRAMENGINE_H
#define MLMULTIFUNCTIONPROGRAMENGINE_H

@class NSMutableDictionary, NSString;
@protocol MLProgramInternal, MLNeuralNetwork, MLClassifier, MLRegressor, MLCompiledModelLoader, MLProgram;


#import "MLModel.h"
#import "MLMultiFunctionProgramContainer.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"

@interface MLMultiFunctionProgramEngine : MLModel <MLProgramInternal, MLNeuralNetwork, MLClassifier, MLRegressor, MLCompiledModelLoader, MLProgram>

 {
    NSMutableDictionary *_functionNameToEngineMap;
}


@property (readonly, nonatomic) MLMultiFunctionProgramContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) NSString *modelFileBasePath; // ivar: _modelFileBasePath
@property (readonly) Class superclass;


+(id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(BOOL)verifyArgumentNames:(id)arg0 functionName:(id)arg1 error:(*id)arg2 ;
-(id)classLabels;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)evaluateFunction:(id)arg0 arguments:(id)arg1 error:(*id)arg2 ;
-(id)executionSchedule;
-(id)initWithProgramContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)modelPath;
-(id)newContextAndReturnError:(*id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)program;
-(id)programEngineForFunction:(id)arg0 error:(*id)arg1 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)enableInstrumentsTracing;
-(void)removeEngineForFunctionName:(id)arg0 ;
-(void)setModelPath:(id)arg0 modelName:(id)arg1 ;
-(void)updateModelFilePath:(id)arg0 ;


@end


#endif