// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2IKESAINITPACKET_H
#define NEIKEV2IKESAINITPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2NotifyPayload.h"
#import "NEIKEv2KeyExchangePayload.h"
#import "NEIKEv2NoncePayload.h"
#import "NEIKEv2IKESAPayload.h"

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet

@property (retain) NEIKEv2NotifyPayload *cookie; // ivar: _cookie
@property (retain) NEIKEv2KeyExchangePayload *ke; // ivar: _ke
@property (retain) NEIKEv2NoncePayload *nonce; // ivar: _nonce
@property (retain) NEIKEv2IKESAPayload *sa; // ivar: _sa
@property (retain) NSArray *vendorIDs; // ivar: _vendorIDs


+(BOOL)encryptPayloads;
+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
+(id)createIKESAInitForInitiatorIKESA:(id)arg0 ;
+(id)createIKESAInitResponse:(id)arg0 errorCode:(NSUInteger)arg1 errorData:(id)arg2 ;
+(id)createIKESAInitResponse:(id)arg0 ikeSA:(id)arg1 ;
-(BOOL)validateSAInitAsInitiator:(id)arg0 ;
-(BOOL)validateSAInitAsResponder:(id)arg0 sendInvalidKE:(*BOOL)arg1 ;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif