// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYTOKENMANAGER_H
#define NSPPRIVACYTOKENMANAGER_H

@class NSString, NSURLSession;

#import <Foundation/Foundation.h>


@interface NSPPrivacyTokenManager : NSObject

@property (nonatomic) Class authenticationClass; // ivar: _authenticationClass
@property (retain, nonatomic) NSString *tokenFetchURL; // ivar: _tokenFetchURL
@property (retain, nonatomic) NSURLSession *tokenFetchURLSession; // ivar: _tokenFetchURLSession
@property (nonatomic) NSUInteger totalActivatedTokenCount; // ivar: _totalActivatedTokenCount
@property (nonatomic) NSUInteger totalRequestedTokenCount; // ivar: _totalRequestedTokenCount
@property (nonatomic) NSUInteger totalUnactivatedTokenCount; // ivar: _totalUnactivatedTokenCount
@property (retain, nonatomic) NSString *trueClientIPAddress; // ivar: _trueClientIPAddress


+(id)sharedTokenManager;
-(BOOL)updateTokenFetchURL:(id)arg0 authenticationType:(int)arg1 ignoreInvalidCerts:(BOOL)arg2 ;
-(id)activateTokens:(id)arg0 unactivatedListFromServer:(id)arg1 ;
-(id)description;
-(id)generateRandomTokens:(NSUInteger)arg0 ;
-(id)generateTokensUsingTokenBlinder:(id)arg0 tokenCount:(NSUInteger)arg1 ;
-(void)copyTokenInfo:(id)arg0 ;
-(void)dealloc;
-(void)fetchPrivacyTokensOnInterface:(id)arg0 tierType:(id)arg1 proxyURL:(id)arg2 tokenVendor:(id)arg3 tokenIssuancePublicKey:(id)arg4 tokenCount:(NSUInteger)arg5 accessToken:(id)arg6 completionHandler:(id)arg7 ;
-(void)fetchRequest:(id)arg0 requestType:(int)arg1 session:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif