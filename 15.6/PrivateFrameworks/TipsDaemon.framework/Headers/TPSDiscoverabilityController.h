// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSDISCOVERABILITYCONTROLLER_H
#define TPSDISCOVERABILITYCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, TPSEventsProviderManager, NSDictionary, NSString, TPSTipStatusController;
@protocol TPSDEventsProviderManagerDelegate, OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSEventsHistoryController.h"

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate>

 {
    NSInteger _overrideHintMaxDisplayedCount;
    NSMutableDictionary *_contextualInfoMap;
    NSMutableSet *_registeredEventIdentifiers;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
    NSObject<OS_dispatch_queue> *_eventResultsProcessingQueue;
}


@property (readonly, nonatomic) NSDictionary *contextualInfoMap;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSDiscoverabilityControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController; // ivar: _tipStatusController


+(void)removeContextualInfoCache;
-(BOOL)_isConditionMet:(id)arg0 hasUpdates:(*BOOL)arg1 forIdentifier:(id)arg2 ;
-(BOOL)_updateTriggerConditionForObserverIdentifers:(id)arg0 ;
-(BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)arg0 ;
-(BOOL)isContextualInfoExistForIdentifier:(id)arg0 ;
-(BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)arg0 ;
-(NSInteger)customizationIDForContentID:(id)arg0 ;
-(id)_matchingIdentifiersForConditionWithType:(NSUInteger)arg0 forObserverIdentifiers:(id)arg1 hasUpdates:(*BOOL)arg2 ;
-(id)contextualInfoForIdentifier:(id)arg0 ;
-(id)discoverabilityTipWithMetadata:(id)arg0 contentDictionary:(id)arg1 preconditions:(id)arg2 ;
-(id)init;
-(id)initWithTipStatusController:(id)arg0 ;
-(id)monitoringEventsForContentID:(id)arg0 ;
-(void)_cleanupContextualInfoMap;
-(void)_reconcileRegisteredEvents;
-(void)_registerWakingCallbackForContextualInfo:(id)arg0 ;
-(void)_removeCacheData;
-(void)_updateCacheData;
-(void)_updateContextualInfoMapCache;
-(void)_updateRegisteredEventIdentifiers;
-(void)addHintDisplayedForIdentifier:(id)arg0 context:(id)arg1 ;
-(void)contextualEligibilityWithTipIdentifiers:(id)arg0 tipsDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 experimentCampChangesToAll:(BOOL)arg3 ;
-(void)dataProviderManager:(id)arg0 didFinishQueryWithResults:(id)arg1 type:(NSInteger)arg2 ;
-(void)dataProviderManager:(id)arg0 didReceiveCallbackWithResult:(id)arg1 type:(NSInteger)arg2 ;
-(void)markHintIneligibleForIdentifiers:(id)arg0 bundleID:(id)arg1 context:(id)arg2 reason:(NSInteger)arg3 ;
-(void)markHintIneligibleForIdentifiers:(id)arg0 context:(id)arg1 reason:(NSInteger)arg2 ;
-(void)processEventProviderQueryResults:(id)arg0 type:(NSInteger)arg1 ;
-(void)queryCurrentEvents;
-(void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg0 ;
-(void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg0 updateCache:(BOOL)arg1 ;
-(void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)arg0 ;
-(void)updateContentViewedForIdentifier:(id)arg0 ;
-(void)updateHintDismissedForIdentifier:(id)arg0 dismissType:(id)arg1 context:(id)arg2 ;
-(void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)arg0 context:(id)arg1 ;


@end


#endif