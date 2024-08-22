// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIGENERICTERMSREMOTEUI_H
#define AAUIGENERICTERMSREMOTEUI_H

@class UINavigationController, RUILoader, NSMutableArray, NSSet, ACAccount, ACAccountStore, NSString, UIViewController;
@protocol RUILoaderDelegate, RUIObjectModelDelegate, AAUIGenericTermsRemoteUIDelegate;

#import <Foundation/Foundation.h>


@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate>

 {
    UINavigationController *_parentNavController;
    UINavigationController *_genericTermsUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    NSSet *_termsEntries;
    BOOL _isModal;
    BOOL _isPreferringPassword;
    BOOL _isPresentingGenericTermsUIModally;
    BOOL _didRenewCredentials;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIGenericTermsRemoteUIDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController *originatingViewController; // ivar: _originatingViewController
@property (readonly) Class superclass;


-(BOOL)_isUnauthorizedError:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientationsForObjectModel:(id)arg0 page:(id)arg1 ;
-(id)_authContextForRenewCredentials;
-(id)initWithAccount:(id)arg0 inStore:(id)arg1 ;
-(id)initWithAccount:(id)arg0 inStore:(id)arg1 termsEntries:(id)arg2 ;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(id)sessionConfigurationForLoader:(id)arg0 ;
-(id)viewControllerForAlertPresentation;
-(void)_addHeadersToRequest:(id)arg0 ;
-(void)_agreeToTermsWithURLString:(id)arg0 preferPassword:(BOOL)arg1 completion:(id)arg2 ;
-(void)_cleanUpAndDismissWithSuccess:(BOOL)arg0 agreeURL:(id)arg1 ;
-(void)_cleanupRUILoader;
-(void)_displayConnectionErrorAndDismiss;
-(void)_loadRequestPreferringPassword:(BOOL)arg0 ;
-(void)_popObjectModelAnimated:(BOOL)arg0 ;
-(void)_renewCredentialsWithCompletion:(id)arg0 ;
-(void)_sendAcceptedTermsInfo:(id)arg0 ;
-(void)loader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)loader:(id)arg0 receivedObjectModel:(id)arg1 actionSignal:(NSUInteger)arg2 ;
-(void)objectModel:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg0 ;
-(void)presentFromViewController:(id)arg0 modal:(BOOL)arg1 ;


@end


#endif