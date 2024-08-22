// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIMLRELEVANTDRAINPREDICTOR_H
#define POWERUIMLRELEVANTDRAINPREDICTOR_H

@class NSString, MLModel;
@protocol _CDLocalContext, OS_os_log, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "PowerUITrialManager.h"

@interface PowerUIMLRelevantDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (nonatomic) os_unfair_lock_s loadModelLock; // ivar: _loadModelLock
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, retain, nonatomic) MLModel *relevantDrainPredictorModel; // ivar: _relevantDrainPredictorModel
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (retain, nonatomic) PowerUITrialManager *trialManager; // ivar: _trialManager


-(BOOL)isStartSecondsValue:(CGFloat)arg0 withinDynamicBinWindowOfLength:(int)arg1 aroundCurrentStartSecondValue:(CGFloat)arg2 ;
-(BOOL)isStartSoCValue:(CGFloat)arg0 withinDynamicBinWindowOfLength:(int)arg1 aroundCurrentStartSoCValue:(CGFloat)arg2 ;
-(id)analyticsEventFromFeatures:(id)arg0 ;
-(id)featuresForChargeSessionAtDate:(id)arg0 withChargeStartSoC:(id)arg1 withChargeAndDrainSessionHistory:(id)arg2 ;
-(id)initWithDefaultsDomain:(id)arg0 withContextStore:(id)arg1 withKnowledgeStore:(id)arg2 withTrialManager:(id)arg3 ;
-(id)predictedRelevantDrainAfterChargeSessionAtDate:(id)arg0 withChargeStartSoC:(id)arg1 ;
-(id)predictedRelevantDrainwithFeatures:(id)arg0 ;
-(void)addStatisticalSummaryFeaturesintoFeatureDictionary:(id)arg0 forDataFrame:(id)arg1 withFeatureNameSuffix:(id)arg2 whereDimension:(id)arg3 isFilteredWithHandler:(id)arg4 ;


@end


#endif