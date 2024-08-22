// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVITYMANAGER_H
#define SBACTIVITYMANAGER_H

@class NSMapTable, NSHashTable, ACUISActivityAlertClient, ACActivityCenter, DMFApplicationPolicyMonitor, NSString, NSMutableDictionary, NSMutableSet;
@protocol ACUISActivityAlertClientDelegate, SBActivityBannerViewControllerDelegate, SBActivityObservable, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSoundController.h"

@interface SBActivityManager : NSObject <ACUISActivityAlertClientDelegate, SBActivityBannerViewControllerDelegate, SBActivityObservable>

 {
    NSMapTable *_bannerPresentableByActivityIdentifier;
    NSHashTable *_observers;
}


@property (retain, nonatomic) ACUISActivityAlertClient *activityAlertClient; // ivar: _activityAlertClient
@property (retain, nonatomic) NSObject<BSInvalidatable> *activityAlertSubscription; // ivar: _activityAlertSubscription
@property (retain, nonatomic) ACActivityCenter *activityCenter; // ivar: _activityCenter
@property (retain, nonatomic) NSObject<BSInvalidatable> *activitySubscription; // ivar: _activitySubscription
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor; // ivar: _applicationPolicyMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *itemByActivityIdentifier; // ivar: _itemByActivityIdentifier
@property (retain, nonatomic) NSMutableDictionary *itemsByBundleIdentifier; // ivar: _itemsByBundleIdentifier
@property (retain, nonatomic) NSMutableDictionary *prominenceAssertionByActivityIdentifier; // ivar: _prominenceAssertionByActivityIdentifier
@property (retain, nonatomic) NSMutableSet *prominentAlertPresentingActivities; // ivar: _prominentAlertPresentingActivities
@property (retain, nonatomic) SBSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_canPresentActivityAlertWithIdentifier:(id)arg0 ;
-(BOOL)_isHostApplicationForegroundWithIdentifier:(id)arg0 ;
-(BOOL)isActivitySupported;
-(id)_activityLifecyclePayloadWithContentUpdate:(id)arg0 ;
-(id)init;
-(void)_activityFinishedWithContentUpdate:(id)arg0 ;
-(void)_activityStartedWithContentUpdate:(id)arg0 ;
-(void)_addAppActivitiesRecordForBundleId:(id)arg0 item:(id)arg1 ;
-(void)_dismissActivityAlert:(id)arg0 ;
-(void)_dismissBannerWithActivityIdentifier:(id)arg0 ;
-(void)_handleActivityAlert:(id)arg0 payloadIdentifier:(id)arg1 present:(BOOL)arg2 ;
-(void)_handleActivityWithContentUpdate:(id)arg0 ;
-(void)_handleProminentActivityAlert:(id)arg0 prominent:(BOOL)arg1 ;
-(void)_listenForActivityProminenceWithIdentifier:(id)arg0 ;
-(void)_playSoundWithAlertOptions:(id)arg0 ;
-(void)_postBannerWithActivityIdentifier:(id)arg0 payloadIdentifier:(id)arg1 prominent:(BOOL)arg2 completion:(id)arg3 ;
-(void)_presentActivityAlert:(id)arg0 ;
-(void)_removeAllObservers;
-(void)_removeAppActivitiesRecordForBundleId:(id)arg0 item:(id)arg1 ;
-(void)_sendAnalyticsEventWithPayloadBuilder:(id)arg0 ;
-(void)_sendAnalyticsLifecycleEventIfNecessaryWithContentUpdate:(id)arg0 ;
-(void)_turnScreenOn:(BOOL)arg0 playSound:(BOOL)arg1 forAlert:(id)arg2 ;
-(void)_updateAllApplicationMonitoringPolicies;
-(void)_updateForScreenTimeLimitForBundleId:(id)arg0 policy:(id)arg1 ;
-(void)activityAlertClient:(id)arg0 dismissAlertProvider:(id)arg1 ;
-(void)activityAlertClient:(id)arg0 presentAlertProvider:(id)arg1 completion:(id)arg2 ;
-(void)activityBannerDidDisappear:(id)arg0 activityIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelObservingActivityUpdates;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)startObservingActivityUpdates;


@end


#endif