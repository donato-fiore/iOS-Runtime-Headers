// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDELEGATINGPLAYBACKCOORDINATOR_H
#define AVDELEGATINGPLAYBACKCOORDINATOR_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, AVPlaybackCoordinatorPlaybackControlDelegate, AVPlaybackCoordinationMediumDelegate;


#import "AVPlaybackCoordinator.h"

@interface AVDelegatingPlaybackCoordinator : AVPlaybackCoordinator {
    *OpaqueFigTimelineCoordinator _figTimelineCoordinator;
    NSObject<OS_dispatch_queue> *_timelineControlQueue;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSObject<OS_dispatch_queue> *_figTimelineCoordinatorConfigQueue;
    id<AVPlaybackCoordinatorPlaybackControlDelegate> *_delegate;
    id *_suspensionsChangedNotificationToken;
    id *_participantsChangedNotificationToken;
    id *_didIssueCommandToPlaybackObjectNotificationToken;
    NSMutableArray *_suspensionReasons;
    NSMutableArray *_otherParticipants;
    NSMutableDictionary *_controlStates;
    NSMutableDictionary *_participantStates;
    NSMutableDictionary *_participantLimitPerSuspensionReason;
    NSMutableArray *_suspensionReasonsThatTriggerWaiting;
    NSMutableArray *_waitingPoliciesArray;
    BOOL _pauseSnapsToMediaTimeOfOriginator;
    NSInteger _latestRateCommandOrderIndex;
    NSInteger _latestSeekCommandOrderIndex;
    NSString *_currentItemIdentifier;
    id<AVPlaybackCoordinationMediumDelegate> *_coordinationMediumDelegate;
    BOOL _isInExpanseMediaPlayback;
    NSString *_mediumLoggingIdentifier;
}


@property (readonly, nonatomic) NSString *currentItemIdentifier;
@property (readonly, weak, nonatomic) NSObject<AVPlaybackCoordinatorPlaybackControlDelegate> *playbackControlDelegate;


-(BOOL)_doesSuspensionReasonTriggerWaiting:(id)arg0 ;
-(BOOL)pauseSnapsToMediaTimeOfOriginator;
-(NSInteger)_latestRateCommandOrderIndex;
-(NSInteger)_latestSeekCommandOrderIndex;
-(NSInteger)participantLimitForWaitingOutSuspensionsWithReason:(id)arg0 ;
-(id)_currentWaitingPoliciesArray;
-(id)_participantStateForIdentifier:(id)arg0 ;
-(id)_transportControlStateForItemIdentifier:(id)arg0 ;
-(id)_updateWaitingPoliciesArrayWithPolicies:(id)arg0 ;
-(id)_waitingPoliciesArray;
-(id)avfParticipantsForFigParticipantsUUIDs:(id)arg0 ;
-(id)beginSuspensionForReason:(id)arg0 ;
-(id)coordinationMediumDelegate;
-(id)figTimelineCoordinatorConfigQueue;
-(id)initWithPlaybackControlDelegate:(id)arg0 ;
-(id)mediumLoggingIdentifier;
-(id)otherParticipants;
-(id)participantForIdentifier:(id)arg0 ;
-(id)participantStates;
-(id)suspensionReasons;
-(id)suspensionReasonsThatTriggerWaiting;
-(id)trackedTransportControlStateDictionaries;
-(struct ? )expectedItemTimeAtHostTime:(struct ? )arg0 ;
-(void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg0 ;
-(void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg0 proposingNewTime:(struct ? )arg1 ;
-(void)_prepareToInitiatePlayback;
-(void)_removeAllParticipantStates;
-(void)_removeAllTransportControlStates;
-(void)_removeParticipantStateWithIdentifier:(id)arg0 ;
-(void)_removeUnusedTransportControlStates;
-(void)_replaceParticipantStates:(id)arg0 ;
-(void)_setIsInExpanseMediaPlaybackOnAVAudioSession;
-(void)_setWaitingPolicies:(id)arg0 ;
-(void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)arg0 ;
-(void)_updateParticipantStateDictionaryWithParticipantState:(id)arg0 ;
-(void)_updateSuspensionReasons:(id)arg0 ;
-(void)_updateTransportControlStateDictionaryWithTransportControlState:(id)arg0 ;
-(void)applyFigPauseSnapsToMediaTimeOfOriginator;
-(void)coordinateRateChangeToRate:(float)arg0 options:(NSUInteger)arg1 ;
-(void)coordinateSeekToTime:(struct ? )arg0 options:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)handleNewParticipantStateDictionary:(id)arg0 ;
-(void)handleNewTransportControlStateDictionary:(id)arg0 ;
-(void)handleRemovalOfParticipant:(id)arg0 ;
-(void)handleReplacementParticipantStateDictionaries:(id)arg0 ;
-(void)reapplyCurrentItemStateToPlaybackControlDelegate;
-(void)setCoordinationMediumDelegate:(id)arg0 ;
-(void)setMediumLoggingIdentifier:(id)arg0 ;
-(void)setParticipantLimit:(NSInteger)arg0 forWaitingOutSuspensionsWithReason:(id)arg1 ;
-(void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)arg0 ;
-(void)setSuspensionReasonsThatTriggerWaiting:(id)arg0 ;
-(void)transitionToItemWithIdentifier:(id)arg0 proposingInitialTimingBasedOnTimebase:(struct OpaqueCMTimebase *)arg1 ;


@end


#endif