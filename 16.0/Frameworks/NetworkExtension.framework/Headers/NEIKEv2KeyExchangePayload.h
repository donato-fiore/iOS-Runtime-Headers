// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2KEYEXCHANGEPAYLOAD_H
#define NEIKEV2KEYEXCHANGEPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"
#import "NEIKEv2DHProtocol.h"

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {
    NEIKEv2DHProtocol *_dh;
    NSData *_dhPublicKey;
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