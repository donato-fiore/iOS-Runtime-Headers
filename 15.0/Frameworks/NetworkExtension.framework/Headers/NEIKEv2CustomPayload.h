// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2CUSTOMPAYLOAD_H
#define NEIKEV2CUSTOMPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"

@interface NEIKEv2CustomPayload : NEIKEv2Payload

@property (retain) NSData *customData; // ivar: _customData
@property NSUInteger customType; // ivar: _customType


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif