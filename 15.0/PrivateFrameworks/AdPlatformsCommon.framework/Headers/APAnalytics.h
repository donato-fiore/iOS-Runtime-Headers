// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APANALYTICS_H
#define APANALYTICS_H


#import <Foundation/Foundation.h>


@interface APAnalytics : NSObject



+(void)_analyticsSendEvent:(id)arg0 eventPayload:(id)arg1 ;
+(void)_sendEvent:(id)arg0 payload:(id)arg1 ;
+(void)sendEvent:(id)arg0 ;
+(void)sendEvent:(id)arg0 customPayload:(id)arg1 ;
+(void)sendEvent:(id)arg0 valueFloat:(float)arg1 ;
+(void)sendEvent:(id)arg0 valueInt:(NSInteger)arg1 ;
+(void)sendEventError:(NSInteger)arg0 message:(id)arg1 ;
+(void)sendEventTimed:(NSInteger)arg0 roundtrip:(CGFloat)arg1 message:(id)arg2 ;
+(void)sendEventTimed:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 message:(id)arg3 ;


@end


#endif