// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAREQUESTCONFIGURATOR_H
#define FAREQUESTCONFIGURATOR_H

@class ACAccount, ACAccountStore, AAGrandSlamSigner, AIDAServiceOwnersManager, AKAppleIDSigningController, AKAppleIDServerResourceLoadDelegate, NSData, AKAppleIDAuthenticationContext;

#import <Foundation/Foundation.h>


@interface FARequestConfigurator : NSObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AKAppleIDSigningController *_akSigningController;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSData *_pushToken;
}


@property (nonatomic) BOOL attachSetupHeader; // ivar: _attachSetupHeader
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // ivar: _authContext


-(id)_account;
-(id)_accountStore;
-(id)_akSigningController;
-(id)_familyGrandSlamSigner;
-(id)_familyTokenForGrandSlamAccount:(id)arg0 andTokenID:(id)arg1 ;
-(id)_fresnoPayloadWithAdditionalPayload:(id)arg0 ;
-(id)_grandSlamAccount;
-(id)_grandSlamSigner;
-(id)_serviceOwnersManager;
-(id)initWithAccount:(id)arg0 ;
-(void)_addAccountForServiceType:(id)arg0 toPayload:(id)arg1 forKey:(id)arg2 ;
-(void)_resourceLoadDelegate:(id)arg0 ;
-(void)addFresnoHeadersToRequest:(id)arg0 ;
-(void)addFresnoHeadersToRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)addFresnoPayloadToRequest:(id)arg0 additionalPayload:(id)arg1 ;
-(void)addPayload:(id)arg0 toRequest:(id)arg1 ;
-(void)pushTokenWithCompletion:(id)arg0 ;
-(void)renewCredentialsWithCompletion:(id)arg0 ;


@end


#endif