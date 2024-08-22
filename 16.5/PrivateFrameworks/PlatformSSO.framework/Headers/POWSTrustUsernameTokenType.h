// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTUSERNAMETOKENTYPE_H
#define POWSTRUSTUSERNAMETOKENTYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"

@interface POWSTrustUsernameTokenType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *Id; // ivar: _Id
@property (copy, nonatomic) NSString *Password; // ivar: _Password
@property (copy, nonatomic) NSString *Username; // ivar: _Username


+(id)definition;
-(id)description;


@end


#endif