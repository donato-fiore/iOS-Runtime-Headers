// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19REMOTEPAIRINGDEVICE25SECURESOCKETDATATRANSPORT_H
#define _TTC19REMOTEPAIRINGDEVICE25SECURESOCKETDATATRANSPORT_H

@class SwiftObject;



@interface _TtC19RemotePairingDevice25SecureSocketDataTransport : SwiftObject {
    ? id;
    ? _underlyingConnectionSocket;
    ? _bufferedReceiveSizeHandler;
    ? _syncReceiveHandler;
    ? _syncSendHandler;
    ? _cleanupConnectionHandler;
    ? _targetQueue;
    ? _eventHandler;
    ? _ioQueue;
    ? _canReceiveSource;
    ? _canSendSource;
    ? _pendingReceiveRequests;
    ? _partialReceivedData;
    ? _pendingSendRequests;
    ? physicallyConnected;
    ? endpoint;
    ? endpointHasBeenUpdatedSinceInitialization;
}






@end


#endif