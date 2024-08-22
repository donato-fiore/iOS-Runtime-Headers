// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLAPPLESOUNDANALYSISPREPROCESSING_H
#define MLAPPLESOUNDANALYSISPREPROCESSING_H

@class NSString;
@protocol MLModelSpecificationLoader, MLCustomModel;


#import "MLModel.h"

@interface MLAppleSoundAnalysisPreprocessing : MLModel <MLModelSpecificationLoader>

 {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    id<MLCustomModel> *_frontendProcessingModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithDescription:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif