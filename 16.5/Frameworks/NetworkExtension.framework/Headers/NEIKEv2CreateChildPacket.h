// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2CREATECHILDPACKET_H
#define NEIKEV2CREATECHILDPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2IKESAPayload.h"
#import "NEIKEv2ChildSAPayload.h"
#import "NEIKEv2KeyExchangePayload.h"
#import "NEIKEv2NoncePayload.h"
#import "NEIKEv2ConfigPayload.h"
#import "NEIKEv2InitiatorTrafficSelectorPayload.h"
#import "NEIKEv2ResponderTrafficSelectorPayload.h"

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet {
    NEIKEv2IKESAPayload *_ikeSA;
    NEIKEv2ChildSAPayload *_childSA;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NEIKEv2ConfigPayload *_config;
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;
    NSArray *_vendorIDs;
}




+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif