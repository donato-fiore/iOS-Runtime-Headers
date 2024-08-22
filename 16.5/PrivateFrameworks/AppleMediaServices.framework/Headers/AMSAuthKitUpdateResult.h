// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAUTHKITUPDATERESULT_H
#define AMSAUTHKITUPDATERESULT_H

@class ACAccount, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSAuthKitUpdateResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSDictionary *authenticationResults; // ivar: _authenticationResults
@property (readonly, nonatomic) NSUInteger credentialSource;


+(BOOL)supportsSecureCoding;
+(id)_createUpdatedAccount:(id)arg0 usingAuthenticationResults:(id)arg1 options:(id)arg2 ;
-(id)initWithAccount:(id)arg0 authenticationResults:(id)arg1 credentialSource:(NSUInteger)arg2 options:(id)arg3 ;
-(id)initWithAccount:(id)arg0 authenticationResults:(id)arg1 options:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif