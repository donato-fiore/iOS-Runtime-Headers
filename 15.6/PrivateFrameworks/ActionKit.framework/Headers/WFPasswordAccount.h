// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPASSWORDACCOUNT_H
#define WFPASSWORDACCOUNT_H

@class NSString;


#import "WFAccount.h"

@interface WFPasswordAccount : WFAccount

@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)accountWithUsername:(id)arg0 password:(id)arg1 ;
-(BOOL)isValid;
-(id)localizedName;


@end


#endif