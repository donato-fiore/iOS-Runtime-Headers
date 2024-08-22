// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSLOGGINGCLIENT_H
#define ATXNOTIFICATIONSLOGGINGCLIENT_H

@class NSXPCConnection, NSMutableArray, _PASSimpleCoalescingTimer;
@protocol ATXNotificationsLoggingProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXNotificationsAggregateLogger.h"

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol>

 {
    NSXPCConnection *_xpcConnection;
    ATXNotificationsAggregateLogger *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_activeSuggestionsRequests;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}




+(id)sharedInstance;
-(id)init;
-(void)_processActiveSuggestionsRequests;
-(void)activeSuggestionsWithReply:(id)arg0 ;
-(void)dealloc;
-(void)logNotificationDeliveryUI:(NSUInteger)arg0 notificationUUIDs:(id)arg1 ;
-(void)logNotificationEvent:(NSInteger)arg0 notification:(id)arg1 ;
-(void)logNotificationEvent:(NSInteger)arg0 notification:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)logNotificationGroupEvent:(NSInteger)arg0 eventIdentifier:(id)arg1 ;
-(void)logNotificationGroupEvent:(NSInteger)arg0 eventIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(void)logRealTimeTuningCountFrom:(NSUInteger)arg0 ;
-(void)logRealTimeTuningOutcome:(NSUInteger)arg0 withBundleId:(id)arg1 ;
-(void)logSuggestionEvent:(NSInteger)arg0 suggestionType:(NSInteger)arg1 suggestionIdentifier:(id)arg2 timestamp:(id)arg3 ;
-(void)promotingSuggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)quietingSuggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)suggestionForNotification:(id)arg0 reply:(id)arg1 ;


@end


#endif