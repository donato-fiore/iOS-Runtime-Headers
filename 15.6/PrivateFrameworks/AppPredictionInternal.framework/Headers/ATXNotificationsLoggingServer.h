// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONSLOGGINGSERVER_H
#define ATXNOTIFICATIONSLOGGINGSERVER_H

@class NSMutableSet, NSXPCListener, NSString;
@protocol ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate, _CDLocalContext, _DKKnowledgeSaving><_DKKnowledgeDeleting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXNotificationsRecorderPermanentStore.h"
#import "_ATXAggregateLogger.h"
#import "ATXNotificationContextManager.h"
#import "ATXBBNotificationManager.h"
#import "ATXNotificationsDedupeTracker.h"
#import "ATXModeAppUsageManager.h"
#import "ATXNotificationDeliverySuggestionManager.h"

@interface ATXNotificationsLoggingServer : NSObject <ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate>

 {
    ATXNotificationsRecorderPermanentStore *_recorder;
    _ATXAggregateLogger *_aggdlogger;
    ATXNotificationContextManager *_contextmanager;
    ATXBBNotificationManager *_bbNotificationManager;
    NSMutableSet *_registrations;
    id<_CDLocalContext> *_context;
    ATXNotificationsDedupeTracker *_dedupetracker;
    id<_DKKnowledgeSaving><_DKKnowledgeDeleting> *_duetstorer;
    NSXPCListener *_listener;
    ATXModeAppUsageManager *_modeAppUsageManager;
    ATXNotificationDeliverySuggestionManager *_notificationDeliverySuggestionManager;
    NSObject<OS_dispatch_queue> *_donationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_createPortraitNotificationWithNotificationInterface:(id)arg0 ;
-(id)createMetadataForSuggestion:(id)arg0 andType:(NSInteger)arg1 ;
-(id)duetValueType;
-(id)getDuetMetadataFromNotification:(id)arg0 metadata:(id)arg1 ;
-(id)getDuetStream;
-(id)getLockscreenBundleIds;
-(id)getSuggestionResponses;
-(id)init;
-(void)_donateNotificationToPortraitWithNotificationsInterface:(id)arg0 ;
-(void)activeSuggestionsWithReply:(id)arg0 ;
-(void)getAppUsageDataFromStartDate:(id)arg0 reply:(id)arg1 ;
-(void)logAppLaunchEvent:(id)arg0 timestamp:(id)arg1 ;
-(void)logEvent:(NSInteger)arg0 forNotificationId:(id)arg1 supplementaryAction:(id)arg2 timestamp:(id)arg3 ;
-(void)logEvent:(NSInteger)arg0 forNotificationId:(id)arg1 timestamp:(id)arg2 withReply:(id)arg3 ;
-(void)logEventToCoreDuet:(NSInteger)arg0 forNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(void)logNotification:(id)arg0 withNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(void)logNotificationDeliveryUI:(NSUInteger)arg0 notificationUUIDs:(id)arg1 ;
-(void)logNotificationEvent:(NSInteger)arg0 notification:(id)arg1 ;
-(void)logNotificationEvent:(NSInteger)arg0 notification:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)logNotificationGroupEvent:(NSInteger)arg0 eventIdentifier:(id)arg1 ;
-(void)logNotificationGroupEvent:(NSInteger)arg0 eventIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(void)logNotificationToCoreDuet:(id)arg0 withNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(void)logNotificationWithMetadata:(id)arg0 withNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(void)logRealTimeTuningOutcome:(NSUInteger)arg0 withBundleId:(id)arg1 ;
-(void)logSuggestionDeduped:(id)arg0 timestamp:(id)arg1 ;
-(void)logSuggestionEvent:(*NSInteger)arg0 forSuggestion:(id)arg1 ;
-(void)logSuggestionEvent:(NSInteger)arg0 suggestionType:(NSInteger)arg1 suggestionIdentifier:(id)arg2 timestamp:(id)arg3 ;
-(void)logSuggestionShown:(id)arg0 forType:(NSInteger)arg1 timestamp:(id)arg2 ;
-(void)logTapCoalesceForNotificationId:(id)arg0 andBundleId:(id)arg1 timestamp:(id)arg2 ;
-(void)logToCoreDuet:(id)arg0 identifier:(id)arg1 timestamp:(id)arg2 ;
-(void)promotingSuggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)quietingSuggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)registerForAppChange;
-(void)resetNotificationsHistory;
-(void)resetSuggestionResponses;
-(void)shouldMakePromotingSuggestionForBundleId:(id)arg0 withReply:(id)arg1 ;
-(void)shouldMakeQuietingSuggestionForBundleId:(id)arg0 withReply:(id)arg1 ;
-(void)submitGrading:(id)arg0 rating:(id)arg1 category:(id)arg2 userId:(id)arg3 ;
-(void)suggestionForNotification:(id)arg0 reply:(id)arg1 ;
-(void)triggerReplay:(id)arg0 ;


@end


#endif