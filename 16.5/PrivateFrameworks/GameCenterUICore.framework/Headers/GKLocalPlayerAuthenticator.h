// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLOCALPLAYERAUTHENTICATOR_H
#define GKLOCALPLAYERAUTHENTICATOR_H

@class NSString, GKLocalPlayer, NSDate, UIViewController, RemoteUIController, GKDispatchGroup, UINavigationController, NSMutableArray;
@protocol RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>


@interface GKLocalPlayerAuthenticator : NSObject <RemoteUIControllerDelegate>



@property (retain) NSString *alertMessage; // ivar: _alertMessage
@property (retain) NSString *alertTitle; // ivar: _alertTitle
@property (getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (getter=isAuthenticating) BOOL authenticating; // ivar: _authenticating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL forceAuthentication; // ivar: _forceAuthentication
@property (readonly) NSUInteger hash;
@property (retain) GKLocalPlayer *inputLocalPlayer; // ivar: _inputLocalPlayer
@property (retain) NSDate *lastAuthDate; // ivar: _lastAuthDate
@property (retain) NSString *lastAuthPlayerID; // ivar: _lastAuthPlayerID
@property (copy) NSString *password; // ivar: _password
@property UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) RemoteUIController *remoteU13Controller; // ivar: _remoteU13Controller
@property (retain) GKLocalPlayer *resultantLocalPlayer; // ivar: _resultantLocalPlayer
@property (readonly) Class superclass;
@property (retain, nonatomic) GKDispatchGroup *u13Group; // ivar: _u13Group
@property (retain, nonatomic) UINavigationController *u13NavigationController; // ivar: _u13NavigationController
@property (retain, nonatomic) NSMutableArray *u13ObjectModels; // ivar: _u13ObjectModels
@property (nonatomic) BOOL userShouldSkipCreateAppleID; // ivar: _userShouldSkipCreateAppleID
@property (copy) NSString *username; // ivar: _username


+(BOOL)shouldDisableLoginConsideringSharePlayAvailabilityWithAuthenticateResponse:(id)arg0 ;
+(id)authenticatorForExistingPlayer:(id)arg0 ;
+(id)authenticatorForExistingPlayer:(id)arg0 withPresentingViewController:(id)arg1 ;
+(id)authenticatorForPlayerWithUsername:(id)arg0 password:(id)arg1 ;
+(id)authenticatorForPlayerWithUsername:(id)arg0 password:(id)arg1 withPresentingViewController:(id)arg2 ;
+(void)postURL:(id)arg0 postBody:(id)arg1 completion:(id)arg2 ;
-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(BOOL)shouldAuthenticateForGameCenter;
-(id)init;
// -(void)_authenticateUsingAuthUI:(BOOL)arg0 authenticationResults:(id)arg1 usernameEditable:(BOOL)arg2 authUIDismissHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)_handleAuthResponse:(id)arg0 error:(id)arg1 handler:(id)arg2 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)authenticateExistingUserAuthUIWithCompletionHandler:(id)arg0 ;
-(void)authenticateFromExternalServiceWithAuthenticationResults:(id)arg0 withHandler:(id)arg1 ;
// -(void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg0 usernameEditable:(BOOL)arg1 dismissHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)authenticateUsingAuthUIWithCompletionHandler:(id)arg0 ;
-(void)authenticateWithAuthKitResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticateWithCompletionHandler:(id)arg0 ;
-(void)authenticationDidComplete;
-(void)cancelAuthDueToAuthKitErrorWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleAuthKitResultsForUnder13WithContinuationData:(id)arg0 altDSID:(id)arg1 password:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)reset;


@end


#endif