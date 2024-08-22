// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLANALYTICSMODELTRAINING_H
#define APODMLANALYTICSMODELTRAINING_H



#import "APOdmlAnalytics.h"

@interface APOdmlAnalyticsModelTraining : APOdmlAnalytics



+(id)_versionAndIdentifiersFromRecordInfo:(id)arg0 isCounterfactual:(BOOL)arg1 ;
+(id)eventName;
+(void)_analyticsSendEvent:(id)arg0 eventPayload:(id)arg1 ;
+(void)sendEvent:(id)arg0 additionalDetails:(id)arg1 info:(id)arg2 isCounterfactual:(BOOL)arg3 numOfRows:(NSUInteger)arg4 normDelta:(CGFloat)arg5 ;


@end


#endif