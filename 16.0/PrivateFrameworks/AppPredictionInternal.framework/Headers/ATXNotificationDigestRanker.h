// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONDIGESTRANKER_H
#define ATXNOTIFICATIONDIGESTRANKER_H

@protocol ATXNotificationDigestFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationDigestRankingConstants.h"

@interface ATXNotificationDigestRanker : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> *_digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
}




-(id)appsForNotificationGroups:(id)arg0 ;
-(id)chooseAppsForMarquee:(id)arg0 ;
-(id)createDigestForNotificationStacks:(id)arg0 outError:(*id)arg1 ;
-(id)init;
-(id)initWithDigestFeedback:(id)arg0 ;
-(id)sampleAppsForMarquee:(id)arg0 numToSample:(NSUInteger)arg1 hasAutomaticMarqueeBeenUsedFlag:(*BOOL)arg2 ;


@end


#endif