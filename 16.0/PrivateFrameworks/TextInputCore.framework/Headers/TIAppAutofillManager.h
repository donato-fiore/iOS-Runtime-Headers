// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIAPPAUTOFILLMANAGER_H
#define TIAPPAUTOFILLMANAGER_H

@class SFAppAutoFillOneTimeCodeProvider, SFAppAutoFillPasskeyProvider, NSString, NSDate, NSUUID, LAContext, NSDictionary;
@protocol SFAppAutoFillOneTimeCodeProviderObserver;

#import <Foundation/Foundation.h>

#import "TIKeyboardSecureCandidateRenderer.h"

@interface TIAppAutofillManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver>

 {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
    SFAppAutoFillPasskeyProvider *_passkeyProvider;
}


@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration; // ivar: _clientIdentifierForLastAutofillGeneration
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync; // ivar: _clientIdentifierForLastKeyboardSync
@property (retain, nonatomic) NSDate *dateOfLastPasswordAutoFill; // ivar: _dateOfLastPasswordAutoFill
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration; // ivar: _documentIdentifierForLastAutofillGeneration
@property (readonly, nonatomic) BOOL hasOneTimeCode;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LAContext *laContext; // ivar: _laContext
@property (copy, nonatomic) NSString *lastAutofilledUsername; // ivar: _lastAutofilledUsername
@property (retain, nonatomic) NSDictionary *queuedCustomInfo; // ivar: _queuedCustomInfo
@property (retain, nonatomic) NSDictionary *queuedUnauthenticatedCustomInfo; // ivar: _queuedUnauthenticatedCustomInfo
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_simulatesAutofillCandidates;
-(BOOL)hasAutofillContextEntitlementForConnection:(id)arg0 ;
-(BOOL)isValidedString:(id)arg0 ;
-(BOOL)shouldAuthenticateToAcceptAutofill;
-(id)_autoFillPayloadForPasskey:(id)arg0 keyboardInfoType:(*NSUInteger)arg1 ;
-(id)_autoFillPayloadForPasswordCredential:(id)arg0 keyboardInfoType:(*NSUInteger)arg1 ;
-(id)_secureCandidateForPasskey:(id)arg0 fromLocalizedStringKey:(id)arg1 ;
-(id)_secureCandidateForPasswordCredential:(id)arg0 fromLocalizedStringKey:(id)arg1 ;
-(id)customInfoFromCredential:(id)arg0 ;
-(id)generateAutofillFormCandidatesWithRenderTraits:(id)arg0 withKeyboardState:(id)arg1 ;
-(id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg0 withKeyboardState:(id)arg1 ;
-(id)initPrivate;
-(id)obtainApplicationIdentifierFromConnection:(id)arg0 ;
-(id)obtainBundleIdentifierFromConnection:(id)arg0 ;
-(void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg0 withKeyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateHideMyEmailCandidateWithSlotID:(unsigned int)arg0 applicationBundleId:(id)arg1 applicationId:(id)arg2 keyboardState:(id)arg3 completionHandler:(id)arg4 ;
-(void)getCredentialsWithApplicationIdentifier:(id)arg0 autofillContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)obtainCredential:(id)arg0 ;
-(void)oneTimeCodeProvider:(id)arg0 didUpdateOneTimeCode:(id)arg1 ;
-(void)oneTimeCodeProviderReceivedCode:(id)arg0 ;
-(void)presentHideMyEmailUI:(id)arg0 keyboardState:(id)arg1 completion:(id)arg2 ;
-(void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg0 ;
-(void)reset;
-(void)shouldAcceptAutofill:(id)arg0 withPayload:(id)arg1 completion:(id)arg2 ;
-(void)shouldAcceptOneTimeCode:(id)arg0 completion:(id)arg1 ;


@end


#endif