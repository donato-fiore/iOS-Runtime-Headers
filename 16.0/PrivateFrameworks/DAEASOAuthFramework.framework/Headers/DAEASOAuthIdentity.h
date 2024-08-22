// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEASOAUTHIDENTITY_H
#define DAEASOAUTHIDENTITY_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface DAEASOAuthIdentity : NSObject

@property (copy, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *issuer; // ivar: _issuer
@property (copy, nonatomic) NSData *jwksData; // ivar: _jwksData
@property (copy, nonatomic) NSString *jwksURI; // ivar: _jwksURI
@property (copy, nonatomic) NSString *oauthURI; // ivar: _oauthURI
@property (copy, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (copy, nonatomic) NSString *tokenRequestURI; // ivar: _tokenRequestURI
@property (copy, nonatomic) NSString *username; // ivar: _username




@end


#endif