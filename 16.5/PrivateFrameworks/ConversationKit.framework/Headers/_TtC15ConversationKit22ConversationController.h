// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT22CONVERSATIONCONTROLLER_H
#define _TTC15CONVERSATIONKIT22CONVERSATIONCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC15ConversationKit22ConversationController : NSObject {
    ? localParticipant;
    ? remoteParticipants;
    ? otherInvitedParticipants;
    ? includeLocalParticipantInVisibleParticipants;
    ? carPlayDisconnectRequiresLocalVideoEnable;
    ? screenSharingEndingRequiresLocalVideoEnable;
    ? showingInMiniWindowRequiresLocalVideoEnable;
    ? audioFrequencyController;
    ? audioCallbackQueue;
    ? didReceiveLatestRemoteAttributes;
    ? latestRemoteAttributes;
    ? $__lazy_storage_$_momentsController;
    ? lastRegisteredMomentsProvider;
    ? blockedCallerLookupQueue;
    ? recentPresentationContexts;
    ? pauseOnFirstFrame;
    ? keepsPreviewActive;
    ? hasPendingStopTransmit;
    ? scheduledVideoInfoResetDates;
    ? conversationState;
    ? conversationLetMeInRequestState;
    ? ignoreLetMeInRequests;
    ? rejectedParticipantsCount;
    ? deviceOrientation;
    ? _captionsRecognizerShouldBeRunning;
    ? isOneToOneCallCenterUpdateWaitingForNonSquareVideo;
    ? isOneToOneModeEnabledByCallCenter;
    ? isOneToOneModeDisabledByActivity;
    ? broadcastingState;
    ? didAddVisibleParticipant;
    ? didRemoveVisibleParticipant;
    ? didRemoveAllVisibleParticipants;
    ? didFinishMigratingConversations;
    ? didUpdateVisibleParticipant;
    ? visibleParticipantDidBecomeActive;
    ? visibleParticipantDidBecomeInactive;
    ? visibleParticipantKickableStatusDidChange;
    ? didStartVideoForVisibleParticipant;
    ? didUpdateVisibleParticipantScreenInfo;
    ? participantsMediaPrioritiesDidChange;
    ? participantAudioPowerDidChange;
    ? mutedTalkerDidChange;
    ? audioRouteDidChange;
    ? cameraBlurEnabledDidChange;
    ? cameraZoomAvailabiltyDidChange;
    ? localCameraUIDDidChange;
    ? cameraListDidChange;
    ? cameraCinematicFramingAvailabilityDidChange;
    ? cameraCinematicFramingEnabledDidChange;
    ? carPlayConnectedDidChange;
    ? oneToOneModeDidChange;
    ? isTrackingActiveConversationDidChange;
    ? avModeDidChange;
    ? resolvedAudioVideoModeDidChange;
    ? isWaitingOnFirstRemoteFrameDidChange;
    ? activitiesDidChange;
    ? collaborationNoticePosted;
    ? audioEnabledDidChange;
    ? audioPausedDidChange;
    ? videoEnabledDidChange;
    ? bluetoothAudioFormatChanged;
    ? didUpdateLocalParticipant;
    ? didUpdateLocalMemberAuthorizedToChangeGroupMembership;
    ? didUpdateLocalParticipantCameraPosition;
    ? didUpdateRecordingLocalVideo;
    ? didFinishWindowResize;
    ? didUpdateLocalScreenSharing;
    ? didUpdateHasRingingCalls;
    ? didUpdateWantsHoldMusic;
    ? didStartVideoForLocalParticipant;
    ? conversationStateDidChange;
    ? conversationLetMeInRequestStateDidChange;
    ? conversationIgnoreLetMeInRequestsDidChange;
    ? conversationRejectedParticipantsCountDidChange;
    ? didAddPendingParticipant;
    ? didRemovePendingParticipant;
    ? didApprovePendingParticipant;
    ? didUpdateParticipantAVMode;
    ? didInviteOtherParticipants;
    ? blockedParticipantsAdded;
    ? cameraPositionDidChange;
    ? groupNameAndPhotoDidChange;
    ? sessionActionNoticePosted;
    ? appLaunchStateChanged;
    ? willTakeMoment;
    ? shouldPauseOnFirstLocalVideoFrame;
    ? conversationLinkDidChange;
    ? didFailToStartCamera;
    ? callStatusDidChange;
    ? pttCallStatusDidChange;
    ? localParticipantRequestedVideoUpgrade;
    ? blocklistCheckedHandles;
    ? didUpdateCaptions;
    ? didToggleCaptions;
    ? userDidToggleAXLiveCaptionsPref;
    ? needsUserConfirmationForBlockedCaller;
    ? enableVideoOnJoin;
    ? expectingNewLocalCameraPositionFirstFrame;
    ? participantMediaProviderCreator;
    ? participantCaptionsProviderCreator;
    ? captionsAxSettingNotifyToken;
    ? callCenter;
    ? call;
    ? blockedCallerChecker;
    ? mode;
    ? defaults;
    ? conversationUUID;
    ? callWaitingUUIDs;
    ? callUUIDsAwaitingFirstRemoteVideoFrame;
    ? callUUIDsAwaitingFirstRemoteVideoFrameTasks;
    ? callUUIDResolvingCroppedAspectRatio;
    ? localVideoRecordingTransactionID;
    ? screenSharingSession;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(void)dealloc;


@end


#endif