// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENOAUTHAUTHENTICATOR_H
#define ENOAUTHAUTHENTICATOR_H

@class NSString, NSArray, NSMutableData, NSURLResponse;
@protocol ENAuthenticator, ENAuthenticatorDelegate;

#import <Foundation/Foundation.h>

#import "ENCredentialStore.h"

@interface ENOAuthAuthenticator : NSObject <ENAuthenticator>



@property (copy, nonatomic) NSString *consumerKey; // ivar: _consumerKey
@property (copy, nonatomic) NSString *consumerSecret; // ivar: _consumerSecret
@property (retain, nonatomic) ENCredentialStore *credentialStore; // ivar: _credentialStore
@property (copy, nonatomic) NSString *currentProfile; // ivar: _currentProfile
@property (weak, nonatomic) NSObject<ENAuthenticatorDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) BOOL inProgress; // ivar: _inProgress
@property (nonatomic) BOOL isActiveBecauseOfCallback; // ivar: _isActiveBecauseOfCallback
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) BOOL isSwitchingInProgress; // ivar: _isSwitchingInProgress
@property (nonatomic) BOOL preferRegistration; // ivar: _preferRegistration
@property (retain, nonatomic) NSArray *profiles; // ivar: _profiles
@property (retain, nonatomic) NSMutableData *receivedData; // ivar: _receivedData
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) BOOL supportsLinkedAppNotebook; // ivar: _supportsLinkedAppNotebook
@property (copy, nonatomic) NSString *tokenSecret; // ivar: _tokenSecret
@property (nonatomic) BOOL useWebAuthenticationOnly; // ivar: _useWebAuthenticationOnly
@property (nonatomic) BOOL userSelectedLinkedAppNotebook; // ivar: _userSelectedLinkedAppNotebook


+(id)deviceDescription;
+(id)parametersFromQueryString:(id)arg0 ;
+(id)queryStringFromParameters:(id)arg0 ;
-(BOOL)canHandleSwitchProfileURL:(id)arg0 ;
-(BOOL)handleOpenURL:(id)arg0 ;
-(id)callbackScheme;
-(id)oauthCallback;
-(id)userAuthorizationURLStringWithParameters:(id)arg0 ;
-(void)authenticate;
-(void)completeAuthenticationWithCredentials:(id)arg0 usesLinkedAppNotebook:(BOOL)arg1 ;
-(void)completeAuthenticationWithError:(id)arg0 ;
-(void)didFinishLoading;
-(void)disableIsActiveBecauseOfCallback;
-(void)emptyCookieJar;
-(void)enableIsActiveBecauseOfCallback;
-(void)failedWithError:(id)arg0 ;
-(void)getOAuthTokenForURL:(id)arg0 ;
-(void)gotCallbackURL:(id)arg0 ;
-(void)handleDidBecomeActive;
-(void)receivedData:(id)arg0 ;
-(void)receivedResponse:(id)arg0 ;
-(void)startOauthAuthentication;
-(void)switchProfile;
-(void)updateCurrentBootstrapProfileWithName:(id)arg0 ;


@end


#endif