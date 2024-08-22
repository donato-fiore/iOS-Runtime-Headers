// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTNOTIFICATIONENGAGEMENTEVENTPROVIDER_H
#define ATXCONTACTNOTIFICATIONENGAGEMENTEVENTPROVIDER_H

@class NSCountedSet;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEvent.h"

@interface ATXContactNotificationEngagementEventProvider : NSObject {
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
    NSCountedSet *_modeCountOfNotificationsCleared;
    NSCountedSet *_globalCountOfNotificationsCleared;
    NSCountedSet *_modeCountOfNotificationsReceived;
    NSCountedSet *_globalCountOfNotificationsReceived;
}


@property (readonly, nonatomic) ATXModeEvent *mostRecentModeEvent; // ivar: _mostRecentModeEvent


-(BOOL)notificationEventOccurredWhileInMode:(id)arg0 modeTransitionEvent:(id)arg1 ;
-(BOOL)successfullyCalculatedNotificationEvents;
-(CGFloat)classConditionalOfNotificationsClearedForContactId:(id)arg0 ;
-(CGFloat)classConditionalOfNotificationsReceivedForContactId:(id)arg0 ;
-(CGFloat)globalNotificationsClearedRateForContactId:(id)arg0 ;
-(CGFloat)globalPopularityOfNotificationsReceivedForContactId:(id)arg0 ;
-(CGFloat)localNotificationsClearedRateForContactId:(id)arg0 ;
-(CGFloat)localPopularityOfNotificationsReceivedForContactId:(id)arg0 ;
-(CGFloat)ratioOfLocalToGlobalNotificationsClearedRateForContactId:(id)arg0 ;
-(CGFloat)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForContactId:(id)arg0 ;
-(NSUInteger)globalCountOfNotificationsCleared;
-(NSUInteger)globalCountOfNotificationsClearedForContactId:(id)arg0 ;
-(NSUInteger)globalCountOfNotificationsReceived;
-(NSUInteger)globalCountOfNotificationsReceivedForContactId:(id)arg0 ;
-(NSUInteger)modeCountOfNotificationsCleared;
-(NSUInteger)modeCountOfNotificationsClearedForContactId:(id)arg0 ;
-(NSUInteger)modeCountOfNotificationsReceived;
-(NSUInteger)modeCountOfNotificationsReceivedForContactId:(id)arg0 ;
-(id)dateIntervalFromNotificationEvent:(id)arg0 ;
-(id)initWithModeEventProvider:(id)arg0 ;
-(void)trackNewModeEvent:(id)arg0 ;
-(void)trackNewNotificationEvent:(id)arg0 ;


@end


#endif