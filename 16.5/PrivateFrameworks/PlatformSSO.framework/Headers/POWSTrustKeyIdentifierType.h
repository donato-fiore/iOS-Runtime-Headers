// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTKEYIDENTIFIERTYPE_H
#define POWSTRUSTKEYIDENTIFIERTYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"

@interface POWSTrustKeyIdentifierType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *ValueType; // ivar: _ValueType
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(id)definition;
-(id)description;


@end


#endif