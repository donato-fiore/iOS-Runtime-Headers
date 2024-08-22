// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2CERTIFICATEPAYLOAD_H
#define NEIKEV2CERTIFICATEPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"

@interface NEIKEv2CertificatePayload : NEIKEv2Payload

@property (retain) NSData *certificateData; // ivar: _certificateData
@property NSUInteger encoding; // ivar: _encoding


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif