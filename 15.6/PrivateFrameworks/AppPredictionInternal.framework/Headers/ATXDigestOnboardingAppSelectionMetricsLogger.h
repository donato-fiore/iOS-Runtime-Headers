// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDIGESTONBOARDINGAPPSELECTIONMETRICSLOGGER_H
#define ATXDIGESTONBOARDINGAPPSELECTIONMETRICSLOGGER_H

@class ATXDigestOnboardingAppSelectionLoggingBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingAppSelectionMetricsLogger : NSObject {
    ATXDigestOnboardingAppSelectionLoggingBiomeStream *_digestOnboardingAppSelectionLoggingBiomeStream;
}




-(id)digestOnboardingAppSelectionBookmark;
-(id)init;
-(id)initWithDigestOnboardingAppSelectionLoggingBiomeStream:(id)arg0 ;
-(void)logDigestOnboardingAppSelectionMetrics;
-(void)logDigestOnboardingAppSelectionMetricsWithXPCActivity:(id)arg0 ;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif