// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMCONTROLMETADATA_H
#define WBSFORMCONTROLMETADATA_H

@class NSString, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

 {
    ? _flags;
    int _size;
    int _maxLength;
    int _minLength;
    int _selectionStart;
    int _selectionLength;
    int _autoFillButtonType;
    int _lastAutoFillButtonType;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *addressBookLabel; // ivar: _addressBookLabel
@property (readonly, nonatomic) NSArray *ancestorFrameURLs; // ivar: _ancestorFrameURLs
@property (readonly, copy, nonatomic) NSDictionary *annotations; // ivar: _annotations
@property (readonly, copy, nonatomic) NSString *associatedUsername; // ivar: _associatedUsername
@property (readonly, nonatomic) NSInteger autoFillButtonType;
@property (readonly, nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField;
@property (readonly, copy, nonatomic) NSArray *autocompleteTokens; // ivar: _autocompleteTokens
@property (readonly, nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) BOOL disallowsAutocomplete;
@property (readonly, copy, nonatomic) NSString *fieldClass; // ivar: _fieldClass
@property (readonly, copy, nonatomic) NSString *fieldID; // ivar: _fieldID
@property (readonly, copy, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField;
@property (readonly, nonatomic) NSInteger lastAutoFillButtonType;
@property (readonly, nonatomic) BOOL looksLikeCreditCardCardholderField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardNumberField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardSecurityCodeField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardTypeField;
@property (readonly, nonatomic) BOOL looksLikeDayField;
@property (readonly, nonatomic) BOOL looksLikeIgnoredDataTypeField;
@property (readonly, nonatomic) BOOL looksLikeMonthField;
@property (readonly, nonatomic) BOOL looksLikeOneTimeCodeField;
@property (readonly, nonatomic) BOOL looksLikePasswordCredentialField;
@property (readonly, nonatomic) BOOL looksLikeYearField;
@property (readonly, nonatomic) NSUInteger maxLength;
@property (readonly, nonatomic) NSUInteger minLength;
@property (readonly, copy, nonatomic) NSString *nextControlUniqueID; // ivar: _nextControlUniqueID
@property (readonly, nonatomic) NSInteger oneTimeCodeFieldClassification;
@property (readonly, nonatomic) BOOL oneTimeCodeIsEligibleForAutomaticLogin;
@property (readonly, copy, nonatomic) NSString *passwordRules; // ivar: _passwordRules
@property (readonly, copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (readonly, copy, nonatomic) NSDictionary *radioButtonInfo; // ivar: _radioButtonInfo
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) CGFloat rectHeight; // ivar: _rectHeight
@property (readonly, nonatomic) CGFloat rectLeft; // ivar: _rectLeft
@property (readonly, nonatomic) CGFloat rectTop; // ivar: _rectTop
@property (readonly, nonatomic) CGFloat rectWidth; // ivar: _rectWidth
@property (readonly, copy, nonatomic) NSString *requiredFormatForDateTimeInput; // ivar: _requiredFormatForDateTimeInput
@property (readonly, nonatomic, getter=isSecureTextField) BOOL secureTextField;
@property (readonly, copy, nonatomic) NSArray *selectElementInfo; // ivar: _selectElementInfo
@property (readonly, nonatomic) NSUInteger selectionLength;
@property (readonly, nonatomic) NSUInteger selectionStart;
@property (readonly, nonatomic) NSUInteger size;
@property (readonly, copy, nonatomic) NSString *tagName; // ivar: _tagName
@property (readonly, nonatomic, getter=isTextField) BOOL textField;
@property (readonly, copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField;
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif