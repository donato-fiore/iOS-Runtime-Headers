// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEENTITYSCORERCLIENT_H
#define ATXMODEENTITYSCORERCLIENT_H

@class NSXPCConnection;
@protocol ATXModeEntityScorerInterface;

#import <Foundation/Foundation.h>


@interface ATXModeEntityScorerClient : NSObject <ATXModeEntityScorerInterface>

 {
    NSXPCConnection *_xpcConnection;
}




-(id)init;
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
-(void)scoreNotifications:(id)arg0 mode:(NSUInteger)arg1 reply:(id)arg2 ;


@end


#endif