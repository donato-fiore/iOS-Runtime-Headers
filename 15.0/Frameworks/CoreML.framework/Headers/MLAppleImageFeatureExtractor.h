// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLAPPLEIMAGEFEATUREEXTRACTOR_H
#define MLAPPLEIMAGEFEATUREEXTRACTOR_H

@class NSString, NSArray;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"
#import "MLAppleImageFeatureExtractorParameters.h"

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader>

 {
    NSString *_inputFeatureName;
    NSArray *_outputFeatureName;
    NSInteger _outputDataType;
    int _extractorType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLAppleImageFeatureExtractorParameters *parameters; // ivar: _parameters
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)computeScenePrintFeatures:(struct __CVBuffer *)arg0 handle:(id)arg1 useCPUOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)featureValueFromObjectPrint:(id)arg0 key:(id)arg1 shape:(id)arg2 ;
-(id)featureValueFromScenePrint:(id)arg0 elementSize:(NSUInteger)arg1 ;
-(id)initWithParameters:(id)arg0 modelDescription:(id)arg1 featureExtractorType:(int)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif