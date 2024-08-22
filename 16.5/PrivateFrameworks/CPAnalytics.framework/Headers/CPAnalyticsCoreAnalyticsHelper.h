// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPANALYTICSCOREANALYTICSHELPER_H
#define CPANALYTICSCOREANALYTICSHELPER_H


#import <Foundation/Foundation.h>


@interface CPAnalyticsCoreAnalyticsHelper : NSObject



+(BOOL)isValidCoreAnalyticsValueType:(id)arg0 ;
+(id)buildCACompatiblePayload:(id)arg0 ;
+(id)caCompatiblePayloadKey:(id)arg0 ;
+(void)analyticsSendEventLazy:(id)arg0 payload:(id)arg1 ;
+(void)sendCoreAnalyticsEvent:(id)arg0 withPayload:(id)arg1 shouldSanitize:(BOOL)arg2 ;


@end


#endif