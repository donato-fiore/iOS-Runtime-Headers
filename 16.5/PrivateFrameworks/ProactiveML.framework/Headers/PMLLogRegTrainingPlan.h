// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLLOGREGTRAININGPLAN_H
#define PMLLOGREGTRAININGPLAN_H

@class NSString;
@protocol PMLPlanProtocol, PMLNoiseStrategy, PMLLogRegTrackerProtocol;

#import <Foundation/Foundation.h>

#import "PMLModelWeights.h"
#import "PMLSessionDescriptor.h"
#import "PMLTrainingStore.h"

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol>

 {
    id<PMLNoiseStrategy> *_noiseStrategy;
    NSUInteger _sessionsInBatch;
    CGFloat _skew;
    CGFloat _threshold;
}


@property (readonly, nonatomic) PMLModelWeights *currentModelWeights; // ivar: _currentModelWeights
@property (readonly, nonatomic) NSUInteger currentServerIteration; // ivar: _currentServerIteration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger evaluationLevel; // ivar: _evaluationLevel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL intercept; // ivar: _intercept
@property (readonly, nonatomic) BOOL isMultiLabel; // ivar: _isMultiLabel
@property (readonly, nonatomic) NSUInteger localGradientIterations; // ivar: _localGradientIterations
@property (readonly, nonatomic) float localLearningRate; // ivar: _localLearningRate
@property (readonly, nonatomic) NSUInteger localMinimumIterations; // ivar: _localMinimumIterations
@property (readonly, nonatomic) NSUInteger maxSessionsLimit; // ivar: _maxSessionsLimit
@property (readonly, nonatomic) NSString *planId; // ivar: _planId
@property (readonly, nonatomic) NSUInteger positiveLabel; // ivar: _positiveLabel
@property (readonly, nonatomic) BOOL reportScale; // ivar: _reportScale
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor
@property (readonly, nonatomic) float stoppingThreshold; // ivar: _stoppingThreshold
@property (readonly, nonatomic) PMLTrainingStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PMLLogRegTrackerProtocol> *tracker; // ivar: _tracker
@property (readonly, nonatomic) BOOL useOnlyAppleInternalSessions; // ivar: _useOnlyAppleInternalSessions


+(id)planWithStore:(id)arg0 tracker:(id)arg1 sessionDescriptor:(id)arg2 arguments:(id)arg3 ;
// -(id)evaluationMetricsForPredictions:(id)arg0 objectives:(id)arg1 predicate:(id)arg2 start:(unk)arg3  ;
-(id)init;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithStore:(id)arg0 tracker:(id)arg1 noiseStrategy:(id)arg2 planId:(id)arg3 sessionDescriptor:(id)arg4 maxSessionsLimit:(NSUInteger)arg5 sessionsInBatch:(NSUInteger)arg6 currentServerIteration:(NSUInteger)arg7 currentModelWeights:(id)arg8 localLearningRate:(float)arg9 stoppingThreshold:(float)arg10 localMinimumIterations:(NSUInteger)arg11 localGradientIterations:(NSUInteger)arg12 useOnlyAppleInternalSessions:(BOOL)arg13 skew:(CGFloat)arg14 threshold:(CGFloat)arg15 isMultiLabel:(BOOL)arg16 intercept:(BOOL)arg17 positiveLabel:(NSUInteger)arg18 evaluationLevel:(NSUInteger)arg19 reportScale:(BOOL)arg20 ;
-(id)normalizeRegressor:(id)arg0 ;
-(id)runWithError:(*id)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(void)loadSessionsWithBlock:(id)arg0 ;


@end


#endif