// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCTRANSPORTSESSIONSOCKET_H
#define VCTRANSPORTSESSIONSOCKET_H



#import "VCTransportSession.h"
#import "VCNetworkAddress.h"

@interface VCTransportSessionSocket : VCTransportSession {
    int _rtpVFD;
    int _rtcpVFD;
    BOOL _isRTPUsable;
    BOOL _isRTCPUsable;
    BOOL _isSharedSocket;
    sockaddr_storage _rtpIPPort;
    unsigned int _rtpIPPortLength;
    sockaddr_storage _rtcpIPPort;
    unsigned int _rtcpIPPortLength;
    VCNetworkAddress *_remoteAddress;
    int _networkInterfaceType;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}




-(BOOL)isIPv6;
-(id)initWithRTPSocket:(int)arg0 RTCPSocket:(int)arg1 ;
-(id)initWithSharedSocket:(int)arg0 ;
-(id)initWithSocketDictionary:(id)arg0 ;
-(id)streams;
-(int)configureParamatersForStreamType:(unsigned int)arg0 socket:(*int)arg1 packetType:(*int)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(*unsigned int)arg4 ;
-(int)connectSocket:(int)arg0 remoteAddress:(id)arg1 storage:(struct sockaddr_storage *)arg2 ;
-(int)createAndConfigureVFDForSocket:(int)arg0 packetType:(int)arg1 remoteIP:(struct sockaddr_storage *)arg2 remoteIPLength:(unsigned int)arg3 vfd:(*int)arg4 ;
-(int)createVFD:(*int)arg0 forStreamType:(unsigned int)arg1 ;
-(int)createVFD:(*int)arg0 realSocket:(int)arg1 sockAddr:(struct sockaddr_storage *)arg2 length:(*unsigned int)arg3 isUsable:(*BOOL)arg4 ;
-(int)initializeNetworkInfoWithSocket:(int)arg0 ;
-(int)networkInterfaceType;
-(int)setAudioRTCPStreamParamatersForSocket:(*int)arg0 packetType:(*int)arg1 remoteIP:(struct sockaddr_storage *)arg2 remoteIPLength:(*unsigned int)arg3 ;
-(int)setAudioRTPStreamParamatersForSocket:(*int)arg0 packetType:(*int)arg1 remoteIP:(struct sockaddr_storage *)arg2 remoteIPLength:(*unsigned int)arg3 ;
-(int)setBasebandNotificationStreamParamatersForSocket:(*int)arg0 packetType:(*int)arg1 remoteIP:(struct sockaddr_storage *)arg2 remoteIPLength:(*unsigned int)arg3 ;
-(int)setRemoteAddress:(id)arg0 remoteRTCPPort:(int)arg1 ;
-(int)setVideoRTCPStreamParamatersForSocket:(*int)arg0 packetType:(*int)arg1 remoteIP:(struct sockaddr_storage *)arg2 remoteIPLength:(*unsigned int)arg3 ;
-(int)setVideoRTPStreamParamatersForSocket:(*int)arg0 packetType:(*int)arg1 remoteIP:(struct sockaddr_storage *)arg2 remoteIPLength:(*unsigned int)arg3 ;
-(int)updateTransportStream:(struct OpaqueVCTransportStream *)arg0 ;
-(unsigned int)networkMTU;
-(void)dealloc;
-(void)initializeInterfaceTypeWithSocket:(int)arg0 ;
-(void)start;


@end


#endif