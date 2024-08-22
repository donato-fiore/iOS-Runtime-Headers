// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAUTHENTICATETASK_H
#define AMSAUTHENTICATETASK_H

@class NSNumber, NSString, NSMutableArray, NSUUID, NSDictionary;
@protocol AMSBagConsumer, AMSBagProtocol, AMSAuthenticateTaskDelegate;


#import "AMSTask.h"
#import "AMSAuthenticateOptions.h"
#import "AMSPromise.h"

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSAuthenticateTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *errors; // ivar: _errors
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (retain, nonatomic) NSUUID *homeUserIdentifier; // ivar: _homeUserIdentifier
@property (readonly, nonatomic) NSDictionary *initialAuthenticationResults; // ivar: _initialAuthenticationResults
@property (copy, nonatomic) NSString *multiUserToken; // ivar: _multiUserToken
@property (readonly, nonatomic) AMSAuthenticateOptions *options; // ivar: _options
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *rawPassword; // ivar: _rawPassword
@property (retain, nonatomic) AMSPromise *resultPromise; // ivar: _resultPromise
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)_loadCreateAppleIDwithClientInfo:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;
+(id)_createFallbackBag;
+(id)createBagForSubProfile;
+(void)_updateAccountPasswordUsingSecondaryAccounts:(id)arg0 ;
-(id)_accountForAuthenticationWithError:(*id)arg0 ;
-(id)_accountStoreForAuthentication;
-(id)_attemptPasswordReuseAuthenticationForAccount:(id)arg0 ;
-(id)_createAuthKitUpdateTaskForAccount:(id)arg0 ;
-(id)_handleDialogFromError:(id)arg0 ;
-(id)_performAuthenticationUsingAccount:(id)arg0 credentialSource:(NSUInteger)arg1 ;
-(id)_runDialogRequest:(id)arg0 ;
-(id)_sanitizeError:(id)arg0 ;
-(id)homeID;
-(id)init;
-(id)initWithAccount:(id)arg0 options:(id)arg1 ;
-(id)initWithAccount:(id)arg0 options:(id)arg1 bag:(id)arg2 ;
-(id)initWithAuthenticationResults:(id)arg0 options:(id)arg1 ;
-(id)initWithAuthenticationResults:(id)arg0 options:(id)arg1 bag:(id)arg2 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)performAuthentication;
-(void)_attemptMultiUserTokenAuthenticationForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_finishWithVerifiedAccount:(id)arg0 andAuthKitUpdateResult:(id)arg1 ;
-(void)_performAuthenticationAndGeneratePasswordWithAccount:(id)arg0 ;
-(void)_performAuthenticationWithInitialResultsAndAccount:(id)arg0 ;
-(void)_postFollowUpForFailedAuthenticationWithAccount:(id)arg0 ;
-(void)_processAuthKitUpdateResult:(id)arg0 ;
-(void)_runCreateAccountDialogWithCompletion:(id)arg0 ;
-(void)_updateAccountWithProvidedInformation:(id)arg0 ;
-(void)setHomeID:(id)arg0 ;


@end


#endif