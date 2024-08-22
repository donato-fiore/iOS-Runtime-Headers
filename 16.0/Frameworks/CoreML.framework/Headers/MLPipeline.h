// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPIPELINE_H
#define MLPIPELINE_H

@class NSArray;
@protocol MLSpecificationCompiler;


#import "MLModel.h"

@interface MLPipeline : MLModel <MLSpecificationCompiler>



@property (retain) NSArray *modelNames; // ivar: _modelNames
@property (retain) NSArray *models; // ivar: _models


+(BOOL)archivePipelineModelDetailsFrom:(*void)arg0 toArchive:(*void)arg1 error:(*id)arg2 ;
+(id)classLabelsForPipelineFromSubModelArray:(id)arg0 predictedFeatureName:(id)arg1 ;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compileWithModelsInPipeline:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 updatable:(BOOL)arg3 error:(*id)arg4 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(void)archiveCustomModelNames:(*void)arg0 to:(*void)arg1 ;
+(void)archivePipelineUpdateParameterForModels:(*void)arg0 to:(*void)arg1 updatable:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)executionSchedule;
-(id)extractModelNamesFromArchive:(*void)arg0 numModels:(NSUInteger)arg1 ;
-(id)initModelFromMetadataAndArchive:(*void)arg0 versionInfo:(id)arg1 description:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(id)initWithModels:(id)arg0 modelNames:(id)arg1 description:(id)arg2 configuration:(id)arg3 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)replaceModelAtIndex:(NSUInteger)arg0 with:(id)arg1 ;
-(void)updateParameterDescriptionsByKeyBasedOnSubModel;


@end


#endif