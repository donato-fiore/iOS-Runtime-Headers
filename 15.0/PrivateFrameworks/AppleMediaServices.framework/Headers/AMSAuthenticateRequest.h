// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSAUTHENTICATEREQUEST_H
#define AMSAUTHENTICATEREQUEST_H

@class ACAccount, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSAuthenticateOptions.h"

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) AMSAuthenticateOptions *options; // ivar: _options
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccount:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDSID:(id)arg0 altDSID:(id)arg1 username:(id)arg2 options:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif