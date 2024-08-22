// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIGHTHOUSESHADOWEVALUATOR_H
#define LIGHTHOUSESHADOWEVALUATOR_H

@class NSMutableArray;
@protocol ODCurarePersonalizationProtocol, ODCurareEvaluatorProtocol, ODCurareDataProviderProtocol, _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting;

#import <Foundation/Foundation.h>


@interface LighthouseShadowEvaluator : NSObject <ODCurarePersonalizationProtocol, ODCurareEvaluatorProtocol, ODCurareDataProviderProtocol>



@property (retain, nonatomic) NSMutableArray *evaluationResults; // ivar: _evaluationResults
@property (retain) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting> *knowledgeStore; // ivar: _knowledgeStore


-(BOOL)evaluateTaskSuccess:(id)arg0 finalInteraction:(id)arg1 ;
-(BOOL)findInteraction:(id)arg0 ;
-(BOOL)isSuccess:(id)arg0 intentType:(id)arg1 intentResultType:(id)arg2 ;
-(BOOL)performSiriEvaluationTask:(*id)arg0 ;
-(NSInteger)getIntentEventType:(id)arg0 ;
-(id)evaluateAbandonedSiriTasks:(id)arg0 ;
-(id)evaluateAppLaunchedTasks:(id)arg0 startTime:(id)arg1 ;
-(id)evaluateWithModel:(id)arg0 ;
-(id)fetchSiriIntentEvents:(id)arg0 ;
-(id)generateCandidateModels:(id)arg0 coreDuetStreamIdentifier:(id)arg1 ;
-(id)getDateString:(id)arg0 ;
-(id)getEvaluationResults;
-(id)getLastEvaluationTime:(id)arg0 ;
-(id)getTaskConfigurationFromInteractionID:(id)arg0 ;
-(id)init;
-(id)personalizeModel:(id)arg0 ;


@end


#endif