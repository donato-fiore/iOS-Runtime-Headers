// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSMUTABLEFORMCONTROLMETADATA_H
#define WBSMUTABLEFORMCONTROLMETADATA_H

@class NSString, NSArray, NSDictionary;


#import "WBSFormControlMetadata.h"

@interface WBSMutableFormControlMetadata : WBSFormControlMetadata

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *addressBookLabel;
@property (copy, nonatomic) NSArray *ancestorFrameURLs;
@property (copy, nonatomic) NSDictionary *annotations;
@property (copy, nonatomic) NSString *associatedUsername;
@property (nonatomic) NSInteger autoFillButtonType;
@property (nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField;
@property (copy, nonatomic) NSArray *autocompleteTokens;
@property (nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute;
@property (nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL disallowsAutocomplete;
@property (copy, nonatomic) NSString *fieldClass;
@property (copy, nonatomic) NSString *fieldID;
@property (copy, nonatomic) NSString *fieldName;
@property (nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField;
@property (nonatomic) NSInteger lastAutoFillButtonType;
@property (nonatomic) BOOL looksLikeCreditCardCardholderField;
@property (nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField;
@property (nonatomic) BOOL looksLikeCreditCardNumberField;
@property (nonatomic) BOOL looksLikeCreditCardSecurityCodeField;
@property (nonatomic) BOOL looksLikeCreditCardTypeField;
@property (nonatomic) BOOL looksLikeDayField;
@property (nonatomic) BOOL looksLikeIgnoredDataTypeField;
@property (nonatomic) BOOL looksLikeMonthField;
@property (nonatomic) BOOL looksLikeOneTimeCodeField;
@property (nonatomic) BOOL looksLikePasswordCredentialField;
@property (nonatomic) BOOL looksLikeYearField;
@property (nonatomic) NSUInteger maxLength;
@property (nonatomic) NSUInteger minLength;
@property (copy, nonatomic) NSString *nextControlUniqueID;
@property (nonatomic) BOOL oneTimeCodeIsEligibleForAutomaticLogin;
@property (copy, nonatomic) NSString *passwordRules;
@property (copy, nonatomic) NSDictionary *radioButtonInfo;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;
@property (nonatomic) CGFloat rectHeight;
@property (nonatomic) CGFloat rectLeft;
@property (nonatomic) CGFloat rectTop;
@property (nonatomic) CGFloat rectWidth;
@property (copy, nonatomic) NSString *requiredFormatForDateTimeInput;
@property (nonatomic, getter=isSecureTextField) BOOL secureTextField;
@property (copy, nonatomic) NSArray *selectElementInfo;
@property (nonatomic) NSUInteger selectionLength;
@property (nonatomic) NSUInteger selectionStart;
@property (nonatomic) NSUInteger size;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic, getter=isTextField) BOOL textField;
@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, getter=isVisible) BOOL visible;


-(void)setPlaceholder:(id)arg0 ;
-(void)setassociatedUsername:(id)arg0 ;


@end


#endif