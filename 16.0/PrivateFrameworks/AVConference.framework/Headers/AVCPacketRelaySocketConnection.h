// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCPACKETRELAYSOCKETCONNECTION_H
#define AVCPACKETRELAYSOCKETCONNECTION_H

@protocol AVCPacketRelayConnectionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVCPacketFilter.h"

@interface AVCPacketRelaySocketConnection : NSObject <AVCPacketRelayConnectionProtocol>

 {
    int _unixSocket;
    BOOL _isConnectedSocket;
    sockaddr _remoteIPPort;
    unsigned int _remoteIPPortLength;
    NSObject<OS_dispatch_queue> *_queue;
    char * dataBuffer;
}


@property BOOL isDemuxNeeded; // ivar: _isDemuxNeeded
@property (retain) AVCPacketFilter *packetFilter; // ivar: _packetFilter
@property (copy) id *readHandler; // ivar: _readHandler
@property (readonly) unsigned char type; // ivar: _type


-(BOOL)sendData:(*void)arg0 size:(unsigned int)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithSocket:(unsigned short)arg0 remoteAddress:(id)arg1 packetFilter:(id)arg2 ;
-(int)start;
-(int)stop;
-(void)dealloc;
-(void)readyToRead;
-(void)receiveDataOnSocket:(unsigned short)arg0 ;


@end


#endif