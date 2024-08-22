// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDIGESTONBOARDINGLOGGING_H
#define ATXDIGESTONBOARDINGLOGGING_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXDigestOnboardingLoggingBiomeStream.h"
#import "ATXDigestOnboardingAppSelectionLoggingBiomeStream.h"

@interface ATXDigestOnboardingLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXDigestOnboardingLoggingBiomeStream *_digestOnboardingLoggingBiomeStream;
    ATXDigestOnboardingAppSelectionLoggingBiomeStream *_digestOnboardingAppSelectionLoggingBiomeStream;
}




-(id)init;
-(id)initWithDigestOnboardingLoggingBiomeStream:(id)arg0 digestOnboardingAppSelectionLoggingBiomeStream:(id)arg1 ;
-(id)onBoardingAppSelectionEventWithApp:(id)arg0 rank:(NSUInteger)arg1 addedToDigest:(BOOL)arg2 wasShownInDigest:(BOOL)arg3 sessionUUID:(id)arg4 ;
-(void)logDigestOnboardingAppSelectionForShownApps:(id)arg0 appsAddedToDigest:(id)arg1 rankedApps:(id)arg2 sessionUUID:(id)arg3 ;
-(void)logDigestOnboardingWithEntrySource:(int)arg0 digestSetupOutcome:(int)arg1 finalUIShown:(int)arg2 timeTaken:(CGFloat)arg3 didSelectShowMore:(BOOL)arg4 numDaysForAverageNotificationCount:(NSUInteger)arg5 shownApps:(id)arg6 appsAddedToDigest:(id)arg7 deliveryTimes:(id)arg8 ;


@end


#endif