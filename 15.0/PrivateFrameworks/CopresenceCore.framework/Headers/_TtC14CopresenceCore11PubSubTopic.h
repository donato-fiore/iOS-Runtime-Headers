// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14COPRESENCECORE11PUBSUBTOPIC_H
#define _TTC14COPRESENCECORE11PUBSUBTOPIC_H

@class SwiftObject;



@interface _TtC14CopresenceCore11PubSubTopic : SwiftObject {
    ? name;
    ? config;
    ? localParticipantID;
    ? service;
    ? delegate;
    ? queue;
    ? dataCryptorProvider;
    ? _subscriberIDs;
    ? state;
    ? _topicMetadata;
    ? closedStreamsReason;
    ? subscribeStreamAttempt;
    ? publishStreamAttempt;
    ? subscribeStreamState;
    ? publishStreamState;
    ? subscribeInitializeInFlight;
    ? selfSeqNum;
    ? selfSeqNumServerAcked;
    ? _subscriberSeqNums;
    ? subscriberSeqNumsAcked;
    ? pendingDecryptionQueue;
    ? sendQueue;
    ? receiveQueue;
    ? subscribeInput;
    ? publishInput;
    ? subscribeResponseCancellable;
    ? subscribeMissingEncryptionIDsCancellable;
    ? subscribeNotAuthorizedCancellable;
    ? publishResponseCancellable;
    ? upsertMetadataCancellables;
    ? shutdownFailsafeCancellable;
}






@end


#endif