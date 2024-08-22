// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19REMOTEPAIRINGDEVICE24CONTROLCHANNELCONNECTION_H
#define _TTC19REMOTEPAIRINGDEVICE24CONTROLCHANNELCONNECTION_H

@class SwiftObject;



@interface _TtC19RemotePairingDevice24ControlChannelConnection : SwiftObject {
    ? peerDeviceInfo;
    ? resolvedIdentity;
    ? state;
    ? transport;
    ? queue;
    ? options;
    ? _connectionSetupCompleteHandler;
    ? invalidationHandler;
    ? peerDeviceInfoUpdateHandler;
    ? requireUserConsentForPairing;
    ? userInteractionProvider;
    ? tunnelListenerCreator;
    ? pairingDataStorageProvider;
    ? customKeybagProvider;
    ? connectionSetupDidComplete;
    ? maxReconnectionAttempts;
    ? startedAt;
    ? _peerWireProtocolVersion;
    ? _peerDeviceOptions;
    ? _replyHandlers;
    ? _mdmChallengeData;
    ? _transaction;
    ? _userHasDeclinedPairing;
    ? _pairingSession;
    ? _encryptionStream;
    ? _messageSequenceNumber;
    ? _invalidateCalled;
    ? invalidationReason;
}






@end


#endif