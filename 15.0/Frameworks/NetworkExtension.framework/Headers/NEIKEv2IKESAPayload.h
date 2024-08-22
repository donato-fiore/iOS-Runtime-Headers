// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2IKESAPAYLOAD_H
#define NEIKEV2IKESAPAYLOAD_H

@class NSArray;


#import "NEIKEv2Payload.h"
#import "NEIKEv2IKESPI.h"

@interface NEIKEv2IKESAPayload : NEIKEv2Payload

@property (retain) NSArray *proposals; // ivar: _proposals
@property (retain) NEIKEv2IKESPI *rekeyIKESPI; // ivar: _rekeyIKESPI


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif