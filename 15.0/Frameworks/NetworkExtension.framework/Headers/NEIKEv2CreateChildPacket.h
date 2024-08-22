// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2CREATECHILDPACKET_H
#define NEIKEV2CREATECHILDPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2ChildSAPayload.h"
#import "NEIKEv2ConfigPayload.h"
#import "NEIKEv2IKESAPayload.h"
#import "NEIKEv2KeyExchangePayload.h"
#import "NEIKEv2NoncePayload.h"
#import "NEIKEv2InitiatorTrafficSelectorPayload.h"
#import "NEIKEv2ResponderTrafficSelectorPayload.h"

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet

@property (retain) NEIKEv2ChildSAPayload *childSA; // ivar: _childSA
@property (retain) NEIKEv2ConfigPayload *config; // ivar: _config
@property (retain) NEIKEv2IKESAPayload *ikeSA; // ivar: _ikeSA
@property (readonly) BOOL isRekeyChild;
@property (readonly) BOOL isRekeyIKE;
@property (retain) NEIKEv2KeyExchangePayload *ke; // ivar: _ke
@property (retain) NEIKEv2NoncePayload *nonce; // ivar: _nonce
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi; // ivar: _tsi
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr; // ivar: _tsr
@property (retain) NSArray *vendorIDs; // ivar: _vendorIDs


+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
+(id)createChildSAForInitiatorChildSA:(id)arg0 ;
+(id)createChildSAResponse:(id)arg0 childSA:(id)arg1 ;
+(id)createChildSAResponse:(id)arg0 errorCode:(NSUInteger)arg1 errorData:(id)arg2 ;
+(id)createRekeyChildSAForInitiator:(id)arg0 ;
+(id)createRekeyIKESAForInitiator:(id)arg0 ;
+(id)createRekeyResponse:(id)arg0 childSA:(id)arg1 ;
+(id)createRekeyResponse:(id)arg0 ikeSA:(id)arg1 ;
-(BOOL)validateCreateChildAsInitiator:(id)arg0 ;
-(BOOL)validateCreateChildAsResponder:(id)arg0 ;
-(BOOL)validateRekeyChildSA:(id)arg0 ;
-(BOOL)validateRekeyIKESA:(id)arg0 ;
-(BOOL)validateResponderRekeyChildSA:(id)arg0 sendInvalidKE:(*BOOL)arg1 ;
-(BOOL)validateResponderRekeyIKESA:(id)arg0 sendInvalidKE:(*BOOL)arg1 ;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif