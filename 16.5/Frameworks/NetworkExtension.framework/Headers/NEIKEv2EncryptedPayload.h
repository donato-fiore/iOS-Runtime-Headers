// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2ENCRYPTEDPAYLOAD_H
#define NEIKEV2ENCRYPTEDPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload {
    NSData *_encryptedData;
}




+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif