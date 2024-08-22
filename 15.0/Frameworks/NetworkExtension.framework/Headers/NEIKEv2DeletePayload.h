// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2DELETEPAYLOAD_H
#define NEIKEV2DELETEPAYLOAD_H

@class NSArray;


#import "NEIKEv2Payload.h"

@interface NEIKEv2DeletePayload : NEIKEv2Payload

@property NSUInteger protocol; // ivar: _protocol
@property (retain) NSArray *spis; // ivar: _spis


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif