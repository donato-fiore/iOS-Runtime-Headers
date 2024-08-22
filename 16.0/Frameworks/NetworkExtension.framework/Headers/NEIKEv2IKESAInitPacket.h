// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2IKESAINITPACKET_H
#define NEIKEV2IKESAINITPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2NotifyPayload.h"
#import "NEIKEv2IKESAPayload.h"
#import "NEIKEv2KeyExchangePayload.h"
#import "NEIKEv2NoncePayload.h"

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet {
    NEIKEv2NotifyPayload *_cookie;
    NEIKEv2IKESAPayload *_sa;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NSArray *_vendorIDs;
}




+(BOOL)encryptPayloads;
+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif