// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPGROUPEDNOTIFICATIONDIGESTRANKER_H
#define ATXAPPGROUPEDNOTIFICATIONDIGESTRANKER_H

@protocol ATXNotificationDigestFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationDigestRankingConstants.h"

@interface ATXAppGroupedNotificationDigestRanker : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> *_digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
}




-(id)bfsSelectGlobalMarqueeGroupsFromApps:(id)arg0 maxCount:(NSUInteger)arg1 groupFilter:(id)arg2 ;
-(id)createDigestForAppGroupedNotificationStacks:(id)arg0 maxGlobalMarqueeGroups:(NSUInteger)arg1 maxAppMarqueeGroups:(NSUInteger)arg2 outError:(*id)arg3 ;
-(id)getRankedAppsFromAppGroupedNotificationStacks:(id)arg0 maxAppMarqueeGroups:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithDigestFeedback:(id)arg0 ;


@end


#endif