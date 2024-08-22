// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14COPRESENCECORE11PUBSUBTOPIC_H
#define _TTC14COPRESENCECORE11PUBSUBTOPIC_H

@class SwiftObject;



@interface _TtC14CopresenceCore11PubSubTopic : SwiftObject {
    ? name;
    ? config;
    ? localParticipantID;
    ? service;
    ? delegate;
    ? firstSubscribeAttemptAt;
    ? queue;
    ? reporter;
    ? reporterTag;
    ? dataCryptorProvider;
    ? _subscribers;
    ? state;
    ? _topicMetadata;
    ? closedStreamsReason;
    ? subscribeStreamAttempt;
    ? publishStreamAttempt;
    ? subscribeStreamState;
    ? publishStreamState;
    ? subscribeInitializeInFlight;
    ? cryptorUpdatedWhileInitializing;
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