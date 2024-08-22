// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMUSICCATALOGRECOMMENDATIONSUPDATER_H
#define NMSMUSICCATALOGRECOMMENDATIONSUPDATER_H

@class NRPairedDeviceRegistry, NSBackgroundActivityScheduler;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NMSSubscriptionManager.h"

@interface NMSMusicCatalogRecommendationsUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    NMSSubscriptionManager *_subscriptionManager;
    NSBackgroundActivityScheduler *_updateScheduler;
    NSUInteger _retryAttempt;
}


@property (copy, nonatomic) id *updateHandlerBlock; // ivar: _updateHandlerBlock


+(CGFloat)_nextUpdateDelayAfterDate:(id)arg0 configuration:(struct ? )arg1 ;
+(CGFloat)_stalenessIntervalWithBag:(id)arg0 ;
+(struct ? )_configurationWithBag:(id)arg0 ;
+(void)_clearLastUpdatedDateIfNeeded;
-(BOOL)_needsInitialContentUpdate;
-(id)init;
-(void)_handlePairedDeviceRegistryDeviceDidPairNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg0 ;
-(void)_performNextUpdateWithScheduler:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performNextUpdateWithScheduler:(id)arg0 urlBag:(id)arg1 completionHandler:(id)arg2 ;
-(void)_scheduleNextUpdateIfNeeded;
-(void)_scheduleNextUpdateWithBag:(id)arg0 ;
-(void)beginAutomaticContentUpdating;
-(void)endAutomaticContentUpdating;


@end


#endif