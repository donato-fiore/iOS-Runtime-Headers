// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDTEXT_H
#define PKPAYMENTSETUPFIELDTEXT_H

@class NSNumberFormatter, NSMutableCharacterSet, NSString, NSArray;


#import "PKPaymentSetupField.h"

@interface PKPaymentSetupFieldText : PKPaymentSetupField {
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
    NSMutableCharacterSet *_allowedCharacters;
}


@property (copy, nonatomic) NSMutableCharacterSet *allowedCharacters;
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *displayFormatPlaceholder; // ivar: _displayFormatPlaceholder
@property (nonatomic) BOOL keepPaddingCharactersForSubmission; // ivar: _keepPaddingCharactersForSubmission
@property (nonatomic, getter=useLuhnCheck) BOOL luhnCheck; // ivar: _luhnCheck
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (nonatomic) NSUInteger minLength; // ivar: _minLength
@property (nonatomic, getter=isNumeric) BOOL numeric; // ivar: _numeric
@property (retain, nonatomic) NSArray *paddingCharacters; // ivar: _paddingCharacters
@property (nonatomic, getter=isSecureText) BOOL secureText; // ivar: _secureText
@property (nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText; // ivar: _secureVisibleText


-(BOOL)hasDisplayFormat;
-(BOOL)submissionStringMeetsAllRequirements;
-(NSUInteger)fieldType;
-(id)_submissionStringForValue:(id)arg0 ;
-(id)displayFormatPaddingCharacters;
-(id)displayString;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)stringByApplyingDisplayFormat:(id)arg0 ;
-(void)setCurrentValue:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 ;
-(void)updateDisplayFormat:(id)arg0 ;
-(void)updateWithAttribute:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif