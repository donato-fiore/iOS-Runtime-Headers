// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFFORMAUTOFILLCONTROLLER_H
#define _SFFORMAUTOFILLCONTROLLER_H

@class WKWebView<WBUFormAutoFillWebView>, _WKRemoteObjectInterface, NSTimer, WBSFormMetadata, NSMutableIndexSet, NSMutableSet, NSString, NSArray, NSDictionary, CNContact, WBSCreditCardData, NSSet, SFAppAutoFillOneTimeCodeProvider, UIView<WBUFormAutoFillWebView>;
@protocol SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient, SFFormAutoFillControllerDelegate, SFFormAutoFiller;

#import <Foundation/Foundation.h>

#import "SFFormAutocompleteState.h"
#import "SFFormAutoFillFrameHandle.h"
#import "_SFFormAutoFillInputSession.h"
#import "_SFAutoFillInputView.h"
#import "_SFAuthenticationContext.h"

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient>

 {
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id<SFFormAutoFillControllerDelegate> *_delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id<SFFormAutoFiller> *_autoFiller;
    BOOL _isCurrentlyAuthenticating;
    NSInteger _authenticationType;
    SFFormAutocompleteState *_state;
    SFFormAutocompleteState *_stateForPageLevelAutoFill;
    NSTimer *_prefillTimer;
    WBSFormMetadata *_unsubmittedForm;
    SFFormAutoFillFrameHandle *_unsubmittedFormFrame;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    NSString *_uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSArray *_uniqueIDsOfPasswordElementsForAutomaticPasswords;
    SFFormAutoFillFrameHandle *_frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession *_inputSessionForAutomaticPasswords;
    _SFAutoFillInputView *_autoFillInputView;
    NSArray *_preservedLeadingBarButtonGroups;
    NSArray *_preservedTrailingBarButtonGroups;
    BOOL _attemptedOfferingStreamlinedLogin;
    NSDictionary *_externalCredentialIdentitiesForStreamlinedAutoFill;
}


@property (readonly, nonatomic) _SFAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContact *lastFilledContact; // ivar: _lastFilledContact
@property (retain, nonatomic) WBSCreditCardData *lastFilledCreditCardData; // ivar: _lastFilledCreditCardData
@property (retain, nonatomic) NSSet *lastFilledCreditCardDataTypes; // ivar: _lastFilledCreditCardDataTypes
@property (nonatomic) BOOL metadataCorrectionsEnabled; // ivar: _metadataCorrectionsEnabled
@property (readonly, nonatomic) SFAppAutoFillOneTimeCodeProvider *oneTimeCodeProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;


+(id)_filterAndSortCredentialIdentities:(id)arg0 pageURL:(id)arg1 exactMatchesOnly:(BOOL)arg2 ;
+(void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg0 completion:(id)arg1 ;
+(void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg0 pageURL:(id)arg1 completion:(id)arg2 ;
-(BOOL)_showingAutoFillInputView;
-(BOOL)displayMessageAsTitleForContext:(id)arg0 ;
-(BOOL)elementIsBeingFocusedForStreamlinedLogin:(id)arg0 ;
-(BOOL)shouldShowIconsInPasswordPicker;
-(id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg0 generatedPassword:(id)arg1 ignorePreviousDecision:(BOOL)arg2 ;
-(id)_preFillDisabledHosts;
-(id)_simulatedWebEventForReturnKeyWithType:(int)arg0 ;
-(id)_websiteForAuthenticationPrompt;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg0 ;
-(id)authenticationMessageForContext:(id)arg0 ;
-(id)automaticPasswordForPasswordField:(id)arg0 inForm:(id)arg1 isFrame:(id)arg2 ;
-(id)beginAutomaticPasswordInteractionWithInputSession:(id)arg0 ;
-(id)initWithWebView:(id)arg0 delegate:(id)arg1 ;
-(id)passcodePromptForContext:(id)arg0 ;
-(void)_addUniqueIDsOfAutoFilledForm:(id)arg0 ;
-(void)_authenticateForAutoFillForHighLevelDomain:(id)arg0 withCompletion:(id)arg1 ;
-(void)_didFocusSensitiveFormField;
-(void)_dismissKeyboardAndSimulateCarriageReturnKeyEvents:(BOOL)arg0 ;
-(void)_fieldFocused:(id)arg0 inForm:(id)arg1 inFrame:(id)arg2 inputSession:(id)arg3 ;
-(void)_fieldFocusedWithInputSession:(id)arg0 ;
-(void)_hideInputAssistantItemsIfNecessary;
-(void)_prefillTimerFired:(id)arg0 ;
-(void)_removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg0 removeVisualTreatmentOnly:(BOOL)arg1 ;
-(void)_removeUniqueIDsOfAutoFilledForm:(id)arg0 ;
-(void)_restoreInputAssistantItemsIfNecessary;
-(void)annotateForm:(NSInteger)arg0 inFrame:(id)arg1 withValues:(id)arg2 ;
-(void)authenticateForAutoFillAuthenticationType:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)autoFill;
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg0 inFrame:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)autoFillForm:(NSInteger)arg0 inFrame:(id)arg1 withGeneratedPassword:(id)arg2 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 setAutoFilled:(BOOL)arg2 focusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 fieldsToObscure:(id)arg5 submitForm:(BOOL)arg6 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 setAutoFilled:(BOOL)arg2 focusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 submitForm:(BOOL)arg5 ;
-(void)autoFillInputViewDidSelectMorePasswords:(id)arg0 ;
-(void)autoFillInputViewDidSelectUseKeyboard:(id)arg0 ;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg0 withValue:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)autoFillTextSuggestion:(id)arg0 ;
-(void)automaticPasswordSheetDismissed;
-(void)beginAutomaticPasswordInteractionWithInputSession:(id)arg0 generatedPassword:(id)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didCollectFormMetadataForPageLevelAutoFill:(id)arg0 atURL:(id)arg1 ;
-(void)didCollectFormMetadataForPreFilling:(id)arg0 atURL:(id)arg1 ;
-(void)didCollectURLsForPreFilling:(id)arg0 atURL:(id)arg1 ;
-(void)didFillGeneratedPasswordInForm:(id)arg0 inFrame:(id)arg1 ;
-(void)didFillOneTimeCodeAndShouldSubmit:(BOOL)arg0 ;
-(void)didPerformPageLevelAutoFill:(BOOL)arg0 ;
-(void)didRemoveAutomaticStrongPasswordInForm:(id)arg0 inputSessionUserObject:(id)arg1 inFrame:(id)arg2 ;
-(void)didUpdateUnsubmittedForm:(id)arg0 inFrame:(id)arg1 ;
-(void)fetchMetadataForTextField:(id)arg0 inFrame:(id)arg1 withCompletion:(id)arg2 ;
-(void)fieldDidFocusWithInputSession:(id)arg0 ;
-(void)fieldFocusedWithInputSession:(id)arg0 ;
-(void)fieldWillFocusWithInputSession:(id)arg0 ;
-(void)fillTextField:(id)arg0 inFrame:(id)arg1 withGeneratedPassword:(id)arg2 ;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)invalidate;
-(void)offerToSaveUnsubmittedFormDataIfNeeded;
-(void)passwordFieldFocused:(id)arg0 inForm:(id)arg1 inFrame:(id)arg2 inputSession:(id)arg3 ;
-(void)performPageLevelAutoFill;
-(void)prefillFormsSoonIfNeeded;
-(void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg0 ;
-(void)removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg0 ;
-(void)removeAutomaticPasswordVisualTreatment;
-(void)setFormControls:(id)arg0 areAutoFilled:(BOOL)arg1 andClearField:(id)arg2 inFrame:(id)arg3 ;
-(void)suppressSoftwareKeyboardOnWebView:(BOOL)arg0 ;
-(void)textDidChangeInTextField:(id)arg0 inForm:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldFocused:(id)arg0 inForm:(id)arg1 inFrame:(id)arg2 inputSession:(id)arg3 ;
-(void)updateSuggestions;
-(void)usernameFieldFocused:(id)arg0 inForm:(id)arg1 inFrame:(id)arg2 inputSession:(id)arg3 ;
-(void)willNavigateFrame:(id)arg0 withUnsubmittedForm:(id)arg1 ;
-(void)willSubmitForm:(id)arg0 inFrame:(id)arg1 submissionHandler:(id)arg2 ;
-(void)willSubmitFormValues:(id)arg0 userObject:(id)arg1 submissionHandler:(id)arg2 ;


@end


#endif