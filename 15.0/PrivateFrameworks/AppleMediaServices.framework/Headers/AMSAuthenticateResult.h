// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSAUTHENTICATERESULT_H
#define AMSAUTHENTICATERESULT_H

@class ACAccount, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSAuthenticateResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSDictionary *serverResponse; // ivar: _serverResponse


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif