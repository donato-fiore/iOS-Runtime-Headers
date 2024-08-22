// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCPACKETFILTERRTP_H
#define AVCPACKETFILTERRTP_H



#import "AVCPacketFilter.h"

@interface AVCPacketFilterRTP : AVCPacketFilter {
    unsigned int _SSRC;
}


@property (readonly) unsigned char type; // ivar: _type


-(BOOL)isMatchedPacket:(*void)arg0 size:(int)arg1 ;
-(BOOL)isPayloadTypeMatched:(BOOL)arg0 ;
-(BOOL)isRTCPPayload:(unsigned short)arg0 ;
-(id)initWithIncomingSSRC:(unsigned int)arg0 acceptPacketType:(unsigned char)arg1 ;


@end


#endif