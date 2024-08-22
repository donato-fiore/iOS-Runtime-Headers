// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKCONVERSATIONCONTROLSMANAGER_H
#define CNKCONVERSATIONCONTROLSMANAGER_H

@class NSUUID;
@protocol CNKLocalAudioTogglingDelegate;

#import <Foundation/Foundation.h>

#import "CNKForegroundApp.h"

@interface CNKConversationControlsManager : NSObject {
    ? initiallyActiveParticipantIdentifiers;
    ? conversationController;
    ? noticeCoordinator;
    ? activeNoticeCancellable;
    ? countdownController;
    ? contentExtractor;
    ? isOnScreenSubscription;
    ? defaults;
    ? features;
    ? activeShareCardHandle;
    ? systemConversationControlsDelegate;
    ? inCallConversationControlsDelegate;
    ? inCallDetailsViewControllerDelegate;
    ? audioRoutingDelegate;
    ? handoffCompletedDelegate;
    ? approvalDelegate;
    ? _shouldOpenMessages;
    ? _shouldEnableStartingStagedActivity;
    ? _audioRoute;
    ? _bluetoothAudioFormat;
    ? _localAudioEnabled;
    ? _localVideoButtonState;
    ? _shareMenuButtonState;
    ? _pttChannelState;
    ? _pttChannelTransmissionMode;
    ? $__lazy_storage_$_pttViewModel;
    ? $__lazy_storage_$_pttCallUpdateSubject;
    ? incomingTransmissionReceivedSubject;
    ? pttCallStatusUpdateCancellable;
    ? pttCallIncomingTransmissionReceivedCancellable;
    ? confirmLeavePTTChannelAlert;
    ? _foregroundApp;
    ? foregroundCollaborationState;
    ? collaborationInitiationManager;
    ? _ephemeralAlert;
    ? shouldShowDelayedLMIBanner;
    ? entitlementsChecker;
    ? isWaitingOnFirstRemoteFrame;
    ? shouldShowAVLessLeaveConfirmation;
    ? avLessLeaveConfirmationPresentedDate;
    ? activityLaunchTimer;
    ? _appLaunchButtonType;
    ? screenShareCountdownTimer;
}


@property (nonatomic) NSUInteger applicationState; // ivar: applicationState
@property (nonatomic, readonly) NSUUID *callUUID;
@property (nonatomic, readonly) BOOL conversationIsAVLess;
@property (nonatomic, retain) CNKForegroundApp *foregroundApp;
@property (nonatomic, readonly) BOOL isConfirmLeavePTTChannelAlertPresented;
@property (nonatomic, weak) NSObject<CNKLocalAudioTogglingDelegate> *localAudioTogglingDelegate; // ivar: localAudioTogglingDelegate
@property (nonatomic) BOOL shouldShowCallDetailsWhenReady; // ivar: shouldShowCallDetailsWhenReady


-(id)init;
-(id)initWithActiveCall:(id)arg0 ;
-(void)dealloc;
-(void)refreshShareableContentWithBundleIdentifier:(id)arg0 ;


@end


#endif