// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPNOTIFICATIONENGAGEMENTEVENTPROVIDER_H
#define ATXAPPNOTIFICATIONENGAGEMENTEVENTPROVIDER_H

@class NSCountedSet;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEvent.h"

@interface ATXAppNotificationEngagementEventProvider : NSObject {
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
    NSCountedSet *_modeCountOfNotificationsCleared;
    NSCountedSet *_globalCountOfNotificationsCleared;
    NSCountedSet *_modeCountOfNotificationsReceived;
    NSCountedSet *_globalCountOfNotificationsReceived;
}


@property (readonly, nonatomic) ATXModeEvent *mostRecentModeEvent; // ivar: _mostRecentModeEvent


-(BOOL)notificationEventOccurredWhileInMode:(id)arg0 modeTransitionEvent:(id)arg1 ;
-(BOOL)successfullyCalculatedNotificationEvents;
-(CGFloat)classConditionalOfNotificationsClearedForBundleId:(id)arg0 ;
-(CGFloat)classConditionalOfNotificationsReceivedForBundleId:(id)arg0 ;
-(CGFloat)globalNotificationsClearedRateForBundleId:(id)arg0 ;
-(CGFloat)globalPopularityOfNotificationsReceivedForBundleId:(id)arg0 ;
-(CGFloat)localNotificationsClearedRateForBundleId:(id)arg0 ;
-(CGFloat)localPopularityOfNotificationsReceivedForBundleId:(id)arg0 ;
-(CGFloat)ratioOfLocalToGlobalNotificationsClearedRateForBundleId:(id)arg0 ;
-(CGFloat)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForBundleId:(id)arg0 ;
-(NSUInteger)globalCountOfNotificationsCleared;
-(NSUInteger)globalCountOfNotificationsClearedForBundleId:(id)arg0 ;
-(NSUInteger)globalCountOfNotificationsReceived;
-(NSUInteger)globalCountOfNotificationsReceivedForBundleId:(id)arg0 ;
-(NSUInteger)modeCountOfNotificationsCleared;
-(NSUInteger)modeCountOfNotificationsClearedForBundleId:(id)arg0 ;
-(NSUInteger)modeCountOfNotificationsReceived;
-(NSUInteger)modeCountOfNotificationsReceivedForBundleId:(id)arg0 ;
-(id)dateIntervalFromNotificationEvent:(id)arg0 ;
-(id)initWithModeEventProvider:(id)arg0 ;
-(void)trackNewModeEvent:(id)arg0 ;
-(void)trackNewNotificationEvent:(id)arg0 forInstalledApps:(id)arg1 ;


@end


#endif