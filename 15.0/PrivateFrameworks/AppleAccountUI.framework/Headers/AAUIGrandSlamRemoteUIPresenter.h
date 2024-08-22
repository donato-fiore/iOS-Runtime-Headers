// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIGRANDSLAMREMOTEUIPRESENTER_H
#define AAUIGRANDSLAMREMOTEUIPRESENTER_H

@class RemoteUIController, AIDAAccountManager, ACAccount, AKAppleIDServerResourceLoadDelegate, NSURLRequest, NSString, UIViewController;
@protocol RemoteUIControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerUIHookHandler.h"

@interface AAUIGrandSlamRemoteUIPresenter : NSObject <RemoteUIControllerDelegate>

 {
    RemoteUIController *_remoteUIController;
    AIDAAccountManager *_accountManager;
    ACAccount *_grandSlamAccount;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSURLRequest *_currentRequest;
    AAUIServerUIHookHandler *_aauiServerUIHookHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIGrandSlamRemoteUIPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(BOOL)_isAuthError:(id)arg0 ;
-(id)_accountStore;
-(id)_appleAccount;
-(id)_authContext;
-(id)_grandSlamAccount;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 hooks:(id)arg2 ;
-(id)remoteUIController:(id)arg0 createPageWithName:(id)arg1 attributes:(id)arg2 ;
-(void)_addHeadersToRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_getServerUILoadDelegateWithCompletion:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;


@end


#endif