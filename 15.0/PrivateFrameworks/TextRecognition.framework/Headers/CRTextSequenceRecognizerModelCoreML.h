// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTSEQUENCERECOGNIZERMODELCOREML_H
#define CRTEXTSEQUENCERECOGNIZERMODELCOREML_H

@class MLModel;


#import "CRTextSequenceRecognizerModel.h"
#import "CRNeuralRecognizerConfiguration.h"

@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration *_configuration;
}


@property (readonly, nonatomic) MLModel *model; // ivar: _model


-(BOOL)shouldSaturateInputBatchesForConfiguration:(id)arg0 ;
-(id)configuration;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)inputBatchFromTextFeatures:(id)arg0 image:(id)arg1 featureWidth:(CGFloat)arg2 configuration:(id)arg3 ;
-(id)predictFromInputs:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromImg_input:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif