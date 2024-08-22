// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAEASOAUTHTOKENRESPONSE_H
#define DAEASOAUTHTOKENRESPONSE_H

@class NSString, NSDictionary, NSError, NSDate;

#import <Foundation/Foundation.h>


@interface DAEASOAuthTokenResponse : NSObject

@property (readonly, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, nonatomic) NSString *idToken; // ivar: _idToken
@property (readonly, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSString *user_id; // ivar: _user_id


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;
-(id)usernameFromJWTToken:(id)arg0 ;


@end


#endif