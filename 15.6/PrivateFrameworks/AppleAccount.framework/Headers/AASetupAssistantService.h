// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASETUPASSISTANTSERVICE_H
#define AASETUPASSISTANTSERVICE_H

@class NSOperationQueue, ACAccount, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "AASigningSession.h"

@interface AASetupAssistantService : NSObject {
    NSOperationQueue *_requesterQueue;
    ACAccount *_account;
    *OpaqueCFHTTPCookieStorage _cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}


@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *emailChoice; // ivar: _emailChoice
@property (copy, nonatomic) NSString *password; // ivar: _password


+(id)urlConfiguration;
+(void)resetURLConfiguration;
-(id)_signingSession;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAppleID:(id)arg0 password:(id)arg1 ;
-(void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg0 data:(id)arg1 ;
-(void)_doHSADeviceProvisioningWithDSID:(id)arg0 data:(id)arg1 ;
-(void)_doHSADeviceReprovisioningWithDSID:(id)arg0 ;
-(void)authenticateWithHandler:(id)arg0 ;
-(void)createAppleIDWithParameters:(id)arg0 handler:(id)arg1 ;
-(void)createAppleIDWithParameters:(id)arg0 handlerWithResponse:(id)arg1 ;
-(void)dealloc;
-(void)downloadURLConfiguration:(id)arg0 ;
-(void)loginDelegatesWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(void)setupDelegateAccountsWithParameters:(id)arg0 handler:(id)arg1 ;
-(void)shouldPresentUpgradeFlowWithCompletion:(id)arg0 ;
-(void)updateAppleIDWithParameters:(id)arg0 handler:(id)arg1 ;
-(void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg0 handler:(id)arg1 ;
-(void)upgradeiCloudTermsIfNecessaryWithHandler:(id)arg0 ;


@end


#endif