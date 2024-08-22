// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERPLAYBACKCOORDINATOR_H
#define AVPLAYERPLAYBACKCOORDINATOR_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, AVPlayerPlaybackCoordinatorDelegate, AVPlaybackCoordinationMediumDelegate;


#import "AVPlaybackCoordinator.h"
#import "AVPlayer.h"

@interface AVPlayerPlaybackCoordinator : AVPlaybackCoordinator {
    AVPlayer *_weakPlayer;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSObject<OS_dispatch_queue> *_figPlaybackCoordinatorConfigQueue;
    *OpaqueFigPlaybackCoordinator _figPlaybackCoordinator;
    NSMutableArray *_suspensionReasons;
    NSMutableArray *_otherParticipants;
    NSMutableDictionary *_controlStates;
    NSMutableDictionary *_participantStates;
    NSMutableDictionary *_participantLimitPerSuspensionReason;
    NSMutableArray *_suspensionReasonsThatTriggerWaiting;
    BOOL _pauseSnapsToMediaTimeOfOriginator;
    NSMutableArray *_waitingPoliciesArray;
    NSMutableArray *_currentSuspensions;
    id *_suspensionsChangedNotificationToken;
    id *_participantsChangedNotificationToken;
    id *_didIssueCommandToPlaybackObjectNotificationToken;
    id<AVPlayerPlaybackCoordinatorDelegate> *_delegate;
    id<AVPlaybackCoordinationMediumDelegate> *_coordinationMediumDelegate;
    BOOL _isInExpanseMediaPlayback;
    NSString *_mediumLoggingIdentifier;
}


@property (weak) NSObject<AVPlayerPlaybackCoordinatorDelegate> *delegate;
@property (readonly, weak, nonatomic) AVPlayer *player;


-(BOOL)_doesSuspensionReasonTriggerWaiting:(id)arg0 ;
-(BOOL)pauseSnapsToMediaTimeOfOriginator;
-(NSInteger)participantLimitForWaitingOutSuspensionsWithReason:(id)arg0 ;
-(id)_currentWaitingPoliciesArray;
-(id)_participantStateForIdentifier:(id)arg0 ;
-(id)_transportControlStateForItemIdentifier:(id)arg0 ;
-(id)_updateWaitingPoliciesArrayWithPolicies:(id)arg0 ;
-(id)avfParticipantsForFigParticipantsUUIDs:(id)arg0 ;
-(id)beginSuspensionForReason:(id)arg0 ;
-(id)coordinationMediumDelegate;
-(id)currentSuspensions;
-(id)figPlaybackCoordinatorConfigQueue;
-(id)identifierForPlayerItem:(id)arg0 ;
-(id)initWithPlayer:(id)arg0 ;
-(id)interstitialTimeRangesForPlayerItem:(id)arg0 ;
-(id)mediumLoggingIdentifier;
-(id)otherParticipants;
-(id)participantForIdentifier:(id)arg0 ;
-(id)participantStates;
-(id)suspensionReasons;
-(id)suspensionReasonsThatTriggerWaiting;
-(id)trackedTransportControlStateDictionaries;
-(struct ? )expectedItemTimeAtHostTime:(struct ? )arg0 ;
-(struct OpaqueFigPlaybackCoordinator *)_copyFigPlaybackCoordinator;
-(void)_addFigPlaybackCoordinatorListeners:(struct OpaqueFigPlaybackCoordinator *)arg0 ;
-(void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg0 ;
-(void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg0 proposingNewTime:(struct ? )arg1 ;
-(void)_removeAllParticipantStates;
-(void)_removeAllTransportControlStates;
-(void)_removeFigPlaybackCoordinatorListeners;
-(void)_removeParticipantStateWithIdentifier:(id)arg0 ;
-(void)_removeUnusedTransportControlStates;
-(void)_replaceParticipantStates:(id)arg0 ;
-(void)_setIsInExpanseMediaPlaybackOnAVAudioSession;
-(void)_setLocalParticipantUUID:(id)arg0 onFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg1 ;
-(void)_setMediumCallbacksOnFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg0 ;
-(void)_setWaitingPolicies:(id)arg0 onFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg1 ;
-(void)_synchronizeFigPlayerEvents;
-(void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)arg0 ;
-(void)_updateParticipantStateDictionaryWithParticipantState:(id)arg0 ;
-(void)_updateSuspensionReasons:(id)arg0 ;
-(void)_updateTransportControlStateDictionaryWithTransportControlState:(id)arg0 ;
-(void)dealloc;
-(void)handleNewParticipantStateDictionary:(id)arg0 ;
-(void)handleNewTransportControlStateDictionary:(id)arg0 ;
-(void)handleRemovalOfParticipant:(id)arg0 ;
-(void)handleReplacementParticipantStateDictionaries:(id)arg0 ;
-(void)setCoordinationMediumDelegate:(id)arg0 ;
-(void)setFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg0 ;
-(void)setMediumLoggingIdentifier:(id)arg0 ;
-(void)setParticipantLimit:(NSInteger)arg0 forWaitingOutSuspensionsWithReason:(id)arg1 ;
-(void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)arg0 ;
-(void)setSuspensionReasonsThatTriggerWaiting:(id)arg0 ;


@end


#endif