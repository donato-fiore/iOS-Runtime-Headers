// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTMETRICS_H
#define PPSOCIALHIGHLIGHTMETRICS_H


#import <Foundation/Foundation.h>


@interface PPSocialHighlightMetrics : NSObject



+(BOOL)_queryLinksWithFetchAttributes:(id)arg0 interval:(CGFloat)arg1 handler:(id)arg2 ;
+(CGFloat)hoursFromSeconds:(CGFloat)arg0 ;
+(NSUInteger)countAllLinksReceivedInMessages;
+(id)SMSBucketDescriptionWithShouldContinueBlock:(id)arg0 ;
+(id)_countSentMessagesInLastWeekMatchingChatType:(id)arg0 shouldContinueBlock:(id)arg1 ;
+(id)_loggableToggleStatus:(unsigned char)arg0 ;
+(id)allHighlightIdentifiersReceivedWithShouldContinueBlock:(id)arg0 ;
+(id)countIMessagesSentInPastWeekWithShouldContinueBlock:(id)arg0 ;
+(id)countSMSSentInPastWeekWithShouldContinueBlock:(id)arg0 ;
+(id)feedbackTypeCountsByHighlightIdentifierInInterval:(CGFloat)arg0 forTVOS:(BOOL)arg1 ;
+(id)hasSentIMessageWithShouldContinueBlock:(id)arg0 ;
+(id)hasSentSMSWithShouldContinueBlock:(id)arg0 ;
+(id)highlightsReceivedInInterval:(CGFloat)arg0 shouldContinueBlock:(id)arg1 ;
+(id)iMessageBucketDescriptionWithShouldContinueBlock:(id)arg0 ;
+(id)sendLinkExpiredMessagesForFeedbackCountsByHighlightId:(id)arg0 tvFeedbackCountsByHighlightId:(id)arg1 highlights:(id)arg2 ;
+(id)unsupportedClientsFromPastDayWithShouldContinueBlock:(id)arg0 ;
+(void)_recordTipsContentEvent:(id)arg0 ;
+(void)logLinkExpiredMetricsForHighlight:(id)arg0 feedbackCountsByClient:(id)arg1 forTVOS:(BOOL)arg2 ;
+(void)registerClientLinkStatus;
+(void)registerCountLinks;
+(void)registerDeviceSettingsCollection;
+(void)registerExpiredLinkReview;
+(void)registerLogConsumedByClient;
+(void)registerSampledUnsupportedClientLogging;


@end


#endif