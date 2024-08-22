// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIGRANDSLAMREMOTEUIPRESENTER_H
#define AAUIGRANDSLAMREMOTEUIPRESENTER_H

@class RemoteUIController, AIDAAccountManager, ACAccount, AKAppleIDServerResourceLoadDelegate, NSURLRequest, RUIServerHookHandler, NSString, UIViewController;
@protocol RemoteUIControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerHookHandlerDelegate.h"

@interface AAUIGrandSlamRemoteUIPresenter : NSObject <RemoteUIControllerDelegate>

 {
    RemoteUIController *_remoteUIController;
    AIDAAccountManager *_accountManager;
    ACAccount *_grandSlamAccount;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSURLRequest *_currentRequest;
    RUIServerHookHandler *_serverUIHookHandler;
    AAUIServerHookHandlerDelegate *_serverUIHookHandlerDelegate;
    BOOL _isEndOfFlow;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIGrandSlamRemoteUIPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isModalInPresentation) BOOL modalInPresentation; // ivar: _modalInPresentation
@property (weak, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (nonatomic) BOOL showCancelInModalPresentation; // ivar: _showCancelInModalPresentation
@property (readonly) Class superclass;


-(BOOL)_checkFlowEndForResponse:(id)arg0 ;
-(BOOL)_isAuthError:(id)arg0 ;
-(id)_accountStore;
-(id)_appleAccount;
-(id)_authContext;
-(id)_grandSlamAccount;
-(id)_remoteUICancelButtonForPage:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 hookType:(NSUInteger)arg1 presenter:(id)arg2 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 hooks:(id)arg2 ;
-(id)remoteUIController:(id)arg0 createPageWithName:(id)arg1 attributes:(id)arg2 ;
-(void)_addHeadersToRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_addRemoteUIEventHandler;
-(void)_getServerUILoadDelegateWithCompletion:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 didRefreshObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;


@end


#endif