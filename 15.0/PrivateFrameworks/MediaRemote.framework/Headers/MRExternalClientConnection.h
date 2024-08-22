// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MREXTERNALCLIENTCONNECTION_H
#define MREXTERNALCLIENTCONNECTION_H

@class NSArray;


#import "MRProtocolClientConnection.h"
#import "MRCryptoPairingSession.h"

@interface MRExternalClientConnection : MRProtocolClientConnection {
    NSArray *_subscribedPlayerPaths;
}


@property (nonatomic) BOOL cryptoEnabled; // ivar: _cryptoEnabled
@property (retain, nonatomic) MRCryptoPairingSession *cryptoSession; // ivar: _cryptoSession
@property (nonatomic) BOOL registeredKeyboardUpdates; // ivar: _registeredKeyboardUpdates
@property (nonatomic) BOOL registeredToNowPlayingUpdates; // ivar: _registeredToNowPlayingUpdates
@property (nonatomic) BOOL registeredToOutputDeviceUpdates; // ivar: _registeredToOutputDeviceUpdates
@property (nonatomic) BOOL registeredToSystemEndpointUpdates; // ivar: _registeredToSystemEndpointUpdates
@property (nonatomic) BOOL registeredToVolumeUpdates; // ivar: _registeredToVolumeUpdates
@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (nonatomic) unsigned int voiceRecordingState; // ivar: _voiceRecordingState


-(id)initWithConnection:(id)arg0 ;


@end


#endif