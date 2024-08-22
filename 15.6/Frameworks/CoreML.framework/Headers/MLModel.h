// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLMODEL_H
#define MLMODEL_H

@protocol MLModeling;

#import <Foundation/Foundation.h>

#import "MLModelConfiguration.h"
#import "MLFairPlayDecryptSession.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"
#import "MLPredictionEvent.h"

@interface MLModel : NSObject <MLModeling>



@property (retain, nonatomic) MLModelConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) MLFairPlayDecryptSession *decryptSession; // ivar: _decryptSession
@property (readonly) MLModelMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) MLModelDescription *modelDescription; // ivar: _modelDescription
@property (retain, nonatomic) MLPredictionEvent *predictionEvent; // ivar: _predictionEvent


+(BOOL)serializeInterfaceAndMetadata:(*void)arg0 toArchive:(*void)arg1 error:(*id)arg2 ;
+(id)_compileModelAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)compileModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)compileModelWithoutAutoreleaseAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)modelWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)modelWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)predictionsFromLoopingOverBatch:(id)arg0 model:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
// +(id)predictionsFromSubbatchingBatch:(id)arg0 maxSubbatchLength:(NSInteger)arg1 predictionBlock:(id)arg2 options:(unk)arg3 error:(id)arg4  ;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)executionSchedule;
-(id)initDescriptionOnlyWithSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initInterfaceAndMetadataWithCompiledArchive:(*void)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithDescription:(id)arg0 ;
-(id)initWithDescription:(id)arg0 configuration:(id)arg1 ;
-(id)initWithName:(id)arg0 inputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 configuration:(id)arg5 ;
-(id)modelPath;
-(id)objectBoundingBoxOutputDescription;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)pipelineOfPostVisionFeaturePrintModelsFromPipeline:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)vectorizeInput:(id)arg0 error:(*id)arg1 ;
-(id)visionFeaturePrintInfo;
-(void)setModelPath:(id)arg0 modelName:(id)arg1 ;


@end


#endif