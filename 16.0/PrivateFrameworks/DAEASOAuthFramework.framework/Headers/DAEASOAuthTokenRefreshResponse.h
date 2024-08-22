// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEASOAUTHTOKENREFRESHRESPONSE_H
#define DAEASOAUTHTOKENREFRESHRESPONSE_H

@class NSString, NSError, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface DAEASOAuthTokenRefreshResponse : NSObject

@property (readonly, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSString *errorName; // ivar: _errorName
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, nonatomic) NSString *idToken; // ivar: _idToken
@property (readonly, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (readonly, nonatomic) NSDictionary *responseBody; // ivar: _responseBody
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif