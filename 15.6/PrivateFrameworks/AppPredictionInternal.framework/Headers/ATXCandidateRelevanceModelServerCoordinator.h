// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCANDIDATERELEVANCEMODELSERVERCOORDINATOR_H
#define ATXCANDIDATERELEVANCEMODELSERVERCOORDINATOR_H

@class ATXCoreDuetContextHelper, NSArray, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXTimeBucketedRateLimiter.h"

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}




+(id)sharedInstance;
+(id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)arg0 ;
-(id)callbackForAnchor:(SEL)arg0 ;
-(id)currentDuetEventForAnchor:(id)arg0 ;
-(id)exitNotificationIdentifierForAnchor:(id)arg0 ;
-(id)init;
-(id)initWithContextHelper:(id)arg0 configs:(id)arg1 defaults:(id)arg2 ;
-(id)lastCacheUpdateDateForConfig:(id)arg0 ;
-(id)notificationIdentifierForAnchor:(id)arg0 ;
-(id)supportedAnchorsForNotifications;
-(void)_syncForTests;
-(void)dealloc;
-(void)handleAnchorNotificationForAnchor:(id)arg0 ;
-(void)handleLOIEntranceNotification;
-(void)handleLOIExitNotification;
-(void)handleMicrolocationVisitNotification;
-(void)registerAnchorEventNotificationsForAnchor:(id)arg0 ;
-(void)registerForSupportedAnchorNotificatons;
-(void)sendSuggestionsToBlendingForConfig:(id)arg0 ;
-(void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(CGFloat)arg0 ;
-(void)sendSuggestionsToBlendingForEachConfigImmediately;
-(void)setCacheUpdateDate:(id)arg0 forConfig:(id)arg1 ;
-(void)start;
-(void)unregisterAnchorEventListenerForAnchor:(id)arg0 ;
-(void)unregisterAnchorEventListeners;


@end


#endif