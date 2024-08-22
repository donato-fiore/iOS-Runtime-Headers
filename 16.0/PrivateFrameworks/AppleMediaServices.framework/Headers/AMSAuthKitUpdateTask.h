// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSAUTHKITUPDATETASK_H
#define AMSAUTHKITUPDATETASK_H

@class ACAccount, NSString;
@protocol AKAppleIDAuthenticationDelegate, AMSAuthKitUpdateTaskDelegate;


#import "AMSTask.h"
#import "AMSAuthenticateOptions.h"

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSAuthKitUpdateTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSAuthenticateOptions *options; // ivar: _options
@property (readonly) Class superclass;


+(void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)arg0 ;
-(BOOL)_canPresentBackgroundPrompt;
-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(NSUInteger)_authenticationType;
-(id)_createAuthKitContext;
-(id)_createAuthKitController;
-(id)initWithAccount:(id)arg0 options:(id)arg1 ;
-(id)performAuthKitUpdate;
-(void)_configureAuthKitContext:(id)arg0 ;
-(void)_configureClientInfoForContext:(id)arg0 ;
-(void)_configureCompanionDeviceForContext:(id)arg0 ;
-(void)_configureIdentifiersForContext:(id)arg0 ;
-(void)_configureProxyIdentifiersForContext:(id)arg0 ;
-(void)_configureStringsForContext:(id)arg0 ;
-(void)_logPromptSummaryForResults:(id)arg0 context:(id)arg1 ;


@end


#endif