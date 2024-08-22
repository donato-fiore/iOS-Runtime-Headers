// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSOAUTHTOKENHANDLER_H
#define MSOAUTHTOKENHANDLER_H

@class NSURLSessionConfiguration, CMSNetworkActivity;

#import <Foundation/Foundation.h>

#import "CMSAuthenticationConfiguration.h"
#import "CMSAuthenticationCredential.h"

@interface MSOAuthTokenHandler : NSObject

@property (readonly) NSURLSessionConfiguration *URLSessionConfiguration; // ivar: _URLSessionConfiguration
@property (readonly) CMSAuthenticationConfiguration *authorizationConfiguration; // ivar: _authorizationConfiguration
@property (readonly) CMSAuthenticationCredential *authorizationCredential; // ivar: _authorizationCredential
@property (retain, nonatomic) CMSNetworkActivity *networkActivity; // ivar: _networkActivity
@property (readonly, nonatomic) CMSNetworkActivity *parentNetworkActivity; // ivar: _parentNetworkActivity


+(id)tokenHandlerWithConfiguration:(id)arg0 existingCredential:(id)arg1 URLSessionConfiguration:(id)arg2 parentNetworkActivity:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 existingCredential:(id)arg1 URLSessionConfiguration:(id)arg2 parentNetworkActivity:(id)arg3 ;
-(void)fetchTokens:(id)arg0 ;
-(void)performTokenFetchTaskWithSession:(id)arg0 bodyString:(id)arg1 completionHandler:(id)arg2 ;
-(void)performTokenGrantRequestWithSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)performTokenRefreshWithSession:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif