// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTSECURITYTOKENREFERENCETYPE_H
#define POWSTRUSTSECURITYTOKENREFERENCETYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"
#import "POWSTrustKeyIdentifierType.h"

@interface POWSTrustSecurityTokenReferenceType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustKeyIdentifierType *KeyIdentifier; // ivar: _KeyIdentifier
@property (copy, nonatomic) NSString *TokenType; // ivar: _TokenType


+(id)definition;
-(id)description;


@end


#endif