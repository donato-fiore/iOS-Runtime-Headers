// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCLASSIFIER_H
#define MLCLASSIFIER_H

@protocol MLClassifier;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"
#import "MLPredictionEvent.h"

@interface MLClassifier : MLModel <MLClassifier>



@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;


+(id)predictionFromFeatures:(id)arg0 classifier:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)classLabels;
-(id)classifierResultFromOutputFeatures:(id)arg0 error:(*id)arg1 ;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initDescriptionOnlyWithSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithDescription:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif