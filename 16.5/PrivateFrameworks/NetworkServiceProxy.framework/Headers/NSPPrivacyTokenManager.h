// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYTOKENMANAGER_H
#define NSPPRIVACYTOKENMANAGER_H

@class NSString, NSArray, NSURLSession;
@protocol OS_nw_resolver;

#import <Foundation/Foundation.h>


@interface NSPPrivacyTokenManager : NSObject {
    Class _authenticationClass;
    NSString *_tokenFetchURL;
    NSString *_accessTokenURL;
    NSArray *_accessTokenTypes;
    NSURLSession *_tokenFetchURLSession;
    NSUInteger _totalRequestedTokenCount;
    NSUInteger _totalUnactivatedTokenCount;
    NSUInteger _totalActivatedTokenCount;
    NSString *_trueClientIPAddress;
    NSObject<OS_nw_resolver> *_tokenEndpointResolver;
}




+(id)sharedTokenManager;
-(BOOL)updateTokenFetchURL:(id)arg0 accessTokenURL:(id)arg1 accessTokenTypes:(id)arg2 authenticationType:(int)arg3 ignoreInvalidCerts:(BOOL)arg4 ;
-(id)description;
-(id)tokenFetchURL;
-(void)copyTokenInfo:(id)arg0 ;
-(void)dealloc;
-(void)fetchPrivacyTokensOnInterface:(id)arg0 tierType:(id)arg1 proxyURL:(id)arg2 tokenVendor:(id)arg3 tokenIssuancePublicKey:(id)arg4 tokenCount:(NSUInteger)arg5 accessToken:(id)arg6 retryAttempt:(NSUInteger)arg7 completionHandler:(id)arg8 ;
-(void)fetchPrivateAccessTokenForChallenge:(id)arg0 tokenKey:(id)arg1 originNameKey:(id)arg2 selectedOrigin:(id)arg3 auditToken:(id)arg4 bundleID:(id)arg5 allowTools:(BOOL)arg6 accessToken:(id)arg7 completionHandler:(id)arg8 ;
-(void)getTokenServerIPWithInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif