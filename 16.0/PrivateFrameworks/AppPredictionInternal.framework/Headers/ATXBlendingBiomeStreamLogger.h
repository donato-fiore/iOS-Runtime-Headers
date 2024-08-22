// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBLENDINGBIOMESTREAMLOGGER_H
#define ATXBLENDINGBIOMESTREAMLOGGER_H

@class NSString, BPSPublisher, ATXBMBookmark;
@protocol ATXAnchorModelDataStoreWrapperProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXAppClipSingleSuggestionLogger.h"
#import "ATXHeroAppSingleSuggestionLogger.h"

@interface ATXBlendingBiomeStreamLogger : NSObject {
    id<ATXAnchorModelDataStoreWrapperProtocol> *_dataStoreWrapper;
    NSString *_currentABGroup;
}


@property (readonly, nonatomic) NSString *abGroup;
@property (retain, nonatomic) ATXAppClipSingleSuggestionLogger *appClipLogger; // ivar: _appClipLogger
@property (retain, nonatomic) BPSPublisher *blendingModelPublisher; // ivar: _blendingModelPublisher
@property (retain, nonatomic) ATXBMBookmark *bookmark; // ivar: _bookmark
@property (retain, nonatomic) BPSPublisher *clientModelPublisher; // ivar: _clientModelPublisher
@property (retain, nonatomic) ATXHeroAppSingleSuggestionLogger *heroLogger; // ivar: _heroLogger
@property (retain, nonatomic) NSObject<ATXPETEventTracker2Protocol> *tracker; // ivar: _tracker
@property (retain, nonatomic) BPSPublisher *uiPublisher; // ivar: _uiPublisher


+(id)biomeStreamLoggerWithPath:(id)arg0 dataStoreWrapper:(id)arg1 ;
+(id)biomeStreamLoggerWithPath:(id)arg0 tracker:(id)arg1 dataStoreWrapper:(id)arg2 ;
+(id)defaultBiomeStreamLogger;
-(id)_anchorModelEngagementMetricFromAnchorPrediction:(id)arg0 proactiveSuggestion:(id)arg1 feedbackMetadata:(id)arg2 engagementType:(int)arg3 consumerSubType:(id)arg4 completedSession:(id)arg5 ;
-(id)_loggerContextPublisherWithPublisher:(id)arg0 ;
-(id)_timeBasedMergePublisher:(id)arg0 withOtherPublishers:(id)arg1 ;
-(id)initWithBookmark:(id)arg0 tracker:(id)arg1 dataStoreWrapper:(id)arg2 ;
-(id)mergedSessionEventWithContextPublisher;
-(unsigned int)_ensureWidgetsInStackBetweenZeroAndTen:(NSUInteger)arg0 ;
-(void)_logCacheAgeMetricEventWithCacheAge:(CGFloat)arg0 clientModelId:(id)arg1 ;
-(void)_logClientModelsIncludedInHomeScreenLayoutWithSuggestionLayout:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(void)_logLayoutSelectedWithSpotlightSuggestionLayout:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(void)_logLayoutSelectedWithSuggestionLayout:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(void)_logUnaggregatedAnchorModelEngagementMetric:(id)arg0 ;
-(void)handleBlendingModelCacheUpdateEvent:(id)arg0 loggerContext:(id)arg1 ;
-(void)handleClientModelCacheUpdateEvent:(id)arg0 loggerContext:(id)arg1 ;
-(void)handleUIEvent:(id)arg0 loggerContext:(id)arg1 ;
-(void)logAnchorModelEngagementMetricsWithCompletedSession:(id)arg0 ;
-(void)logBlendingLayerRefreshMetricWithBlendingModelCacheUpdateEvent:(id)arg0 loggerContext:(id)arg1 ;
-(void)logBlendingMetricsFromBiomeStream;
-(void)logClientModelsIncludedInHomeScreenLayoutsMetricWithBlendingModelCacheUpdateEvent:(id)arg0 ;
-(void)logLayoutSelectedMetricWithBlendingModelCacheUpdateEvent:(id)arg0 ;
-(void)logScreenUnlockSessionsIfPossibleWithLoggerContext:(id)arg0 ;
-(void)logTopOfStackPredictionMetricWithBlendingModelCacheUpdateEvent:(id)arg0 ;
-(void)logWidgetRotationEngagementMetricsIfPossibleWithLoggerContext:(id)arg0 ;
-(void)persistContext;
-(void)tryLogSingleSuggestionSessionMetricsWithLoggerContext:(id)arg0 ;
-(void)updateCurrentABGroup:(id)arg0 ;


@end


#endif