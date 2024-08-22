// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUST2005REQUESTSECURITYTOKENTYPE_H
#define POWSTRUST2005REQUESTSECURITYTOKENTYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"
#import "POWSTrustAppliesToType.h"

@interface POWSTrust2005RequestSecurityTokenType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustAppliesToType *AppliesTo; // ivar: _AppliesTo
@property (copy, nonatomic) NSString *KeyType; // ivar: _KeyType
@property (copy, nonatomic) NSString *RequestType; // ivar: _RequestType


+(id)definition;
-(id)description;


@end


#endif