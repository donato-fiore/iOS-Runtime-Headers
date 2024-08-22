// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2CERTIFICATEREQUESTPAYLOAD_H
#define NEIKEV2CERTIFICATEREQUESTPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {
    NSUInteger _encoding;
    NSData *_certificateData;
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