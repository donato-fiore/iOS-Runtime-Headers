// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNOTIFICATIONCARPLAYDESTINATION_H
#define SBNOTIFICATIONCARPLAYDESTINATION_H

@class BNBannerHostMonitorListener, NSHashTable, CRCarPlayAppPolicyEvaluator, NSMutableDictionary, NSMutableArray, NCNotificationRequest, AFUserNotificationAnnouncementSpeakingStateObserver, BSAbsoluteMachTimer, NCCarPlayBannerSource, NSString, BSServiceConnectionEndpoint;
@protocol BNBannerHostMonitorListenerObserving, BNPresentableObserving, NCCarPlayBannerPresentableViewControllerDelegate, AFUserNotificationAnnouncementSpeakingStateDelegate, NCNotificationAlertDestination, BNPresentable, NCNotificationAlertDestinationDelegate;

#import <Foundation/Foundation.h>

#import "SBNCAlertingController.h"

@interface SBNotificationCarPlayDestination : NSObject <BNBannerHostMonitorListenerObserving, BNPresentableObserving, NCCarPlayBannerPresentableViewControllerDelegate, AFUserNotificationAnnouncementSpeakingStateDelegate, NCNotificationAlertDestination>

 {
    BNBannerHostMonitorListener *_bannerHostMonitorListener;
    NSHashTable *_presentables;
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;
    NSMutableDictionary *_appPolicyForBundleID;
    id<BNPresentable> *_presentablePresentingAlertController;
    NSMutableArray *_notificationRequestsForAnnounce;
    NSMutableArray *_notificationRequestsPendingAnnounce;
    NSMutableArray *_notificationRequestsPendingAVSession;
    NCNotificationRequest *_notificationRequestPendingDeactivation;
    AFUserNotificationAnnouncementSpeakingStateObserver *_announcementStateObserver;
    NSMutableDictionary *_announceRequestsForNotificationRequests;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isAlertDestination) BOOL alertDestination;
@property (weak, nonatomic) SBNCAlertingController *alertingController; // ivar: _alertingController
@property (retain, nonatomic, getter=_announceTimeoutTimer, setter=_setAnnounceTimeoutTimer:) BSAbsoluteMachTimer *announceTimeoutTimer; // ivar: _announceTimeoutTimer
@property (readonly, nonatomic, getter=_carPlayBannerSource) NCCarPlayBannerSource *carPlayBannerSource; // ivar: _carPlayBannerSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationAlertDestinationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic, getter=_notificationRequestCurrentlyAnnouncing, setter=_setNotificationRequestCurrentlyAnnouncing:) NCNotificationRequest *notificationRequestCurrentlyAnnouncing; // ivar: _notificationRequestCurrentlyAnnouncing
@property (readonly) Class superclass;


-(BOOL)_inCallOrFaceTime;
-(BOOL)_isCurrentlyAnnouncing;
-(BOOL)_notificationRequestShouldShowModalSubActions:(id)arg0 ;
-(BOOL)_notificationRequestSupportsSubActions:(id)arg0 ;
-(BOOL)_setSuspended:(BOOL)arg0 forPresentingAlertControllerForPresentable:(id)arg1 ;
-(BOOL)_shouldAnnounceNotificationForActiveAVSession:(id)arg0 ;
-(BOOL)_shouldAnnounceNotificationRequest:(id)arg0 ;
-(BOOL)_shouldDeferPostingNotificationRequestForAnnounce:(id)arg0 ;
-(BOOL)canReceiveNotificationRequest:(id)arg0 ;
-(BOOL)presentableViewControllerClosesByDefault:(id)arg0 ;
-(NSInteger)_announceDeactivationReasonForBannerRevocationReason:(id)arg0 ;
-(NSInteger)_defaultActionTypeForNotificationRequest:(id)arg0 ;
-(NSInteger)_effectiveDefaultActionTypeForNotificationRequest:(id)arg0 ;
-(id)_actionForNotificationRequest:(SEL)arg0 ;
-(id)_allNotificationActionsForNotificationRequest:(id)arg0 ;
-(id)_announcementStateObserver;
-(id)_appPolicyEvaluator;
-(id)_bulletinForNotificationRequest:(id)arg0 ;
-(id)_closeNotificationActionForNotificationRequest:(id)arg0 ;
-(id)_ignoreActionForNotificationRequest:(SEL)arg0 ;
-(id)_newPresentableForNotificationRequest:(id)arg0 layoutDescription:(id)arg1 ;
-(id)_notificationRequestForAnnounceWithIdentifier:(id)arg0 ;
-(id)_policyForApp:(id)arg0 ;
-(id)_presentablesWithRequestIdentifier:(id)arg0 ;
-(id)_removePresentable:(id)arg0 ;
-(id)_subActionLabelsForNotificationRequest:(id)arg0 ;
-(id)_subActionsForNotificationRequest:(id)arg0 ;
-(id)_supplementaryActionsForNotificationRequest:(id)arg0 ;
-(id)init;
-(id)keyWindowForScreen:(id)arg0 ;
-(void)_addPresentable:(id)arg0 ;
-(void)_callOrFaceTimeStateChanged;
-(void)_cancelAnnounceForNotificationRequest:(id)arg0 withReason:(NSInteger)arg1 deactivateAnnounce:(BOOL)arg2 ;
-(void)_clearNotificationRequestPendingAnnounceDeactivationIfNecessary;
-(void)_flushAnnounceNotificationRequestsShouldAnnounce:(BOOL)arg0 ;
-(void)_flushNotificationRequestsPendingAnnounce;
-(void)_invalidateAnnounceTimeoutTimer;
-(void)_modifyNotificationRequest:(id)arg0 inStore:(id)arg1 ;
-(void)_postNotificationRequest:(id)arg0 shouldAnnounce:(BOOL)arg1 ;
-(void)_queueNotificationRequestWhileAnnouncing:(id)arg0 ;
-(void)_requestAnnounceForNotificationRequest:(id)arg0 ;
-(void)_startAnnounceTimeoutTimer;
-(void)_voicePromptStyleChanged:(id)arg0 ;
-(void)_withdrawNotificationRequest:(id)arg0 inStore:(id)arg1 ;
-(void)bannerHostDidBecomeAvailableForMonitorListener:(id)arg0 ;
-(void)bannerHostDidBecomeUnavailableForMonitorListener:(id)arg0 ;
-(void)dealloc;
-(void)didCancelBannerOfPresentableViewController:(id)arg0 reason:(id)arg1 ;
-(void)didSelectBannerOfPresentableViewController:(id)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationAnnouncementObserver:(id)arg0 announcementSpeakingStateDidUpdate:(NSInteger)arg1 forNotificationRequestIdentifiers:(id)arg2 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif