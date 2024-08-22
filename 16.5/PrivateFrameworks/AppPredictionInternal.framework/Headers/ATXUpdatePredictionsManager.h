// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUPDATEPREDICTIONSMANAGER_H
#define ATXUPDATEPREDICTIONSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXMLActionProducer.h"
#import "ATXServer.h"
#import "ATXUpdatePredictionsLogger.h"
#import "ATXUpdatePredictionsSources.h"

@interface ATXUpdatePredictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) ATXMLActionProducer *actionProducer; // ivar: _actionProducer
@property (retain, nonatomic) ATXServer *atxServer; // ivar: _atxServer
@property (readonly, nonatomic) ATXUpdatePredictionsLogger *updatePredictionsLogger; // ivar: _updatePredictionsLogger
@property (readonly, nonatomic) ATXUpdatePredictionsSources *updateSources; // ivar: _updateSources


+(BOOL)shouldOverrideRefreshRateForDisabledConsumerSubTypesForReason:(NSUInteger)arg0 ;
+(id)homeScreenPageConfigs;
+(id)sharedInstance;
-(id)_stringArrayFromBoxedConsumerSubTypeArray:(id)arg0 ;
-(id)actionConsumerSubTypesToUpdateWithRefreshRate:(CGFloat)arg0 disabledConsumerSubTypes:(id)arg1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)arg2 ;
-(id)appConsumerSubTypesToUpdateWithRefreshRate:(CGFloat)arg0 disabledConsumerSubTypes:(id)arg1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)arg2 ;
-(id)disabledConsumerSubTypes;
-(id)disabledConsumerSubTypesWithHomeScreenPageConfigs:(id)arg0 ;
-(id)init;
-(id)initWithATXServer:(id)arg0 actionProducer:(id)arg1 updateSources:(id)arg2 updatePredictionsLogger:(id)arg3 ;
-(void)logPredictionUpdatesForBoxedAppConsumerSubTypes:(id)arg0 actionConsumerSubTypes:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)processAppDirectoryFeedback;
-(void)processAppDirectoryFeedbackNoSync;
-(void)processHomeScreenFeedback;
-(void)processHomeScreenFeedbackNoSync;
-(void)processLockscreenFeedback;
-(void)processLockscreenFeedbackNoSync;
-(void)processSpotlightActionFeedback;
-(void)processSpotlightActionFeedbackNoSync;
-(void)processSpotlightAppFeedback;
-(void)processSpotlightAppFeedbackNoSync;
-(void)refreshActionPredictionsWithConsumerSubTypes:(id)arg0 featureCache:(id)arg1 ;
-(void)refreshAppPredictionsWithConsumerSubTypes:(id)arg0 featureCache:(id)arg1 ;
-(void)updateBehavioralPredictionsIfOlderThan:(CGFloat)arg0 reason:(NSUInteger)arg1 ;


@end


#endif