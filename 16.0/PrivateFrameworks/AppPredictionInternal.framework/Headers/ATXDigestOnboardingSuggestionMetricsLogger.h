// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDIGESTONBOARDINGSUGGESTIONMETRICSLOGGER_H
#define ATXDIGESTONBOARDINGSUGGESTIONMETRICSLOGGER_H

@class ATXDigestOnboardingSuggestionLoggingBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingSuggestionMetricsLogger : NSObject {
    ATXDigestOnboardingSuggestionLoggingBiomeStream *_digestOnboardingSuggestionLoggingBiomeStream;
}




-(id)digestOnboardingSuggestionBookmark;
-(id)init;
-(id)initWithDigestOnboardingSuggestionLoggingBiomeStream:(id)arg0 ;
-(void)logDigestOnboardingSuggestionMetrics;
-(void)logDigestOnboardingSuggestionMetricsWithXPCActivity:(id)arg0 ;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif