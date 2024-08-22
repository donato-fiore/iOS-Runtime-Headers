// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCPACKETRELAYIDSCONNECTION_H
#define AVCPACKETRELAYIDSCONNECTION_H

@class IDSDatagramChannel, IDSService;
@protocol AVCPacketRelayConnectionProtocol;

#import <Foundation/Foundation.h>

#import "AVCPacketFilter.h"

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol>

 {
    IDSDatagramChannel *_datagramChannel;
    IDSService *_packetRelayService;
}


@property BOOL isDemuxNeeded; // ivar: _isDemuxNeeded
@property BOOL isResumed; // ivar: _isResumed
@property (retain) AVCPacketFilter *packetFilter; // ivar: _packetFilter
@property (copy) id *readHandler; // ivar: _readHandler
@property (readonly) unsigned char type; // ivar: _type


-(BOOL)sendData:(*void)arg0 size:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithIDSDestination:(id)arg0 ;
-(id)initWithIDSSocketDescriptor:(unsigned short)arg0 ;
-(int)start;
-(int)stop;
-(void)dealloc;
-(void)readyToRead;


@end


#endif