// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKCONVERSATIONCONTROLSMANAGER_H
#define CNKCONVERSATIONCONTROLSMANAGER_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "CNKForegroundApp.h"

@interface CNKConversationControlsManager : NSObject {
    ? initiallyActiveParticipantIdentifiers;
    ? conversationController;
    ? noticeCoordinator;
    ? activeNoticeCancellable;
    ? countdownController;
    ? contentExtractor;
    ? defaults;
    ? features;
    ? systemConversationControlsDelegate;
    ? inCallConversationControlsDelegate;
    ? inCallDetailsViewControllerDelegate;
    ? audioRoutingDelegate;
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
    ? _foregroundApp;
    ? _ephemeralAlert;
    ? shouldShowDelayedLMIBanner;
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
@property (nonatomic) BOOL shouldShowCallDetailsWhenReady; // ivar: shouldShowCallDetailsWhenReady


-(id)init;
-(id)initWithActiveCall:(id)arg0 ;
-(void)dealloc;


@end


#endif