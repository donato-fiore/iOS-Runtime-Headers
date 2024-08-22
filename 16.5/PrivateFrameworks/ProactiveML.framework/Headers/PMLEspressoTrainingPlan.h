// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLESPRESSOTRAININGPLAN_H
#define PMLESPRESSOTRAININGPLAN_H

@class ETTaskDefinition, NSString;
@protocol PMLPlanProtocol, ETDataProvider;

#import <Foundation/Foundation.h>

#import "PMLMetaTrainingVariables.h"
#import "PMLEspressoTrainingVariables.h"

@interface PMLEspressoTrainingPlan : NSObject <PMLPlanProtocol>

 {
    ETTaskDefinition *_taskDefinition;
    PMLMetaTrainingVariables *_mtv;
    PMLEspressoTrainingVariables *_etv;
    id<ETDataProvider> *_trainingPredictions;
    id<ETDataProvider> *_groundTruth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *planId; // ivar: _planId
@property (readonly) Class superclass;


+(BOOL)isValidGradient:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)numberOfParametersInTensor:(id)arg0 ;
+(id)_calculateGradientInPlaceForTask:(id)arg0 startingParameters:(id)arg1 globalNames:(id)arg2 weightNames:(id)arg3 biasNames:(id)arg4 ;
+(id)_calculateTrainingMetricsWithSamplingProb:(CGFloat)arg0 groundTruthProvider:(id)arg1 predictionsProvider:(id)arg2 trueLabelName:(id)arg3 trainingOutputName:(id)arg4 lossValueName:(id)arg5 probThreshold:(CGFloat)arg6 includeSummableOnly:(BOOL)arg7 ;
+(id)_getModelParametersForTask:(id)arg0 globalNames:(id)arg1 weightNames:(id)arg2 biasNames:(id)arg3 error:(*id)arg4 ;
+(id)_iterateModelParametersForTask:(id)arg0 globalNames:(id)arg1 weightNames:(id)arg2 biasNames:(id)arg3 block:(id)arg4 ;
+(int)argmax:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEspressoTrainingPlan:(id)arg0 ;
-(id)_newTaskForTraining;
-(id)_updateResultsReferenceCallback:(SEL)arg0 ;
-(id)init;
-(id)initWithMetaTrainingVariables:(id)arg0 espressoTrainingVariables:(id)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)runWithError:(*id)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif