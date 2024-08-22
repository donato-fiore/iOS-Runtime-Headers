// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLMODELIMPLML_H
#define NLMODELIMPLML_H

@class MLModel, NSString;


#import "NLModelImpl.h"
#import "NLModelConfiguration.h"

@interface NLModelImplML : NLModelImpl {
    MLModel *_mlModel;
    NLModelConfiguration *_configuration;
    NSString *_inputName;
    NSString *_outputName;
}




-(id)configuration;
-(id)initWithMLModel:(id)arg0 configuration:(id)arg1 ;
-(id)initWithModelData:(id)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 error:(*id)arg7 ;
-(id)initWithModelTrainer:(id)arg0 error:(*id)arg1 ;
-(id)modelData;
-(id)predictedLabelForString:(id)arg0 ;
-(id)predictedLabelsForTokens:(id)arg0 ;


@end


#endif