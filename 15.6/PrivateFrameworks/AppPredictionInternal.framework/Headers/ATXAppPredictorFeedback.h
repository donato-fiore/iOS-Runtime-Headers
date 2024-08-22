// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPPREDICTORFEEDBACK_H
#define ATXAPPPREDICTORFEEDBACK_H

@class NSString;
@protocol ATXProactiveSuggestionFeedbackListenerProtocol, OS_dispatch_queue, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "_ATXFeedback.h"
#import "_ATXAggregateLogger.h"

@interface ATXAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    _ATXFeedback *_feedbackInstance;
    _ATXAggregateLogger *_aggregateLogger;
    id<ATXPETEventTracker2Protocol> *_petTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)_bucketize:(CGFloat)arg0 bucketSize:(CGFloat)arg1 ;
+(NSInteger)getEngagedItemIndexWithFeedbackItems:(id)arg0 engagedItem:(id)arg1 ;
+(NSUInteger)_outcomeForEngagementType:(NSUInteger)arg0 ;
+(id)_appDictionaryForFeedbackItem:(id)arg0 ;
+(id)_getLastAppIntentsWithEngagedAction:(id)arg0 limit:(int)arg1 ;
+(id)_getLastAppsWithEngagedApp:(id)arg0 limit:(int)arg1 ;
+(id)constructFeatureDictionaryWithFeedbackItems:(id)arg0 engagedItem:(id)arg1 shownItemIndexes:(id)arg2 consumerType:(NSUInteger)arg3 histogramBundleIdTable:(id)arg4 ;
+(id)constructSessionLogDictionaryWithFeedbackItems:(id)arg0 engagedBundleId:(id)arg1 shownBundleIdIndexes:(id)arg2 consumerType:(NSUInteger)arg3 consumerSubType:(unsigned char)arg4 outcome:(NSUInteger)arg5 annotation:(id)arg6 context:(id)arg7 ;
+(void)_sessionObjectLoggingForFeedbackItems:(id)arg0 engagedBundleId:(id)arg1 shownBundleIdIndexes:(id)arg2 consumerType:(NSUInteger)arg3 consumerSubType:(unsigned char)arg4 outcome:(NSUInteger)arg5 context:(id)arg6 ;
+(void)_tryLogInstalledAppClipSessionEngagementMetricWithConsumerSubType:(unsigned char)arg0 engagedBundleId:(id)arg1 bundleIdsShown:(id)arg2 explicitlyRejectedBundleIds:(id)arg3 abGroupIdentifier:(id)arg4 tracker:(id)arg5 ;
+(void)checkFeedbackContainsUninstalledApps:(id)arg0 consumerSubType:(unsigned char)arg1 aggregateLogger:(id)arg2 ;
+(void)logEngagedMMMetricsEntryForBundle:(id)arg0 anchorType:(NSInteger)arg1 consumerSubType:(unsigned char)arg2 score:(CGFloat)arg3 ;
+(void)logShownMMMetricsEntryForBundle:(id)arg0 anchorType:(NSInteger)arg1 consumerSubType:(unsigned char)arg2 score:(CGFloat)arg3 ;
+(void)receiveFeedbackForConsumerType:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 feedbackItemsForResponse:(id)arg2 engagementType:(NSUInteger)arg3 engagedBundleId:(id)arg4 bundleIdsShown:(id)arg5 explicitlyRejectedBundleIds:(id)arg6 abGroupIdentifier:(id)arg7 context:(id)arg8 ;
+(void)receiveFeedbackForConsumerType:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 feedbackItemsForResponse:(id)arg2 engagementType:(NSUInteger)arg3 engagedBundleId:(id)arg4 bundleIdsShown:(id)arg5 explicitlyRejectedBundleIds:(id)arg6 abGroupIdentifier:(id)arg7 context:(id)arg8 feedbackInstance:(id)arg9 aggregateLogger:(id)arg10 petTracker:(id)arg11 ;
-(NSUInteger)_engagementTypeFromEngagedSuggestion:(id)arg0 engagedBundleId:(id)arg1 shownBundleIds:(id)arg2 didSearchDuringSession:(BOOL)arg3 ;
-(NSUInteger)_engagementTypeFromUIFeedbackResult:(id)arg0 engagedSuggestion:(id)arg1 engagedBundleId:(id)arg2 shownBundleIds:(id)arg3 ;
-(id)_bundleIdsFromProactiveSuggestions:(id)arg0 ;
-(id)_engagedBundleIdFromEngagedSuggestion:(id)arg0 feedbackSession:(id)arg1 ;
-(id)clientModelIds;
-(id)init;
-(id)initWithPredictionContextBuilder:(id)arg0 feedbackInstance:(id)arg1 aggregateLogger:(id)arg2 petTracker:(id)arg3 ;
-(void)_syncForTests;
-(void)receiveUIFeedbackResult:(id)arg0 ;


@end


#endif