// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONFEEDBACKMETRICSLOGGER_H
#define ATXPROACTIVESUGGESTIONFEEDBACKMETRICSLOGGER_H

@class PIFeatureFeedback;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionFeedbackMetricsLogger : NSObject

@property (readonly, nonatomic) NSObject<ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters; // ivar: _hyperParameters
@property (readonly, nonatomic) NSObject<ATXPETEventTracker2Protocol> *petEventTracker; // ivar: _petEventTracker
@property (readonly, nonatomic) PIFeatureFeedback *piFeatureFeedbackRecorder; // ivar: _piFeatureFeedbackRecorder


-(id)init;
-(id)initWithHyperParameters:(id)arg0 ;
-(id)initWithPETEventTracker:(id)arg0 hyperParameters:(id)arg1 ;
-(void)handleNewFeedbackResult:(id)arg0 previousSessionId:(id)arg1 ;
-(void)logClientModelClientCacheAgeMetricForFeedbackResult:(id)arg0 ;
-(void)logClientModelEngagementMetricForFeedbackResult:(id)arg0 ;
-(void)logClientModelUICacheAgeMetricForFeedbackResult:(id)arg0 ;
-(void)logMetricsWithTestResults:(id)arg0 ;
-(void)logMetricsWithUIFeedbackQuery:(id)arg0 ;
-(void)logSessionEngagementMetricForFeedbackResult:(id)arg0 ;
-(void)logSessionToPFIForFeedbackResult:(id)arg0 ;


@end


#endif