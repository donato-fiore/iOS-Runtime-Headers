// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKCONVERSATIONCONTROLSMANAGER_H
#define CNKCONVERSATIONCONTROLSMANAGER_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "CNKForegroundApp.h"

@interface CNKConversationControlsManager : NSObject {
    ? call;
    ? initiallyActiveParticipantIdentifiers;
    ? conversationController;
    ? noticeCoordinator;
    ? activeNoticeCancellable;
    ? countdownController;
    ? systemConversationControlsDelegate;
    ? systemDetailsViewControllerDelegate;
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
    ? _foregroundApp;
    ? _ephemeralAlert;
    ? shouldShowDelayedLMIBanner;
    ? isWaitingOnFirstRemoteFrame;
    ? _appLaunchButtonType;
    ? screenShareCountdownTimer;
}


@property (nonatomic) NSUInteger applicationState; // ivar: applicationState
@property (nonatomic, readonly) NSUUID *callUUID;
@property (nonatomic, retain) CNKForegroundApp *foregroundApp;


-(id)init;
-(id)initWithActiveCall:(id)arg0 ;
-(void)dealloc;


@end


#endif