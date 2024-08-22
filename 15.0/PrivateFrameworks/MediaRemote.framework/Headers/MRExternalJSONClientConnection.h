// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MREXTERNALJSONCLIENTCONNECTION_H
#define MREXTERNALJSONCLIENTCONNECTION_H

@class NSDictionary;


#import "MRExternalClientConnection.h"

@interface MRExternalJSONClientConnection : MRExternalClientConnection {
    NSDictionary *_artwork;
    NSDictionary *_deviceInfo;
    NSDictionary *_volume;
    NSDictionary *_playerPath;
    NSDictionary *_playbackQueue;
    NSDictionary *_supportedCommands;
}




-(id)_createProtocolMessage:(Class)arg0 underlyingCodableMessage:(id)arg1 ;
-(id)_encodeDeviceInfo:(id)arg0 ;
-(id)_encodeVolumeDidChange:(id)arg0 ;
-(id)_processDeviceInfo:(id)arg0 ;
-(id)_processSetState:(id)arg0 ;
-(id)_protocolMessageFromData:(id)arg0 ;
-(id)dataForMessage:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;


@end


#endif