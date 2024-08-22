// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIMLAUDIOACCESSORYMODELPREDICTOR_H
#define POWERUIMLAUDIOACCESSORYMODELPREDICTOR_H

@class MLModel;
@protocol OS_os_log, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface PowerUIMLAudioAccessoryModelPredictor : NSObject

@property (readonly, nonatomic) MLModel *highUsageEngageModel; // ivar: _highUsageEngageModel
@property (readonly, nonatomic) MLModel *highUsageRegressionModel; // ivar: _highUsageRegressionModel
@property (readonly, nonatomic) CGFloat lastUsedLeeway; // ivar: _lastUsedLeeway
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) MLModel *lowUsageEngageModel; // ivar: _lowUsageEngageModel
@property (readonly, nonatomic) MLModel *lowUsageRegressionModel; // ivar: _lowUsageRegressionModel
@property (nonatomic) int minimumDaysOfHistory; // ivar: _minimumDaysOfHistory
@property (nonatomic) int minimumNumberOfPreviousConnections; // ivar: _minimumNumberOfPreviousConnections
@property (retain, nonatomic) NSObject<OS_os_log> *statusLog; // ivar: _statusLog
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store


-(BOOL)deviceHasAtLeastOneLongConnection:(id)arg0 forReferenceDate:(id)arg1 ;
-(BOOL)isSufficientDataAvailableForEngagementForDevice:(id)arg0 ;
-(CGFloat)historicalMeaningfulUnderchargeRate:(id)arg0 ;
-(id)chargingDecisionForDate:(id)arg0 forAudioAccessory:(id)arg1 ;
-(id)checkForSufficientBTConnectionEventsUpTo:(id)arg0 forDevice:(id)arg1 ;
-(id)getBTConnectionEventsInDescendingOrderForPredictionUpTo:(id)arg0 forDevice:(id)arg1 ;
-(id)getBTConnectionEventsUpTo:(id)arg0 withMinimumDuration:(CGFloat)arg1 withLimit:(unsigned int)arg2 ascending:(BOOL)arg3 forDevice:(id)arg4 ;
-(id)getInputFeaturesForDate:(id)arg0 withEvents:(id)arg1 withLog:(id)arg2 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif