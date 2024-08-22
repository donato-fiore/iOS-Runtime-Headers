// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2INFORMATIONALPACKET_H
#define NEIKEV2INFORMATIONALPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2ConfigPayload.h"

@interface NEIKEv2InformationalPacket : NEIKEv2Packet

@property (retain) NEIKEv2ConfigPayload *config; // ivar: _config
@property (retain) NSArray *deletes; // ivar: _deletes
@property (readonly) BOOL isDeleteChild;
@property (readonly) BOOL isDeleteIKE;
@property (readonly) BOOL isMOBIKE;


+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
+(id)createDeleteChild:(id)arg0 ;
+(id)createDeleteIKE;
+(id)createDeleteIKEResponse:(id)arg0 ;
+(id)createDeleteResponse:(id)arg0 child:(id)arg1 ;
+(id)createInformational;
+(id)createInformationalPacketWithNATPayload:(id)arg0 ;
+(id)createInformationalResponse:(id)arg0 ikeSA:(id)arg1 ;
+(id)createMOBIKEPacketResponse:(id)arg0 ikeSA:(id)arg1 ;
+(id)createNotifyPacketForType:(NSUInteger)arg0 data:(id)arg1 ;
+(id)createUpdateAddressInitiator:(id)arg0 ;
-(BOOL)validateDeleteChild:(id)arg0 ;
-(BOOL)validateDeleteIKE;
-(BOOL)validateInformational;
-(BOOL)validateMOBIKE:(id)arg0 ;
-(BOOL)validateUpdateAddresses:(id)arg0 ;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif