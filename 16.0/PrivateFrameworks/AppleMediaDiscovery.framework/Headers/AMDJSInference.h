// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDJSINFERENCE_H
#define AMDJSINFERENCE_H


#import <Foundation/Foundation.h>


@interface AMDJSInference : NSObject



+(BOOL)areValidInputs:(id)arg0 domainOut:(*NSInteger)arg1 useCaseIdsArray:(id)arg2 useCaseIdsSetOut:(*id)arg3 storeFrontIdString:(id)arg4 storeFrontIdOut:(*id)arg5 dsId:(id)arg6 error:(*id)arg7 ;
+(BOOL)persist:(id)arg0 withHandle:(id)arg1 domainName:(id)arg2 summary:(id)arg3 ;
+(id)getDataForBizLogicForWorkflow:(id)arg0 useCaseId:(id)arg1 domainName:(id)arg2 ;
+(id)getIdAndScoresFrom:(id)arg0 useCaseId:(id)arg1 summary:(id)arg2 bigGummary:(id)arg3 errorKey:(id)arg4 ;
+(id)getPredictionForUseCase:(id)arg0 treatmentId:(id)arg1 UsingWorkflow:(id)arg2 domainName:(id)arg3 persistanceInfo:(id)arg4 summary:(id)arg5 bigSummary:(id)arg6 errorKey:(id)arg7 ;
+(id)getWorkflowForUseCase:(id)arg0 treatmentId:(id)arg1 domain:(NSInteger)arg2 summary:(id)arg3 bigSummary:(id)arg4 errorKey:(id)arg5 ;
+(id)runInference:(id)arg0 error:(*id)arg1 ;
+(void)appendInAppEventDataTo:(id)arg0 forDsId:(id)arg1 withInferencePayload:(id)arg2 ;


@end


#endif