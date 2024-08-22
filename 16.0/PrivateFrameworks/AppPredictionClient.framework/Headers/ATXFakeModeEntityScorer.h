// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFAKEMODEENTITYSCORER_H
#define ATXFAKEMODEENTITYSCORER_H

@class NSMutableDictionary;
@protocol ATXModeEntityScorerProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeModeEntityScorer : NSObject <ATXModeEntityScorerProtocol>

 {
    CGFloat _defaultAppScore;
    CGFloat _defaultContactScore;
    NSMutableDictionary *_entityToScoreMapping;
    NSMutableDictionary *_entityToScoreMappingForDenyList;
}




+(NSUInteger)atxModeFromString:(id)arg0 ;
-(id)init;
-(id)rankedAppsForDenyListForMode:(NSUInteger)arg0 ;
-(id)rankedAppsForMode:(NSUInteger)arg0 ;
-(id)rankedAppsForNotificationsForMode:(NSUInteger)arg0 ;
-(id)rankedContactsForDenyListForMode:(NSUInteger)arg0 ;
-(id)rankedContactsForNotificationsForMode:(NSUInteger)arg0 ;
-(id)rankedNotificationsForMode:(NSUInteger)arg0 ;
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
-(void)setDefaultScoreForAllApps:(CGFloat)arg0 ;
-(void)setDefaultScoreForAllContacts:(CGFloat)arg0 ;
-(void)setScoreForBundleId:(id)arg0 score:(CGFloat)arg1 ;
-(void)setScoreForContactId:(id)arg0 score:(CGFloat)arg1 ;
-(void)setScoreForEntity:(id)arg0 score:(CGFloat)arg1 ;


@end


#endif