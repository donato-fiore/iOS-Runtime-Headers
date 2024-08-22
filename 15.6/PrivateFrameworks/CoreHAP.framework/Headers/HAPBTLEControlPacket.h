// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPBTLECONTROLPACKET_H
#define HAPBTLECONTROLPACKET_H

@class HMFObject, NSData;


#import "HAPBTLETransactionIdentifier.h"

@interface HAPBTLEControlPacket : HMFObject

@property (readonly, nonatomic, getter=isContinuationPacket) BOOL continuationPacket; // ivar: _continuationPacket
@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(id)packetWithSerializedData:(id)arg0 error:(*id)arg1 ;
+(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithControlType:(unsigned char)arg0 transactionIdentifier:(id)arg1 continuationPacket:(BOOL)arg2 packetPayload:(id)arg3 maximumLength:(NSUInteger)arg4 ;
-(id)serialize;
-(id)shortDescription;


@end


#endif