// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCRTCPPACKET_H
#define AVCRTCPPACKET_H


#import <Foundation/Foundation.h>


@interface AVCRTCPPacket : NSObject

@property (nonatomic) unsigned int SSRC; // ivar: _SSRC
@property (nonatomic) unsigned char packetType; // ivar: _packetType


+(id)newPacketWithRTCPPacket:(struct tagRTCPPACKET *)arg0 ;
-(id)description;
-(id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg0 ;


@end


#endif