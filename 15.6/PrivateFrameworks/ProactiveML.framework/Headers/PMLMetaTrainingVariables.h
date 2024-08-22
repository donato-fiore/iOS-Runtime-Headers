// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLMETATRAININGVARIABLES_H
#define PMLMETATRAININGVARIABLES_H

@class NSString, NSArray;
@protocol PMLPlistAndChunksSerializableProtocol, PMLNoiseStrategy;

#import <Foundation/Foundation.h>

#import "PMLSessionDescriptor.h"
#import "PMLTrainingStore.h"

@interface PMLMetaTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol>



@property (readonly, nonatomic) NSUInteger currentServerIteration; // ivar: _currentServerIteration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger epochsPerBatch; // ivar: _epochsPerBatch
@property (readonly, nonatomic) NSUInteger evaluationLevel; // ivar: _evaluationLevel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labelsToTrainOn; // ivar: _labelsToTrainOn
@property (readonly, nonatomic) CGFloat lossThresholdForStopping; // ivar: _lossThresholdForStopping
@property (readonly, nonatomic) NSUInteger maxSessionsToTrainOn; // ivar: _maxSessionsToTrainOn
@property (readonly, nonatomic) NSObject<PMLNoiseStrategy> *noiseStrategy; // ivar: _noiseStrategy
@property (readonly, nonatomic) NSString *planId; // ivar: _planId
@property (readonly, nonatomic) CGFloat probThreshold; // ivar: _probThreshold
@property (readonly, nonatomic) BOOL reportScale; // ivar: _reportScale
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor
@property (readonly, nonatomic) PMLTrainingStore *store; // ivar: _store
@property (readonly, nonatomic) BOOL summableMetricsOnly; // ivar: _summableMetricsOnly
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger trainingSetSize; // ivar: _trainingSetSize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMetaTrainingVariables:(id)arg0 ;
-(id)init;
-(id)initWithPlanId:(id)arg0 store:(id)arg1 noiseStrategy:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsToTrainOn:(NSUInteger)arg4 trainingSetSize:(NSUInteger)arg5 labelsToTrainOn:(id)arg6 currentServerIteration:(NSUInteger)arg7 lossThresholdForStopping:(CGFloat)arg8 epochsPerBatch:(NSUInteger)arg9 probThreshold:(CGFloat)arg10 evaluationLevel:(NSUInteger)arg11 reportScale:(BOOL)arg12 summableMetricsOnly:(BOOL)arg13 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif