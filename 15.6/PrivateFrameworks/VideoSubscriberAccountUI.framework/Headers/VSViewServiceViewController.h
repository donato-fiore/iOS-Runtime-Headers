// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVIEWSERVICEVIEWCONTROLLER_H
#define VSVIEWSERVICEVIEWCONTROLLER_H

@class UIViewController, VSAuditToken, VSOptional, NSString, UINavigationController, VSPreferences, NSOperationQueue, VSRemoteNotifier, VSRestrictionsCenter, VSPersistentStorage;
@protocol VSViewServiceProtocol, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate;


#import "VSTopShelfPurger.h"

@interface VSViewServiceViewController : UIViewController <VSViewServiceProtocol, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate>



@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (copy, nonatomic) VSOptional *currentRequest; // ivar: _currentRequest
@property (retain, nonatomic) VSOptional *currentRequestID; // ivar: _currentRequestID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAuthenticateAccount; // ivar: _didAuthenticateAccount
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIdentityProviderPickerRequired) BOOL identityProviderPickerRequired; // ivar: _identityProviderPickerRequired
@property (retain, nonatomic) UINavigationController *navController; // ivar: _navController
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (nonatomic, getter=isPresentedInHost) BOOL presentedInHost; // ivar: _presentedInHost
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // ivar: _restrictionsCenter
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) VSTopShelfPurger *topShelfPurger; // ivar: _topShelfPurger


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)_identityProviderRequestForViewServiceRequest:(id)arg0 withAccount:(id)arg1 ;
-(id)_viewControllerHost;
-(id)_viewServiceResponseWithIdentityProviderResponse:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_completeRequest:(id)arg0 withResponse:(id)arg1 ;
-(void)_completeRequestWithResponse:(id)arg0 ;
-(void)_completeRequestWithResponse:(id)arg0 fromIdentityProvider:(id)arg1 ;
-(void)_determinePreAuthAppIsAuthorized:(id)arg0 completion:(id)arg1 ;
-(void)_didCancelRequest;
-(void)_didDetermineIdentityProvider:(id)arg0 withPickerViewController:(id)arg1 ;
-(void)_dismissInHostIfNecessary;
-(void)_performRequest:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_performRequestInternal:(id)arg0 withID:(id)arg1 identityProviders:(id)arg2 accounts:(id)arg3 currentStorefrontCode:(id)arg4 allStorefronts:(id)arg5 ;
-(void)_performRequestWithIdentityProvider:(id)arg0 account:(id)arg1 ;
-(void)_presentInHostIfNecessary;
-(void)_request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_requestDidFailWithError:(id)arg0 ;
-(void)_showIdentityProviderPickerViewControllerWithIdentityProviders:(id)arg0 currentStorefrontCode:(id)arg1 allStorefronts:(id)arg2 ;
-(void)_viewControllerWasDismissed;
-(void)_willAppearInRemoteViewController;
-(void)dealloc;
-(void)dismissIdentityProviderViewController:(id)arg0 ;
-(void)identityProviderPickerViewController:(id)arg0 didPickIdentityProvider:(id)arg1 ;
-(void)identityProviderPickerViewControllerDidCancel:(id)arg0 ;
-(void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)arg0 ;
-(void)identityProviderViewController:(id)arg0 didAuthenticateAccount:(id)arg1 forRequest:(id)arg2 ;
-(void)identityProviderViewController:(id)arg0 didFinishRequest:(id)arg1 withResult:(id)arg2 ;
-(void)identityProviderViewControllerDidCancel:(id)arg0 ;
-(void)identityProviderViewControllerDidFinishLoading:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;


@end


#endif