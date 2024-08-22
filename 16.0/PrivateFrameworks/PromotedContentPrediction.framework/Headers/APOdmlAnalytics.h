// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLANALYTICS_H
#define APODMLANALYTICS_H


#import <Foundation/Foundation.h>


@interface APOdmlAnalytics : NSObject



+(id)_versionAndIdentifiers;
+(id)eventName;
+(void)_analyticsSendEvent:(id)arg0 eventPayload:(id)arg1 ;
+(void)sendEvent:(id)arg0 additionalDetails:(id)arg1 ;
+(void)sendTimedEvent:(id)arg0 additionalDetails:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;


@end


#endif