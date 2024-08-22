// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONDIGESTGENERATORCLIENT_H
#define ATXNOTIFICATIONDIGESTGENERATORCLIENT_H

@protocol ATXModeEntityScorerProtocol, ATXNotificationDigestRankerInterface;

#import <Foundation/Foundation.h>

#import "ATXMissedNotificationRankingBiomeStream.h"
#import "ATXUserNotificationDigestBiomeStream.h"
#import "ATXDNDModeConfigurationClient.h"

@interface ATXNotificationDigestGeneratorClient : NSObject {
    ATXMissedNotificationRankingBiomeStream *_missedNotificationRankingStream;
    ATXUserNotificationDigestBiomeStream *_digestStream;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    id<ATXModeEntityScorerProtocol> *_modeEntityScorer;
    id<ATXNotificationDigestRankerInterface> *_digestRankerClient;
}




-(id)_flattenNestedNotificationArrays:(id)arg0 ;
-(id)digestRankerClient;
-(id)generateDigestForNotifications:(id)arg0 digestTime:(NSInteger)arg1 ;
-(id)init;
-(id)initWithDigestRankerClient:(id)arg0 ;
-(id)initWithMissedNotificationRankingBiomeStream:(id)arg0 notificationDigestBiomeStream:(id)arg1 modeConfigurationClient:(id)arg2 modeEntityScorer:(id)arg3 digestRankerClient:(id)arg4 ;
-(id)models;
-(id)overallDigestScoreModel;
-(void)generateDigestForAppGroupedNotificationStacks:(id)arg0 maxGlobalMarqueeGroups:(NSUInteger)arg1 maxAppMarqueeGroups:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)generateDigestForNotificationArrays:(id)arg0 reply:(id)arg1 ;
-(void)generateMissedNotificationRankingForNotificationArrays:(id)arg0 atxMode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)generateMissedNotificationRankingForNotificationArrays:(id)arg0 modeUUID:(id)arg1 reply:(id)arg2 ;


@end


#endif