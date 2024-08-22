// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAPPLEIDAUTHENTICATIONCOMMANDLINECONTEXT_H
#define AKAPPLEIDAUTHENTICATIONCOMMANDLINECONTEXT_H

@class NSDate, NSString, NSNumber;
@protocol AKAppleIDServerAuthenticationUIProvider;


#import "AKAppleIDAuthenticationContext.h"
#import "AKCommandLineUtilities.h"

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider>



@property (copy, nonatomic) NSDate *birthday; // ivar: _birthday
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (copy, nonatomic) NSNumber *secondFactorCode; // ivar: _secondFactorCode
@property (retain, nonatomic) NSString *securityCode; // ivar: _securityCode
@property (readonly) Class superclass;
@property (nonatomic) BOOL termsAccepted; // ivar: _termsAccepted
@property (readonly, nonatomic) AKCommandLineUtilities *utility; // ivar: _utility
@property (readonly, nonatomic) NSInteger verificationType; // ivar: _verificationType


-(NSUInteger)_capabilityForUIDisplay;
-(id)_accountCreationRequestBodyFromResponseDictionary:(id)arg0 shouldIncludePhoneNumber:(BOOL)arg1 shouldIncludeForSecurityCode:(BOOL)arg2 ;
-(id)_accountDictionary;
-(id)_createContextDictionaryFromResponse:(id)arg0 ;
-(id)_jsonPostbackDictionaryForCode:(id)arg0 numberId:(id)arg1 ;
-(id)_parseHeaderTitleForPasscodeView:(id)arg0 ;
-(id)_parseTrustedPhoneNumberFromResponseDictionary:(id)arg0 ;
-(id)_promptForBirthday;
-(id)_promptForFirstName;
-(id)_promptForLastName;
-(id)_promptForPassword;
-(id)_promptForPhoneNumber;
-(id)_promptForUsername;
-(id)_promptForVerificationCodeWithSecureEntry:(BOOL)arg0 forTrustedNumber:(id)arg1 ;
-(id)_promptUserForSelectionWithTrustedNumbers:(id)arg0 ;
-(id)_promptUserForTermsWithResponseDictionary:(id)arg0 ;
-(id)_xmlUIRequestForURL:(id)arg0 withPostbackDictionary:(id)arg1 ;
-(id)_xmlUIRequestForURL:(id)arg0 withServerInfo:(id)arg1 ;
-(id)init;
-(id)initWithVerificationType:(NSInteger)arg0 ;
-(void)_beginDataTaskWithRequest:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_collectAndHandleTermsAndConditionsWithResponseDictionary:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_collectAndPostSecondFactorCodeWithRequestBody:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_handleServerUIBirthdayVerificationWithResponseDictionary:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_handleServerUIPasswordVerificationWithResponseDictionary:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_handleServerUIPhoneVerificationWithResponseDictionary:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_handleServerUISMSVerificationWithResponseDictionary:(id)arg0 statusCode:(NSInteger)arg1 configuration:(id)arg2 completion:(id)arg3 ;
-(void)_handleServerUISecondFactorWithObjectModel:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_handleServerUIWithDictionary:(id)arg0 statusCode:(NSInteger)arg1 configuration:(id)arg2 completion:(id)arg3 ;
-(void)_presentServerUISecondFactorWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_verifySecondFactorCodeWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(id)arg0 ;
-(void)dismissSecondFactorUIWithCompletion:(id)arg0 ;
-(void)dismissServerProvidedUIWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentSecondFactorAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentSecondFactorUIWithCompletion:(id)arg0 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)setNeedsNewAppleID:(BOOL)arg0 ;


@end


#endif