// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLYAHOOWEBOAUTH2TOKENRESPONSE_H
#define SLYAHOOWEBOAUTH2TOKENRESPONSE_H

@class NSString, NSDictionary, NSError, NSDate;
@protocol SLWebOAuth2TokenResponse;

#import <Foundation/Foundation.h>


@interface SLYahooWebOAuth2TokenResponse : NSObject <SLWebOAuth2TokenResponse>



@property (readonly) NSString *GUID; // ivar: _GUID
@property (readonly) NSDictionary *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *errorMessage; // ivar: _errorMessage
@property (readonly) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly) NSUInteger hash;
@property (readonly) NSString *idToken; // ivar: _idToken
@property (readonly) NSString *refreshToken; // ivar: _refreshToken
@property (readonly) NSInteger statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (readonly) NSString *token; // ivar: _token


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif