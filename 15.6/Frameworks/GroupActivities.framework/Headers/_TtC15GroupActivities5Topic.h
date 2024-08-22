// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15GROUPACTIVITIES5TOPIC_H
#define _TTC15GROUPACTIVITIES5TOPIC_H

@class SwiftObject;



@interface _TtC15GroupActivities5Topic : SwiftObject {
    ? topic;
    ? pubSubTopicGenerator;
    ? cancellables;
    ? stateMachine;
    ? delegate;
    ? subscription;
    ? name;
    ? receivedDataHandler;
    ? pubSubStateChangedHandler;
    ? catchupNeededHandler;
    ? dataCryptor;
    ? _subscribedParticipantIDs;
    ? invalidationHandler;
    ? requestEncryptionKeysHandler;
    ? seqNumWatermark;
    ? pendingMessages;
    ? pendingMessagesLock;
}






@end


#endif