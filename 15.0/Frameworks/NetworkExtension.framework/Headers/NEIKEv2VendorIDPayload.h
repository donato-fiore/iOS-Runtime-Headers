// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2VENDORIDPAYLOAD_H
#define NEIKEV2VENDORIDPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload

@property (retain) NSData *vendorData; // ivar: _vendorData


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif