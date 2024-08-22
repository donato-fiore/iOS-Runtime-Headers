// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONSLOGGINGCLIENT_H
#define ATXNOTIFICATIONSLOGGINGCLIENT_H

@class NSXPCConnection;
@protocol ATXNotificationsLoggingProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationsAggregateLogger.h"

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol>

 {
    NSXPCConnection *_xpcConnection;
    ATXNotificationsAggregateLogger *_logger;
}




+(id)sharedInstance;
-(id)init;
-(void)activeSuggestionsWithReply:(id)arg0 ;
-(void)dealloc;
-(void)logEvent:(NSInteger)arg0 forNotificationId:(id)arg1 supplementaryAction:(id)arg2 timestamp:(id)arg3 ;
-(void)logEvent:(NSInteger)arg0 forNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(void)logEvent:(NSInteger)arg0 forNotificationId:(id)arg1 timestamp:(id)arg2 withReply:(id)arg3 ;
-(void)logNotification:(id)arg0 withNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(void)logNotificationDeliveryUI:(NSUInteger)arg0 notificationUUIDs:(id)arg1 ;
-(void)logNotificationEvent:(NSInteger)arg0 notification:(id)arg1 ;
-(void)logNotificationEvent:(NSInteger)arg0 notification:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)logNotificationGroupEvent:(NSInteger)arg0 eventIdentifier:(id)arg1 ;
-(void)logNotificationGroupEvent:(NSInteger)arg0 eventIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(void)logRealTimeTuningCountFrom:(NSUInteger)arg0 ;
-(void)logRealTimeTuningOutcome:(NSUInteger)arg0 withBundleId:(id)arg1 ;
-(void)logSuggestionDeduped:(id)arg0 timestamp:(id)arg1 ;
-(void)logSuggestionEvent:(*NSInteger)arg0 forSuggestion:(id)arg1 ;
-(void)logSuggestionEvent:(NSInteger)arg0 suggestionType:(NSInteger)arg1 suggestionIdentifier:(id)arg2 timestamp:(id)arg3 ;
-(void)logSuggestionShown:(id)arg0 forType:(NSInteger)arg1 timestamp:(id)arg2 ;
-(void)logTapCoalesceForNotificationId:(id)arg0 andBundleId:(id)arg1 timestamp:(id)arg2 ;
-(void)promotingSuggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)quietingSuggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)shouldMakePromotingSuggestionForBundleId:(id)arg0 withReply:(id)arg1 ;
-(void)shouldMakeQuietingSuggestionForBundleId:(id)arg0 withReply:(id)arg1 ;
-(void)submitGrading:(id)arg0 rating:(id)arg1 category:(id)arg2 userId:(id)arg3 ;
-(void)suggestionForNotification:(id)arg0 reply:(id)arg1 ;


@end


#endif