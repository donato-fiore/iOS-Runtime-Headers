// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFORMMETADATACONTROLLER_H
#define WBSFORMMETADATACONTROLLER_H


#import <Foundation/Foundation.h>


@interface WBSFormMetadataController : NSObject {
    HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits> _framesToMetadataMap;
}




+(BOOL)convertNumber:(id)arg0 toFormMetadataRequestType:(*NSUInteger)arg1 ;
-(*void)metadataForFrame:(id)arg0 requestType:(NSUInteger)arg1 ;
-(BOOL)addressBookAutoFillableFieldFocused:(id)arg0 withAddressBookAutoFillableFieldMetadata:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)autoFillFrameIsValid:(id)arg0 ;
-(BOOL)isFrameAnnotated:(id)arg0 ;
-(BOOL)isFrameOrChildAnnotated:(id)arg0 ;
-(BOOL)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg0 ;
-(BOOL)recursivelyCollectAncestorFramesOfFrame:(id)arg0 startingFromFrame:(id)arg1 ancestorFrames:(id)arg2 ;
-(BOOL)shouldIncludeNonEmptyFields;
-(NSUInteger)userEditedTextControlCountInArray:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1 expectTextFieldsRatherThanTextAreas:(BOOL)arg2 ;
-(id)_formMetadataByAddingInformationAboutUserEditedStateForUserNameAndPasswordFieldsToFormMetadata:(id)arg0 inFrame:(id)arg1 ;
-(id)fillForm:(CGFloat)arg0 inFrame:(id)arg1 withPassword:(id)arg2 focusedFieldControlID:(id)arg3 ;
-(id)formAutoFillNodeForField:(id)arg0 inFrame:(id)arg1 ;
-(id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 ;
-(id)formElementWithFormID:(CGFloat)arg0 inFrame:(id)arg1 ;
-(id)formSubmissionURLStringForSearchTextField:(id)arg0 inFrame:(id)arg1 useStrictDetection:(BOOL)arg2 ;
-(id)init;
-(id)metadataForActiveFormInPageWithMainFrame:(id)arg0 ;
-(id)metadataForForm:(id)arg0 inFrame:(id)arg1 requestType:(NSUInteger)arg2 ;
-(id)metadataForForm:(id)arg0 inFrame:(id)arg1 requestType:(NSUInteger)arg2 addUserEditedStateForUserNameAndPasswordFields:(BOOL)arg3 ;
-(id)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg0 formID:(CGFloat)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 automaticPassword:(id)arg4 blurAfterSubstitution:(BOOL)arg5 ;
-(id)uniqueIDForTextField:(id)arg0 inFrame:(id)arg1 ;
-(id)visibleNonEmptyTextFieldsInForm:(id)arg0 inFrame:(id)arg1 ;
-(struct OpaqueJSValue *)_jsObjectForForm:(id)arg0 inFrame:(id)arg1 ;
-(struct _NSRange )selectionRangeInField:(id)arg0 inFrame:(id)arg1 ;
-(void)_lockMetadataForForm:(id)arg0 inFrame:(id)arg1 ;
-(void)_unlockMetadataForForm:(id)arg0 inFrame:(id)arg1 ;
-(void)addressBookAutoFillableFieldBlurred:(id)arg0 inFrame:(id)arg1 page:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)annotateForm:(CGFloat)arg0 inFrame:(id)arg1 withValues:(id)arg2 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg0 withValues:(id)arg1 selectFieldAfterFilling:(id)arg2 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 fillSynchronously:(BOOL)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 fillSynchronously:(BOOL)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 fieldsToObscure:(id)arg6 submitForm:(BOOL)arg7 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 fillSynchronously:(BOOL)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 fillSynchronously:(BOOL)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg0 withValues:(id)arg1 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg0 withValues:(id)arg1 selectFieldAfterFilling:(id)arg2 ;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg0 withValue:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)automaticPasswordSheetDimissedInFrame:(id)arg0 focusedPasswordControlUniqueID:(id)arg1 ;
-(void)clearField:(id)arg0 inFrame:(id)arg1 ;
-(void)clearMetadataForFrame:(id)arg0 ;
-(void)clearScriptWorld;
-(void)countUserEditedTextControlsInFrame:(id)arg0 textFields:(*NSUInteger)arg1 textAreas:(*NSUInteger)arg2 ;
-(void)creditCardFieldBlurred:(id)arg0 inFrame:(id)arg1 page:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)creditCardFieldFocused:(id)arg0 inFrame:(id)arg1 ;
-(void)disableSpellCheckInField:(id)arg0 inFrame:(id)arg1 ;
-(void)fillField:(id)arg0 inFrame:(id)arg1 withGeneratedPassword:(id)arg2 ;
-(void)finishedAutoFillingForm:(id)arg0 inFrame:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)finishedAutoFillingOneTimeCodeInFrame:(id)arg0 shouldSubmit:(BOOL)arg1 ;
-(void)focusField:(id)arg0 inFrame:(id)arg1 ;
-(void)focusFormForStreamlinedLogin:(CGFloat)arg0 inFrame:(id)arg1 ;
-(void)getMetadataForAllFormsInPageWithMainFrame:(id)arg0 requestType:(NSUInteger)arg1 frames:(*id)arg2 formMetadata:(*id)arg3 ;
-(void)getMetadataForTextField:(id)arg0 inFrame:(id)arg1 textFieldMetadata:(*id)arg2 formMetadata:(*id)arg3 requestType:(NSUInteger)arg4 ;
-(void)oneTimeCodeFieldBlurred:(id)arg0 inFrame:(id)arg1 page:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)oneTimeCodeFieldFocused:(id)arg0 withFieldMetadata:(id)arg1 inFrame:(id)arg2 ;
-(void)otherCreditCardFieldBlurred:(id)arg0 inFrame:(id)arg1 textFieldMetadata:(id)arg2 formMetadata:(id)arg3 ;
-(void)otherCreditCardFieldFocused:(id)arg0 inFrame:(id)arg1 textFieldMetadata:(id)arg2 formMetadata:(id)arg3 ;
-(void)passwordFieldBlurred:(id)arg0 inFrame:(id)arg1 page:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)passwordFieldFocused:(id)arg0 inFrame:(id)arg1 isPasswordFieldForUserCredentials:(BOOL)arg2 ;
-(void)recursivelyClearMetadataForFrames:(id)arg0 ;
-(void)recursivelyCollectMetadataInFrame:(id)arg0 requestType:(NSUInteger)arg1 frames:(id)arg2 formMetadata:(id)arg3 ;
-(void)recursivelyCountUserEditedTextControlsInFrame:(id)arg0 textFields:(*NSUInteger)arg1 textAreas:(*NSUInteger)arg2 ;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg0 focusedPasswordControlUniqueID:(id)arg1 passwordControlUniqueIDs:(id)arg2 blurAfterRemoval:(BOOL)arg3 ;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg0 passwordControlUniqueIDs:(id)arg1 ;
-(void)replaceRange:(struct _NSRange )arg0 inField:(id)arg1 inFrame:(id)arg2 withString:(id)arg3 andSelectTailStartingAt:(NSUInteger)arg4 ;
-(void)selectRange:(struct _NSRange )arg0 inField:(id)arg1 inFrame:(id)arg2 ;
-(void)setFormControls:(id)arg0 inFrame:(id)arg1 asAutoFilled:(BOOL)arg2 ;
-(void)textFieldBlurred:(id)arg0 inFrame:(id)arg1 page:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)textFieldFocused:(id)arg0 inFrame:(id)arg1 ;
-(void)unidentifiedTextFieldBlurred:(id)arg0 inFrame:(id)arg1 textFieldMetadata:(id)arg2 formMetadata:(id)arg3 ;
-(void)unidentifiedTextFieldFocused:(id)arg0 inFrame:(id)arg1 textFieldMetadata:(id)arg2 formMetadata:(id)arg3 ;
-(void)usernameFieldBlurred:(id)arg0 inFrame:(id)arg1 page:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)usernameFieldFocused:(id)arg0 fieldMetadata:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)willSendSubmitEventForForm:(id)arg0 inFrame:(id)arg1 ;
-(void)willSubmitForm:(id)arg0 inFrame:(id)arg1 ;


@end


#endif