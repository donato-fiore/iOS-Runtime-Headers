// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONDIGESTGENERATORCLIENT_H
#define ATXNOTIFICATIONDIGESTGENERATORCLIENT_H

@protocol ATXModeEntityScorerProtocol;

#import <Foundation/Foundation.h>

#import "ATXMissedNotificationRankingBiomeStream.h"
#import "ATXUserNotificationDigestBiomeStream.h"
#import "ATXDNDModeConfigurationClient.h"
#import "ATXNotificationDigestRankerClient.h"

@interface ATXNotificationDigestGeneratorClient : NSObject {
    ATXMissedNotificationRankingBiomeStream *_missedNotificationRankingStream;
    ATXUserNotificationDigestBiomeStream *_digestStream;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    id<ATXModeEntityScorerProtocol> *_modeEntityScorer;
    ATXNotificationDigestRankerClient *_digestRankerClient;
}




-(id)_flattenNestedNotificationArrays:(id)arg0 ;
-(id)_rankerForRankingType:(NSInteger)arg0 ;
-(id)generateDigestForNotificationArrays:(id)arg0 digestTime:(NSInteger)arg1 ;
-(id)generateDigestForNotificationArrays:(id)arg0 digestTime:(NSInteger)arg1 rankingType:(NSInteger)arg2 ;
-(id)generateDigestForNotifications:(id)arg0 digestTime:(NSInteger)arg1 ;
-(id)generateDigestForNotifications:(id)arg0 digestTime:(NSInteger)arg1 rankingType:(NSInteger)arg2 ;
-(id)generateMissedNotificationRankingForNotificationArrays:(id)arg0 modeUUID:(id)arg1 ;
-(id)generateMissedNotificationRankingForNotificationArrays:(id)arg0 modeUUID:(id)arg1 rankingType:(NSInteger)arg2 ;
-(id)generateMissedNotificationRankingForNotifications:(id)arg0 modeId:(id)arg1 ;
-(id)generateMissedNotificationRankingForNotifications:(id)arg0 modeId:(id)arg1 rankingType:(NSInteger)arg2 ;
-(id)generateMissedNotificationRankingForNotifications:(id)arg0 modeUUID:(id)arg1 ;
-(id)generateMissedNotificationRankingForNotifications:(id)arg0 modeUUID:(id)arg1 rankingType:(NSInteger)arg2 ;
-(id)init;
-(id)initWithMissedNotificationRankingBiomeStream:(id)arg0 notificationDigestBiomeStream:(id)arg1 modeConfigurationClient:(id)arg2 modeEntityScorer:(id)arg3 ;
-(id)models;
-(id)overallDigestScoreModel;
-(void)generateDigestForNotificationArrays:(id)arg0 reply:(id)arg1 ;
-(void)generateMissedNotificationRankingForNotificationArrays:(id)arg0 atxMode:(NSUInteger)arg1 rankingType:(NSInteger)arg2 reply:(id)arg3 ;
-(void)generateMissedNotificationRankingForNotificationArrays:(id)arg0 modeUUID:(id)arg1 reply:(id)arg2 ;


@end


#endif