// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTTOTYPE_H
#define POWSTRUSTTOTYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"

@interface POWSTrustToType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *mustUnderstand; // ivar: _mustUnderstand
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(id)definition;
-(id)description;


@end


#endif