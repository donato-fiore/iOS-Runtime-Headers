// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2AUTHPAYLOAD_H
#define NEIKEV2AUTHPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"
#import "NEIKEv2AuthenticationProtocol.h"

@interface NEIKEv2AuthPayload : NEIKEv2Payload

@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocol; // ivar: _authProtocol
@property (retain, nonatomic) NSData *authenticationData; // ivar: _authenticationData
@property (readonly, nonatomic) NSUInteger method;


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif