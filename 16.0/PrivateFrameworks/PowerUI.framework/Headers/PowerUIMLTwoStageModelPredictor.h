// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIMLTWOSTAGEMODELPREDICTOR_H
#define POWERUIMLTWOSTAGEMODELPREDICTOR_H

@class NSURL, NSDate, NSString, MLModel, NSNumber;
@protocol PowerUIPredictor, _CDLocalContext, OS_os_log, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "PowerUITrialManager.h"

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor>



@property (nonatomic) CGFloat adjustedDuration; // ivar: _adjustedDuration
@property (retain, nonatomic) NSURL *compiledClassifier; // ivar: _compiledClassifier
@property (retain, nonatomic) NSURL *compiledRegressor; // ivar: _compiledRegressor
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain, nonatomic) NSDate *deadline; // ivar: _deadline
@property (retain, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (readonly, retain, nonatomic) MLModel *durationModel; // ivar: _durationModel
@property (readonly, retain, nonatomic) MLModel *engageModel; // ivar: _engageModel
@property (nonatomic) CGFloat lastDurationResult; // ivar: _lastDurationResult
@property (nonatomic) CGFloat lastEngagementResult; // ivar: _lastEngagementResult
@property (retain, nonatomic) NSDate *lastModelUpdate; // ivar: _lastModelUpdate
@property (nonatomic) os_unfair_lock_s loadModelLock; // ivar: _loadModelLock
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) CGFloat minInputChargeDuration; // ivar: _minInputChargeDuration
@property (nonatomic) NSInteger modelExecutionPath; // ivar: _modelExecutionPath
@property (retain, nonatomic) NSNumber *modelUpdateIterations; // ivar: _modelUpdateIterations
@property (nonatomic) CGFloat pluginBatteryLevel; // ivar: _pluginBatteryLevel
@property (retain, nonatomic) NSDate *pluginDate; // ivar: _pluginDate
@property (retain, nonatomic) NSObject<OS_os_log> *statusLog; // ivar: _statusLog
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (retain, nonatomic) PowerUITrialManager *trialManager; // ivar: _trialManager


-(CGFloat)adjustedChargingDecision:(NSUInteger)arg0 withPluginDate:(id)arg1 withPluginBatteryLevel:(CGFloat)arg2 forDate:(id)arg3 forStatus:(BOOL)arg4 ;
-(CGFloat)getHourBinID:(id)arg0 forHourBin:(NSUInteger)arg1 ;
-(CGFloat)loadAdjustedHoursForModel:(id)arg0 ;
-(CGFloat)loadMinInputChargeDuration;
-(CGFloat)loadThresholdForModel:(id)arg0 ;
-(NSUInteger)engagementModelVersion;
-(NSUInteger)modelVersion;
-(id)adjustDeadlineForReengagement;
-(id)arrayWithShape:(id)arg0 values:(id)arg1 type:(NSInteger)arg2 ;
-(id)compileModel:(id)arg0 ;
-(id)convertInputFeaturesToNeuralFeatures:(id)arg0 ;
-(id)engagementModelBoltID;
-(id)getEngagementStreamEvents:(id)arg0 forDataVersion:(NSUInteger)arg1 ;
-(id)getInputFeaturesWithPluginDate:(id)arg0 withPluginBatteryLevel:(CGFloat)arg1 forDate:(id)arg2 withLog:(id)arg3 ;
-(id)getPluginEventsBefore:(id)arg0 withMinimumDuration:(CGFloat)arg1 ;
-(id)getPluginEventsBefore:(id)arg0 withMinimumDuration:(CGFloat)arg1 withMinimumPlugoutBatteryLevel:(CGFloat)arg2 ;
-(id)initWithDefaultsDomain:(id)arg0 withContextStore:(id)arg1 withKnowledgeStore:(id)arg2 withTrialManager:(id)arg3 ;
-(id)predictFullChargeDateWithBatteryLevel:(NSUInteger)arg0 ;
-(id)timeStringFromDate:(id)arg0 ;
-(struct PowerUIModelQueryResult )chargingDecision:(NSUInteger)arg0 withPluginDate:(id)arg1 withPluginBatteryLevel:(CGFloat)arg2 forDate:(id)arg3 withLog:(id)arg4 ;
-(void)deleteCompiledModels;
-(void)deleteUpdatedModels;
-(void)loadDurationModelFromURL:(id)arg0 ;
-(void)loadEngagementModelFromURL:(id)arg0 ;
-(void)loadTrial;
-(void)resetSavedDeadline;
-(void)updateModels;


@end


#endif