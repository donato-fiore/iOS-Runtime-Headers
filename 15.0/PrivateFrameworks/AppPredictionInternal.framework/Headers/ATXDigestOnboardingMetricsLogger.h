// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDIGESTONBOARDINGMETRICSLOGGER_H
#define ATXDIGESTONBOARDINGMETRICSLOGGER_H

@class ATXDigestOnboardingLoggingBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingMetricsLogger : NSObject {
    ATXDigestOnboardingLoggingBiomeStream *_digestOnboardingLoggingBiomeStream;
}




-(CGFloat)minutesAfterMidnight:(id)arg0 ;
-(id)digestOnboardingBookmark;
-(id)init;
-(id)initWithDigestOnboardingLoggingBiomeStream:(id)arg0 ;
-(void)logDigestOnboardingMetrics;
-(void)logDigestOnboardingMetricsWithXPCActivity:(id)arg0 ;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif