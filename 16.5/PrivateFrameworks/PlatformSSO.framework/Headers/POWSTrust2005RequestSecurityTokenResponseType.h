// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUST2005REQUESTSECURITYTOKENRESPONSETYPE_H
#define POWSTRUST2005REQUESTSECURITYTOKENRESPONSETYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"
#import "POWSTrustAppliesToType.h"
#import "POWSTrustTimestampType.h"
#import "POWSTrustReferenceType.h"
#import "POWSTrustRequestedSecurityTokenType.h"

@interface POWSTrust2005RequestSecurityTokenResponseType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustAppliesToType *AppliesTo; // ivar: _AppliesTo
@property (copy, nonatomic) NSString *KeyType; // ivar: _KeyType
@property (retain, nonatomic) POWSTrustTimestampType *Lifetime; // ivar: _Lifetime
@property (copy, nonatomic) NSString *RequestType; // ivar: _RequestType
@property (retain, nonatomic) POWSTrustReferenceType *RequestedAttachedReference; // ivar: _RequestedAttachedReference
@property (retain, nonatomic) POWSTrustRequestedSecurityTokenType *RequestedSecurityToken; // ivar: _RequestedSecurityToken
@property (retain, nonatomic) POWSTrustReferenceType *RequestedUnattachedReference; // ivar: _RequestedUnattachedReference
@property (copy, nonatomic) NSString *TokenType; // ivar: _TokenType


+(id)definition;
-(id)description;


@end


#endif