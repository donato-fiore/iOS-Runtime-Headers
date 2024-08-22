// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLYAHOOOAUTH2MIGRATIONRESPONSE_H
#define SLYAHOOOAUTH2MIGRATIONRESPONSE_H

@class NSString, NSError, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface SLYahooOAuth2MigrationResponse : NSObject

@property (readonly) NSString *accessToken; // ivar: _accessToken
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly) NSString *refreshToken; // ivar: _refreshToken
@property (readonly) NSDictionary *responseBody; // ivar: _responseBody
@property (readonly) NSInteger statusCode; // ivar: _statusCode


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif