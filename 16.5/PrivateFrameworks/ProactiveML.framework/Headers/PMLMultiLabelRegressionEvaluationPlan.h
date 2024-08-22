// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLMULTILABELREGRESSIONEVALUATIONPLAN_H
#define PMLMULTILABELREGRESSIONEVALUATIONPLAN_H

@class NSString, NSArray;
@protocol PMLPlanProtocol, PMLMultiLabelClassifierModelProtocol, PMLMultiLabelEvaluationTrackerProtocol;

#import <Foundation/Foundation.h>

#import "PMLSessionDescriptor.h"
#import "PMLTrainingStore.h"

@interface PMLMultiLabelRegressionEvaluationPlan : NSObject <PMLPlanProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger evaluationLevel; // ivar: _evaluationLevel
@property (readonly, nonatomic) NSArray *evaluationPoints; // ivar: _evaluationPoints
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL intercept; // ivar: _intercept
@property (readonly, nonatomic) NSUInteger maxSessionsLimit; // ivar: _maxSessionsLimit
@property (readonly, nonatomic) NSObject<PMLMultiLabelClassifierModelProtocol> *multiLabelRegressionModel; // ivar: _multiLabelRegressionModel
@property (readonly, nonatomic) NSString *planId; // ivar: _planId
@property (readonly, nonatomic) NSArray *positiveLabels; // ivar: _positiveLabels
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor
@property (readonly, nonatomic) NSUInteger sessionsInBatch; // ivar: _sessionsInBatch
@property (readonly, nonatomic) PMLTrainingStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PMLMultiLabelEvaluationTrackerProtocol> *tracker; // ivar: _tracker
@property (readonly, nonatomic) NSArray *weightsArray; // ivar: _weightsArray


-(id)_precisionAtEvaluationPointsForSessions:(id)arg0 ;
-(id)_rankedLabelsForSession:(id)arg0 ;
-(id)init;
-(id)initWithPlanId:(id)arg0 store:(id)arg1 sessionDescriptor:(id)arg2 maxSessionsLimit:(NSUInteger)arg3 sessionsInBatch:(NSUInteger)arg4 labelAndWeights:(id)arg5 modelClassName:(id)arg6 intercept:(BOOL)arg7 evaluationPoints:(id)arg8 tracker:(id)arg9 evaluationLevel:(NSUInteger)arg10 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)runWithError:(*id)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif