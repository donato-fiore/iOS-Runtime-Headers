// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIBENEFICIARYCLAIMREMOTEUICONTROLLER_H
#define AAUIBENEFICIARYCLAIMREMOTEUICONTROLLER_H

@class ACAccount, AKAppleIDServerResourceLoadDelegate, NSString, AKAppleIDAuthenticationController, RUIObjectModel;
@protocol RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>

#import "AAUIRemoteUIController.h"

@interface AAUIBeneficiaryClaimRemoteUIController : NSObject <RemoteUIControllerDelegate>

 {
    ACAccount *_grandSlamAccount;
    ACAccount *_appleAccount;
    AKAppleIDServerResourceLoadDelegate *_serverUILoadDelegate;
    NSString *_secondaryToken;
    AKAppleIDAuthenticationController *_authController;
    AAUIRemoteUIController *_benefeciaryClaimRemoteUIController;
    RUIObjectModel *_currentObjectModel;
    NSString *_claimCode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)_authController;
-(id)_grandSlamAccount;
-(id)initWithAppleAccount:(id)arg0 claimCode:(id)arg1 ;
-(id)remoteUIController:(id)arg0 createPageWithName:(id)arg1 attributes:(id)arg2 ;
-(void)_addHeadersToRequest:(id)arg0 ;
-(void)_cancelButtonForRemoteObjectModelWasTapped:(id)arg0 ;
-(void)_getServerUILoadDelegateWithCompletion:(id)arg0 ;
-(void)_handleObjectModelChangeForController:(id)arg0 objectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(void)presentRemoteUIFromNavigationController:(id)arg0 withCompletion:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didRefreshObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;


@end


#endif