// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTSECURITYTYPE_H
#define POWSTRUSTSECURITYTYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"
#import "POWSTrustTimestampType.h"
#import "POWSTrustUsernameTokenType.h"

@interface POWSTrustSecurityType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustTimestampType *Timestamp; // ivar: _Timestamp
@property (retain, nonatomic) POWSTrustUsernameTokenType *UsernameToken; // ivar: _UsernameToken
@property (copy, nonatomic) NSString *mustUnderstand; // ivar: _mustUnderstand


+(id)definition;
-(id)description;


@end


#endif