// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEENTITYSCORERSERVER_H
#define ATXMODEENTITYSCORERSERVER_H

@class NSXPCListener, NSString;
@protocol ATXModeEntityScorerInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "ATXStableContactRepresentationDatastore.h"

@interface ATXModeEntityScorerServer : NSObject <ATXModeEntityScorerInterface, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    ATXStableContactRepresentationDatastore *_stableContactRepresentationDataStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldRankByScoreInAscendingOrderForModeConfigurationType:(NSInteger)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)saveScoredEntitiesToDisk:(id)arg0 mode:(id)arg1 modeEntityTypeIdentifier:(id)arg2 modeConfigurationType:(NSInteger)arg3 ;
-(id)dataFromFileHandle:(id)arg0 ;
-(id)emptyModeEntityScore;
-(id)init;
-(id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg0 modeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 ;
-(id)pathForModeEntityTypeIdentifier:(id)arg0 modeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 ;
-(id)rankedAppsForDenyListForMode:(NSUInteger)arg0 ;
-(id)rankedAppsForMode:(NSUInteger)arg0 ;
-(id)rankedContactsForDenyListForMode:(NSUInteger)arg0 ;
-(id)rankedContactsForMode:(NSUInteger)arg0 ;
-(id)rankedEntitiesForDenyListForMode:(NSUInteger)arg0 entityTypeIdentifier:(id)arg1 ;
-(id)rankedEntitiesForMode:(NSUInteger)arg0 entityTypeIdentifier:(id)arg1 ;
-(id)rankedEntitiesForMode:(NSUInteger)arg0 entityTypeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 ;
-(id)rankedNotificationsForMode:(NSUInteger)arg0 ;
-(id)rankedWidgetsForMode:(NSUInteger)arg0 ;
-(id)scoredNotificationEntityForAppFromNotificationEntity:(id)arg0 notificationScores:(id)arg1 ;
-(id)scoredNotificationEntityForContactFromNotificationEntity:(id)arg0 notificationScores:(id)arg1 ;
-(void)assignModeEntityScores:(NSUInteger)arg0 entityTypeIdentifier:(id)arg1 entityIdentifier:(id)arg2 score:(CGFloat)arg3 modeConfigurationType:(NSInteger)arg4 reply:(id)arg5 ;
-(void)dealloc;
-(void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg0 modeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 reply:(id)arg3 ;
-(void)rankedAppsForDenyListForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedAppsForNotificationsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedContactsForDenyListForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedContactsForNotificationsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedNotificationsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)rankedWidgetsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)scoreApps:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreAppsForDenyList:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreContacts:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreContactsForDenyList:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)scoreEntities:(id)arg0 entityTypeIdentifier:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)scoreEntities:(id)arg0 entityTypeIdentifier:(id)arg1 mode:(NSUInteger)arg2 modeConfigurationType:(NSInteger)arg3 ;
-(void)scoreEntitiesForDenyList:(id)arg0 entityTypeIdentifier:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)scoreNotificationModeEntity:(id)arg0 modeEntityScores:(id)arg1 ;
-(void)scoreNotifications:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;


@end


#endif