// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMDATACONTROLLER_H
#define WBSFORMDATACONTROLLER_H

@class WBSKeychainCredentialNotificationMonitor, NSMutableDictionary, NSMutableArray, WBSPair, WBSAutoFillQuirksManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSFormDataController : NSObject {
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id *_keychainNotificationRegistrationToken;
    NSMutableDictionary *_completionDB;
    NSMutableDictionary *_valuesDB;
    NSMutableDictionary *_preferredLabelsMap;
    NSUInteger _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;
    NSMutableArray *_recentlyUsedAutoFillSets;
    NSMutableDictionary *_preferredLabelForUniqueIDOfPersonMap;
    WBSPair *_cachedBirthdayAndLocalizedStrings;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_mapOfHighLevelDomainToLastAutomaticFormSubmission;
}


@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // ivar: _autoFillQuirksManager


+(BOOL)_password:(id)arg0 appearsToBeASixDigitCodeAppendedToPassword:(id)arg1 ;
+(BOOL)_password:(id)arg0 appearsToBeMoreThanOneSymbolAppendedToPassword:(id)arg1 ;
+(BOOL)canAutocompleteTextField:(id)arg0 inForm:(id)arg1 ;
+(BOOL)contactIsMe:(id)arg0 ;
+(BOOL)convertNumber:(id)arg0 toAutoFillFormType:(*NSUInteger)arg1 ;
+(BOOL)formContainsCreditCardData:(id)arg0 ;
+(BOOL)formContainsCreditCardNumberField:(id)arg0 ;
+(BOOL)formContainsCreditCardNumberOrCardSecurityCodeField:(id)arg0 ;
+(BOOL)formContainsDateFields:(id)arg0 matchingAddressBookMatch:(id)arg1 ;
+(BOOL)isFieldUnidentified:(id)arg0 ;
+(BOOL)isNameProperty:(id)arg0 ;
+(BOOL)password:(id)arg0 shouldBeConsideredEqualToExistingPassword:(id)arg1 ;
+(BOOL)shouldDisplayHideMyEmailForControl:(id)arg0 ;
+(BOOL)shouldDisplayOneTimeCodeForControl:(id)arg0 inForm:(id)arg1 ;
+(BOOL)stringLooksLikeCreditCardNumber:(id)arg0 ;
+(BOOL)textFieldLooksLikeCreditCardFormField:(id)arg0 inForm:(id)arg1 ;
+(BOOL)textFieldLooksLikeCreditCardNumericFormField:(id)arg0 ;
+(NSInteger)availableManualAutoFillActionForTextField:(id)arg0 form:(id)arg1 outUsernameElementUniqueID:(*id)arg2 outPasswordElementUniqueID:(*id)arg3 outConfirmPasswordElementUniqueID:(*id)arg4 ;
+(id)_metadataForControlWithUniqueID:(id)arg0 inForm:(id)arg1 ;
+(id)addressBookAddressPropertyKey;
+(id)allAddressBookAddressComponentKeys;
+(id)allAddressBookNonAddressPropertyKeys;
+(id)allSynonymsForMatch:(id)arg0 ;
+(id)contactKeyForString:(id)arg0 ;
+(id)continuingFieldsInFormControls:(id)arg0 startingAtIndex:(NSUInteger)arg1 textFieldsOnly:(BOOL)arg2 ignorePositioning:(BOOL)arg3 ;
+(id)controlsConsideredByAutoFillInForm:(id)arg0 ;
+(id)domainFromURL:(id)arg0 ;
+(id)dontSaveMarker;
+(id)fieldToFocusBeforeSubmittingForm:(id)arg0 ;
+(id)lastFieldInControls:(id)arg0 inForm:(id)arg1 ;
+(id)localizedLowercaseContactProperty:(id)arg0 ;
+(id)nextFieldAfterControls:(id)arg0 inForm:(id)arg1 ;
+(id)specifierForAddressBookLabel:(id)arg0 ;
+(id)specifierForControl:(id)arg0 ;
+(id)stringWithAddressBookValue:(id)arg0 key:(id)arg1 ;
+(id)valueOfControlWithUniqueID:(id)arg0 inForm:(id)arg1 ;
+(id)valuesFromUser:(id)arg0 password:(id)arg1 forLoginOrChangePasswordForm:(id)arg2 ;
-(BOOL)_dateIsWithinGracePeriodForNotAutomaticallySubmittingLoginForms:(id)arg0 ;
-(BOOL)_matchHasPreferredIdentifierOrShouldBeFilledInMultiRoundAutoFill:(id)arg0 specifier:(id)arg1 multiRoundAutoFillManager:(id)arg2 contact:(id)arg3 ;
-(BOOL)addressBookHasDataForLabel:(id)arg0 ;
-(BOOL)hasUserDeniedAccessToCredential:(id)arg0 inProtectionSpace:(id)arg1 ;
-(BOOL)isControlASelectElement:(id)arg0 ;
-(BOOL)isPasswordFieldForUserCredentialsWithMetadata:(id)arg0 formMetadata:(id)arg1 ;
-(BOOL)preferredIdentifierExistsForProperty:(id)arg0 withContact:(id)arg1 ;
-(BOOL)shouldAutoFillFromAddressBook;
-(BOOL)shouldAutoFillFromPreviousData;
-(BOOL)shouldAutoFillPasswords;
-(BOOL)shouldSubmitForm:(id)arg0 withUser:(id)arg1 password:(id)arg2 onURL:(id)arg3 ;
-(BOOL)textFieldIsEligibleForAutomaticStrongPassword:(id)arg0 form:(id)arg1 ignorePreviousDecision:(BOOL)arg2 textFieldCurrentlyContainsStrongPassword:(*BOOL)arg3 ;
-(BOOL)textFieldMetadataMeetsRequirementsForAutomaticStrongPasswordTreatment:(id)arg0 form:(id)arg1 ;
-(NSInteger)autoFillActionForFormType:(NSUInteger)arg0 onURL:(id)arg1 shouldSubmitAfterFilling:(BOOL)arg2 ;
-(NSUInteger)_addMatchesForControl:(id)arg0 startingAtIndex:(NSUInteger)arg1 formMetadata:(id)arg2 fromExistingMatches:(id)arg3 fromAllMatchesIfNecessary:(id)arg4 addToFoundMatches:(id)arg5 addToAutoFillValues:(id)arg6 multiRoundAutoFillManager:(id)arg7 propertyToIdentifierMapForFoundMatches:(id)arg8 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg9 ;
-(NSUInteger)_indexForControlWithUniqueID:(id)arg0 inForm:(id)arg1 ;
-(NSUInteger)addValuesForStandardFormControls:(id)arg0 startingAtIndex:(NSUInteger)arg1 fromAutoFillItem:(id)arg2 toDictionary:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5 ;
-(NSUInteger)addValuesForStandardFormControlsInForm:(id)arg0 startingAtIndex:(NSUInteger)arg1 fromAutoFillItem:(id)arg2 toDictionary:(id)arg3 multiRoundAutoFillManager:(id)arg4 ;
-(id)_autoFillSetFromMatches:(id)arg0 label:(id)arg1 contact:(id)arg2 form:(id)arg3 ;
-(id)_cachedLocalizedStringsForBirthdate:(id)arg0 ;
-(id)_completionDB;
-(id)_credentialMatchesWithCriteria:(id)arg0 protectionSpaceMatches:(id)arg1 ;
-(id)_domainsWithPreviousDataOnInternalQueue;
-(id)_formKeyForMapOfHighLevelDomainToLastAutomaticFormSubmission:(id)arg0 formMetadata:(id)arg1 ;
-(id)_keyToLookUpInAnnotationsForPasswordForFormMetadata:(id)arg0 ;
-(id)_knownUsernamesWithPasswordsForURL:(id)arg0 ;
-(id)_lastUsedUsernameForDomain:(id)arg0 ;
-(id)_matchesForControl:(id)arg0 inDomain:(id)arg1 matchingPartialString:(id)arg2 autoFillDataType:(NSInteger)arg3 preferredLabel:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5 ;
-(id)_matchesForControl:(id)arg0 inDomain:(id)arg1 matchingPartialString:(id)arg2 autoFillDataType:(NSInteger)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6 ;
-(id)_nextFieldToFocusAfterFillingFieldAtIndex:(NSUInteger)arg0 inForm:(id)arg1 ;
-(id)_phoneNumberCandidates:(id)arg0 fillingMultipleFields:(BOOL)arg1 ;
-(id)_protectionSpaceMatchesWithCriteria:(id)arg0 credentialsByProtectionSpace:(id)arg1 associatedDomainsManager:(id)arg2 ;
-(id)_recentlyUsedAutoFillDictionaries;
-(id)_singleFieldPhoneNumberCandidates:(id)arg0 ;
-(id)_valuesForStandardForm:(id)arg0 inDomain:(id)arg1 autoFillDataType:(NSInteger)arg2 matches:(*id)arg3 preferredLabel:(id)arg4 multiRoundAutoFillManager:(id)arg5 wantAllMatches:(BOOL)arg6 contact:(id)arg7 existingMatches:(id)arg8 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg9 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg10 ;
-(id)addressBookMatchesForFullNameForContact:(id)arg0 ;
-(id)addressBookMatchesForProperty:(id)arg0 key:(id)arg1 label:(id)arg2 ;
-(id)addressBookMatchesForProperty:(id)arg0 key:(id)arg1 label:(id)arg2 partialString:(id)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5 ;
-(id)allFormDataForSaving;
-(id)annotationsFromUsername:(id)arg0 forLoginOrChangePasswordForm:(id)arg1 ;
-(id)autoGeneratedPasswordForURL:(id)arg0 respectingPasswordRequirements:(id)arg1 maxLength:(NSUInteger)arg2 ;
-(id)bestAddressBookLabelForFormMetadata:(id)arg0 formControlValue:(id)arg1 ;
-(id)bestMatchForControl:(id)arg0 inDomain:(id)arg1 matchingPartialString:(id)arg2 autoFillDataType:(NSInteger)arg3 preferredLabel:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5 ;
-(id)bestMatchForControl:(id)arg0 inDomain:(id)arg1 matchingPartialString:(id)arg2 autoFillDataType:(NSInteger)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6 ;
-(id)cascadingAddressMatchesForMatch:(id)arg0 contact:(id)arg1 ;
-(id)completionDBPath;
-(id)contactAutoFillSetForRecentlyUsedAutoFillSet:(id)arg0 contact:(id)arg1 form:(id)arg2 ;
-(id)domainsWithPreviousData;
-(id)encryptOrDecryptData:(id)arg0 encrypt:(BOOL)arg1 ;
-(id)exactFQDNAndHighLevelDomainSavedAccountMatchesForForm:(id)arg0 atURL:(id)arg1 webFrameIdentifier:(id)arg2 ;
-(id)infoForDomain:(id)arg0 ;
-(id)init;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg0 ;
-(id)lastUsedUsernameWithPasswordForURL:(id)arg0 ;
-(id)matchesForControl:(id)arg0 atURL:(id)arg1 matchingPartialString:(id)arg2 autoFillDataType:(NSInteger)arg3 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg4 ;
-(id)matchesForControl:(id)arg0 atURL:(id)arg1 matchingPartialString:(id)arg2 autoFillDataType:(NSInteger)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5 ;
-(id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg0 frame:(struct OpaqueFormAutoFillFrame **)arg1 ;
-(id)metadataOfBestFormForStreamlinedLogin:(id)arg0 frame:(struct OpaqueFormAutoFillFrame **)arg1 ;
-(id)orderedHomeAndWorkSetsForContact:(id)arg0 form:(id)arg1 ;
-(id)preferredIdentifierForProperty:(id)arg0 withContact:(id)arg1 ;
-(id)recentlyUsedAutoFillSets;
-(id)savedAccountUsingDomainsToConsiderIdenticalWithUsername:(id)arg0 url:(*id)arg1 host:(*id)arg2 ;
-(id)substituteCredential:(id)arg0 inProtectionSpace:(id)arg1 ;
-(id)uniqueIDOfContact:(id)arg0 ;
-(id)valuesForContactFormWithMetadata:(id)arg0 inDomain:(id)arg1 matches:(*id)arg2 multiRoundAutoFillManager:(id)arg3 ;
-(id)valuesForContactFormWithMetadata:(id)arg0 inDomain:(id)arg1 matches:(*id)arg2 multiRoundAutoFillManager:(id)arg3 contact:(id)arg4 ;
-(id)valuesForContactFormWithMetadata:(id)arg0 matches:(*id)arg1 multiRoundAutoFillManager:(id)arg2 existingMatches:(id)arg3 contact:(id)arg4 ;
-(id)valuesForContactFormWithMetadata:(id)arg0 matches:(*id)arg1 multiRoundAutoFillManager:(id)arg2 existingMatches:(id)arg3 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg4 contact:(id)arg5 ;
-(id)valuesForFormWithMetadata:(id)arg0 hideMyEmailRecord:(id)arg1 ;
-(id)valuesForStandardForm:(id)arg0 inDomain:(id)arg1 autoFillDataType:(NSInteger)arg2 matches:(*id)arg3 preferredLabel:(id)arg4 multiRoundAutoFillManager:(id)arg5 ;
-(id)valuesForStandardForm:(id)arg0 inDomain:(id)arg1 autoFillDataType:(NSInteger)arg2 matches:(*id)arg3 preferredLabel:(id)arg4 multiRoundAutoFillManager:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7 ;
-(void)_currentLocaleDidChange:(id)arg0 ;
-(void)_fillPhoneNumber:(id)arg0 intoValues:(id)arg1 controls:(id)arg2 formTextSample:(id)arg3 multiRoundAutoFillManager:(id)arg4 ;
-(void)_loadCompletionDBIfNeededOnInternalQueue;
-(void)_removeStaleEntriesFromMapOfHighLevelDomainToLastAutomaticFormSubmission;
-(void)_setLastUsedUsername:(id)arg0 andProtectionSpace:(id)arg1 forDomain:(id)arg2 ;
-(void)addABMatchesForValueSpecifier:(id)arg0 matchingPartialString:(id)arg1 toArray:(id)arg2 preferredLabel:(id)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5 ;
-(void)addAllAddressDataIfNecessary:(id)arg0 contactLabel:(id)arg1 contact:(id)arg2 ;
-(void)addPreviousDataMatchesForFieldWithName:(id)arg0 inDomain:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 ;
-(void)addRecentlyUsedAutoFillSet:(id)arg0 appendToTheEnd:(BOOL)arg1 ;
-(void)clearPreviousDataDatabase;
-(void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg0 ;
-(void)clearPreviousDataForDomain:(id)arg0 ;
-(void)dealloc;
-(void)didAutomaticallySubmitFormWhenFillingOnURL:(id)arg0 formMetadata:(id)arg1 ;
-(void)domainsWithPreviousDataChanged;
-(void)getFormFieldValues:(*id)arg0 andFieldToFocus:(*id)arg1 andCreditCardDataTypesThatWillBeFilled:(*id)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4 ;
-(void)getFormFieldValues:(*id)arg0 andFieldToFocus:(*id)arg1 withSingleCreditCardData:(id)arg2 inField:(id)arg3 inForm:(id)arg4 ;
-(void)loadCompletionDBIfNeeded;
-(void)notifyKeychainWasDirectlyAffectedBySafari;
-(void)pruneCompletionDB;
-(void)saveCompletionDBSoon;
-(void)saveRecentlyUsedAutoFillSetWithMatchesToFill:(id)arg0 matchesForDoNotFill:(id)arg1 ;
-(void)savedAccountMatchesWithCriteria:(id)arg0 completionHandler:(id)arg1 ;
-(void)setInfo:(id)arg0 forDomain:(id)arg1 ;
-(void)setPreferredIdentifier:(id)arg0 forProperty:(id)arg1 withContact:(id)arg2 ;
-(void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg0 shouldPreferAnnotatedCredentials:(BOOL)arg1 atURL:(id)arg2 username:(*id)arg3 password:(*id)arg4 ;
-(void)willSubmitFormWithCredentials:(id)arg0 shouldPreferAnnotatedCredentials:(BOOL)arg1 atURL:(id)arg2 username:(*id)arg3 password:(*id)arg4 ;


@end


#endif