// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2IDENTIFIERPAYLOAD_H
#define NEIKEV2IDENTIFIERPAYLOAD_H



#import "NEIKEv2Payload.h"
#import "NEIKEv2Identifier.h"

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload

@property (retain) NEIKEv2Identifier *identifier; // ivar: _identifier


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif