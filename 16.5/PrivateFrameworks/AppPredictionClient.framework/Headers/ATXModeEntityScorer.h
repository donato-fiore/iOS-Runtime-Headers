// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEENTITYSCORER_H
#define ATXMODEENTITYSCORER_H

@protocol ATXModeEntityScorerProtocol, ATXModeEntityScorerInterface;

#import <Foundation/Foundation.h>


@interface ATXModeEntityScorer : NSObject <ATXModeEntityScorerProtocol>

 {
    id<ATXModeEntityScorerInterface> *_modeEntityScorerClient;
}




-(BOOL)assignModeEntityScores:(NSUInteger)arg0 entityTypeIdentifier:(id)arg1 entityIdentifier:(id)arg2 score:(CGFloat)arg3 modeConfigurationType:(NSInteger)arg4 ;
-(id)init;
-(id)initWithModeEntityScorerClient:(id)arg0 ;
-(id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg0 modeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 ;
-(id)rankedAppsForDenyListForMode:(NSUInteger)arg0 ;
-(id)rankedAppsForMode:(NSUInteger)arg0 ;
-(id)rankedAppsForNotificationsForMode:(NSUInteger)arg0 ;
-(id)rankedContactsForDenyListForMode:(NSUInteger)arg0 ;
-(id)rankedContactsForNotificationsForMode:(NSUInteger)arg0 ;
-(id)rankedNotificationsForMode:(NSUInteger)arg0 ;
-(void)_attachNotificationEntityScores:(id)arg0 toNotifications:(id)arg1 ;
-(void)copyScoreMetadataFromContactModeEntities:(id)arg0 toContactModeEntities:(id)arg1 ;
-(void)copyScoreMetadataFromEntities:(id)arg0 toEntities:(id)arg1 ;
-(void)rankedAppsForDenyListForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedAppsForNotificationsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedContactsForDenyListForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedContactsForNotificationsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedNotificationsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedWidgetsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)scoreApps:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)scoreApps:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreAppsForDenyList:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)scoreAppsForDenyList:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreContacts:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreContactsForDenyList:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)scoreContactsForDenyList:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreNotifications:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)scoreNotifications:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreUserNotifications:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)scoreUserNotifications:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;


@end


#endif