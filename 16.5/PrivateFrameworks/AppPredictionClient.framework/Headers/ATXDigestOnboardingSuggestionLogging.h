// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIGESTONBOARDINGSUGGESTIONLOGGING_H
#define ATXDIGESTONBOARDINGSUGGESTIONLOGGING_H


#import <Foundation/Foundation.h>

#import "ATXDigestOnboardingSuggestionLoggingBiomeStream.h"

@interface ATXDigestOnboardingSuggestionLogging : NSObject {
    ATXDigestOnboardingSuggestionLoggingBiomeStream *_digestOnboardingSuggestionLoggingBiomeStream;
}




-(id)init;
-(id)initWithDigestOnboardingSuggestionLoggingBiomeStream:(id)arg0 ;
-(void)logDigestOnboardingSuggestionWithOutcome:(int)arg0 timeToResolution:(CGFloat)arg1 ;


@end


#endif