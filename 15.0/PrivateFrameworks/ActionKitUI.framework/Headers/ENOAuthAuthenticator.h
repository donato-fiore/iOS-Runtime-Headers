// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENOAUTHAUTHENTICATOR_H
#define ENOAUTHAUTHENTICATOR_H

@class UINavigationController, NSString, ENCredentialStore, UIViewController, NSArray, NSMutableData, NSURLResponse;
@protocol ENLoadingViewControllerDelegate, ENOAuthViewControllerDelegate, ENAuthenticator, ENAuthenticatorDelegate;

#import <Foundation/Foundation.h>

#import "ENOAuthViewController.h"

@interface ENOAuthAuthenticator : NSObject <ENLoadingViewControllerDelegate, ENOAuthViewControllerDelegate, ENAuthenticator>



@property (retain, nonatomic) UINavigationController *authenticationViewController; // ivar: _authenticationViewController
@property (copy, nonatomic) NSString *consumerKey; // ivar: _consumerKey
@property (copy, nonatomic) NSString *consumerSecret; // ivar: _consumerSecret
@property (retain, nonatomic) ENCredentialStore *credentialStore; // ivar: _credentialStore
@property (copy, nonatomic) NSString *currentProfile; // ivar: _currentProfile
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENAuthenticatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (nonatomic) BOOL inProgress; // ivar: _inProgress
@property (nonatomic) BOOL isActiveBecauseOfCallback; // ivar: _isActiveBecauseOfCallback
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) BOOL isMultitaskLoginDisabled; // ivar: _isMultitaskLoginDisabled
@property (nonatomic) BOOL isSwitchingInProgress; // ivar: _isSwitchingInProgress
@property (retain, nonatomic) ENOAuthViewController *oauthViewController; // ivar: _oauthViewController
@property (nonatomic) BOOL preferRegistration; // ivar: _preferRegistration
@property (retain, nonatomic) NSArray *profiles; // ivar: _profiles
@property (retain, nonatomic) NSMutableData *receivedData; // ivar: _receivedData
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsLinkedAppNotebook; // ivar: _supportsLinkedAppNotebook
@property (copy, nonatomic) NSString *tokenSecret; // ivar: _tokenSecret
@property (nonatomic) BOOL useWebAuthenticationOnly; // ivar: _useWebAuthenticationOnly
@property (nonatomic) BOOL userSelectedLinkedAppNotebook; // ivar: _userSelectedLinkedAppNotebook


+(id)deviceDescription;
+(id)parametersFromQueryString:(id)arg0 ;
+(id)queryStringFromParameters:(id)arg0 ;
+(id)scrubString:(id)arg0 usingRegex:(id)arg1 withMaxLength:(unsigned short)arg2 ;
-(BOOL)canHandleSwitchProfileURL:(id)arg0 ;
-(BOOL)handleOpenURL:(id)arg0 ;
-(id)callbackScheme;
-(id)init;
-(id)oauthCallback;
-(id)userAuthorizationURLStringWithParameters:(id)arg0 ;
-(void)authenticateWithViewController:(id)arg0 ;
-(void)completeAuthenticationWithCredentials:(id)arg0 usesLinkedAppNotebook:(BOOL)arg1 ;
-(void)completeAuthenticationWithError:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)disableIsActiveBecauseOfCallback;
-(void)emptyCookieJar;
-(void)enableIsActiveBecauseOfCallback;
-(void)getOAuthTokenForURL:(id)arg0 ;
-(void)gotCallbackURL:(id)arg0 ;
-(void)handleDidBecomeActive;
-(void)loadingViewControllerDidCancel:(id)arg0 ;
-(void)oauthViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)oauthViewController:(id)arg0 receivedOAuthCallbackURL:(id)arg1 ;
-(void)oauthViewControllerDidCancel:(id)arg0 ;
-(void)oauthViewControllerDidSwitchProfile:(id)arg0 ;
-(void)openOAuthViewControllerWithURL:(id)arg0 ;
-(void)startOauthAuthentication;
-(void)switchProfile;
-(void)updateCurrentBootstrapProfileWithName:(id)arg0 ;
-(void)verifyCFBundleURLSchemes;


@end


#endif