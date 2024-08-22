// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEASOPENIDMETADATARESPONSE_H
#define DAEASOPENIDMETADATARESPONSE_H

@class NSString, NSDictionary, NSError;

#import <Foundation/Foundation.h>


@interface DAEASOpenIDMetadataResponse : NSObject

@property (readonly, nonatomic) NSString *authorizationURI; // ivar: _authorizationURI
@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSString *issuer; // ivar: _issuer
@property (readonly, nonatomic) NSString *jwksURI; // ivar: _jwksURI
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSString *tokenRequestURI; // ivar: _tokenRequestURI


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif