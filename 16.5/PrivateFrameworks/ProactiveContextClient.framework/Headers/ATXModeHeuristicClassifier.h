// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEHEURISTICCLASSIFIER_H
#define ATXMODEHEURISTICCLASSIFIER_H

@class NSArray, _PASQueueLock, NSString;
@protocol ATXModeFeaturizerDelegate, ATXModeClassifierClientModel, OS_dispatch_queue, ATXModeClassifierClientModelDelegate;

#import <Foundation/Foundation.h>

#import "ATXModeScheduler.h"
#import "ATXConfiguredModeService.h"
#import "ATXModeLogger.h"

@interface ATXModeHeuristicClassifier : NSObject <ATXModeFeaturizerDelegate, ATXModeClassifierClientModel>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _minUpdateInterval;
    NSArray *_featurizers;
    ATXModeScheduler *_scheduler;
    _PASQueueLock *_lock;
    ATXConfiguredModeService *_modeService;
    ATXModeLogger *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeClassifierClientModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isUserWorkingFromHomeWithAggregateFeatures:(id)arg0 ;
-(CGFloat)_confidenceScoreForMode:(NSUInteger)arg0 fromAggregateFeatures:(id)arg1 ;
-(NSInteger)_originForMode:(NSUInteger)arg0 fromAggregateFeatures:(id)arg1 ;
-(NSUInteger)_predictModeWithFeature:(id)arg0 ;
-(NSUInteger)currentMode;
-(id)_serializedTriggersForMode:(NSUInteger)arg0 fromAggregateFeatures:(id)arg1 ;
-(id)_triggersForMode:(NSUInteger)arg0 fromAggregateFeatures:(id)arg1 ;
-(id)currentFeaturesInDictionary;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 configuredModeService:(id)arg1 locationManager:(id)arg2 ;
-(id)initWithFeaturizers:(id)arg0 minUpdateInterval:(CGFloat)arg1 duetHelper:(id)arg2 configuredModeService:(id)arg3 ;
-(void)_currentModeUUID:(*id)arg0 userModeName:(*id)arg1 modeType:(*NSUInteger)arg2 confidenceScore:(*CGFloat)arg3 origin:(*NSInteger)arg4 originBundleId:(*id)arg5 serializedTrigger:(*id)arg6 allowsSmartEntry:(*BOOL)arg7 guardedData:(id)arg8 ;
-(void)_requestFeaturesFromAllFeaturizersAndUpdate;
-(void)_updateIfNeededWithGuardedData:(id)arg0 ;
-(void)_updateWithGuardedData:(id)arg0 ;
-(void)currentModeUUID:(*id)arg0 userModeName:(*id)arg1 modeType:(*NSUInteger)arg2 confidenceScore:(*CGFloat)arg3 origin:(*NSInteger)arg4 originBundleId:(*id)arg5 serializedTrigger:(*id)arg6 allowsSmartEntry:(*BOOL)arg7 ;
-(void)dealloc;
-(void)featurizer:(id)arg0 didUpdateFeatures:(id)arg1 ;
-(void)reset;
-(void)update;
-(void)updateWithFeatureSet:(id)arg0 ;
-(void)updateWithFeatureSet:(id)arg0 immediately:(BOOL)arg1 reply:(id)arg2 ;


@end


#endif