// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2IKEAUTHPACKET_H
#define NEIKEV2IKEAUTHPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2ChildSAPayload.h"
#import "NEIKEv2InitiatorIdentifierPayload.h"
#import "NEIKEv2ResponderIdentifierPayload.h"
#import "NEIKEv2AuthPayload.h"
#import "NEIKEv2EAPPayload.h"
#import "NEIKEv2ConfigPayload.h"
#import "NEIKEv2InitiatorTrafficSelectorPayload.h"
#import "NEIKEv2ResponderTrafficSelectorPayload.h"

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet {
    NEIKEv2ChildSAPayload *_sa;
    NEIKEv2InitiatorIdentifierPayload *_idi;
    NEIKEv2ResponderIdentifierPayload *_idr;
    NSArray *_certificates;
    NSArray *_certificateRequests;
    NEIKEv2AuthPayload *_auth;
    NEIKEv2EAPPayload *_eap;
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