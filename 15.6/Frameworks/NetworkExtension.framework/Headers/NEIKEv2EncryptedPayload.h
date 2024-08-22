// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2ENCRYPTEDPAYLOAD_H
#define NEIKEV2ENCRYPTEDPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload

@property (retain) NSData *encryptedData; // ivar: _encryptedData


+(id)copyTypeDescription;
-(BOOL)encryptPayloads:(id)arg0 encryption:(id)arg1 integrity:(id)arg2 encryptionKey:(id)arg3 integrityKey:(id)arg4 aad:(id)arg5 encryptionContext:(id)arg6 ;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)copyDecryptedPayloadsForEncryption:(id)arg0 integrity:(id)arg1 encryptionKey:(id)arg2 integrityKey:(id)arg3 packetData:(id)arg4 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif