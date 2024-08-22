// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFFORMAUTOCOMPLETESTATE_H
#define SFFORMAUTOCOMPLETESTATE_H

@class UIView, WBSFormMetadata, NSDictionary, NSString, WBSFormControlMetadata, NSArray, WBSFormAutoFillMetadataCorrector, _ASPasswordCredentialAuthenticationViewController, WBSHideMyEmailRecord, WBSMultiRoundAutoFillManager;
@protocol CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, SFAppAutoFillOneTimeCodeProviderObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "_SFFormAutoFillController.h"
#import "_SFFormDataController.h"
#import "SFFormAutoFillFrameHandle.h"
#import "_SFFormAutoFillInputSession.h"

@interface SFFormAutocompleteState : NSObject <CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, SFAppAutoFillOneTimeCodeProviderObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate>

 {
    NSInteger _action;
    _SFFormAutoFillController *_autoFillController;
    _SFFormDataController *_dataController;
    UIView *_emptyInputView;
    WBSFormMetadata *_formMetadata;
    NSUInteger _formType;
    NSDictionary *_formValues;
    SFFormAutoFillFrameHandle *_frame;
    BOOL _gatheringFormValues;
    BOOL _hasNotedThatTextDidChangeInPasswordField;
    NSString *_prefixForSuggestions;
    WBSFormControlMetadata *_textFieldMetadata;
    NSArray *_cachedCredentialMatches;
    NSArray *_cachedRelatedCredentialMatches;
    id *_credentialMatchesCompletionHandler;
    BOOL _fetchingLoginCredentialSuggestions;
    BOOL _invalidated;
    BOOL _hasDeterminedIfURLIsAllowedByWhiteList;
    BOOL _URLIsAllowedByWhiteList;
    id *_displayOtherContactsCompletionHandler;
    id *_customAutoFillContactCompletionHandler;
    id *_creditCardCaptureCompletionHandler;
    WBSFormAutoFillMetadataCorrector *_metadataCorrector;
    NSArray *_cachedExternalCredentialIdentities;
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    id *_externalCredentialListCompletionHandler;
    BOOL _submitExternalCredential;
    BOOL _performingPageLevelAutoFill;
    WBSHideMyEmailRecord *_hideMyEmailRecord;
}


@property (readonly, nonatomic) NSInteger action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFFormAutoFillInputSession *inputSession; // ivar: _inputSession
@property (readonly, nonatomic) WBSMultiRoundAutoFillManager *multiRoundAutoFillManager; // ivar: _multiRoundAutoFillManager
@property (readonly, nonatomic) BOOL shouldOfferToAutoFillCreditCardData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *titleOfAutoFillButton;


+(BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg0 ;
+(void)_getMatchesFromFormProtectionSpace:(id)arg0 matchesFromOtherProtectionSpaces:(id)arg1 withFormURL:(id)arg2 credentialMatches:(id)arg3 lastGeneratedPassword:(id)arg4 currentUser:(id)arg5 currentPassword:(id)arg6 forUserNamesOnly:(BOOL)arg7 ;
-(BOOL)_canAutoFillCreditCardData;
-(BOOL)_hasMatchWithUser:(id)arg0 password:(id)arg1 ;
-(BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
-(BOOL)_shouldAllowExternalPasswordAutoFillOnURL:(id)arg0 ;
-(BOOL)_shouldAllowGeneratedPassword;
-(BOOL)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)arg0 ;
-(BOOL)_shouldShowPasswordOptions;
-(BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
-(BOOL)_suggestUsernamesForRegistrationIfPossible:(NSUInteger)arg0 ;
-(BOOL)_textFieldIsEmptyPasswordField;
-(BOOL)_textFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField:(id)arg0 ;
-(NSInteger)_passwordGenerationAssistanceAction;
-(id)_actionForPresentingPasswordManagerExtension:(id)arg0 completionHandler:(id)arg1 ;
-(id)_addHideMyEmailSuggestionsIfNecessary:(id)arg0 hideMyEmailRecord:(id)arg1 ;
-(id)_bestTextFieldMetadataForMetadata:(id)arg0 ;
-(id)_cachedPotentialCredentialMatches;
-(id)_correctedFormMetadata:(id)arg0 ;
-(id)_hideMyEmailCreationSuggestion;
-(id)_hideMyEmailSuggestionForRecord:(id)arg0 ;
-(id)_messageForPageLevelAutoFillNotAvailableAlertForResult:(NSInteger)arg0 ;
-(id)_sortedSingleCreditCardDataArray:(id)arg0 ;
-(id)_suggestionsForAutoFillDisplayData:(id)arg0 ;
-(id)_textSuggestionForCredentialDisplayData:(id)arg0 submitForm:(BOOL)arg1 ;
-(id)_textSuggestionForExternalCredentialIdentity:(id)arg0 submitForm:(BOOL)arg1 ;
-(id)_titleForPageLevelAutoFillNotAvailableAlertForResult:(NSInteger)arg0 ;
-(id)_viewControllerToPresentFrom;
-(id)externalCredentialIdentities;
-(id)initWithFrame:(id)arg0 form:(id)arg1 textField:(id)arg2 inputSession:(id)arg3 autoFillController:(id)arg4 ;
-(void)_autoFillCreditCardData;
-(void)_autoFillDisplayData:(id)arg0 setAutoFilled:(BOOL)arg1 ;
-(void)_autoFillFormWithUsername:(id)arg0 ;
-(void)_autoFillHideMyEmailRecord:(id)arg0 ;
-(void)_autoFillSingleCreditCardData:(NSInteger)arg0 ;
-(void)_autoFillWithSet:(id)arg0 ;
-(void)_captureCreditCardDataWithCameraAndFill;
-(void)_fetchPotentialCredentialMatchesWithCompletion:(id)arg0 ;
-(void)_fillASPasswordCredential:(id)arg0 needsAuthentication:(BOOL)arg1 setAutoFilled:(BOOL)arg2 submitForm:(BOOL)arg3 ;
-(void)_fillCredential:(id)arg0 setAutoFilled:(BOOL)arg1 setAsDefaultCredential:(BOOL)arg2 focusFieldAfterFilling:(BOOL)arg3 submitForm:(BOOL)arg4 ;
-(void)_fillCredentialAfterAuthenticationIfNeeded:(id)arg0 setAsDefaultCredential:(BOOL)arg1 submitForm:(BOOL)arg2 ;
-(void)_fillCreditCardData:(id)arg0 ;
-(void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)arg0 ;
-(void)_fillOneTimeCodeAfterAuthenticationIfNeeded:(id)arg0 inFrame:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)_fillPasswordCredentialIdentity:(id)arg0 submitForm:(BOOL)arg1 ;
-(void)_fillSingleCreditCardDataValue:(id)arg0 creditCardDataType:(NSInteger)arg1 ;
-(void)_finishPageLevelAutoFillWithResult:(NSInteger)arg0 ;
-(void)_gatherAndShowAddressBookAutoFillSuggestions;
-(void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
-(void)_gatherFormValues;
-(void)_gatherFormValuesWithCompletionHandler:(id)arg0 ;
-(void)_generateAndSuggestPasswordWithCompletionHandler:(id)arg0 ;
-(void)_getLoginFormUser:(*id)arg0 password:(*id)arg1 userIsAutoFilled:(*BOOL)arg2 passwordIsAutoFilled:(*BOOL)arg3 ;
-(void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_getShouldOfferForgetPassword:(*BOOL)arg0 savePassword:(*BOOL)arg1 ;
-(void)_offerToAutoFillContact;
-(void)_offerToAutoFillFromPotentialCredentialMatches;
-(void)_offerToForgetSavedAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performAutoFill;
-(void)_performPageLevelContactAutoFill;
-(void)_performPageLevelCredentialAutoFill;
-(void)_presentContactsAccessSettingsAlert;
-(void)_presentCredentialListForExtension:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentViewController:(id)arg0 presentingViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_provisionHideMyEmailRecord;
-(void)_setShowingKeyboardInputView:(BOOL)arg0 ;
-(void)_setUpMultiRoundAutoFillManagerIfNecessary;
-(void)_setUserAndPasswordFieldsAutoFilled:(BOOL)arg0 clearPasswordField:(BOOL)arg1 ;
-(void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
-(void)_showOtherContactOptions;
-(void)_showPageLevelAutoFillNotAvailableAlertForResult:(NSInteger)arg0 ;
-(void)_startHideMyEmailRecordUpdate;
-(void)_suggestLoginCredentialsShowingQuickTypeKey:(BOOL)arg0 ;
-(void)_suggestPasswordForNewAccountOrChangePasswordForm;
-(void)_switchToCustomInputViewWithMatches:(id)arg0 contact:(id)arg1 ;
-(void)_textDidChangeInForm:(id)arg0 textField:(id)arg1 ;
-(void)_updateAutoFillActionToCaptureCreditCardAndFill;
-(void)_updateAutoFillButton;
-(void)_updateCreditCardAutoFillAction;
-(void)_updateCreditCardSuggestionsWithHandler:(id)arg0 ;
-(void)_updateSuggestions:(NSUInteger)arg0 ;
-(void)autoFill;
-(void)autoFillTextSuggestion:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)credentialListViewController:(id)arg0 didFinishWithCredential:(id)arg1 completion:(id)arg2 ;
-(void)creditCardCaptureViewController:(id)arg0 didCaptureCreditCard:(id)arg1 ;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)dismissCustomAutoFill;
-(void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)oneTimeCodeProviderReceivedCode:(id)arg0 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg0 didFinishWithCredential:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)performAutoFillWithMatchSelections:(id)arg0 doNotFill:(id)arg1 contact:(id)arg2 ;
-(void)performPageLevelAutoFill;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg0 ;
-(void)showAllPasswordsButtonTapped;
-(void)textDidChangeInFrame:(id)arg0 form:(id)arg1 textField:(id)arg2 ;
-(void)updateCachedFormMetadataAfterFilling:(id)arg0 ;
-(void)updateSuggestions;


@end


#endif