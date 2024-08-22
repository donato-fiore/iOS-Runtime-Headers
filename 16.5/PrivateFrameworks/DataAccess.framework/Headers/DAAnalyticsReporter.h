// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAANALYTICSREPORTER_H
#define DAANALYTICSREPORTER_H


#import <Foundation/Foundation.h>


@interface DAAnalyticsReporter : NSObject



+(void)endDailyAnalyticsReporter;
+(void)reportActiveExchangeOAuthAccountsCount;
+(void)startDailyAnalyticsReporter;


@end


#endif