// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPFEEDBACKUTILS_H
#define PPFEEDBACKUTILS_H


#import <Foundation/Foundation.h>


@interface PPFeedbackUtils : NSObject



+(BOOL)shouldSample:(id)arg0 ;
+(BOOL)shouldSampleExtraction:(id)arg0 ;
+(id)featuresForScoreDict:(id)arg0 ;
+(id)feedbackItemForPPFeedbackItem:(id)arg0 ;
+(id)feedbackItemsByItemString:(id)arg0 ;
+(id)feedbackMetadataForBaseFeedback:(id)arg0 ;
+(id)scoredItemWithFeaturesForFeatureDictionary:(id)arg0 score:(float)arg1 ;
+(void)addBoilerplateToFeedbackLog:(id)arg0 ;
+(void)recordUniversalSearchSpotlightStatsFromFeedback:(id)arg0 clientBundleId:(id)arg1 clientIdentifier:(id)arg2 ;
+(void)recordUserEventsFromFeedback:(id)arg0 matchingFeedbackItems:(id)arg1 clientBundleId:(id)arg2 clientIdentifier:(id)arg3 domain:(unsigned char)arg4 ;


@end


#endif