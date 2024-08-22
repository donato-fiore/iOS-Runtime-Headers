// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLANALYTICSFEATURECALCULATION_H
#define APODMLANALYTICSFEATURECALCULATION_H



#import "APOdmlAnalytics.h"

@interface APOdmlAnalyticsFeatureCalculation : APOdmlAnalytics



+(id)_versionAndIdentifiersForNamespace:(id)arg0 ;
+(id)eventName;
+(void)_analyticsSendEvent:(id)arg0 eventPayload:(id)arg1 ;
+(void)sendEvent:(id)arg0 additionalDetails:(id)arg1 isCounterfactual:(BOOL)arg2 ;


@end


#endif