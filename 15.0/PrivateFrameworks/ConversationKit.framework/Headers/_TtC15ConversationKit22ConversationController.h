// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    ? audioFrequencyController;
    ? audioCallbackQueue;
    ? didReceiveLatestRemoteAttributes;
    ? latestRemoteAttributes;
    ? $__lazy_storage_$_momentsController;
    ? lastRegisteredMomentsProvider;
    ? blockedCallerLookupQueue;
    ? recentPresentationContexts;
    ? pauseOnFirstFrame;
    ? scheduledIsChangingMirroredVideoResetDates;
    ? conversationState;
    ? conversationLetMeInRequestState;
    ? ignoreLetMeInRequests;
    ? rejectedParticipantsCount;
    ? deviceOrientation;
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
    ? cameraCinematicFramingAvailabilityDidChange;
    ? cameraCinematicFramingEnabledDidChange;
    ? carPlayConnectedDidChange;
    ? oneToOneModeDidChange;
    ? isTrackingActiveConversationDidChange;
    ? isWaitingOnFirstRemoteFrameDidChange;
    ? activitySessionsDidChange;
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
    ? blocklistCheckedHandles;
    ? needsUserConfirmationForBlockedCaller;
    ? enableVideoOnJoin;
    ? expectingNewLocalCameraPositionFirstFrame;
    ? participantMediaProviderCreator;
    ? callCenter;
    ? call;
    ? blockedCallerChecker;
    ? mode;
    ? conversationUUID;
    ? callWaitingUUIDs;
    ? callUUIDsToReceivedFirstRemoteVideoFrame;
    ? localVideoRecordingTransactionID;
    ? screenSharingSession;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(void)dealloc;


@end


#endif