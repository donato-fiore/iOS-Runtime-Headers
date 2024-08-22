// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2PACKET_H
#define NEIKEV2PACKET_H

@class NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEIKEv2EncryptedPayload.h"
#import "NEIKEv2IKESPI.h"

@interface NEIKEv2Packet : NSObject <NEPrettyDescription>



@property (retain) NSArray *customPayloads; // ivar: _customPayloads
@property BOOL decrypted; // ivar: _decrypted
@property (retain) NEIKEv2EncryptedPayload *encryptedPayload; // ivar: _encryptedPayload
@property unsigned int fragmentNumber; // ivar: _fragmentNumber
@property (readonly) BOOL hasErrors;
@property (retain) NEIKEv2IKESPI *initiatorSPI; // ivar: _initiatorSPI
@property BOOL isFragmented; // ivar: _isFragmented
@property BOOL isInbound; // ivar: _isInbound
@property BOOL isInitiator; // ivar: _isInitiator
@property BOOL isResponse; // ivar: _isResponse
@property int messageID; // ivar: _messageID
@property (retain) NSArray *notifications; // ivar: _notifications
@property (retain) NSArray *packetDatagrams; // ivar: _packetDatagrams
@property (retain) NSArray *rawPayloads; // ivar: _rawPayloads
@property (readonly) NEIKEv2IKESPI *receiverSPI;
@property (retain) NEIKEv2IKESPI *responderSPI; // ivar: _responderSPI
@property (readonly) NEIKEv2IKESPI *senderSPI;
@property unsigned int totalFragments; // ivar: _totalFragments


+(BOOL)encryptPayloads;
+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
+(id)createPacketFromReceivedData:(id)arg0 ikeSA:(id)arg1 ;
+(id)createPacketFromReceivedFragments:(id)arg0 ikeSA:(id)arg1 ;
-(BOOL)addNotification:(NSUInteger)arg0 ;
-(BOOL)addNotification:(NSUInteger)arg0 data:(id)arg1 ;
-(BOOL)addNotifyPayload:(id)arg0 ;
-(BOOL)hasNotification:(NSUInteger)arg0 ;
-(BOOL)shouldFragmentForEncryptedPayloadSize:(unsigned int)arg0 addressFamily:(unsigned char)arg1 nonESPMarker:(BOOL)arg2 ;
-(id)copyAdditionalAuthenticationDataForNextPayloadType:(NSUInteger)arg0 plainTextLen:(unsigned int)arg1 fragmentNumber:(unsigned short)arg2 totalFragments:(unsigned short)arg3 encryption:(id)arg4 ;
-(id)copyNotification:(NSUInteger)arg0 ;
-(id)copyPacketDatagramsForIKESA:(id)arg0 ;
-(id)copyReceivedPacketForIKESA:(id)arg0 ;
-(id)copyShortDescription;
-(id)copyUnifiedData;
-(id)createPacketDatagramWithPayloadData:(id)arg0 nextPayloadType:(NSUInteger)arg1 ikeSA:(id)arg2 needsChecksum:(BOOL)arg3 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initOutbound;
-(id)initResponse:(id)arg0 ;
-(unsigned int)encryptedFragmentSizeForIKESA:(id)arg0 ;
-(unsigned int)headerSizeForAddressFamily:(unsigned char)arg0 fragment:(BOOL)arg1 nonESPMarker:(BOOL)arg2 ;
-(void)addNotification:(NSUInteger)arg0 fromArray:(id)arg1 toPayloads:(id)arg2 ;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif