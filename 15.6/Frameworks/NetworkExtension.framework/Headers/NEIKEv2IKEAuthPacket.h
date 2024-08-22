// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2IKEAUTHPACKET_H
#define NEIKEV2IKEAUTHPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2AuthPayload.h"
#import "NEIKEv2ConfigPayload.h"
#import "NEIKEv2EAPPayload.h"
#import "NEIKEv2InitiatorIdentifierPayload.h"
#import "NEIKEv2ResponderIdentifierPayload.h"
#import "NEIKEv2ChildSAPayload.h"
#import "NEIKEv2InitiatorTrafficSelectorPayload.h"
#import "NEIKEv2ResponderTrafficSelectorPayload.h"

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet

@property (retain) NEIKEv2AuthPayload *auth; // ivar: _auth
@property (retain) NSArray *certificateRequests; // ivar: _certificateRequests
@property (retain) NSArray *certificates; // ivar: _certificates
@property (retain) NEIKEv2ConfigPayload *config; // ivar: _config
@property (retain) NEIKEv2EAPPayload *eap; // ivar: _eap
@property (retain) NEIKEv2InitiatorIdentifierPayload *idi; // ivar: _idi
@property (retain) NEIKEv2ResponderIdentifierPayload *idr; // ivar: _idr
@property (retain) NEIKEv2ChildSAPayload *sa; // ivar: _sa
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi; // ivar: _tsi
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr; // ivar: _tsr
@property (retain) NSArray *vendorIDs; // ivar: _vendorIDs


+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
+(id)createEAPForInitiatorIKESA:(id)arg0 childSA:(id)arg1 lastResponderPacket:(id)arg2 ;
+(id)createIKEAuthForInitiatorIKESA:(id)arg0 childSA:(id)arg1 ;
+(id)createIKEAuthResponse:(id)arg0 ikeSA:(id)arg1 childSA:(id)arg2 ;
+(id)createIKEAuthResponse:(id)arg0 refusalError:(NSUInteger)arg1 ;
+(id)prepareDeviceIdentityNotifyPayload:(id)arg0 IMEISV:(id)arg1 lastResponderPacket:(id)arg2 ;
-(BOOL)validateAuthAsInitiator:(id)arg0 childSA:(id)arg1 ;
-(BOOL)validateFirstAuthPayloadsForInitiator:(id)arg0 childSA:(id)arg1 ;
-(id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)arg0 ;
-(id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)arg0 childSA:(id)arg1 ;
-(id)validateEAPOnlyAuthentication:(id)arg0 ;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif