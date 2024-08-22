// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14COPRESENCECORE19UNRELIABLEMESSENGER_H
#define _TTC14COPRESENCECORE19UNRELIABLEMESSENGER_H

@class SwiftObject;



@interface _TtC14CopresenceCore19UnreliableMessenger : SwiftObject {
    ? name;
    ? config;
    ? localParticipantID;
    ? delegate;
    ? serviceProvider;
    ? queue;
    ? dataCryptorProvider;
    ? state;
    ? selfSeqNum;
    ? channelStreamAttempt;
    ? retainRefOnStart;
    ? retainRef;
    ? participantSeqNumsReceived;
    ? participantReceivedFromCounts;
    ? participantIngressDroppedCounts;
    ? intermediateEgressQueue;
    ? egressPublisher;
    ? channelStreamCancellable;
}






@end


#endif