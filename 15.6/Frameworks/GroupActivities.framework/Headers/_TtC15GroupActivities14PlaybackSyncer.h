// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15GROUPACTIVITIES14PLAYBACKSYNCER_H
#define _TTC15GROUPACTIVITIES14PLAYBACKSYNCER_H

@class SwiftObject;



@interface _TtC15GroupActivities14PlaybackSyncer : SwiftObject {
    ? localParticipantState;
    ? transportControlStates;
    ? messageEncoder;
    ? messageDecoder;
    ? cancellables;
    ? reloadCompletion;
    ? hasReceivedTransportState;
    ? transportStateTakeoverWorkItem;
    ? waitingForCatchupResponseFromParticipants;
    ? queue;
    ? avMediumDelegate;
    ? coordinator;
    ? link;
    ? syncerDelegate;
    ? defaultTransportStateTakeoverInterval;
    ? initiatorTransportStateTakeoverInterval;
}






@end


#endif